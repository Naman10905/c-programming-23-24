#include<stdio.h>
int main(){
	char s1[100]="hello";

	int l=0,i=0;
	while(s1[i]!='\0'){
		l+=1;
		i++;
	}
	printf("%d",l);
    
}
