#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nhanVien{
int tuoi;
char ten[30];
char que[50];
}nv;

int main(){
int n ;	
FILE *f;
printf ("ban muon nhap bao nhieu nhan vien:\n");
scanf ("%d",&n);
nv nhanVien1[n],nhanVien2[n];
f = fopen("C:\\Users\\nhatx\\OneDrive\\Desktop\\vidu.txt","wb");
if (f==NULL){
	printf ("ko the mo file");
	exit(1);
	}
	
  fwrite(&n,sizeof (int),1,f);
  
 for (int i = 0; i< n ; i++){
 printf ("nhap tuoi nhan vien: \n");
 scanf ("%d",&nhanVien1[i].tuoi );
 printf ("nhap ten nhan vien \n");
 getchar();
 fgets(nhanVien2[i].ten , 30 , stdin);
 printf ("nhap que quan nhan vien \n");
 fgets(nhanVien1[i].que ,50, stdin);
 
 fwrite(&nhanVien1[i],sizeof(nhanVien1),1,f);
}	
fclose(f);
return 0;	
}
