#include<stdio.h>
int main()
{
   int a[10]={0};
   int k=15;

   for(int i=1;i<6;i+=2)
   {
       a[i]= ++k-2;
       k++;


   }

   int c = 0;

   for(int i=6;i<10;i++)
   {
       for(int j=10;j>=i;j--)
       {
           a[j] = ++c;

       }

   }

    for(int i=0;i<10;i++)
    {
        if(i%2 == 0)
        {
            a[i] = ++k;

        }
    }

   for(int i=0;i<10;i++)
   {

       printf("%d ",a[i]);
   }

   printf("\nk-%d c-%d",k,c);

}
