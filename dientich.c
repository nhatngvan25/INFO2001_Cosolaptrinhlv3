#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    int choice;
    
    printf("Chon hinh can tinh:\n");
    printf("1. Tam giac\n");
    printf("2. Hinh vuong\n");
    printf("3. Hinh chu nhat\n");
    printf("4. Hinh tron\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: {
            float a, b, c;
            
            printf("Nhap canh a cua tam giac: ");
            scanf("%f", &a);
            
            printf("Nhap canh b cua tam giac: ");
            scanf("%f", &b);
            
            printf("Nhap canh c cua tam giac: ");
            scanf("%f", &c);
            
            if (a + b > c && b + c > a && c + a > b) {
                // T�nh chu vi tam gi�c
                float chuVi = a + b + c;
                
                // T�nh di?n t�ch tam gi�c b?ng c�ng th?c Heron
                float p = chuVi / 2; // N?a chu vi
                float dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
                
                printf("Chu vi cua tam giac la: %.2f\n", chuVi);
                printf("Dien tich cua tam giac la: %.2f\n", dienTich);
            } else {
                printf("Ba canh a, b, c khong tao thanh tam giac.\n");
            }
            
            break;
        }
        case 2: {
            float canh;
            
            printf("Nhap do dai canh cua hinh vuong: ");
            scanf("%f", &canh);
            
            if (canh > 0) {
                // T�nh chu vi h�nh vu�ng
                float chuVi = 4 * canh;
                
                // T�nh di?n t�ch h�nh vu�ng
                float dienTich = canh * canh;
                
                printf("Chu vi cua hinh vuong la: %.2f\n", chuVi);
                printf("Dien tich cua hinh vuong la: %.2f\n", dienTich);
            } else {
                printf("Do dai canh cua hinh vuong phai lon hon 0.\n");
            }
            
            break;
        }
        case 3: {
            float chieuDai, chieuRong;
            
            printf("Nhap chieu dai cua hinh chu nhat: ");
            scanf("%f", &chieuDai);
            
            printf("Nhap chieu rong cua hinh chu nhat: ");
            scanf("%f", &chieuRong);
            
            if (chieuDai > 0 && chieuRong > 0) {
                // T�nh chu vi h�nh chu nhat
                float chuVi = 2 * (chieuDai + chieuRong);
                
                // T�nh di?n t�ch h�nh chu nhat
                float dienTich = chieuDai * chieuRong;
                
                printf("Chu vi cua hinh chu nhat la: %.2f\n", chuVi);
                printf("Dien tich cua hinh chu nhat la: %.2f\n", dienTich);
            } else {
                printf("Chieu dai va chieu rong cua hinh chu nhat phai lon hon 0.\n");
            }
            
            break;
        }
        case 4: {
            float banKinh;
            
            printf("Nhap ban kinh cua hinh tron: ");
            scanf("%f", &banKinh);
            
            if (banKinh > 0) {
                // T�nh chu vi h�nh tr�n
                float chuVi = 2 * PI * banKinh;
                
                // T�nh di?n t�ch h�nh tr�n
                float dienTich = PI * banKinh * banKinh;
                
                printf("Chu vi cua hinh tron la: %.2f\n", chuVi);
                printf("Dien tich cua hinh tron la: %.2f\n", dienTich);
            } else {
                printf("Ban kinh cua hinh tron phai lon hon 0.\n");
            }
            
            break;
        }
        default:
            printf("Lua chon khong hop le.\n");
            break;
    }
    
    return 0;
}
