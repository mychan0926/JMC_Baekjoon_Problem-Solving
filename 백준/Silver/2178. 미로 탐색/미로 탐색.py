def check(y1,x1):
        global count
        global s
        global asa
        count+=1
        ck=[]
        dx=[1,0,0,-1]
        dy=[0,-1,1,0]
        for i in range(4):
            p=x1+dx[i]
            q=y1+dy[i]
            if p>0 and q>0 and p<=X and q<=Y:
                if  s[q][p]==1 and not(p==1 and q==1):
                        s[q][p]=s[y1][x1] + 1
                        ck.append((q,p))
        return ck
                
                    
                    
            
            


count=0
asa=[]
Y,X=map(int,input().split())
s=[[]]
for i in range(1,Y+1):
    s.append([])
for j in range(X):
    s[0].append(0)
for i in range(1,Y+1):
    line=input()
    s[i].append(0)
    for j in range(X):
        s[i].append(int(line[j]))
asa.extend(check(1,1))
ssss=[]
while True:
        for i in range (len(asa)):
                sk=check(asa[i][0],asa[i][1])
                if sk!=None:
                        ssss.extend(sk)
        asa=ssss
        ssss=[]
        if s[Y][X]!=1:
                break
print(s[Y][X])

        
                
    
