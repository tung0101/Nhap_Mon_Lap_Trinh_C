#include<stdio.h>
#include<string.h>
int main(){
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
