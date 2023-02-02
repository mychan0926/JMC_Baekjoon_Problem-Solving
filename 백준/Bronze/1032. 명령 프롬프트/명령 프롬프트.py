a=int(input())
s=[]
t=[]
p=[]
for i in range(a):
    s.append(input())
t=list(s[0])
for i in range(a):
    p=[]
    for d in range(len(s[i])):
            if t[d]==s[i][d]:
                p.append(t[d])
            else:
                p.append("?")
    t=p
c=''
for i in t:
    c+=i
print(c)
