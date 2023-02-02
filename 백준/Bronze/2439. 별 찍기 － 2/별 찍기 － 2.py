a=int(input())
#map(int,input().split())
for i in range(1,a+1):
   for j in range(a-i):
      print(" ",end="")
   for j in range(i):
      print("*",end="")
   print()