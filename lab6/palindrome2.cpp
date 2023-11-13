#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	scanf("%s",s1);	
	int l=strlen(s1);
	int i=0,c=0;
	while(s1[i]==s1[l-i-1]){
		c++;
	if(c==l/2){
		printf("palindrome");
	}	
	}
	printf("not a palindrome");}
