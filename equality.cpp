#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 nos");
	scanf("%d %d %d",&a,&b,&c);
	if((a==b) && (b==c) && (c==a))
	printf("equal");
	else printf("not equal");
	
}
