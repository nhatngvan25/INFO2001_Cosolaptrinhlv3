 #include <stdio.h>
 #include <stdlib.h>
 
typedef struct Student {
 	char name[30];
 	int age;
 	char ID[10];
 	
 	}SV;
 	
 int main(){
 	int n;
 SV *s;
 printf ("nhap so luong sinh vien :\n");
 scanf ("%d",&n);
 // cap phat bo nho
 s = (SV*)malloc(n * sizeof(SV) ); 
 
 if (s == NULL ){
 	printf ("khong the cap phat dong !");
 	exit(1);
 	}
 
 for (int i = 0;i<n;i++){
 	printf ("nhap ten cua sinh vien thu %d", i+1);
 	getchar();
 	fgets ((s + i)->name   , 30 , stdin);
 	printf ("nhap tuoi cua sinh vien");
 	scanf ("%d", &(s+i)->age   );
 	printf ("nhap ID cua sinh vien");
 	getchar();
 	fgets ((s + i)->ID   , 10 , stdin);
 	}
 	
 s = (SV*)realloc(s , (n+1)*sizeof(s));
 
   printf ("nhap ten cua sinh vien thu %d", n+1);
 	getchar();
 	fgets (s[n].name , 30 , stdin);
 	printf ("nhap tuoi cua sinh vien");
 	scanf ("%d", &s[n].age    );
 	printf ("nhap ID cua sinh vien");
 	getchar();
 	fgets (s[n].ID  , 10 , stdin);
 	
 	
 for (int i = 0; i < n+1 ; i++) {
        printf("Thông tin c?a sinh viên th? %d:\n", i + 1);
        printf("Tên: %s", (s + i)->name);
        printf("Tu?i: %d\n", (s + i)->age);
        printf("ID: %d\n\n", (s + i)->ID);
    }

    free(s); 

    return 0;
}
 	
