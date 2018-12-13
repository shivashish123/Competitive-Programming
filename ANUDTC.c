#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a,b,c;
        if(n>360)
            {b='n';c='n';}
        else
            {b='y';
            if(n>=27)
                c='n';
            else
                c='y';
            }
        if(360%n==0)
            a='y';
        else
            a='n';
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}
