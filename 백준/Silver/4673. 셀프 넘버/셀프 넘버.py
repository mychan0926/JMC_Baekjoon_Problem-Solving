
def selfd(a):
    ans=a
    a=str(a)
    for i in range(len(a)):
      ans+=int(a[i])
    return ans
   
s=[]
for i in range(1,10000):
   s.append(i)
for i in range(1,10000):
   b=selfd(i)
   try:
      s.remove(b)
   except:
      ''
for i in range(len(s)):
   print(s[i])
