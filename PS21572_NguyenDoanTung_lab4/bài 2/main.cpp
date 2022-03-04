#include <stdio.h>

int main() {
	//bài 2
	printf("Bài 2 \n");
	int i=2,x,conut=0;  
    printf("Nhap so x: ");
	scanf("%d",&x);
	//xu ly vong lap  
    while(i<=x)
    {
        if(x%i==0){
		conut++;
		}
		i++;
     }     
    if (conut==1){
    	 printf("\n%d la so nguyen to \n",x);
    }else{
        printf("\n%d khong phai so nguyen to \n",x);
    }
    //end bai 2
	return 0;
}
