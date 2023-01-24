iron=0
alli=0
a=input()
for i in range(len(a)):
    
    if (a[i]=='(' and a[i+1]==')'):
        alli+=iron
    elif (a[i]==')' and a[i-1]=='('):
        ''

    else:
        if a[i]=='(':
            iron+=1
        elif a[i]==')':
            iron-=1
            alli+=1

print(alli)

        
        
