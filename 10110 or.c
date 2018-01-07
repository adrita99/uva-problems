#include<stdio.h>


int main()
{
    long long int n,sq,k;
    while(scanf("%lld",&n)&&n!=0)
    {

        sq=sqrt(n);
        k=sq*sq;
        if(k!=n)
        {
            printf("no\n");;
        }
        else printf("yes\n");



    }

    return 0;
}
