#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t,n,k;
	cin >> t;
	vector<int> a;
	vector<int> d;
	vector<int> b;
	for(int i=0;i<t;i++)
	{
		int c=0;
		scanf("%d%d",&n,&k);
		for(int j=0;j<n;j++)
			scanf("%d",&a[j]);
		for(int j=0;j<n;j++)
		{
		    scanf("%d",&d[j])
			c+=d[j];
		}
		for(int j=0;j<k;j++)
			scanf("%d",&b[j]);
		int l, m,temp;
	  for (int i = 0; i < n-1; i++)
	      for (int j = 0; j < n-i-1; j++)
          if (a[j] > a[j+1])
              {
	               	temp=a[j];
	               	a[j]=a[j+1];
	               	a[j+1]=temp;
	               	temp=d[j];
	               	d[j]=d[j+1];
	               	d[j+1]=temp;
              }
		int v=0,l=n-1;
		for(int j=0;j<k;j++)
		{
			c-=b[j]	;
			if(j%2)
			{
				while(c)
				{
					if(d[l])
					{
						d[l]--;c--;
					}
					else
						l--;
				}
			}
			else
			{
				while(c)
				{
					if(d[v])
					{
						d[v]--;c--;
					}
					else
						v++;
				}
			}
			c=b[j];


		}
		int sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=(a[j]*d[j]);

		}
		printf("%d\n",sum);
	}
	return 0;
}
