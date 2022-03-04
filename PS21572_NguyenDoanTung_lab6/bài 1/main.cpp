#include <stdio.h>
int a[100];
int n =0;
void nhap(){
	printf("Nhap vao so phan tu n:");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
}
void TBC3(){
	printf("\nTinh TBC so chia het cho 3\n");
	float sum=0;
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

int main() {
	printf("Tinh trung binh tong cac so chia het cho 3 trong mang \n");
	nhap();
	TBC3();
	return 0;
}
