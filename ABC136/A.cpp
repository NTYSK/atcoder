#include <stdio.h>
typedef long long int lld;

int main(){
    lld A,B,C;
    scanf("%lld %lld %lld",&A,&B,&C);
    if(A-B<C)
    {
        C = C-(A-B);
    }else{
        C = 0;
    }
    fprintf(stdout,"%lld",C);
    return 0;
}