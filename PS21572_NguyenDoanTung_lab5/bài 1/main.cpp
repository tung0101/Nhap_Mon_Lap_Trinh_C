#include <stdio.h>
int somax(int so1,int so2,int so3){
	int max;
	so1=max;
	if(so2>max){
		max=so2;
	}
	if(so3>max){
		max=so3;
	}
	return max;
}
int main(){
	printf("chuong trinh nhap ba so in ra so lon nhat\n");
	int so1,so2,so3;
	int max;
	printf("Moi nhap so so1: ");
    scanf("%d",&so1);
    printf("Moi nhap so so2: ");
    scanf("%d",&so2);
    printf("Moi nhap so so3: ");
    scanf("%d",&so3);
    max=somax(so1,so2,so3);
    printf("%d la so lon nhat trong ba so (%d,%d,%d)",max,so1,so2,so3);
return 0;
}
