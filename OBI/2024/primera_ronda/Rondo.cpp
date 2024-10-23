/*n,m=map(int,input().split())
dic={m:0}
for i in range(n):
  a,b,c=map(int,input().split())
  if(a==1):
    if not b in dic:
      dic[b]=0
    if(m==b):
      dic[b]+=1
      m=c
  else:
    if not b in dic:
      dic[b]=0
    if(m==c):
      dic[b]+=1
      m=b
max=0
mini=m
printeador3000=""
for i in dic:
  if(dic[i]>max):
    max=dic[i]
    mini=i
    printeador3000=str(i)
  elif(dic[i]==max):
    if(i<mini):
      printeador3000=str(i)
      mini=i
print(printeador3000)
Lo resolvi en pythooon, no me riñan xd
*/