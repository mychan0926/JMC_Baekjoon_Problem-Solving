a,b=input().split()
d=''
c=''
for i in range(len(a)):
  c+=a[-(i+1)]
for i in range(len(b)):
  d+=b[-(i+1)]
if int(c)>int(d):
  print(c)
else:
  print(d)