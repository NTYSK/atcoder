#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef long long int lli;

int main(){
    int flag1;
    lli N, *H, tmp, i;
    scanf("%lld", &N);
    H = (lli *)malloc(sizeof(lli)*N);
    for(i=0; i<N; i++)scanf("%lld", &H[i]);
    if(i==0)
    {
        fprintf(stdout,"Yes\n");
        free(H);
        return 0;
    }
    flag1 = 0;

    for(i=0; i<N-1; i++)
    {
        tmp = H[i+1]-H[i];
        if(tmp>=1)
        {
            flag1 = 0;
            continue;
        }else if(tmp==0)continue;
        else if(tmp == -1){
            if(flag1 == 1)
            {
              flag1 = 2;
              break;              
            }
            flag1 = 1;
        }else{
            flag1 = 2;
            break;
        }
    }    
    if(flag1 == 2)fprintf(stdout,"No\n");
    else fprintf(stdout,"Yes\n");
    free(H);
}