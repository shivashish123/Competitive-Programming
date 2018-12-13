#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char a[100000];
        scanf("%s",a);
        int x=strlen(a);
        int i=0,j=0;
        while(i<x)
        {
            if(a[i]=='<')
            {
                a[i]='>';
                a[i+1]='<';
                i+=2;
            }
            else
                i++;
        }
        int count =0;
        while(j<x-1)
        {
            if(a[i]=='<' && a[i+1]=='>')
            {
                count++;
                i+=2;
            }
            else
                i++;
        }
        printf("%d\n",count);
    }
    return 0;
}
