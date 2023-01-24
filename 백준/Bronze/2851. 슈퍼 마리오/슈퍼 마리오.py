h=[]
for i in range (10):
    a=int(input())
    h.append(a)
all=0
for i in range(10):
    check=all
    all+=h[i]
    if abs(all-100)>abs(100-check):
        all=check
        break
    elif abs(all-100)==abs(100-check):
        break
print(all)
    

    