a= input()
count=0
if len(a)>2:
    for i in range(1,int(a)+1):
        if len(str(i))>1:
            cou=int(str(i)[0])-int(str(i)[1])
        else:
            cou=0
        out=0
        for j in range(len(str(i))):
            if j+1!=len(str(i)):
                if cou!=int(str(i)[j])-int(str(i)[j+1]):
                    out+=1
                cou=int(str(i)[j])-int(str(i)[j+1])
        if out==0:
            count+=1
else:
    count=a
print(count)

                
                
        
