#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,a,b,c,d,p;
        scanf("%d%d%d%d%d%d%d",&x,&y,&a,&b,&c,&d,&p);
        long int check=(p+x*d+b*y);
        long int min=-1;
        long int h;
        int up=check/(c+d);
        for(int i=x;i<=up;i++)
        {
            double g=((check-(c+d)*i)*1.0)/((a+b)*1.0);
            long int c1=ceil(g);
            long int c2=floor(g);
            if(c1==c2 && c1>=y)
            {
                long int u=2*(c1+i)-(x+y);
                if(u<min)
                    min=u;
            }
        }
        printf("%ld\n",min);
    }
    return 0;
}
