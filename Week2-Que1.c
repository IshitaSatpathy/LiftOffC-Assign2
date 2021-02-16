#include<stdio.h>
int main()
{
    int n,t,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        m=t%10;
        sum= sum+m;
        t= t/10;
    }
    printf("Sum of the digits of %d=%d\n",n,sum);
    return 0;
}