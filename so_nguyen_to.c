#include <stdio.h>
#include <math.h>
   int kiemtra(int x){
   	for(int j=2; j<= sqrt (x) ; j++){
   		if (x%j==0) return 0;
   		
   		}
   	return 1;
   	}

    int chinhphuong (int c){
    	
    	if (c<=0) return 0;
    	
    	if( (float) sqrt(c) ==(int) sqrt(c)) return 1;
    	else return 0;
    	
    	}
    
   


   int main(){
	int num;
   do{
	printf ("nhap vao mot so lon hon 1:\t");
	scanf ("%d",&num);
	}while(num<=1) ;
	printf ("so nguyen to la:");
	for (int i=2;i<=num;i++){
		
		if (int kt = kiemtra(i) )
		
		 printf (" %d ",i);
		
		} printf ("\n");
   printf ("so chinh phuong la:");
    for (int h=1;h<=num;h++){
    	if(int cp = chinhphuong(h) ) printf(" %d",h);
    	
    	}
    return 0;
    }
