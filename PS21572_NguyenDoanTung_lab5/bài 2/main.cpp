#include <stdio.h>
int checkYear(int year) {
	int flag=0;
	if(year % 400 == 0){
	flag = 1;
	}
	if(year % 4 == 0 && year % 100 != 0){
	flag = 1;
	}
 return flag;
}
int main(){
	int year;
	printf("chuong trinh tinh nam nhuan \n ");
	printf("nhap vao nam: ");
	scanf("%d",&year);
	if(checkYear(year)==1){
        printf("%d la nam nhuan",year);}
    else{
        printf("%d khong phai la nam nhuan",year);}
	return 0;
}
