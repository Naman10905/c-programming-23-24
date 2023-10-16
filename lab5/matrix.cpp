#include<stdio.h>
int main(){
	int a[2][2];
	printf("enter matrix elements");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int k=0;k<2;k++){
		for(int l=0;l<2;l++){
			printf("%d",a[k][l]);
		}
	}
}
