#include<stdio.h>
int main()
{
    char s[100010];
    scanf("%s",s);
    int y=strlen(s);
    int move=0;
    int b[10]={0};
    for(int h=0;h<y;h++)
    {
        b[s[h]-48]++;
    }
    int i=0;
    while(i<y)
    {
        int x=s[i]-48;
        if(b[x]>0)
        {
           int h=i+1;
           while(h<y)
           {
               if((s[h]-48)!=x)
               {b[s[h]-48]--;
                    h++;}
                else
                    break;
           }
        }
        move++;

    }
    return 0;
}
