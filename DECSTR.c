#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+20];
        int y=((n-1)/25)+1;
        a[n+y]='\0';
        char x='a';
        for(int j=n+y-1;j>=0;j--)
        {
            a[j]=x;
            x++;
            if(x>'z')
                x=x-26;
        }
        printf("%s\n",a);
    }
    return 0;
}
