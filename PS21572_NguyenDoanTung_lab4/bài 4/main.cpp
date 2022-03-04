	#include <stdio.h>
	int main() {
		// khai bao bien
		int choose;
		// khai bao bien bai 1 (case 1)
	    int min = 0, max = 0;
		int a= min;
		float sum = 0,Biendem = 0,Trungbinh = 0;
		// khai bao bien bai 2 (case 2)
	    int x,i = 2,conut=0; 
		// khai bao bien bai 3 (case 3)
	    int y,z = 0,counts = 0;
		do{
			printf("\nMENU\n\n");
		printf("Chuc nang 1: Tinh trung binh tong \n");
		printf("Chuc nang 2: tim so nguyen to \n");
		printf("Chuc nang 3: tim so chinh phuong \n");
		printf("Chuc nang 4: Thoat");
		printf("\nXin moi chon chuc nang ( 1,2,3,4): ");
		scanf("%d",&choose);
		switch(choose) {
			case 1:
				printf("chay chuong trinh bai 1: \n");
				printf("Moi nhap min: ");
				scanf("%d",&min);
				printf("Moi nhap max: ");
				scanf("%d",&max);
				// xu ly vong lap
				while(a<=max)
				{
				if(a%2==0)
				{
				sum+=a;
				Biendem++;
				}
				a++;
				}
				Trungbinh=sum/Biendem;
				printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu min toi max la: %.1f \n",Trungbinh);
				break;
			case 2:
	            printf("Chay chuong trinh bai 2: \n");
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
	            break;
			case 3:
			    printf("Chay chuong trinh bai 3: \n");
	            /// nhap du lieu tu ban phim
	            printf("Nhap mot so nguyen: ");
	            scanf("%d", &y);
	
	            /// su ly bai toan
	            while (z <= y)
	            {
	                if (z * z== y)
	                {
	                    counts++;
	                }
	                z++;
	            }if (counts == 0) {
	                printf("%d khong phai la so chinh phuong", y);
	            }else {
	                printf("%d la so chinh phuong", y);
	            }
				break;
			case 4:
	            printf("Chuong trinh da thoat \n");
	            break;
				default:
	            printf("\nBan nhap sai xin moi ban chon lai\n\n");
	            break;
	        }
	} while (choose < 1 || choose > 4);
	    
	return 0;
	}
