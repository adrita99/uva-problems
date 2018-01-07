#include<stdio.h>
int main()
{
    double stdnt[1000],s=0,avg,prcnt;
    int c,n,i,j,count;
    char p='%';
    scanf("%d",&c);

    for(i=1;i<=c;i++)
    {
        s=0;
        count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lf",&stdnt[j]);
            s=s+stdnt[j];
        }

        avg=s/n;
        for(j=0;j<n;j++)
        {
            if (stdnt[j]>avg)
            {
                count++;
            }
        }
        prcnt=(count/(1.0*n))*100;
        printf("%.3lf%c\n",prcnt,p);


    }
    return 0;
}
