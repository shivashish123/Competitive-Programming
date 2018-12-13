#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int s=x+y+1;
        int f=0;
        int p=0;
        while(1)
        {
            f=0;
            for(int h=2;h<=sqrt(s);h++)
            {
                if(s%h==0)
                {
                    f=1;break;
                }
            }
            if(f==0)
                {p=1;break;}
            s++;
        }
        if(p==1)
            printf("%d\n",s-x-y-1);
    }
    return 0;
}
