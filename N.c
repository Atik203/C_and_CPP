#include<stdio.h>

int main(){
char X;
scanf("%c",&X);
if(X>='a' && X<='z'){
    int ans=X-32;
    printf("%c",ans);
}
else{
    int ans=X+32;
    printf("%c",ans);
}
    return 0;
}