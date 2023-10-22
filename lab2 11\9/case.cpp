#include<stdio.h>

int main(){
	char ch;
	scanf("%c",&ch);
	if((ch<='Z')&&(ch>='A')){
		printf("%c is capital",ch);
		
	}
	else printf("%c is lower case",ch);
}
