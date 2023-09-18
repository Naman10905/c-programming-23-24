/* program to input sides of a triangle and check whether a triangle is equilateral, scalene
or isosceles triangle*/
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the sides of a triangle");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c &&c==a){
	printf("its an equilateral triangle");
	}
	else if (a!=b && b!=c && c!=a){
	printf("its a scalene triangle");
	}
	else printf("its an isosles triangle");
	
}
