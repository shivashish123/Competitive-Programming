n,k,a,b=map(int,input().split())
mod=1000000007
lis=[]
k=k%mod
lis.append(k)
for i in range(2,n+1):
    h=a*lis[i-2]
    g=0
    for j in range(0,i-1):
        g=g+((lis[j]*lis[i-j-2])%mod);
    g=(g*b)%mod
    h=h+g
    h=h%mod
    lis.append(h)
lis2=[]
sum1=0;
for i in range(n):
    sum1=sum1+lis[i]*lis[i]
    sum1=sum1%mod
    lis2.append(sum1)
q=int(input())
for i in range q:
    l,r=map(int,input().split())
    if(l>1):
        req=lis2[r-1]-lis2[l-2]
    else:
        req=lis2[r-1]
    req=req%mod;
    print(req)



