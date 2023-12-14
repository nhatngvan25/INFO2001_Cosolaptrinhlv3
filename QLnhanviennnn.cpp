#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct NhanVien {
    char id[10];
    char ten[30];
    char chucVu[30];
    int luong;
} NV;

void nhap(NV *nhanVien, int n) {
   for (int i = 0;i<n;i++){
 	printf ("nhap ten cua nhan vien thu %d", i+1);
 	getchar();
 	fgets ((nhanVien + i)->ten   , 30 , stdin);
 	printf ("nhap luong cua nhan vien");
 	scanf ("%d", &(nhanVien+i)->luong   );
 	printf ("nhap ID cua nhan vien");
 	getchar();
 	fgets ((nhanVien + i)->id   , 10 , stdin);
 	printf("nhan chuc vu cua nhan vien");
 	getchar();
 	fgets ((nhanVien +i )->chucVu,30,stdin);
 	}
}

	void xuat(NV *nhanVien, int n){
		
		for (int i = 0; i < n; i++) {
        printf("Nhan vien %d:\n", i + 1);
        printf("Luong: %d\n", (nhanVien + i)->luong);
        printf("Ten: %s\n", (nhanVien + i)->ten);
        printf("ID: %s\n", (nhanVien + i)->id);
        printf("Chuc vu: %s\n", (nhanVien + i)->chucVu);
        printf("\n");
    }
	
		}
void them(NV *nhanVien ,  int *n){
	*n = *n + 1;
 nhanVien = (NV*)realloc(nhanVien , (*n) * sizeof(nhanVien));


 	printf ("nhap ten cua nhan vien thu %d", *n);
 	getchar();
 	fgets (nhanVien[*n].ten    , 30 , stdin);
 	printf ("nhap luong cua nhan vien");
 	scanf ("%d", &nhanVien[*n].luong   );
 	printf ("nhap ID cua nhan vien");
 	getchar();
 	fgets (nhanVien[*n].id    , 10 , stdin);
 	printf("nhan chuc vu cua nhan vien");
 	getchar();
 	fgets (nhanVien[*n].chucVu ,30,stdin);
 	}
void Edit (NV *nhanVien , int a ){
	
	// chinh sua thong tin 
	printf ("nhap ten cua nhan vien thu %d\n", a);
 	getchar();
 	fgets (nhanVien[a-1].ten    , 30 , stdin);
 	printf ("nhap luong cua nhan vien");
 	scanf ("%d", &nhanVien[a-1].luong   );
 	printf ("nhap ID cua nhan vien");
 	getchar();
 	fgets (nhanVien[a-1].id    , 10 , stdin);
 	printf("nhan chuc vu cua nhan vien");
 	getchar();
 	fgets (nhanVien[a-1].chucVu ,30,stdin);
 	}
void TraCuu(NV *nhanVien , int c){

         printf("Nhan vien thu %d la:\n", c);
        printf("Luong: %d\n", nhanVien[c-1].luong );
        printf("Ten: %s\n", nhanVien[c-1].ten );
        printf("ID: %s\n", nhanVien[c-1].id );
        printf("Chuc vu: %s\n", nhanVien[c-1].chucVu );
        printf("\n");

}	
	void deletes(NV *nhanVien , int s , int *n){
		
		for (int i =s-1 ; i<(*n);i++){
			memcpy(&nhanVien[i], &nhanVien[i + 1], sizeof(NV));
			
			}
		(*n)--;
		
		}
	
int main(){
   int a;
do {   

  printf ("chuong trinh quan li nhan vien\n ");
  printf (" 1. nhap nhan vien \n");
  printf (" 2. them moi nhan vien\n");
  printf (" 3. chinh sua thong tin nhan vien\n");
  printf (" 4. hien thi thong tin tat ca nhan vien\n");
  printf (" 5. tra cuu nhan vien \n ");
  printf (" 6. xoa nhan vien \n");
  printf (" 0. thoat!");
  scanf("%d",&a);
  
  switch (a){
  case 1: 
   printf ("ban chon nhap sinh vien:\n");
     NV *nhanVien;
    int n;
    printf("nhap so luong nhan vien ban muon luu:\n");
    scanf("%d", &n);
    
    nhanVien = (NV *)malloc(n * sizeof(NV));
 
    if (nhanVien == NULL) {
        printf("khong co bo nho de luu tru!");
        exit(1);
    }
     nhap(nhanVien, n);
     
     free(nhanVien);
  break;
  
  case 2:
  printf ("ban chon them moi mot nhan vien \n");
  
  them(nhanVien, &n);
  free(nhanVien);
  break;	
  	
  case 3 :
  printf ("ban chon chinh sua thong tin nhan vien\n");	
  int a;
	printf ("ban muon chinh sua thong tin cua nhan vien thu may\n");
	scanf ("%d",&a);
	if (a <= n){
  Edit (nhanVien ,  a );
  	}else printf ("khong tim thay nhan vien can chinh sua");
   break;
   case 4:
   	printf ("ban chon hien thi nhan vien\n");
   	if (n>0){
  	 xuat(nhanVien, n);
  	}else printf ("khong co nhan vien nao de hien thi!\n");
  	break;
  case 5 :
  	printf ("ban muon tra cuu thong tin cua nhan vien thu may");
  	int c;
  	scanf ("%d",&c);
  	if (c>0 && c< n){
  		TraCuu(nhanVien , c);
  		}
  		
  	case 6:
  		int s;
	  printf("ban chon xóa nhan vien, ban muon xoa nhan vien thu may:\n");
	  scanf ("%d",s);
	  if (s>0 && s< n)
	  deletes(nhanVien, s ,&n);
	  else printf ("ko the xoa\n");
	  	
  }
  
  
  }while (a!=0);
  

}

