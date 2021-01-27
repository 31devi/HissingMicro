name=(input())
found=False
for i in range(len(name)-1):
  if(name[i]=='s'):
    if(name[i+1]=='s'):
       found=True
if(found==True):
  print("hiss")
else:
  print("no hiss")  