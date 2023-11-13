#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s1[100];
	scanf("%s",s1);	
	s1[0]=toupper(s1[0]);
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]==' '){
			s1[i+1]=toupper(s1[i+1]);
		}
	}
	printf("%s",s1);
	
	
	}
