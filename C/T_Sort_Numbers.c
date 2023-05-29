#include<stdio.h>

int main()
{  
    int ar[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&ar[i]);
    }
    int a=ar[0],b=ar[1],c=ar[2];
 
 for(int  i=0;i<2;i++)
    {
       for(int j=i+1;j<3;j++)
       {
        if(ar[i]>ar[j])
        {
            int tmp=ar[i];
            ar[i]=ar[j];
            ar[j]=tmp;
        }
       }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",ar[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d",a,b,c);
  

    return 0;
}