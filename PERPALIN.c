#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int fu=0;fu<test;fu++)
    {
     int n,p;
     scanf("%d%d",&n,&p);
     if((p==1 && n>1)||(p==2 && n==2))
     {
         printf("impossible\n");
         continue;
     }
     char a[p+1];
     if(p%2==0)
     {
         for(int ug=0;ug<p;ug++)
         {
             if(ug==0||ug==p-1)
                a[ug]='b';
             else
                a[ug]='a';
         }
         a[p]='\0';
     }
     else
     {
         for(int yu=0;yu<p;yu++)
         {
             if(yu%2==0)
                a[yu]='a';
             else
                a[yu]='b';
         }
         a[p]='\0';
     }
     int d=n/p;
     int ca=0,cb=0;
     for(int h=0;h<p;h++)
     {
      if(a[h]=='a')
            ca++;
      else
        cb++;
     }
     if(ca==0||cb==0)
        printf("impossible\n");
     else if(d==1)
     {
      printf("%s\n",a);
      continue;
    }
     else
     {
        for(int up=0;up<d;up++)
        {
            printf("%s",a);
        }
        printf("\n");
     }

     }
     return 0;
}
