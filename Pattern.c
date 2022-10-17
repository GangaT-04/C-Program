#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 100
void main()
{
    char s[max],s1[max];
    int n,i,j,m;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==j){
                printf("%c",s[i]);
            }
            else if(i+j==n-1){
                printf("%c",s[n-i-1]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
