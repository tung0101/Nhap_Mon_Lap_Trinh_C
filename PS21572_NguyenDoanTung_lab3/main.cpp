#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	//bai 4:
	printf("\nBài 4 \n");
	printf("\n MENU cac chuong trinh \n");
	printf("|1. chuong trinh tinh hoc luc cua sinh vien\n");
	printf("|2. chuong trinh giai phuong trinh bac 1\n");
	printf("|3. chuong trinh giai phuong trinh bac 2\n");
	printf("|4. chuong trinh tinh tien dien\n");
	printf("|5. Thoat chuong trinh:\n");
	int choose;
	printf("Xin moi chon chuc nang (1, 2, 3, 4, 5): ");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("chuong trinh tinh hoc luc cua sinh vien");
	        float diem;
	        printf("\nNhap diem hoc sinh:  ");
	        scanf("%f",&diem);
	        if(diem>=9){
	        printf("hoc luc xuat sac \n");
	        }else if(9>diem>=8){
	        printf("hoc luc gioi \n");
	        }else if(8>diem>=6.5){
	        printf("hoc luc kha \n");
	        }else if(6.5>diem>=5){
        	printf("hoc luc trung binh \n");
        	}else if(5>diem>3.5){
        	printf("hoc luc yeu \n");
	        }else {
        	printf("hoc luc kem \n");
        	}
			break;
		case 2:	
			printf("chuong trinh giai phuong trinh bac 1");
			float a,b;
            printf("\nNhap he so a: ");
            scanf("%f",&a);
            printf("\nNhap he so b: ");
            scanf("%f",&b);
            if(a==0){
        	if(b==0){
            printf("Phuong trinh vo so nghiem");
            }else{       
            printf("Phuong trinh vo nghiem");}
            }else{         
            printf("\nPhuong trinh co nghiem x=%g",-b/a);}
			break;
		case 3:	
			printf("chuong trinh giai phuong trinh bac 2");
			float a2, b2, c2, delta;
            float x1, x2;
            printf("nhap gia tri A: ");
            scanf("%f", &a2);
            printf("nhap gia tri B: ");
            scanf("%f", &b2);
            printf("nhap gia tri C: ");
            scanf("%f", &c2);
            if (a2 == 0){
            //bx + c = 0 ----> thanh pt bac 1
            printf("Error: day la phuong trinh bac 1"); 
            }else {
            delta = b2 * b2 - 4 * a2 * c2;
            if (delta < 0) {
			 printf("phuong trinh vo nghiem");
             }else if (delta == 0) {
                 x1 = - b2 / (2 * a2);
             //in ra ket qua 
              printf("phuong trinh co hai nghiem kep la: %.2f", x1);
			   }else {     //// delta > 0
                 x1 = (-b2 + sqrt(delta)) / (2*a2);
                 x2 = (-b2 - sqrt(delta)) / (2*a2);
			     //in rat ket qua
                 printf("phuong trinh co 2 nghiem la: x1 = %.2f va x2 = %.2f", x1, x2);}
				 }
			break;
		case 4:	
			printf("chuong trinh tinh tien dien");
			int so_dien_Sd;
            float sotien;    
            printf("\n\nbai 3: chuong trinh tinh tien dien\n");
            //nhap so tien dien
            printf("nhap so tien dien hang thang: ");
            scanf("%d", &so_dien_Sd);
            //tinh tien dien
            if (so_dien_Sd <= 50) {
			 sotien = so_dien_Sd * 1678;
             }else if (so_dien_Sd <= 100) {
			 sotien = 50 * 1678 + (so_dien_Sd - 50) * 1734;
			 }else if (so_dien_Sd <= 200) {
			 sotien = 50 * 1678 + 50 * 1734 + (so_dien_Sd - 100) * 2014;
			 }else if (so_dien_Sd <= 300) {
			 sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (so_dien_Sd - 200) * 2536;
			 }else if (so_dien_Sd <= 400) {
			 sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (so_dien_Sd - 300) * 2834;
			 }else {
			 sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (so_dien_Sd - 400) * 2927;}
			 printf("so tien dien can phai tra la: %f", sotien);
			break;		
		case 5:
			break;
		default:
			printf("chon chuc nang khong dung");
			break;
	}
    return 0;
}

