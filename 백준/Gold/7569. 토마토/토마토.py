x,y,z=map(int,input().split())
box=[]
log=[]
check=0
dx=[1,-1,0,0,0,0]
dy=[0,0,1,-1,0,0]
dz=[0,0,0,0,1,-1]
for z_box in range (z):
   box.append([])
   for y_box in range (y):
      box[z_box].append([])
      for x_box in range (x):
         box[z_box][y_box].append([])
for z_box in range (z):
   for y_box in range (y):
      box[z_box ][y_box ]=list(map(int,input().split()))
      for x_box in range (x):
         if box[z_box ][y_box ][x_box]==1:
            log.append((z_box ,y_box ,x_box))
         if box[z_box ][y_box ][x_box]==-1:
            check+=1
count=0
while True:
   try:
      z1,y1,x1=log[count]
   except:
      break
   count +=1
   for i in range(6):
      z2=z1+dz[i]
      y2=y1+dy[i]
      x2=x1+dx[i]
      if (z2>=0 and z2<z) and (y2>=0 and y2<y )and (x2>=0 and x2<x) and (box[z2][y2][x2]==0) :
         box[z2][y2][x2]=box[z1][y1][x1] + 1
         log.append((z1+dz[i] ,y1+dy[i] ,x1+dx[i]))
      
   if count+check==x*y*z:
      break
   try:
      log[count]
   except:
      break


error=0
maxx=box[0][0][0]
for z_box in range (z):
   for y_box in range (y):
      for x_box in range (x):
         if maxx<box[z_box][y_box][x_box]:
            maxx=box[z_box][y_box][x_box]
         if box[z_box][y_box][x_box]==0 and error==0:
            print("-1")
            error+=1
            
if error==0:
   print(maxx-1)

