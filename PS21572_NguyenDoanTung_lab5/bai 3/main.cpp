#include <stdio.h>
void hoanvi(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int a, b;
    printf("Nhap so a:");
    scanf("%d", &a);
    printf("Nhap so b:");
    scanf("%d", &b);
    printf("\nBan da nhap:\na = %d \nb = %d\n", a, b);
    hoanvi(&a, &b);
    printf("\nSau khi hoanvi:\na = %d\nb = %d \n", a, b);
    return 0;
}
	
