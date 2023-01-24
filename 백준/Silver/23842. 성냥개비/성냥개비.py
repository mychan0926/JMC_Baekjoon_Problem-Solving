dic={1:2,2:5,3:5,4:4,5:5,6:6,7:3,8:7,9:6,0:6}
a=int(input())-4
#1 7 4 2 9 8
#2 3 4 5 6 7
p=0
for i in range(10):
   for j in range(10):
      for k in range(10):
         for l in range(10):
            for m in range(10):
               for n in range(10):
                  if p==0:
                     f=int(str(i)+str(j))
                     s=int(str(k)+str(l))
                     e=int(str(m)+str(n))
                     if f+s==e:
                        if a==dic[i]+dic[j]+dic[k]+dic[l]+dic[m]+dic[n]:
                           p+=1
                           a1=i
                           b1=j
                           c1=k
                           d1=l
                           e1=m
                           f1=n
if p==0:
   print("impossible")
else:
   print(str(a1)+str(b1)+"+"+str(c1)+str(d1)+"="+str(e1)+str(f1))