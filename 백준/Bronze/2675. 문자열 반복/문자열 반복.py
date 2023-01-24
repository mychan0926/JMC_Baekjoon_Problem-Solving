a=int(input())
for i in range(a):
  b,c=input().split()
  b=int(b)
  for j in range(len(c)):
    for k in range(b):
      print(c[j],end='')
  print()