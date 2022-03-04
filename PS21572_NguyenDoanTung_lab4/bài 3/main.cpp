#include <stdio.h>
int main() {
	//bai 3
    printf("bai 3 \n");
	int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int b = 0;
    while(b*b <= n){
        if(b*b == n){
            printf("%d la so chinh phuong!\n", n);
            return 0;
        }
        ++b;
    }
    printf("%d khong phai so chinh phuong!\n", n);
	return 0;
}
