#include<stdio.h>
#include<string.h>
struct game
{
   int r,min,max,time;
   char rat[10];
   char col[10];
};
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
      int n;
      scanf("%d",&n);
      struct game g[n];
      for(int i=0;i<n;i++)
      {
          scanf("%d%d%d%d%s%s",&g[i].r,&g[i].min,&g[i].max,&g[i].time,g[i].rat,g[i].col);
      }
      for(int i=0;i<n;i++)
      {
          int count=0;
          for(int j=i-1;j>=0;j--)
          {
              if(g[i].time==g[j].time && !strcmp(g[i].rat,g[j].rat))
              {
                  if(g[i].r>g[j].min && g[i].r<g[j].max && g[j].r>g[i].min && g[j].r<g[i].max )
                  {
                      if(!strcmp(g[i].col,"random") )
                         {count++;}
                    else if(!strcmp(g[j].col,"random"))
                    {
                        count++;
                    }
                    else if((!strcmp(g[i].col,"black") && !strcmp(g[j].col,"white"))||(!strcmp(g[i].col,"white") && !strcmp(g[j].col,"black")))
                    {
                        count++;
                    }

                  }

              }
          }
          if(count==0 || i==0)
            printf("wait\n");
          else
            printf("%d\n",count);
      }
    }
    return 0;
}
