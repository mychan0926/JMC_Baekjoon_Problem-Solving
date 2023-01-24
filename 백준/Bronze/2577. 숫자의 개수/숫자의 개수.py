a=int(input())
b=int(input())
c=int(input())
d=a*b*c
dic={}
for i in range(10):
    dic[i]=0
for i in range(len(str(d))):
    e=str(d)
    dic[int(e[i])]+=1
for i in range(10):
    print(dic[i])
