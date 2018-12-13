#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[3000];
        scanf("%s",a);
        int y=strlen(a);
        for(int h=y-1;h>=3;)
        {
            int s=1;
              if((a[h-3]=='C'||a[h-3]=='?') &&(a[h-2]=='H' || a[h-2]=='?')&&(a[h-1]=='E' || a[h-1]=='?')&&(a[h]=='F' || a[h]=='?'))
                {
                    a[h]='F';a[h-1]='E';a[h-2]='H';a[h-3]='C';s=4;
                }
            h=h-s;
        }
        for(int i=0;i<y;i++)
            {
                if(a[i]=='?')
                    a[i]='A';
            }

        printf("%s\n",a);
    }
    return 0;
}
