#include<stdio.h>

main(){
	// SUM OF ELEMENT OF 1D ARRAY
	
	int a[5]={10,20,30,40,50};
	int i, sum=0;
	for(i=0;i<5;i++){
		sum = sum + a[i];
	}
	printf("%d",sum);
}
