#include <stdio.h>
#include <iostream>


/// khai bao bien cho bai 1,2,3
int a[100];
int n =0;

/// ham nhap mang 1 bai 1,2,3
void nhap(){
	printf("Nhap vao so phan tu n:");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
}

/// ham xuat bai 1
void TBC3(){
	printf("\nTinh TBC so chia het cho 3\n");
	int sum=0;
	int count=0;
	float tbc=0;
		for(int i=0;i<n;i++){
			if(a[i]%3==0){
			printf("a[%d]=%d \t",i,a[i]);
			sum+=a[i];
			count++;
		}
	}
	tbc=sum/count;
	printf("\n co %d so chia het cho 3",count);
	printf("\n sum: %d",sum);
	printf("\n Trung Binh Cong: %.2f",tbc);
}	

/// ham xuat bai 2
void max(){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Phan tu lon nhat la:%d \n",max);
}
void min(){
    int min=a[0];
    for(int i=0;i<n;i++){
    	if(a[i]<min){
    		min=a[i];
    	}
    }
    printf("Phan tu nho nhat la:%d \n",min);
}

/// ham xuat bai 3
void sapxep(){
	printf("\nMang sau khi sap xep giam dan\n");
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Xuat mang ra man hinh\n");
	for(int i=0;i<n;i++){
	printf("a[%d]=%d \t",i,a[i]);
	}
}

/// khai bao bien cho mang 2 chieu bai 4
	int b[100][100];
	int x=0,y=0;
/// ham nhap bai 4
void nhapmang2c(){
	printf("Nhap mang hai chieu\n");
	printf("Nhap hang:");scanf("%d",&x);
	printf("Nhap cot:");scanf("%d",&y);
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("a[%d][%d]=",i,j); 
			scanf("%d",&b[i][j]);
		}	
	}		
}
/// ham xuat bai 4
void xuat(){
		printf("Xuat mang binh phuong cac phan tu\n");
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				printf("Binh Phuong [%d][%d] la =%d \t",i,j,b[i][j]*b[i][j]);
			}
			printf("\n");
		}
	}

///////// menu 
int main() {
	int choose;
	do{
	printf("\n====================MENU====================\n");
	printf(" Bai 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 3 TRONG MANG \n");
	printf(" Bai 2: TIM GIA TRI LON NHAT VÀ NHO NHAT TRONG MANG \n");
	printf(" Bai 3: SAP XEP MANG THEO THU TU GIAM DAN \n");
	printf(" Bai 4: TINH BINH PHUONG CAC PHAN TU TRONG MANG 2 CHIEU \n");
	printf(" Chuc nang : Thoat!!! \n");
	printf("============================================\n");
	printf("Xin moi chon chuc nang: ");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("Chuc nang 1: \n");
			printf("Tinh trung binh tong cac so chia het cho 3 trong mang \n");
			nhap();
			TBC3();
			break;
		case 2:
			printf("Chuc nang 2: \n");
			printf("In ra gia tri nho nhat va lon nhat\n");
			nhap();
			max();
			min();
			break;
		case 3:
		    printf("Chuc nang 3: \n");
			printf("Sap xep mang theo thu tu giam dan\n ");
			nhap();
			sapxep();
			break;
		case 4:
		    printf("Chuc nang 4: \n");	
			printf("Mang hai chieu\n ");
			nhapmang2c();
			xuat();
			break;
		case 5:
			printf("Thoat !!!!!..... \n");
			break;
	}
	} while (choose < 1 || choose > 5);
return 0;
}

