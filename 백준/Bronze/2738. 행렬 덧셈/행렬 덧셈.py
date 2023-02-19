A, B = map(int, input().split())

X = [[0]*B for i in range(A)]
K = []
for i in range(2*A):
    K.append(list(map(int, input().split())))

for i in range(A):
    for ii in range(B):
        X[i][ii] = K[i][ii] + K[i+A][ii]
        
for i in range(A):
    for ii in range(B):
        print(X[i][ii],end=' ')
    print()