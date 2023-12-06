
#include <stdio.h>
#include <stdlib.h>
int main() {
int *arr;
int n, i;
printf("Nhap so luong phan tu: ");
scanf("%d", &n);
// Cap phát bo nho cho mang
arr = (int*)malloc(n * sizeof(int));
// Ki?m tra xem b? nh? có du?c c?p phát thành công không
if (arr == NULL) {
printf("Khong the cap phat bo nho.");
exit(1);
}
// 

