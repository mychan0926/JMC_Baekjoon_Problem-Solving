a=int(input())
listt=[]
for i in range(a):
    c,d=input().split()
    if d=="enter":
        listt.append(c)
    else:
        listt.remove(c)
listt.sort(reverse=True)
for i in range(len(listt)):
    print(listt[i])
        
