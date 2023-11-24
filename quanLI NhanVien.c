  #include <stdio.h>
  #include <string.h>
  
  
  struct  Employee{
  	int id;
  	char name[30];
  	char position[30];
  	int wage;
  };
  // ham them nhap cac nhan vien 
  void moreEmp(struct Employee emp[], int n){
  	printf ("moi ban nhap thong tin nhan vien %d:\n",n);
  	printf ("ten nhan vien la:\n");
  	getchar();
  	fgets(emp[n-1].name, sizeof emp[n-1].name,stdin);
  	printf ("ma nhan vien nay la:\n");
  	scanf ("%d",&emp[n-1].id);
  	printf (" luong cua nhan vien nay la:\n");
  	scanf ("%d",&emp[n-1].wage);
  
  	printf ("nhap chuc vu:\n");
  	getchar();
  	fgets(emp[n-1].position,sizeof emp[n-1].position, stdin);
  	
  }
  
  // ham in ra man hinh danh sach cua cac nhan vien 
  void outImfor(struct Employee emp[], int n){
  	for (int i=0; i<n;i++){
  		printf ("ten cua nhan vien la: %s\n",emp[i].name);
  		printf ("ma cua nhan vien la: %d\n",emp[i].id);
  		printf ("luong cua nhan vien la: %d\n",emp[i].wage);
  		printf ("chuc vu cua nhan vien nay la: %s\n",emp[i].position);
  		}
  	
  	}
  	// ham xoa nhan vien: y tuong dung vong for gan lan luot vi tri can xoa la i cho i-1 
  	deletesEmp (struct Employee emp[],int count){
  		printf ("ban muon xoa nhan vien thu may?\n");
  		int n;
  		scanf ("%d",&n);
  		if (n>0 && n<count){                  // dam bao nhan vien da dc luu vao danh sach moi co the xoa dc
  		for (int i =n-1;i<count ;i++){
  		 emp[i]=  emp[i+1];
  			
  			}
  		count --;}                                // moi lan xoa thi phai giam so luong nhan vien 
  		else printf ("ko co nhan vien thu &d\n",n);
  		}
  	// ham sap xep nhan vien theo muc luong   bang cach so sanh va doi cho	
  		void sortingEmp (struct Employee emp[],int  n){
  			printf ("sap xep nhan vien theo muc luong:\n");
  			
  			for (int i=0 ;i<n-1;i++){
  			for (int j =i+1; j<n;j++){	
  				if (emp[i].wage>emp[j].wage){
  	                struct Employee temp ;
					  temp = emp[i];
					  emp[i]=emp[j];
					  emp[j]=temp;			
  				   }
  			 }
  		}
  			
  			}
  int main (){
  	struct Employee emp[50];   // mang emp co kieu du lieu la struct Employee  vi du co toi da 49 nhan vien 
  	int choice=1;
  	int count = 0;              // ban dau so nhan vien cua cong ty la 0.
  	while (choice != 0){
  	printf ("---------DAY LA CHUONG TRINH QUAN LI NHAN SU-------------\n");
  	printf ("    1. them nhan vien \n");
  	printf ("    2. xoa nhan vien \n");
  	printf ("    3. hien thi nhan vien \n");
  	printf ("    4. sap xep nhan vien \n");
  	printf ("    0. thoat chuong trinh \n");
  	scanf ("%d",&choice);
  	// cach truong hop khi nguoi dung lua chon
  	
  	switch (choice){
  		case 1:
  			count ++;
  			printf ("ban chon them nhan vien\n");
  			
  			moreEmp (emp,count);
  			printf ("        nhap nhan vien thanh cong.\n");
  		break;
  		
  		case 2:
  			printf ("        ban chon xoa nhan vien \n");
  			if (count != 0) {
  			deletesEmp(emp,count);
  			}else printf ("          chua co nhan vien nao dc nhap\n");
  		break;
  		
		case 3:
		printf ("            ban chon hien thi nhan vien \n");
		if (count != 0){ outImfor(emp,count);}
		else printf ("               chua co nhan vien nao dc nhap\n");
		break;
		
		case 4 :
		printf ("            ban chon sap xep nhan vien \n");
		if (count != 0){
		sortingEmp (emp, count);
		printf ("            nhan vien theo thu tu tang dan muc luong la:\n");    // sau khi sap xep goi lai ham hien thi
		outImfor( emp,  count);
		}else printf ("               ko co nhan vien \n");
		break;  	
	  }
  }
  return 0;
  }
