#include<stdio.h>
#include<string.h>
int main(){
	printf("In so nguyen am va phu am trong chuoi \n");	
    char chuoi[100];
	printf("Nhap mot chuoi: "); 
	gets(chuoi);
	int i=0;
	int n=0; ///dem nguyen am
	int p=0; ///dem phu am
	while(chuoi[i] !='\0'){
		if(chuoi[i]=='a'|| chuoi[i]=='i'|| chuoi[i]=='e'|| chuoi[i]=='u'|| chuoi[i]=='o'){
			n++;
			}else if(chuoi[i]==' '){
				
				
				}else{
				p++;
			}
		i++;
		}
		printf("Chuoi < %s > co chua: %d nguyen am va %d phu am.", chuoi, n, p);
}

