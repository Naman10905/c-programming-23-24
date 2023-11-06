#include<stdio.h>
int main(){
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	int l=0,i=0;
	while(s1[i]!='\0'){
		l+=1;
		i++;
	}
	int m=0,j=0;
	while(s2[j]!='\0'){
		m+=1;
		j++;
	}
	char s3[100];
	for(i=0;i<l;i++){
		s3[i]=s1[i];
		
	}
	for(int k=l;k<m+l;k++){
		s3[k]=s2[k-l];
	}
	
	printf("%s",s3);
	
}
