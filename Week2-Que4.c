#include<stdio.h>
int main()
{
    int n;
    int max,min,arr[n];
    printf("Enter the number of elements you want to put in the array:");
    scanf("%d",&n);
    printf("Enter the numbers u want to store in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("The largest number:%d",max);
    printf("The smallest number:%d",min);
}

