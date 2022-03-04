#include<stdio.h>
int main(){
	int a;
	int giaithua=1;
	printf("moi nhap so: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		giaithua=giaithua*i;
	}
	printf("N!= %d",giaithua);
	
	}
