#include<stdio.h>
int main(){
	char s;
	scanf("%c",&s);
	if((s>='A')&&(s<='z'))
	printf("albhabet");
	else if((s>=0)&&(s<=9))
	printf("digit");
	else printf("speecial character");
}
