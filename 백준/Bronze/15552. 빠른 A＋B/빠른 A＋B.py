import sys
a=int(input())
for i in range(a):
   b,c=map(int,sys.stdin.readline().rstrip().split())
   print(b+c)