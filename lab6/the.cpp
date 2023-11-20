#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	gets(str);
	int x=0;
	for(int i=0;i<strlen(str);i++){
		if((str[i]=='t')&&(str[i+1]=='h')&&(str[i+2]=='e')){
			x++;
		}
	}
	printf("%d",x);
	
}
