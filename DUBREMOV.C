#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
     char str[40],s1[50],f;
     int i,j,s,l=0;
     printf("Enter: ");
     gets(str);
    
     for(i=0;i<strlen(str);i++){
	s=0;
	for(j=0;j<strlen(s1);j++){
	   if(s1[j]==str[i]){
	       s=1;
	       break;
	   }
	}
	if(s==0){
		  s1[l++]=str[i];
		
	}

     }

     printf("Answer:");
     printf("%s",s1);
}


