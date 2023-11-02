  #include <stdio.h>
  int main(){
  	int a , donvi ,chuc, tram, max;
 printf ("nhap so co ba chu so:");
 scanf ("%d",&a);
 
 donvi = a%10;
 chuc = (a/10)%10;
 tram = a/100 ;
 
 max = donvi;
if (max<=chuc) max = chuc;
else if ( max<=tram) max = tram;
	
 	if (max == donvi) printf("so lon nhat la hang don vi:%d", donvi);
 	if (max == chuc) printf ("so lon nhat la hang chuc:%d", chuc);
	if (max == tram) printf ("so lon nhat la hang tram:%d", tram);
 return 0;
 }
