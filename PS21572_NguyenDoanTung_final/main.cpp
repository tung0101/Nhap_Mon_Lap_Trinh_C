#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
/// chuc nang so 1: kiem tra so nguyen ///
int cn1(float so){
    int i;
    int n = 0;
    int a = 0;
    int b = 0;
    /// input
    printf("Vui long nhap so can kiem tra: ");
    scanf("%f", &so); //so=7
    if (so == (int)so)
	{
	printf("\n%.2f la so Nguyen\n",so);
        // Xet so nguyen to
        for (i = 2; i < so; i++){
            if ((int)so % i == 0){
                b++;
            }
        }
        if (b > 0){
		printf("%.2f khong phai la so Nguyen to\n",so);
        }else{
            printf("%.2f la so Nguyen to\n",so);}
        /// xet so chinh phuong
        for (n = 0; n < so; n++){
            if (n * n == so){
                a++;
            }
        }if (a > 0){
            printf("%.2f la so chinh phuong \n",so);
        }else{
            printf("%.2f khong la so chinh phuong \n",so);}
    }else{
	printf("%.2f khong phai la so Nguyen \n", so);
    }
    return 0;
}

/// chuc nang so 2: Tim Uoc so chung va boi so chung cua 2 so ////
/// Tim uoc so chung lon nhat (USCLN)
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
// Tim boi so chung nho nhat (BSCNN)
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
// Nhap va tim USCLN, BSCNN
int cn2(int a,int b)
{
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	// tinh USCLN cua a và b
	printf("Uoc so chung lon nhat cua %d va %d la: %d \n", a, b, USCLN(a, b));
	// tinh BSCNN cua a và b
	printf("Boi so chung nho nhat cua %d va %d la: %d \n", a, b, BSCNN(a, b));
}
			   
			    
/// chuc nang so 3: tinh tiên cho quan karaoke
void cn3()
{
	// input
	double tienthanhtoan;
	int gioBD,gioKT;
	int sogiohat = gioKT - gioBD;
	do{
		printf("Hay nhap vao gio bat dau: ");scanf("%d",&gioBD);
	}while(gioBD<12||gioBD>23);
	     do{
	   	printf("Hay nhap vao gio ket thuc: ");scanf("%d",&gioKT);
	   	}while(gioKT<12||gioKT>23);
	   	if(gioBD>gioKT){
	   		int c=gioBD;
	   		gioBD=gioKT;
	   		gioKT=c;
	   	}
	   	printf("gio bat dau hat: %dh \ngio ket thuc hat: %dh \n",gioBD,gioKT);
	   	if(gioBD==gioKT){
	   		printf("So gio hat la: %d \n ",sogiohat);
	   	}else{
		   if(sogiohat<=3){
		tienthanhtoan = 150000*sogiohat;
		}else{
			tienthanhtoan=3*150000+(sogiohat-3)*0,7*150000;	
		}
		}
	if(gioBD>=14 && gioBD <=17){// giam 10% thì con 90% 
		tienthanhtoan = tienthanhtoan*0.9;
		}
	/// output
	printf(" So tiên quy khach can thanh toan: %.0f \n",tienthanhtoan);
}

/// chuc nang so 4: tinh tien dien ////
void cn4()
{
	int so_dien_Sd;
	float sotien;    
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
	printf("so tien dien can phai tra la: %.3f \n", sotien);
}



/// chuc nang so 5: chuc nang doi tien 
void cn5(){
	int sotien,i,j;
	do{
		printf("Hay nhap vao so tien can doi: ");
		scanf("%ld",&sotien);
	}while(sotien<=1);
	int tien=sotien;
	printf("%ldk VND = \n",sotien);
	int menhgia[9]={500,200,100,50,20,10,5,2,1};
	for(i=0;i<9;i++){
		if(i==0){
			while(sotien<=menhgia[i]){
				i++;
			}
		}
		j=(int)(sotien/menhgia[i]);
		printf("co %d to %dk VND \n",j,menhgia[i]);
		sotien-=(j*menhgia[i]);
		if(sotien==0){
			break;
		}
	}
}



/// chuc nang so 6: tính lãi xuat vay ngân hàng vay tra góp
int cn6(){
	printf("Bang lai xuat vay ngan hang \n");
	int tienvay=0;
	printf("Hay nhap so tien ma ban muon vay:");
	scanf("%d",&tienvay);
	int tienlai;///tien lai hang thang
	int tiengoc= tienvay/ 12; /// tien goc phai tra hang tháng
	int tientra; /// tien phai tra hang thang = tien goc + tien lai
	int tiencon; // tien con lai sau khi tra tien goc
	tiencon = tienvay;
	printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai |\n");
	    for(int i=1; i<=12; i++){
	    	tienlai=tiencon*0.05;
	    	tientra=tiengoc+tienlai;
	    	tiencon=tiencon-tiengoc;
		    	printf("---------------------------------------------------------------------------\n");
		    	printf("%6d |",i);
		    	printf("%13d |",tienlai);
		    	printf("%13d |",tiengoc);
		    	printf("%17d |",tientra);
		    	printf("%16d |",tiencon);
		    	
		    	printf("\n");
		}
}

void cn7(){
	float soPhanTramVay, giaTienxe, thoiHanVay;
	printf("Xin moi nhap vao gia tien cua chiec xe quy khach muon mua: "); scanf("%f",&giaTienxe);
	
	printf("Xin moi nhap vao so phan tram vay toi da: "); scanf("%f",&soPhanTramVay);
	
	printf("Xin moi nhap vao thoi han vay( <= 24 thang): "); scanf("%f",&thoiHanVay);
	
		float thoiHanVayToiDa = 24;
		float laiSuatCoDinhNam = 0.072;
		float tienDuocVayCoDinh = 500000000;
		float tienTraLanDau, tienTraHangThang, tienVay, tienLaiHangThang, tienvayPhaiTraMoiNam, tienvayPhaiTraMoiThang;
	
	                     tienTraLanDau = ((100-soPhanTramVay)/100)*giaTienxe;
	
			tienVay = giaTienxe-tienTraLanDau;
			tienvayPhaiTraMoiNam = tienVay/thoiHanVay;
			tienLaiHangThang = tienVay*(0,072/12);
			tienvayPhaiTraMoiThang = tienvayPhaiTraMoiNam / 12;
			tienTraHangThang = tienvayPhaiTraMoiThang + tienLaiHangThang;
			
	if((tienVay <= tienDuocVayCoDinh) && (thoiHanVay <= thoiHanVayToiDa)){
		printf("So tien phai tra lan dau cua quy khach la: %.2f VND\n",tienTraLanDau);
		printf("So tien phai tra hang thang cho den het ki han vay la: %.2f VND\n",tienTraHangThang);
		}
	
	
}


///// chuc nang 8 /////////

	

struct SinhVien{
	char hoTen[100];
    float diemTB;
		
};	

void cn8(){
	
    int i,n;
	struct SinhVien mangSV[100];
    printf("Moi nhap so luong sinh vien: "); 
	scanf("%d",&n);
    
    for(i=0;i<n;i++){
    	/// nhap mang
    	fflush(stdin);
    	printf("Nhap Ho ten sinh vien thu %d: ",i+1);
		gets(mangSV[i].hoTen);
    	printf("Nhap diem TB cho sinh vien thu %d: ",i+1);
        scanf("%f",&mangSV[i].diemTB);
        getchar();
    	}
    /// sap xep  du lieu
    int j;
    for(i=0;i<n-1;i++){
    	for(j=i+1;j<n;j++){
    		if(mangSV[i].diemTB<mangSV[j].diemTB){
    			float diemTam=mangSV[i].diemTB;
    			mangSV[i].diemTB=mangSV[j].diemTB;
    			mangSV[j].diemTB=diemTam;
    			
    			char tenTam[50];
    			strcpy(tenTam,mangSV[j].hoTen);
    			strcpy(mangSV[j].hoTen,mangSV[i].hoTen);
    			strcpy(mangSV[i].hoTen,tenTam);
    			}
    		}	
    	}
    	
    /// output	
	printf("danh sach sinh vien sau khi sap xep: \n");	
	for(int i=0;i<n;i++)
		{
	    printf("\nHo ten sinh vien: %s ",mangSV[i].hoTen);
	    printf("\nDiem TB: %.1f  ",mangSV[i].diemTB);
	    	
	    	if(mangSV[i].diemTB>=9)
			{
	    		printf("\nHoc luc: xuat sac \n");
	    		}
				else
				{
				 if(mangSV[i].diemTB>=8)
				 {
	    			printf("\nHoc luc: gioi \n");	
				}
				else
				{
				 if(mangSV[i].diemTB>=6.5)
				 {
					printf("\nHoc luc: kha \n");
				}
				else
				{
				if(mangSV[i].diemTB>=5)
				{
					printf("\nHoc luc: trung binh \n");
					}
					else
					{
						printf("\nHoc luc: yeu \n");
					}
				}
			}
		}
	}
}

//// chuc nang 9 //////
void cn9(){
	printf("Chuong trinh tro choi FPOLY LOTT \n");
	int random;
	int NumberA, NumberB;
	int count;
	printf("Moi ban lua chon so thu nhat: ");
	scanf("%d",&NumberA);
	printf("Moi ban lua chon so thu hai: ");
	scanf("%d",&NumberB);
	srand(time(0));
	printf("So trung thuong \n");
	for(int i=0;i<2;i++){
		random= rand() % 15;
		printf("%10d ",random);
		if(NumberA==random || NumberB==random){
			count++;
		}
	}
	if(count==0){
		printf("\n Chuc ban may man lan sau\n");
		}else{
			if(count==1){
				printf("\n Chuc Mung ban da trung giai Nhi\n");
				}else{
					printf("\n Chuc Mung ban da trung giai Nhat\n");
				}
		}
}


/// chuc nang so 10 /////




void cn10(){
	struct Phanso{
		int tuSo;
		int mauSo;	
	};
	
	struct Phanso so1,so2,tong,hieu,tich,thuong;
	printf("Tu so thu nhat: "); scanf("%d",&so1.tuSo);
	printf("Mau so thu nhat: "); scanf("%d",&so1.mauSo);
	printf("Tu so thu hai: "); scanf("%d",&so2.tuSo);
	printf("Mau so thu hai: "); scanf("%d",&so2.mauSo);
	
	/// tinh tich cua 2 phan so 
	tich.tuSo=so1.tuSo*so2.tuSo;
	tich.mauSo=so1.mauSo*so2.mauSo;
	
	/// tinh thuong cua 2 phan so
	thuong.tuSo=so1.tuSo*so2.mauSo;
	thuong.mauSo=so1.mauSo*so2.tuSo;
	
	/// tinh tong cua 2 phan so
	tong.tuSo=so1.tuSo*so2.mauSo+so2.tuSo*so1.mauSo;
	tong.mauSo=so1.mauSo*so2.mauSo;
	
	/// tinh hieu cua 2 phan so
	hieu.tuSo=so1.tuSo*so2.mauSo-so2.tuSo*so1.mauSo;
	hieu.mauSo=so1.mauSo*so2.mauSo;
	
	//// xuat 
	printf("Tong cua 2 phan %d/%d và %d/%d la: %d/%d \n",so1.tuSo, so1.mauSo, so2.tuSo, so2.mauSo, tong.tuSo, tong.mauSo);
	printf("Hieu cua 2 phan %d/%d và %d/%d la: %d/%d \n",so1.tuSo, so1.mauSo, so2.tuSo, so2.mauSo, hieu.tuSo, hieu.mauSo);
	printf("Tich cua 2 phan %d/%d và %d/%d la: %d/%d \n",so1.tuSo, so1.mauSo, so2.tuSo, so2.mauSo, tich.tuSo, tich.mauSo);
	printf("Thuong cua 2 phan %d/%d và %d/%d la: %d/%d \n",so1.tuSo, so1.mauSo, so2.tuSo, so2.mauSo, thuong.tuSo, thuong.mauSo);	
}


  
    
/// ---------------------------MENU---------------------///
int main() {
	// khai bao bien case 1
	float so;
	// khai bao bien case 2
	int a,b;
	/// khai bao bien case3
	double tienthanhtoan;
	// khai bao bien cho menu
	int choose;
	while(1){
		printf("\t\t_______________________________>>> MENU <<<_____________________________________________________\n");
		printf("\t\t|\tChuc nang so 1: Chuong trinh Kiem tra so nguyên                                         |\n");
		printf("\t\t|\tChuc nang so 2. Chuong trinh Tim Uoc so chung và boi so chung cua 2 so                  |\n");
		printf("\t\t|\tChuc nang so 3: Chuong trinh Tinh tien cho quan Karaoke                                 |\n");
		printf("\t\t|\tChuc nang so 4: Chuong trinh Tinh tien dien                                             |\n");
		printf("\t\t|\tChuc nang so 5: Chuong trinh Doi tien                                                   |\n");
		printf("\t\t|\tChuc nang so 6: Chuong trinh Tinh lai suat vay ngan hang vay tra gop                    |\n");
		printf("\t\t|\tChuc nang so 7: Chuong trinh Vay tien mua xe                                            |\n");
		printf("\t\t|\tChuc nang so 8: Chuong trinh Sap xep thong tin sinh vien                                |\n");
		printf("\t\t|\tChuc nang so 9: Chuong trinh Xay dung game FPOLY-LOTT (2/15)                            |\n");
		printf("\t\t|\tChuc nang so 10: Chuong trinh Tinh toan phan so                                         |\n");
		printf("\t\t|_______________________________________________________________________________________________|\n\n\n");
	printf("\t\t\tXin moi chon chuc nang: ");
	scanf("%d", &choose);
		switch(choose) {
			case 1:
				printf("\t\t\tChuc nang so 1: Chuong trinh Kiem tra so nguyên \n"); 
				cn1(so); 
				break;
			case 2:
			    printf("\t\t\tChuc nang so 2. Chuong trinh Tim Uoc so chung và boi so chung cua 2 so \n");
				cn2(a,b);
				break;
			case 3:
			    printf("\t\t\tChuc nang so 3: Chuong trinh Tinh tirn cho quan Karaoke \n");
			    cn3();
				break;
			case 4:
			    printf("\t\t\tChuc nang 4: Chuong trinh Tinh tien dien \n");
			    cn4();
				break;
			case 5:
			    printf("\t\t\tChuc nang 5: Chuong trinh Doi tien \n");
			    cn5();
				break;
			case 6:
			    printf("\t\t\tChuc nang 6: Chuong trinh Tinh lai suat vay ngan hang vay tra gop  \n");
			    cn6();
				break;
			case 7:
			    printf("\t\t\tChuc nang 7: Chuong trinh Vay tien mua xe \n");
			    cn7();
			    break;
			case 8:
				printf("\t\t\tChuc nang 8: Chuong trinh Sap xep thong tin sinh vien \n");
				cn8();
				break;
			case 9:
				printf("\t\t\tChuc nang 9: Chuong trinh Xay dung game FPOLY-LOTT (2/15) \n");
				cn9();
				break;
			case 10:
				printf("\t\t\tChuc nang 10: Chuong trinh Tinh toan phan so \n");
				cn10();
				break;
			default:
				printf("\t\t\t So ban nhap khong hop le !!!!! \n\t\t\t Vui long nhap lai \n");
				break;
		}
char c[1];
printf("\n\t\tNhap 0 de dung chuong trinh");
printf("\n\t\tNhap 1 de tiep tuc chuong trinh");
printf("\n\t\t Moi nhap so: ");
scanf("%s",&c);
system("cls");
if(strcmp(c,"0")==0){break;}
}
}
