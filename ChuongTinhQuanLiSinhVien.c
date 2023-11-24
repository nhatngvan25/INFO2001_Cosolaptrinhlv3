 #include <stdio.h>
 #include <string.h>
 
 
struct Student {
 char name[50];
 int id;
 int age;
 float grade;
};
// ham nhap thong tin sinh vien
void initsutudent (struct Student s[], int size){
 	 for (int i=0;i<size;i++){
    getchar();
    printf("Nhap thong tin sinh vien thu %d:\n",i+1);
    printf("Nhap ten: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);
    printf("Nhap ma so: ");
    scanf("%d", &s[i].id);
    printf("Nhap tuoi: ");
    scanf("%d", &s[i].age);
    printf("Nhap diem: ");
    scanf("%f", &s[i].grade);
     getchar();
}
 	
 	}
 	// ham cap nhat them sinh vien 
 void updateSutudent (struct Student s[] ,int count){
 	getchar();
    printf("Nhap thong tin sinh vien thu %d:\n",count+1);
    printf("Nhap ten: ");
    fgets(s[count+1].name, sizeof(s[count+1].name), stdin);
    printf("Nhap ma so: ");
    scanf("%d", &s[count+1].id);
    printf("Nhap tuoi: ");
    scanf("%d", &s[count+1].age);
    printf("Nhap diem: ");
    scanf("%f", &s[count+1].grade);
     getchar();
}
// ham chinh sua thong tin sinh vien 
 	void editStudent(struct Student s[], int n){
 		printf ("ban muon sua thong tin cua sinh vien thu may:\n");
 		int a;
 		scanf("%d",&a);
 		getchar();
         printf("Nhap lai thong tin sinh vien thu %d:\n",a);
         printf("Nhap ten: ");
         fgets(s[a-1].name, sizeof(s[a-1].name), stdin);
         printf("Nhap ma so: ");
         scanf("%d", &s[a-1].id);
         printf("Nhap tuoi: ");
         scanf("%d", &s[a-1].age);
         printf("Nhap diem: ");
         scanf("%f", &s[a-1].grade);
         getchar();
 		}
 		// ham tim kiem va in ra thong tin sinh vien
 	void searchStudent(struct Student s[] ,int n ){
 		printf ("id sinh vien ban can tim la gi:");
	    int idStu;
	    scanf("%d",&idStu);
	    for (int i = 0; i<n ; i++){
 		if (s[i].id == idStu){
            printf ("ten cua sinh vien la: %s\n",s[i].name );
			printf ("tuoi cua sinh vien la: %d\n",s[i].age );
			printf ("diem cua sinh vien la: %.2f\n",s[i].grade );		
 		
 		      }
 		}
}
// ham sap xep sinh vien theo diem 
     void arrange(struct Student s[], int n){
     	
    int i, j;
    struct Student temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {           
            if (s[j].grade > s[i].grade) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
     	
	 
int main() {
 struct Student s[50];
 int choice=1;
 int count = 0; // danh sach ban dau 
 while(choice != 0){
 	
 printf ("\n-------MENU-------\n");
 printf ("   day la chuong trinh quan li sinh vien \n");
 printf (" chon 1: khoi tao danh sanh \n ");
 printf ("chon 2: them moi sinh vien \n");
 printf ("chon 3: sua thong tin sinh vien \n");
 printf ("chon 4: sap xep danh sach\n");
 printf ("chon5 :tim kiem thong tin sinh vien \n");
 printf ("chon 0 : thoat\n");
 scanf ("%d", &choice);


 switch(choice){
 	 case 1:
 	 	printf("khoi tao danh sach\n");
 	 	printf ("moi ban nhap thong tin sinh vien\n");
 	 	printf ("ban muon nhap bao nhieu sinh vien :\n");
 	 
 	 	scanf("%d",&count);                                 //  so sinh vien khoi tao ban dau 
 	 	initsutudent(s, count);
 	 	break;
     	 
 	 case 2:
 	 	if (count<50){
	  printf ("them moi sinh vien\n ");
	  updateSutudent(s,count);
	  count ++;                                           // muoi lan cap nhat sinh vien thi count tang len 1
	   }else printf ("danh sach day !");
	  break;
	  case 3:
	  	if (count != 0  ){
	  		printf ("sua thong tin sinh vien\n");
	  		editStudent (s,count);
	  		}else printf ("danh sach sinh vien trong!");
	  
	  break;
	  case 4:
	  if (count != 0){
	  arrange(s,count );
	    printf("Sap xep danh sach theo diem\n");
    printf("Danh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < count; i++) {
        printf("Ten: %s", s[i].name);
        printf("Ma so: %d\n", s[i].id);
        printf("Tuoi: %d\n", s[i].age);
        printf("Diem: %.2f\n", s[i].grade);
    }
    } else printf ("danh sach sinh vien trong\n");
    break;
      break;
	  case 5:
	  	if (count !=0){
	  	printf ("tim kiem thong tin sinh vien\n ");	
	  	
	  	searchStudent(s,count);}
	  	else printf ("danh sach sinh vien trong!");
	 
	  break;

}
}

    return 0;
}
