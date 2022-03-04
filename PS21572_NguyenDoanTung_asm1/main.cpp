#include <stdio.h>
int main() {
	int choose;
	do{
	printf("\n====================MENU====================\n");
	printf(" Chuc nang so 1: Kiem tra so nguyên \n");
	printf(" Chuc nang so 2. Tim Uoc so chung và boi so chung cua 2 so \n");
	printf(" Chuc nang so 3: Chuong trinh tinh tirn cho quan Karaoke \n");
	printf(" Chuc nang so 4: Tinh tien dien \n");
	printf(" Chuc nang so 5: Chuc nang doi tien \n");
	printf(" Chuc nang so 6: Xây dung chuc nang tinh lai suat vay ngan hang vay tra gop \n");
	printf(" Chuc nang so 7: Xây dung chuong trinh vay tien mua xe \n");
	printf(" Chuc nang so 8: Sap xep thong tin sinh vien \n");
	printf(" Chuc nang so 9: Xay dung game FPOLY-LOTT (2/15) \n");
	printf(" Chuc nang so 10: Xây dung chuong trinh tinh toan phan so \n");
	printf(" Chuc nang so 11: Thoat!!! \n");
	printf("============================================\n");
	printf("Xin moi chon chuc nang: ");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("Chuc nang 1: \n");
			break;
		case 2:
			printf("Chuc nang 2: \n");
			break;
		case 3:
		    printf("Chuc nang 3: \n");
			break;
		case 4:
		    printf("Chuc nang 4: \n");	
			break;
		case 5:
		    printf("Chuc nang 5: \n");
			break;
		case 6:
		    printf("Chuc nang 6: \n");
			break;
		case 7:
		    printf("Chuc nang 7: \n");
		    break;
		case 8:
			printf("Chuc nang 8: \n");
			break;
		case 9:
			printf("Chuc nang 9: \n");
			break;
		case 10:
			printf("Chuc nang 10: \n");
			break;
		case 11:
			printf("Thoat !!!!!..... \n");
			break;
	}
	} while (choose < 1 || choose > 11);
return 0;
}

