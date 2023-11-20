#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if((s[i]>64 )&&(s[i]<97)){
			printf("%c",s[i]);
			return 0;
		}
	}
}
