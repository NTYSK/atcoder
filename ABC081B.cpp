#include <stdio.h>

int main(){
    char a[3];
    int cnt=0,i;
    scanf("%s",a);
    for(i;i<3;i++){
    if(a[i]=='1')cnt++;
    }
    printf("%d\n",cnt);
}