#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000];
        scanf("%s",a);
        int b[26][26]={0};
        int y=strlen(a);
        for(int i=0;i<y-1;i++)
        {
            b[a[i]-65][a[i+1]-65]=1;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(b[i][j]==1)
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
