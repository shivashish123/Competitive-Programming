#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,s;
        scanf("%d%d",&p,&s);
        float l=(p-sqrt(p*p-24*s))/12;
        float z=(p+sqrt(p*p-24*s))/12;
        float x=(2.5*l)+(l*l*l)-(p*l*l)/4;
        float y=(2.5*z)+(z*z*z)-(p*z*z)/4;
        if(x>y)
            printf("%0.2f\n",x);
        else
            printf("%0.2f\n",y);
    }
    return 0;
}
