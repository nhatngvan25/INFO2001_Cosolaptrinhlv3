#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai báo c?u trúc d? li?u c?a sinh viên
typedef struct {
    char ten[50];
    int maSV;
    float diem;
} SinhVien;

// Hàm d? thêm sinh viên vào t?p tin
void themSinhVien(FILE *file) {
    SinhVien sv;

    printf("Nhap ten sinh vien: ");
    scanf("%s", sv.ten);
    printf("Nhap ma sinh vien: ");
    scanf("%d", &sv.maSV);
    printf("Nhap diem sinh vien: ");
    scanf("%f", &sv.diem);

    fwrite(&sv, sizeof(SinhVien), 1, file);
    printf("Da them sinh vien vao tep tin.\n");
}

// Hàm d? xóa sinh viên t? t?p tin
void xoaSinhVien(FILE *file) {
    int maSV;
    SinhVien sv;
    FILE *tempFile;

    printf("Nhap ma sinh vien can xoa: ");
    scanf("%d", &maSV);

    tempFile = fopen("temp.bin", "wb"); // T?o m?t t?p tin t?m th?i

    while (fread(&sv, sizeof(SinhVien), 1, file)) {
        if (sv.maSV != maSV) {
            fwrite(&sv, sizeof(SinhVien), 1, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("students.bin"); // Xóa t?p tin g?c
    rename("temp.bin", "students.bin"); // Ð?i tên t?p tin t?m thành t?p tin g?c

    printf("Da xoa sinh vien khoi tep tin.\n");
}

// Hàm d? c?p nh?t thông tin sinh viên trong t?p tin
void capNhatSinhVien(FILE *file) {
    int maSV;
    SinhVien sv;
    int found = 0;

    printf("Nhap ma sinh vien can cap nhat: ");
    scanf("%d", &maSV);

    while (fread(&sv, sizeof(SinhVien), 1, file)) {
        if (sv.maSV == maSV) {
            printf("Nhap ten sinh vien: ");
            scanf("%s", sv.ten);
            printf("Nhap diem sinh vien: ");
            scanf("%f", &sv.diem);

            fseek(file, -sizeof(SinhVien), SEEK_CUR); // Di chuy?n con tr? t?p tin tr? l?i v? trí c?a sinh viên c?n c?p nh?t
            fwrite(&sv, sizeof(SinhVien), 1, file);

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ma %d trong tep tin.\n", maSV);
    } else {
        printf("Da cap nhat sinh vien trong tep tin.\n");
    }
}

// Hàm d? d?c và hi?n th? d? li?u t? t?p tin nh? phân
void hienThiSinhVien(FILE *file) {
    SinhVien sv;

    printf("Danh sach sinh vien:\n");

    while (fread(&sv, sizeof(SinhVien), 1, file)) {
        printf("Ten: %s\n", sv.ten);
        printf("Ma sinh vien: %d\n", sv.maSV);
        printf("Diem: %.2f\n", sv.diem);
        printf("-------------------\n");
    }
}

int main() {
    FILE *file;
    int choice;

    file = fopen("students.bin", "ab+"); // M? t?p tin cho phép d?c và ghi, n?u không t?n t?i thì t?o m?i

    if (file == NULL) {
        printf("Khong the mo tep tin.\n");
        return 1;
    }

    do {
        printf("Lua chon:\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. Cap nhat sinh vien\n");
        printf("4. Hien thi danh sach sinh vien\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
    
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                themSinhVien(file);
                break;
            case 2:
                xoaSinhVien(file);
                break;
            case 3:
                capNhatSinhVien(file);
                break;
            case 4:
                hienThiSinhVien(file);
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while (choice != 0);

    fclose(file);

    return 0;
}
