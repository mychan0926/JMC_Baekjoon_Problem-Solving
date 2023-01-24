import math
count=int(input())
for j in range(count):
    
    x1,y1,x2,y2=map(int,input().split())
    repeat=int(input())
    inout=0
    for i in range(repeat):
        cx,cy,r=map(int,input().split())
        if (math.sqrt(pow(x1-cx,2)+pow(y1-cy,2))<r):
            if not(math.sqrt(pow(x2-cx,2)+pow(y2-cy,2))<r):
                inout+=1
        else:
            if (math.sqrt(pow(x2-cx,2)+pow(y2-cy,2))<r):
                inout+=1
    print(inout)
