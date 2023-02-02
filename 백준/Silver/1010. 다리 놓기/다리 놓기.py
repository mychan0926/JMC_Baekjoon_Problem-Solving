g=int(input())
for k in range(g):
    
    a,b=map(int,input().split())
    c=1
    d=1
    for i in range(a):
        c*=b-i
    for i in range(a):
        d*=a-i
    print(c//d)
