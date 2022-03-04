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
    // printf("\nMSVV             |           Ho Va Ten           |           Nganh Hoc           |           Diem Trung Binh\n");
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
	}
