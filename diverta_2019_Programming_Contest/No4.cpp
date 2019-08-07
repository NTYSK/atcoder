#include <stdio.h>

int main(){
    long long int N,d=0,p=0,q=0;
    scanf("%lld",&N);
  	printf("%d\n",N);
  	for(long long int i=1;i<=N;i++)
    {
      	p=N/i;
        q=N%i;
  		if(p==q)d+=i;
    }
    printf("%lld",d);
}