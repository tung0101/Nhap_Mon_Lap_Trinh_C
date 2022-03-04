#include <stdio.h>
int a[100];
int n=0;
void nhap(){
	printf("Nhap so phan tu n:");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
	}
}

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

int main() 
{
	printf("Sap xep mang theo thu tu giam dan\n ");
	nhap();
	sapxep();
	return 0;
}
