#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",str);
	char *ptr=str;
	int l=strlen(str);
	for(int i=0;i<l/2;i++){
		int t=ptr[i];
		ptr[i]=ptr[l-i-1];
		ptr[l-i-1]=t;
	}
	printf("%s",str);
	
}
