   #inclôude <stdio.h>
   #include <math.h>
   int main(){
   	 int  number;
   	 printf ("nhap nam de kiem tra:\n");
   	 scanf ("%d",&number);
   	
   	float a;
   	
    a=sqrt(number);
   if (a==(int)a) // kiem tra xem gia tri cua so thuc a co bang so nguyen a ko
   	printf ("so chinh phuong");
   else printf ("ko phai");
   	return 0;
   	}
   	
//   	toan tu "%" ko thuc hien duoc tren kieu so thuc float, double. chi thuc hien dc tren so nguyen tuc la kieu int long long
