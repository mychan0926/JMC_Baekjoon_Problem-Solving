a,b=map(int,input().split())
if b<45:
    if a==0:
        a=24
    print(a-1,60+b-45)
else:
    print(a,b-45)