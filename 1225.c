#include<stdio.h>
#include<stdlib.h>
int main()
{
    int testCase,n,i,j,m,count[10],num;
    scanf("%d",&testCase);

    char str[32];

    for(m=1;m<=testCase;m++)
    {

        for(i=0;i<10;i++)
            count[i]=0;
         j=0;

        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            num = i;

            while(num!=0)
            {
                count[(num%10)]++;
                num/=10;
            }
        }


        for (i=0;i<10;i++)
        {
            printf("%d",count[i]);

            if(i<9)
                printf(" ");
        }
        printf("\n");


    }
        return 0;

}
