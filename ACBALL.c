#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[1000000],b[1000000];
        scanf("%s%s",a,b);
        int x=strlen(a);
        char d[x+1];
        for(int i=0;i<x;i++)
        {
            if(a[i]=='W'&& b[i]=='W')
                d[i]='B';
            else if(a[i]=='B'&& b[i]=='B')
                d[i]='W';
            else
                d[i]='B';
        }
        d[x]='\0';
        printf("%s\n",d);
    }
    return 0;
}
