#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    scanf("%d",&t);
    while(t--)
    {
    double x1,x2,x3,v1,v2;
    scanf("%lf%lf%lf%lf%lf",&x1,&x2,&x3&v1,&v2);
    double t1=(x3-x1)/v1;
    double t2=(x2-x3)/v2;
    if(t2>t1)
        printf("Chef\n");
    else if(t1==t2)
        printf("Draw\n");
    else
        printf("Kefa\n");

    }
    return 0;
}
