
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 point values");
	scanf("%d %d %d",&a,&b,&c);
	if( (a>b)&&(a>c)){
		printf("%d",a);
	}
	else if(b>c){
		printf("%d",b);}
	else printf("%d",c);	
	
}
/* In our school days, all of us have enjoyed the Games period. Raj loves to play cricket and is captain of his team. He always wanted to win all cricket matches. But only one last game period is left in school now. After that he will pass out from school. So, this match is very important to him. He does not want to loose it. So he has done a lot of

planning to make sure his team wins. He is worried about only one opponent - Vinay, who is very good batsman. Raj has figured out 3 types of bowling techniques, that could be most beneficial for dismissing

Vinay. He has given points to each of the 3 techniques. You need to tell him which is the maximum point value, so that Raj can select best technique. Taking 3 numbers are input, output the maximum point value.*/
