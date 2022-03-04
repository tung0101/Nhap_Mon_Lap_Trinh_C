#include <stdio.h>
int main() {
    printf("Bai 1 \n");
	int min,max;
	int i=min;
	float sum=0,Biendem=0,Trungbinh=0;
	printf("Moi nhap min: ");
	scanf("%d",&min);
	printf("Moi nhap max: ");
	scanf("%d",&max);
	// xu ly vong lap
	while(i<=max)
	{
		if(i%2==0)
		{
		sum+=i;
		Biendem++;
		}
		i++;
	}
	Trungbinh=sum/Biendem;
	printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu min toi max la: %0.1f \n",Trungbinh);
	//end bài 1
	return 0;
}
