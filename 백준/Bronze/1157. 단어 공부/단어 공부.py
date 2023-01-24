a=input()
b=a.lower()
c=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
d=[]
index=0
for i in range(len(c)):
  d.append(b.count(c[i]))
e=0
f=c[0]
for i in range(len(d)):
  if e<d[i]:
    e=d[i]
    f=c[i]
  elif e==d[i]:
    f='?'
print(f.upper())