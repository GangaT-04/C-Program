#include<stdio.h>
void main(){
	int num,isPrime=0,i,j,c=0;
	scanf("%d",&num);
	
	for(i=2;i<=num;i++){
		if(num%i==0){
			isPrime=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0){
					isPrime=0;
					break;
				}
			}
			if(isPrime==1)
			{
				if(i==2||i==3||i==5){
					c=1;
				}
				else{
					c=0;
				}
			}
		}
	}
	if(c==1){
		printf("true");
		
	}
	else{
		printf("false");
	}
}