#include<stdio.h>
int main()
{
  int test;
  scanf("%d",&test);
   int t1=0,p1=0;
  for(int i=0;i<test;i++)
  {
        int t,p;
        scanf("%d %d",&t,&p);
      
       if(t>p)
       {
        t1++;
       }
       if(t<p)
       {
        p1++;
       }
  }
  if(p1<t1)
  {
   printf("Tiger");
  }
  else if(t1<p1)
  {
    printf("Pathan");
  }
  else
  {
   printf("Draw");
  }


    return 0;
}