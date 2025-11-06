import sys
sys.setrecursionlimit(10000)
input = sys.stdin.readline

N, M = map(int, input().split())
v = [list(map(int, input().split())) for _ in range(N)]
visited = [[False] * M for _ in range(N)]
maximum = 0

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(x, y, depth, total):
    global maximum
    if depth == 4:
        maximum = max(maximum, total)
        return
    for i in range(4):
        nx, ny = x + dx[i], y + dy[i]
        if 0 <= nx < N and 0 <= ny < M and not visited[nx][ny]:
            visited[nx][ny] = True
            dfs(nx, ny, depth + 1, total + v[nx][ny])
            visited[nx][ny] = False

def check_T(x, y):
    global maximum
    # 'ㅗ', 'ㅏ', 'ㅜ', 'ㅓ' 형태
    t_shapes = [
        [(0,0), (-1,0), (0,-1), (0,1)], # ㅗ
        [(0,0), (1,0), (0,-1), (0,1)],  # ㅜ
        [(0,0), (-1,0), (1,0), (0,1)],  # ㅏ
        [(0,0), (-1,0), (1,0), (0,-1)]  # ㅓ
    ]
    for shape in t_shapes:
        try:
            total = 0
            for dx_, dy_ in shape:
                nx, ny = x + dx_, y + dy_
                if nx < 0 or ny < 0: raise IndexError
                total += v[nx][ny]
            maximum = max(maximum, total)
        except IndexError:
            continue

for i in range(N):
    for j in range(M):
        visited[i][j] = True
        dfs(i, j, 1, v[i][j])
        visited[i][j] = False
        check_T(i, j)

print(maximum)
