#include<stdio.h>
int main()
{
    float x[4];
    float pro=1;
    for(int i=0;i<4;i++)
        {scanf("%f",&x[i]);
        pro=pro*x[i];
        }
    float u,y;
    int fl=0;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            u=x[i]*x[j];
            y=pro/u;
            if(u==y)
            {
                fl=1;break;
            }
        }
        if(fl==1)
            break;
    }
    if(fl==1)
        printf("Possible");
    else
        printf("Impossible");
    return 0;
}
