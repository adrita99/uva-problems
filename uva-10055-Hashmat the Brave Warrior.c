#include<stdio.h>
#include<math.h>

int main()
{

    long long int hash,oppo,diff;

    while( scanf("%lld %lld",&hash,&oppo) == 2)
    {
        diff = oppo-hash;

        if(diff>=0)
            printf("%lld\n",diff);
        else
            printf("%lld\n",-(diff));
    }
    return 0;
}
