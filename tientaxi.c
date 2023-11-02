#include <stdio.h>

int main() {
    float soKm;
    float tienCuoc;

    printf("Nhap so km di duoc: ");
    scanf("%f", &soKm);

    if (soKm <= 0) {
        printf("So km khong hop le.\n");
        return 0;
    }

    if (soKm <= 1) {
        tienCuoc = 5000;
    } else if (soKm <= 30) {
        tienCuoc = 5000 + (soKm - 1) * 1000;
    } else {
        tienCuoc = 5000 + 29 * 1000 + (soKm - 30) * 3000;
    }

    printf("So tien cuoc taxi la: %.0f VND\n", tienCuoc);

    return 0;
}
