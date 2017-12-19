#include<stdio.h>
int main()
{
    int testcase,i,num1,num2;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d %d",&num1,&num2);
        if(num1>num2)
        {
            printf(">\n");

        }
        else if (num1<num2)
        {
            printf("<\n");
        }
        else printf("=\n");
    }
    return 0;

}
