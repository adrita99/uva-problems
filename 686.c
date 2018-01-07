#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int prime[1000000]={0};

void seive(int);

int main()
{
    freopen("686out.txt","w",stdout);
    int n;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        seive(n);
    }



    return 0;

}

void seive(int n)
{
    int primeList[100000],i,j,k,cnt,sub;
    prime[1]=1;
    for(i=4;i<=n;i+=2)
    {
        prime[i]=1;
    }

    int sq = sqrt(n);

    for(i=3;i<=sq;i+=2)
    {
        if (prime[i]==0)
        {
            for(j=(i*i);j<=n;j+=(2*i))
            {
                prime[j]=1;
            }
        }
    }
    j=0;
    for(i=1;i<=n;i++)
    {
        if(prime[i]==0)
        {
            primeList[j]=i;
            j++;
        }
    }
    cnt=0;
    for(i=0;i<j;i++)
    {
        if(primeList[i]>(n/2))

        {
            break;
        }
        sub=n-primeList[i];


        for(k=0;k<j;k++)
        {
            if (sub==primeList[k])
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",cnt);


}


