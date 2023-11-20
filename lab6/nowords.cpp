#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	int c=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			c++;
		}
	}
	printf("%d",c+1);
}
