#include<stdio.h>
#include<string.h>
///// bai 1
void bai1(){
	char chuoi[100];
	int i=0;
	int n=0;///dem nguyen am
	int p=0; ///dem phu am
					printf("In so nguyen am va phu am trong chuoi \n");	
					printf("Nhap mot chuoi: "); 
					scanf("%c",&chuoi);
					gets(chuoi);
					while(chuoi[i] !='\0'){
						if(chuoi[i]=='a'|| chuoi[i]=='i'|| chuoi[i]=='e'|| chuoi[i]=='u'|| chuoi[i]=='o'){
							n++;
							}else if(chuoi[i]==' '){
								
								
								}else{
								p++;
							}
						i++;
						}
						printf("Chuoi < %s > co chua: %d nguyen am va %d phu am.", chuoi, n, p);
}
//// bai 2
void bai2(){
	char UserSys[]={"admin"};
	char PassSys[]="12345";
	char User[100];
	char Pass[100];
		do
				{
					fflush(stdin);
					printf("\nnhap Tai Khoan: ");
					gets(User);
					printf("Nhap mat khau: ");
					gets(Pass);
					if(strcmp(User,UserSys)==0 && strcmp(Pass,PassSys)==0){
						printf("Dang nhap thanh cong \n");
					}else{
						printf("Dang nhap that bai \n");
					}
				}while(strcmp(User, UserSys)!=0 || strcmp(Pass, PassSys)!=0);
}
//// bai 3
void bai3(){
								char chuoi[5][20];
				printf("\n Nhap 5 chuoi bat ky \n");
				for(int i = 0; i<5; i++){
					fflush(stdin);
					printf("\t chuoi[%d]= ",i); gets(chuoi[i]);
				}
				
				for(int i=0;i<5;i++){
					for(int j=0;j<5;j++){
						if(strcmp(chuoi[j],chuoi[i])>0){
							char tmp[20];
							strcpy(tmp, chuoi[i]);
							strcpy(chuoi[i], chuoi[j]);
							strcpy(chuoi[j], tmp);
						}
					}
				}
				printf("\n Cac chuoi sau khi sap sep la: ");
				for(int i=0;i<5;i++){
					printf("%s,   ",chuoi[i]);
			    }
			}
int main() {
	///// khai bao bien case 1	
	int choose;
	do{
	printf("\n====================MENU====================\n");
	printf(" BÀI 1: XAY DUNG CHUONG TRINH ÐEM NGUYEN AM VA PHU AM CUA 1 CHUOI \n");
	printf(" BÀI 2: XAY DUNG CHUONG TRINH ÐANG NHAP BANG USERNAME VA PASSWORD \n");
	printf(" Bài 3: XAY DUNG CHUONG TRINH SAP XEP CHUOI THEO CHU CAI \n");
	printf(" Thoat!!! \n");
	printf("============================================\n");
	printf("Xin moi nhap bai muon xem: ");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("Bai 1: \n");
			bai1();
			break;
		case 2:
			printf("Bai 2: \n");
			bai2();
			break;
		case 3:
			printf("Bai 3: \n");
			bai3();
			break;
        case 4:
            printf("\tChuong trinh da thoat\n");
            break;
        default:
            break;
        }
    } while (choose <= 1 || choose< 4);
    
}
