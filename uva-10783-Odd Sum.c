#include<stdio.h>
int main()
{
    int testcase,num1,num2,odd_sum,i,j,odd;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        odd_sum=0;
        scanf("%d",&num1);
        scanf("%d",&num2);

        for(j=num1;j<=num2;j++)
        {
            if ((j%2)!=0)
                odd=j;
            else continue;
            odd_sum=odd_sum+j;
        }

        printf("Case %d: %d\n",i,odd_sum);
    }
    return 0;
}

