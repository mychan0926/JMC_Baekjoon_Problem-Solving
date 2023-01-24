N=int(input())
A,B,C,D,E,F=map(int,input().split())
s3=[]
s2=[]
s3.append(A+B+C)
s3.append(A+B+D)
s3.append(A+D+E)
s3.append(A+C+E)
s3.append(F+D+B)
s3.append(F+B+C)
s3.append(F+E+C)
s3.append(F+E+D)
s3.sort()
s1=[A,B,C,D,E,F]

for i in range(6):
    for j in range(6):
        if i!=j and not((i==0 and j==5) or(i==1 and j==4) or(i==2 and j==3) or(i==3 and j==2)  or (i==4 and j==1) or(i==5 and j==0)):
            s2.append(s1[i]+s1[j])
s2.sort()
s1.sort()
re=0
if N==1 :
    for i in range(5):
        re+=s1[i]
else:
    re=(N-1)*4*s2[0]+4*s3[0]+(N-2)*(N-2)*5*s1[0]+(N-2)*4*s2[0]+(N-2)*s1[0]*4
print(re)

