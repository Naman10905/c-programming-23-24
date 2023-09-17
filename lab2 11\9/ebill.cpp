#include<stdio.h>
int main(){
	float u,b;
	printf("enter your units consumed");
	scanf("%f",&u);
	if (u>0 && u<100) {
		b=u*2.0;
		printf("bill is %f",b);
	
	}
	else if (u>100 && u<250){
		b=u*3.5;
		printf("bill is %f",b);
	}
	else
	 {
	 	b=u*5;
	 printf("the bill amount is %f",b);
}
	
}
