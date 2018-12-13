#include<stdio.h>
#include<string.h>
    int main()
    {
    	char a[10001],b[10001];
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    	    int flag=0;
    		scanf("%s",a);
    		scanf("%s",b);
    		for(int i=0;i<strlen(a);i++)
    			for(int j=0;j<strlen(b);j++)
    			{
    				if(a[i]==b[j])
    				{
    					flag = 1;
    					break;
    				}
    			}
    		if(flag == 1)
    			printf("Yes\n");
    		else
    			printf("No\n");
    	}
    	return 0;
    	}
