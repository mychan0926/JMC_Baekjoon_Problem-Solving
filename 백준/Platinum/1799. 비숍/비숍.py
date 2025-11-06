import sys
input = sys.stdin.readline

n = int(input())
board = [list(map(int, input().split())) for _ in range(n)]

# 좌상향 ↖︎ 대각선과 우상향 ↗︎ 대각선 체크
left_diag = [0] * (2 * n)
right_diag = [0] * (2 * n)

max_cnt = [0, 0]  # [검은칸 결과, 흰칸 결과]
cells = [[], []]  # black / white 칸 좌표

# 체스판 색 나누기
for i in range(n):
    for j in range(n):
        if board[i][j]:
            cells[(i + j) % 2].append((i, j))


def dfs(idx, cnt, color):
    global max_cnt
    if idx == len(cells[color]):
        max_cnt[color] = max(max_cnt[color], cnt)
        return

    x, y = cells[color][idx]
    if not left_diag[x + y] and not right_diag[x - y + n - 1]:
        left_diag[x + y] = right_diag[x - y + n - 1] = 1
        dfs(idx + 1, cnt + 1, color)
        left_diag[x + y] = right_diag[x - y + n - 1] = 0

    dfs(idx + 1, cnt, color)


dfs(0, 0, 0)  # 검은 칸
dfs(0, 0, 1)  # 흰 칸

print(max_cnt[0] + max_cnt[1])
