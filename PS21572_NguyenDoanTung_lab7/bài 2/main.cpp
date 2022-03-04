#include <stdio.h>
#include <string.h>
int main(){
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
	return 0;
}
