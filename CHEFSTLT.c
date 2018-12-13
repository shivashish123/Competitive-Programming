#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    int i,j;
    for(i=0;i<test;i++)
    {
        int c,d;
        char a[100],b[100];
        scanf("%s%s",a,b)
        int y=strlen(a);
        for(j=0;j<y;j++)
        {
          if(a[j]!=b[j] && a[j]!='?' && b[j]!='?')
                c++;
          else if(a[j]==b[j] && a[j]=='?')
                d++;
          else if((a[j]=='?' && a[j]!=b[j])||(b[j]=='?' && b[j]!=a[j])
                d++;
        }
        printf("%d %d\n",c,c+d);
    }
    return 0;
}
