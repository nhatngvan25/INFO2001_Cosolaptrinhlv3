
#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr;
int n, i;
printf("Nhap so luong phan tu: ");
scanf("%d", &n);
// Cap ph�t bo nho cho mang
arr = (int*)malloc(n * sizeof(int));
// Ki?m tra xem b? nh? c� du?c c?p ph�t th�nh c�ng kh�ng
if (arr == NULL) {
printf("Khong the cap phat bo nho.");
exit(1);
}
// 

