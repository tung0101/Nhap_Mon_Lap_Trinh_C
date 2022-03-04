#include <stdio.h>
#include <string.h>
struct mangDV{
    char tenDV[50];
	float thoiluong;
	float gia;
	float thanhtien;	
}mangDV[50];
int main(){
	int n,i;
	int count=0;
	printf("nhap so dich vu ma ban chon :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("ten dich vu thu %d:\n",i+1);
		gets(mangDV[i].tenDV);
		printf(" thoi luong su dung cua dich vu thu %d:\n",i+1);
		scanf("%f",&mangDV[i].thoiluong);
		printf("gia dich vu 1 gio cua dich du thu %d:\n",i+1);
		scanf("%f",&mangDV[i].gia);
	}
	for(i=0;i<n;i++){
	    printf("ten dich vu: %s\n",mangDV[i].tenDV);
	    mangDV[i].thanhtien = (mangDV[i].thoiluong * mangDV[i].gia);
	    printf("thanh tien: %f\n",mangDV[i].thanhtien);
	}
	struct mangDV o;
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(mangDV[i].thanhtien<mangDV[j].thanhtien){
					o=mangDV[i];
					mangDV[i]=mangDV[j];
					mangDV[j]=o;
            }
        }
    }
		printf("dich vu co thanh tien phai tra nhieu nhat: \n");
		printf("ten dich vu: %s\n",mangDV[0].tenDV);
		printf("thanh tien: %f\n",mangDV[0].thanhtien);
	return 0;
}
