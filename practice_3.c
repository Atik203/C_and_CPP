#include<stdio.h>

int main(){

int a;

scanf("%d",&a);

 if(a>= 0 && a%2==0){
    printf("even");
}
else if(a>=0 && a%2!=0){
    printf("odd");
}
else{
    printf("wrong number");
}


return 0;
}
