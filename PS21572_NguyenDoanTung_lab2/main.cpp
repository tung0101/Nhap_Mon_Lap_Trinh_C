#include <stdio.h>
#include <math.h>


int main( ) {
	printf("bài 1 \n");
	int a=0;
	int b=0;
	int tong=0;
	int hieu=0;
	printf("hay nhap so thu nhat: ");
	scanf("%d",&a);
	printf("hay nhap so thu hai: ");
	scanf("%d",&b);
	tong=a+b;
	hieu=a-b;
	printf("tong cua hai so la: %d \n",tong);
	printf("hieu cua hai so la: %d \n",hieu);
	//end bài 1
    printf("bài 2 \n");
	int g=0;//g la chieu dai cua hinh chu nhat
	int h=0;//h la chieu rong cua hinh chu nhat
	int P=0;//P la chu vi cua hinh chu nhat
	int S=0;//S la dien tich cua hinh chu nhat
	printf("nhap chieu dai: ");
	scanf("%d",&a);
	printf("nhap chieu rong: ");
	scanf("%d",&b);
	printf("chu vi hinh chu nhat la: %d \n",P=2*(a+b));
	printf("dien tich hinh chu nhat la: %d \n",S=a*b);
	//end bai 2
	printf("bài 3 \n");
	const float PI=3.14;
	int r;
	float c,s; // c và s lan luot la chu vi va dien tinh cua hinh tron
	printf("nhap ban kinh r= ");
	scanf("%d",&r);
	c=r*2*PI;
	s=r*r*PI;
	printf("chu vi hinh tron la C: %f \n",c);
	printf("dien tich hinh tron la S: %f \n",s);
	// end bai 3
	printf("bài 4 \n");
	float m, n, o, trungbinh; // m, n, o, DTB lan luot la diem toan, ly, hoa, diem trung binh
	printf("nhap diem toan: ");
	scanf("%f",&m);
	printf("nhap diem ly: ");
	scanf("%f",&n);
	printf("nhap diem hoa: ");
	scanf("%f",&o);
	trungbinh=(m*3+n*2+o)/6;
	printf("diem trung binh la: %f \n",trungbinh);
	// end bai 4
	printf("bài 5 \n");
	//Bai5: Viet chuong trình tính chu vi hình tam giác voi toa do 3 dinh duoc nhap tu bàn phím
	//goi toa do diem A la A(x1 y1)
	//goi toa do diem B la B(x2 y2)
	//goi toa do diem C la C(x3 y3)
	float x1,x2,x3,y1,y2,y3;
	float AB,BC,CA; // AB, BC, CA lan luot la cac canh cua tam giac
	//goi M là chu vi cua tam giac
	float M;
	printf("nhap toa do diem A: ");
	scanf("%f%f",&x1,&y1);
	printf("nhap toa do diem B: ");
	scanf("%f%f",&x2,&y2);
	printf("nhap toa do diem C: ");
	scanf("%f%f",&x3,&y3);
	AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	BC=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	CA=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	printf("chieu dai canh AB la: %f \n",AB);
	printf("chieu dai canh BC la: %f \n",BC);
	printf("chieu dai canh AC la: %f \n",CA);
	M=AB+BC+CA;
	printf("chu vi tam giac la: %f",M);
   	return 0;
}
