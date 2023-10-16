#include<stdio.h>
int main(){
	int a[5];
	printf("enter the values in the array\n");
	for(int j=0;j<5;j++){
		scanf("%d",&a[j]);
		
	}
	float s=0;
	for(int k=0;k<5;k++){
		printf("%d\n",a[k]);
		s+=a[k];
	}
	
	int m=a[0];
	for(int i=0;i<5;i++){
		
		if(a[i]<m){
			m=a[i];}
    }
	int M=a[0];		
	for(int l=0;l<5;l++){  
		if(a[l]>M){
			M=a[l];
		}
}
		
			
		
		
	
	printf("%d %d %f",m,M,s/5);           
}
