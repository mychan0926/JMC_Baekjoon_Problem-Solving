def check(x1,y1):

    dx=[1,-1,0,0]
    dy=[0,0,1,-1]
    for i in range (4):
        if x1+dx[i]>=0 and y1+dy[i]>=0 and x1+dx[i]<x and y1+dy[i]<y:#상하 좌우 있으면
            if (farm[x1+dx[i]][y1+dy[i]]==1):
                farm[x1+dx[i]][y1+dy[i]]=0
                check(x1+dx[i],y1+dy[i])
    return 0
                
root_count=int(input())
for k in range (root_count):
    
    x,y,number=map(int,input().split())
    farm=[]
    for i in range(x):
        farm.append([])
        for j in range(y):
            farm[i].append(0)
    for i in range (number):
        f,g=map(int,input().split())
        farm[f][g]=1
    count=0
    for i in range(x):
        for j in range(y):
            if farm[i][j]==1:
                check(i,j)
                count+=1
    print(count)
