#include<stdio.h>
#define max 100
void main()
{
    int a[max]={1,2,3,4,5,6,7,8,9};
    int even[max],odd[max];
    int i,n=9,k=0,c=0,temp,j;
    for(i=0;i<n;i++){
        if(i%2==0){
            even[k]=a[i];
            k++;
        }
        else
        {
            odd[c]=a[i];
            c++;
        }
    }
    for(i=0;i<c;i++){
        for(j=0;j<c-i-1;j++){
            if(odd[j]<odd[j+1]){
                temp=odd[j];
                odd[j]=odd[j+1];
                odd[j+1]=temp;
            }
        }
    }
    for(i=0,k=0,c=0;i<n;i++){
        if(i%2==0){
            a[i]=even[k];
            k++;
        }
        else
        {
            a[i]=odd[c];
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
