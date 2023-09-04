/*this program is used to calculate the percentage marks of a student*/
#include<stdio.h>
int main()
{
	int m,p,c,e,s,a;
	printf("enter the marks of all 5 subjects:");
	scanf("%d %d %d %d %d", &m,&p,&c,&e,&s);
	a=(m+p+c+e+s)/5;
	printf("The percentage marks is %d",a);
}
