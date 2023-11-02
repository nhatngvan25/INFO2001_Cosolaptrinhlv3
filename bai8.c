   #include <stdio.h>
   #include <math.h>
   int main(){
   	int so ,a ,b, c;
 printf ("nhap so co ba chu so:");
 scanf ("%d",&so);
 
 a = so%10;
 b = (so/10)%10;
 c= so/100 ;
 
 if (a>b&&a>c){
 	if (b>c) printf ("thu tu la:%d %d %d",c,b,a);
 	else  printf ("thu tu la:%d, %d ,%d",b,c,a);
 	}
 if (b>c&&b>a){
 	if (a>c) printf ("thu tu la:%d %d %d",c,a,b);
 	else  printf ("thu tu la:%d, %d ,%d",a,c,b);
 	}
 
 if (c>b&&c>a){
 	if (a>b) printf ("thu tu la:%d %d %d",b,a,c);
 	else  printf ("thu tu la:%d, %d ,%d",a,b,c);
 	}
 	
 return 0;
   	}
