#include<stdio.h>
#include<math.h>
main()
{
    long int a,b;
    long int g,k,j;
    scanf("%ld%ld",&b,&a);
    int y[a-1];
    for(j=0;j<a-1;j++)
    {
    y[j]=1;
    }
    for(j=2;j<a;j++)
    {
        if(y[j-2]==1)
        {
        for(k=j+1;k<=a;k++)
        {
            if(k%j==0)
            {
                y[k-2]=0;
            }
        }
        }
    }
    for(g=b;g<=a;g++)
    {
	if (g==1)
	continue;
        if(y[g-2]==1)
        {
            printf("%ld\n",g);
        }
    }
}
