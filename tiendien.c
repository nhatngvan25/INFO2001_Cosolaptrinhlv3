#include <stdio.h>
int main(){
	float sodien, tongtien,a,b;
	printf ("nhap vao lan luot chi so dau chi so cuoi:  \n");
	scanf ("%f %f",&a,&b);
	  sodien= b-a;
	if(sodien<=50){
		tongtien=sodien*1.728;
		}else if (sodien>=51&&sodien<=100){
		tongtien=(50*1.728 + (sodien-50)*1.786)*1.08;	
		}else if (sodien>=101&&sodien<=200){
			tongtien=(50*1.728 + 50*1.786 + (sodien-100)*2.014)*1.08;
		}else if (sodien>=201&&sodien<=300){
		    tongtien=(50*1.728 + 50*1.786 + 100*2.014 + (sodien-200)*2.536)*1.08;	
		}else if (sodien>=301&&sodien<=400){
		    tongtien= 	(50*1.728 + 50*1.786 + 100*2.014 + 100*2.536 + (sodien-300)*2.834)*1.08;
		}else if (sodien>=401){
			 tongtien= 	(50*1.728 + 50*1.786 + 100*2.014 + 100*2.536 + 100*2.834 + (sodien-400)*2.927)*1.08;
		}
	
	printf ("tien dien thang nay la: %.2f",tongtien);
	
	
	
	
	
	
	
	}
