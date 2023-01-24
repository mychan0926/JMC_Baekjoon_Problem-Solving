a,b=map(int,input().split())
x,y=map(int,input().split())
t=int(input())
x1=t%(2*a)
y1=t%(2*b)
xup=1
yup=1
for i in range (x1):
  if x==a:
    xup=-1
  elif x==0:
    xup=1
  x+=xup
for i in range (y1):
  if y==b:
    yup=-1
  elif y==0:
    yup=1
  y+=yup
print(x,y)
