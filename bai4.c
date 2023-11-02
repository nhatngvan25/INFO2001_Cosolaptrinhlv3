 #include <stdio.h>

int main() {
    int ngay, thang, nam;
    
    printf("Nhap vao ngay: ");
    scanf("%d", &ngay);
    
    printf("Nhap vao thang: ");
    scanf("%d", &thang);
    
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
    
    int hopLe = 1; // Gi? s? ng�y, th�ng, nam h?p l?
    
    if (ngay < 1 || ngay > 31) {
        hopLe = 0;
    } else if (thang < 1 || thang > 12) {
        hopLe = 0;
    } else {
        // Ki?m tra c�c tru?ng h?p d?c bi?t
        if (thang == 2) { // Th�ng 2
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                // Nam nhu?n
                if (ngay > 29) {
                    hopLe = 0;
                }
            } else {
                // Nam kh�ng nhu?n
                if (ngay > 28) {
                    hopLe = 0;
                }
            }
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            // Th�ng 4, 6, 9, 11 c� 30 ng�y
            if (ngay > 30) {
                hopLe = 0;
            }
        }
    }
    
    if (hopLe) {
        printf("Ngay, thang, nam nhap vao hop le.\n");
    } else {
        printf("Ngay, thang, nam nhap vao khong hop le.\n");
    }
    
    return 0;
