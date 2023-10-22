#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,s,c;
	scanf("%f %f %f",&p,&r,&t);
	s=(p*r*t)/100;
	printf("simple intrest is %f",s);
	c= p * (pow((1 + r / 100), t) - 1);
	printf("compound intrest is %f",c);
	return 0;
	
	
	
}
