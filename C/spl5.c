#include<stdio.h>
int main()
{
       float sum = 0;
    float count = 0;
    float avg = 0;
     float n;

    while(count < 4)
    {

        scanf("%f",&n);
        if(n>=0)
        {
            sum+=n;
            count++;


        }
        else
        {
            continue;
        }
        printf("Average: %f\n",sum/count);
    }


    return 0;
}
