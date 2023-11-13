#include<stdio.h>
#include<string.h>
int main(){
	char s1[100];
	scanf("%s",s1);	
	int l=strlen(s1);
	int c=0;
	for(int i=0;i<l/2;i++){
		if(s1[i]==s1[l-i-1]){
			c++;
			}
		}
	if(c==l/2){
		printf("palindrome");
		
	}
	else printf("not a palindrome");
	
}
