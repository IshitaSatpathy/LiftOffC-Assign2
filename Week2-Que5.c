#include<stdio.h>
int main()
{
    int i,j;
    int n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||j==(n-i-1))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}