#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
    long long int n,k;
    scanf(" %lld %lld",&n,&k);
    if(k==0)
    {printf("0 %lld\n",n);
    }
    else
    printf("%lld %lld\n",n/k,n%k);
	}
	return 0;
}
