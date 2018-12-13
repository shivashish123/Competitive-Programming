#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q,a0,i;
    scanf("%d",&q);
    for(a0 = 0; a0 < q; a0++){
        char s[10000];
        scanf("%s",s);
        int len=strlen(s);
        char h[10]="hackerrank";
        int j=0;
        for(i=0;i<len;i++)
        {
            if(s[i]==h[j])
                j++;
        }
        if(j==10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
