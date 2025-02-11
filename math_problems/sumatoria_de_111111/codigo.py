n=int(input())
s=""
for i in range(n):
  s+="1"
s=int(s)
s=s*s
s=str(s)
res1=0
for i in s:
  res1+=int(i)
m=n-10
res2=((m//9)*81) + ((m%9+1)*(m%9+1)) + 81
if(res1==res2):
  print("funciona :)")
  print(res1)