#include<stdio.h>
int main(){
	int phy,chem,math,bio,cs,p;
	printf("enter subjects marks in order phy,chem,math,bio,cs");
	scanf(" %d %d %d %d %d", &phy,&chem,&math,&bio,&cs);
	p=(phy+chem+math+bio+cs)/5;
	printf("The percentage marks is %d",p);
	
	if (p>=90) {
	printf("GRADE A");
	}
    else if (p>=80 && p<90) {
	printf("GRADE B");
	}
	else if (p>=70 && p<=80){
	printf("GRADE C");
	}
	else if (p>=60 && p<=70){
	printf("GRADE D");
	}
	else if (p>=50 && p<=40){
	printf("GRADE E");
	}
	else printf("GRADE F");
}
