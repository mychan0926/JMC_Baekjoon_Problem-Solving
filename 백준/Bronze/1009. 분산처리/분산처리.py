dic={}

for j in range (0,10):
    for i in range(2,20):
        if (int(str(j**i)[-1])==j):
            dic[j]=i-1
            break

a=int(input())
for i in range (a):
    b,c=map(int,input().split())
    B=int(str(b)[-1])
    Bmin=int((c-1)%(dic[B])+1)
    if Bmin==0:
        Bmin=1
    e=int(str(b**Bmin)[-1])
    if e==0:
        print(10)
    else:
        print(e)
