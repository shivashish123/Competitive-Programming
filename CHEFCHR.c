#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[600005];
        scanf("%s",a);
        int y=strlen(a);
        int c=0;
        int b[26];
        for(int i=0;i<y-3;i++)
        {
            memset(b,0,sizeof(b));
            for(int j=i;j<=i+3;j++)
                {
                    b[a[j]-97]++;
                }
            if(b[2]==1 && b[4]==1 && b[5]==1 && b[7]==1)
                c++;
        }
        if(c==0)
            printf("normal\n");
        else
            printf("lovely %d\n",c);
    }
    return 0;
}
