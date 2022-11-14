#include<stdio.h>
#include<string.h>
void main()
{
	char a[10];
	int i,j,n,m=0;
	scanf("%s",a);
	char b[20][20];
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=' ';
			
		}
		b[i][j]='\0';
	}
	for(i=0;i<n;i++)
	{
		if(m==0)
		{
			b[i][i]=b[n-1][n-1]=a[m];
		}
		else if(m==n-1)
		{
			b[0][n-1]=b[n-1][0]=a[n-1];
		}
		else 
		{
			b[0][i]=b[i][0]=b[n-i-1][n-1]=b[n-1][n-i-1]=a[m];
		}
		m++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",b[i][j]);
		}
		printf("\n");
	}
}