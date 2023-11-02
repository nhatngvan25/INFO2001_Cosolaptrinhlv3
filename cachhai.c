  #include <stdio.h>
  int main (){
  	int a ,b,c,max,min;
  	printf ("hay nhap ba so cua ban\n");
  	scanf ("%d %d %d",&a,&b,&c);
  	
  	max =a;
  	//tim max cua ba so
  	if (max <b){max=b;}
  	if (max<c){max=c;}
  	  printf ("max la %d",max);
    //tim min 
	min =a;
	if (min>b){min=b;}
	if (min>c){min=c;}
	// tìm trong ba so nay so nao la min so nao la max va so con lai la gi
	
	if (a==max){
		if (b==min){
			printf ("day giam dan la:%d\n",max,c,min);
		}else {
			printf ("day giam dan la:%d %d %d\n",max,b,min);
			}
		
	} else if (b==max){
		if (a==min){
			printf ("day giam dan la:%d %d %d\n",max, c,min );
			}else{
				printf ("day giam dan la:%d %d %d\n",max, a,min );}
		} else if (c==max){
			if (a==min){
			printf ("day giam dan la:%d %d %d\n",max, b,min );
			}else {
					printf ("day giam dan la:%d %d %d\n",max, a,min );
				}
			}
			
	   	
  	return 0;
  	}
