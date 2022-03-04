#include<stdio.h>
#include<string.h>
//// tao kieu du lieu sinh vien
struct SinhVien {
    char mssv[50];
    char TenSv[50];
    char NganhHoc[50];
    float DiemTb;
} MangSv[50];   /// khai bao mang sinh vien 
/// ham luu tru thong tin sinh vien
void NhapSv(struct SinhVien *MangSv) {
    fflush(stdin);
    printf("Nhap MSSV: "); gets((*MangSv).mssv);
    printf("Nhap Ten Sinh Vien: "); gets((*MangSv).TenSv);
    printf("Nhap Nganh Hoc: "); gets((*MangSv).NganhHoc);
    printf("Nhap Diem TB: "); scanf("%g", & (*MangSv).DiemTb);
    printf("\n");
}

void XuatSv(struct SinhVien MangSv) {
    // printf("\nDanh Sach cach Sinh Vien\n");
    // printf("\nMSVV             |           Ho Va Ten           |           Nganh Hoc           |           Diem Trung Binh\n")
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("%16s |", MangSv.mssv);
    printf("%30s |", MangSv.TenSv);
    printf("%30s |", MangSv.NganhHoc);
    printf("%26g |", MangSv.DiemTb);
    printf("\n"); 
}

void XuatDs(struct SinhVien MangSv[50], int n) {
    printf("\nMSVV             |           Ho Va Ten           |           Nganh Hoc           |           Diem Trung Binh\n");
    for (int i = 0; i < n; i++) {
        XuatSv(MangSv[i]);
    }  
}

void SapXepDtb(struct SinhVien MangSv[50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (MangSv[i].DiemTb > MangSv[j].DiemTb) {
                struct SinhVien SvTemp;     /// tao ra 1 bien tam de doi vi tri
                SvTemp = MangSv[i];
                MangSv[i] = MangSv[j];
                MangSv[j] = SvTemp;
            }
        }
    }   
}

void TimKiem(struct SinhVien MangSv[30], int n) {
    char msv[10];
    fflush(stdin);
    printf("\n\nNhap Ma so Sinh Vien Can Tim: "); gets(msv);
    printf("\nMSVV             |           Ho Va Ten           |           Nganh Hoc           |           Diem Trung Binh\n");
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(msv, MangSv[i].mssv) == 0) {
            XuatSv(MangSv[i]);
            check = 1;
        }
    }
    if (check == 0) {
        printf("\n\nKhong Tim Thay Ma Sinh Vien Trong Danh Sach\n");
    }
}



int main(){
	int n;
	printf("\nNhap So luong sinh Vien: "); scanf("%d", &n);
	//// nhap thong tin sinh vien
	for (int i = 0; i < n; i++) {
	printf("\n\t Sinh Vien Thu %d\n", i);
	NhapSv(&MangSv[i]);
	}
	//// xuat thong tin sinh vien ra man hinh
	SapXepDtb(MangSv, n);
	printf("\tDS Sinh Vien Sau Khi Sap Xep Theo Thu Tu Tang dan           \n");
	XuatDs(MangSv, n);
	/// Xuat Thong Tin Cua Sinh Vien Can Tim
	TimKiem(MangSv, n);
}
