  # include <stdio.h>
  int main(){
  	int a ,b ,c ;
  	printf ("hay nhap ba so cua ban:");
  	scanf ("%d %d %d",&a,&b,&c);
     int max=a;
     if (max<b){ max =b;}
     else if(max<c){ max=c;}
     printf ("so lon nhat la:%d\n",max);
     
     
     
     if (a==max){
     	if(b>c){
     	printf("thu tu la:%d ,%d ,&d\n",a,b,c);
     	}else{
     		printf ("thu tu la %d %d %d\n",a,c,b);
     		}
		        } else if (b==max){
		 	if (a>c){
		 		printf ("thu tu la %d %d %d\n",b,a,c);
		 		} else{
		 			printf ("thu tu la %d %d %d\n",b,c,a);
		 			}
		    }else if (c==max){
			if (a>b){
			printf ("thu tu la %d %d %d\n",c,a,b);
			}else {
			printf ("thu tu la %d %d %d\n",c,b,c);
			}	 	
				 	
				 	}
		 	
		 	
		 	
		 	
		 	
     	
  	return 0;
  	}
