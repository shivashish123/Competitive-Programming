#include<stdio.h>
#include<math.h>
main()
{
    int test,y;
    scanf("%d",&test);
    for(y=0;y<test;y++)
    {
    long int a,b;
    long int g,k,j;
    scanf("%ld%ld",&b,&a);
    int y[a-1];
    for(j=0;j<a-1;j++)
    {
    y[j]=1;
    }
    for(j=2;j*j<=a;j++)
    {
        if(y[j-2]==1)
        {
        for(k=j*2;k<=a;k+=j)
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
	printf("\n");
}
}
