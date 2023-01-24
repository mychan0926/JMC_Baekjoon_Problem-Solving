a= int(input())
b=[]
mx=0
my=0
idx = 0
for i in range(6):
    c,d=map(int,input().split())
    b.append(d)
    if (c-1)//2==0:
        if mx<d:
            mx=d
            idx = i

    else:
        if my<d:
            my=d

if b[(idx + 1) % 6] == my:
    print((mx*my-b[(idx+3) % 6]*b[(idx+4) % 6])*a)
else:
    print((mx*my-b[(idx+2) % 6]*b[(idx+3) % 6])*a)
    
