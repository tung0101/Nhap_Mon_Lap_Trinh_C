#include<stdio.h>
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
	printf("\n%.0f la so Nguyen\n",so);
        // Xet so nguyen to
        for (i = 2; i < so; i++){
            if ((int)so % i == 0){
                b++;
            }
        }
        if (b > 0){
		printf("%.0f khong phai la so Nguyen to\n",so);
        }else{
            printf("%.0f la so Nguyen to\n",so);}
        /// xet so chinh phuong
        for (n = 0; n < so; n++){
            if (n * n == so){
                a++;
            }
        }if (a > 0){
            printf("%.0f la so chinh phuong",so);
        }else{
            printf("%.0f khong la so chinh phuong",so);}
    }else{
	printf("%.0f khong phai so Nguyen \n", so);
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
	printf(" So tiên quy khach can thanh toan: %.0f",tienthanhtoan);
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
	do{
	printf("\t\t\t___________________________________MENU______________________________________\n");
	printf("\t\t\t|Chuc nang so 1: Kiem tra so nguyên                                         |\n");
	printf("\t\t\t|Chuc nang so 2. Tim Uoc so chung và boi so chung cua 2 so                  |\n");
	printf("\t\t\t|Chuc nang so 3: Chuong trinh tinh tirn cho quan Karaoke                    |\n");
	printf("\t\t\t|Chuc nang so 4: Tinh tien dien                                             |\n");
	printf("\t\t\t|Chuc nang so 5: Chuc nang doi tien                                         |\n");
	printf("\t\t\t|Chuc nang so 6: Xây dung chuc nang tinh lai suat vay ngan hang vay tra gop |\n");
	printf("\t\t\t|Chuc nang so 7: Xây dung chuong trinh vay tien mua xe                      |\n");
	printf("\t\t\t|Chuc nang so 8: Sap xep thong tin sinh vien                                |\n");
	printf("\t\t\t|Chuc nang so 9: Xay dung game FPOLY-LOTT (2/15)                            |\n");
	printf("\t\t\t|Chuc nang so 10: Xây dung chuong trinh tinh toan phan so                   |\n");
	printf("\t\t\t|___________________________________________________________________________|\n");
	printf("Xin moi chon chuc nang: ");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("Chuc nang 1: \n");
			cn1(so);
			break;
		case 2:
			printf("Chuc nang 2: \n");
			cn2(a,b);
			break;
		case 3:
		    printf("Chuc nang 3: \n");
		    cn3();
			break;
		case 4:
		    printf("Chuc nang 4: \n");
		    cn4();
			break;
		case 5:
		    printf("Chuc nang 5: \n");
		    cn5();
			break;
		case 6:
		    printf("Chuc nang 6: \n");
		    cn6();
			break;
		case 7:
		    printf("Chuc nang 7: \n");
		    break;
		case 8:
			printf("Chuc nang 8: \n");
			break;
		case 9:
			printf("Chuc nang 9: \n");
			break;
		case 10:
			printf("Chuc nang 10: \n");
			break;
        default:
            break;
        }
    } while (choose <= 1 || choose < 10);
    
}
