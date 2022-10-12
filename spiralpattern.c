#include<stdio.h>
void printspiral(int m,int n,int m1[][100]){
	int k=0,l=0,i,j;
	while(k<m && l<n){
		for(i=l;i<n;i++){
			printf("%d ",m1[k][i]);
		}
		k++;
		for(i=k;i<m;i++)
		{
			printf("%d ",m1[i][n-1]);
		}
		n--;
		if(k<m)
		{
			for(i=n-1;i>=l;i--){
				printf("%d ",m1[m-1][i]);
			}
			m--;
		}
		if(l<m){
			for(i=m-1;i>=k;i--){
				printf("%d ",m1[i][l]);
			}
			l++;
		}
	}

}
void main(){
	int m,n,i,j;
	scanf("%d %d",&m,&n);
	int mat[100][100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);	
		}
		printf("\n");
	}
	printspiral(m,n,mat);
	
}