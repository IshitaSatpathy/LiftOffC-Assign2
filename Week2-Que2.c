#include<stdio.h>
int main()
{
    int arr[50],eps=0,ens=0;
    printf("Enter the numbers:");
    for(int i=0;i<50;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<50;i++)
    {
        if(i%2==0)
        {
            eps=arr[i]+eps;
        }
        if(arr[i]%2==0)
        {
            ens=arr[i]+ens;
        }
    }
    printf("The sum of numbers on the even positions:%d\n",eps);
    printf("The sum of even numbers in string:%d\n",ens);
}