#include<stdio.h>
int main(){
	int a[3][3]={2,4,6,8,1,3,5,7,9};
	int b[3][3]={3,4,1,5,3,1,3,5,6};
	int c[3][3];
	int d[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	for(int k=0;k<3;k++){
		for(int l=0;l<3;l++){
			printf("%d ",c[k][l]);
			
		}
}
    for(int p=0;p<3;p++){
		for(int q=0;q<3;q++){
			printf("%d ",d[p][q]);}
			
    
}
}
