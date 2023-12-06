#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;
    printf("Nh?p s? lu?ng ph?n t? c?n kh?i t?o:\n");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("khong the cap phat\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("nhap phan tu  %d:", i + 1);
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n; i++) {
        printf("phan tu %d la: %d\n", i + 1, *(arr + i));
    }

   arr = (int*)realloc(arr,)

    return 0;
}
