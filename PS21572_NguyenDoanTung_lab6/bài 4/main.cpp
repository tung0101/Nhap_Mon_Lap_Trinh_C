#include <stdio.h>
int a[100][100];
int n=0,m=0;
void nhap(){
	printf("Nhap mang hai chieu\n");
	printf("Nhap hang:");scanf("%d",&n);
	printf("Nhap cot:");scanf("%d",&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]=",i,j); 
			scanf("%d",&a[i][j]);
		}	
	}		
}
void xuat(){
		printf("Xuat mang binh phuong cac phan tu\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("Binh Phuong [%d][%d] la =%d \t",i,j,a[i][j]*a[i][j]);
			}
			printf("\n");
		}
	}
int main(){
	printf("Mang hai chieu\n ");
	nhap();
	xuat();
	return 0;
}
