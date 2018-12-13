#include<stdio.h>
#include<string.h>
int main()
{
    int test,l;
    scanf("%d",&test);
    for( l=0;l<test;l++)
    {
        char a[100000];
        scanf("%s",a);
        int c=0,d=0;
        int j;
        int carry;
        int flag=0;
        int i=0;
        while(i<strlen(a))
        {
            flag=0;
            if(a[i]=='A')
            {
                carry=0;
                j=i+1;
                while(a[j]!='B' && j<strlen(a))
                {
                    if(a[j]=='A')
                     carry=j;
                     j++;
                }
                    if(carry==0)
                    {
                        c++;
                        carry=j-1;
                    }
                    else
                        c+=carry-i+1;
            flag=1;
            }
            else if(a[i]=='B')
            {
                carry=0;
                j=i+1;
                while(a[j]!='A' && j<strlen(a))
                {
                    if(a[j]=='B')
                     carry=j;
                     j++;
                }
                    if(carry==0)
			{
                        d++;
			carry=j-1;
			}
                    else
                        d+=carry-i+1;
	    flag=1;
            }
		if(flag==0)
		i++;
	    else
            i=carry+1;
        }

        printf("%d %d\n",c,d);

    }
    return 0;
}
