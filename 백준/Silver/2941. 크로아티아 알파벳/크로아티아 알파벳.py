a=input()
b=0
c=0
b+=a.count("c=")
b+=a.count("c-")
b+=a.count("d-")
b+=a.count("lj")
b+=a.count("nj")
b+=a.count("s=")
c+=a.count("c=")*2
c+=a.count("c-")*2
c+=a.count("d-")*2
c+=a.count("lj")*2
c+=a.count("nj")*2
c+=a.count("s=")*2
if a.count("dz=")==a.count("z="):
    b+=a.count("dz=")
    c+=a.count("dz=")*3
else:
    b+=a.count("z=")
    c+=a.count("dz=")*3+(a.count("z=")-a.count("dz="))*2
print(b+(len(a)-c))
