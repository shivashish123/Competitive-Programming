#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1000004];
        scanf("%s",a);
        int max=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='<')
            {
                l++;
            }

            else if(a[i]=='>')
                l--;
            if(l==0)
            {
                max=i+1;
            }
            if(l<0)
                break;
        }
        printf("%d\n",max);
    }
    return 0;
}
