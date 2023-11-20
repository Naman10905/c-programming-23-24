#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	printf("enter string");
	char s1[100];
	gets(s1);
    int l=strlen(s1);
	for(int i=0;i<l;i++){
		if(s1[i]==' '){
			s1[i+1]=toupper(s1[i+1]);
		}
	}
	printf("%s",s1);
}

