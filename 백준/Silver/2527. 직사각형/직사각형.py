for i in range (4):
    x1,y1,x2,y2,a1,b1,a2,b2=map(int,input().split())
    if x2<a1 or x1>a2 or y2<b1 or y1>b2:
        print('d')
    else:
        if x2==a1 or x1==a2 or y2==b1 or y1==b2:
            if x2==a1 and (y2==b1 or y1==b2) or x1==a2 and (y2==b1 or y1==b2):
                print('c')
            else:
                print('b')

        else:
            print('a')
    
