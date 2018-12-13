#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int t,i,j,count,flag;
char str[100];
char ch;
scanf("%d",&t);
while(t--)
{
scanf("%s",str);
if((strlen(str)%2)!=0)
printf("NO\n");
else
{
for(j=0;j<strlen(str);j++)
{
ch=str[j];
count=0;
flag=0;
for(i=0;i<strlen(str);i++)
{
if(str[i]==ch)
count++;
}
if(count==(strlen(str)/2))
{
flag=1;
break;
}
}
if(flag==1)
printf("YES\n");
else printf("NO\n");
}
}
}
