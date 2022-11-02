#include <stdio.h>
int warOfNumbers(int arr[],int n)
{
    int evenSum=0,oddSum=0,i;
    for(i=0;i<n;i++)
    {
   
        if(arr[i]%2==0)
        {
            evenSum=evenSum+arr[i];
        }
        else
        {
            oddSum=oddSum+arr[i];
        }
    }
    if(evenSum>oddSum)
    {
        printf("\n%d is larger than %d\n",evenSum,oddSum);
        return evenSum-oddSum;
    }
    else
    {
        printf("\n%d is larger than %d\n",oddSum,evenSum);
        return oddSum-evenSum;
    }
}
void main()
{
    int arr[20],n,i,diff;
    printf("Enter the Number of Elements in array:");
    scanf("%d",&n);
   
    printf("Enter the array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            diff=warOfNumbers(arr,n);
            printf("The difference between the sum of the even and odd number is: %d",diff);
            break;
        }
        else
        {
             printf("Your input is Wrong...Please Only Define Positive Integers");
             break;
        }
    }
   
}
