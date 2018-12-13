#include<stdio.h>
#include<stdlib.h>
int main(){
long long int t,l,d,s,c,i;
scanf(" %lld", &t);
while(t--)
{
    int fl=0;
scanf(" %lld %lld %lld %lld",&l,&d,&s,&c);
for(i=0;i<d;i++)
{
  s=s+s*c;
  if(s>=l)
  {
      fl=1;break;
  }
}
if(fl==1)
printf("ALIVE AND KICKING\n");
else printf("DEAD AND ROTTING\n");
}
return 0;
}
