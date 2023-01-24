a=int(input())
b=int(input())
c=int(str(a)[0:-2])*100
for i in range(100):
    if (c+i)%b==0:
        print(str(c+i)[-2:])
        break
