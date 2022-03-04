#include <stdio.h>
int a[100];
int n=0;
void nhap(){
	printf("Nhap so phan tu n:");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);scanf("%d",&a[i]);
		}
	}
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
int main() 
{
	printf("In ra gia tri nho nhat va lon nhat\n");
	nhap();
	max();
	min();
	return 0;
}
