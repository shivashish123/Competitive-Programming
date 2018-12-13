#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
            long int x;
            scanf("%ld",&x);
            long int k=i;
            for(long int i=1;i*i<=2*x;i++)
            {
			if(((i*i+i)/2)<=x && ((i+1)*(i+2)/2) >x)
				{
				    k=i;
					break;

				}

            }
		 long int ans=k+(x-(k*(k+1))/2);
		long int ans2=k+1+(((k+1)*(k+2))/2)-x;

		printf("%ld\n",min(ans,ans2));
    }
    return 0;
}
