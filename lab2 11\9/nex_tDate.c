#include<stdio.h>
int main(){
	int d,m,y;
	scanf("%d %d %d",&d,&m,&y);
	if((m==1||m==3||m==5||m==7||m==8||m==10) && (d<=31)){
		
		
			if(d==31){
				d=1;
				m++;
				printf("%d %d %d",d,m,y);}
			else{
				d++;
				printf("%d %d %d",d,m,y);}
		}
	else if((m==4||m==6||m==9||m==11)&&(d<=30)){
		
		
		if(d==30){
			d=1;
			m++;
			printf("%d %d %d",d,m,y);}
		else{
			d++;
			printf("%d %d %d",d,m,y);}	
			
		}
	else if((m==12)&&(d<=31)){
		if(d==31){
			m=1;
			d=1;
			y++;
			printf("%d %d %d",d,m,y);
			}
		else{
			d++;
			printf("%d %d %d",d,m,y);
			}
			
	}
	else if ((m==2)&&(d<=29)){
		    if((y%4==0)&&((y%100!=0)||(y%400==0))){
				if(d==29){
					m=3;
					d=1;
					printf("%d %d %d",d,m,y);
				}
								else{
					d++;
					printf("%d %d %d",d,m,y);
				}
			}
			else{
				
				
					if(d==28){
						d=1;
						m=3;
						printf("%d %d %d",d,m,y);
					}
					else{
						d++;
						printf("%d %d %d",d,m,y);
					}
			}
			}
	else printf("invalid date")	;	
			
		}
		
	



	


		
	

