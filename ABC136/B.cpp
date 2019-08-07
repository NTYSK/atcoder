#include <stdio.h>
#include <math.h>
typedef long long int lli;

int main(){
    lli N, tmp, sum;
    int i;
    scanf("%lld", &N);
    i = 0;
    tmp = N;
    while(1)
    {
        i++;
        if(tmp/10==0)break;
        tmp = tmp/10;
    }
    sum=0;
    for(int j=0; j<i; j++)
    {
        if(j%2!=0)continue;
        if(j==i-1)sum += N - (pow(10,j) - 1);
        else if(j==0)sum += (lli)(pow(10, j+1) - pow(10, j));
        else sum += (lli)(pow(10, j+1)-pow(10, j));
    }
    fprintf(stdout, "%lld", sum);
    return 0;
}