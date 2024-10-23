#include<stdio.h>

main(){
	//Even number using pointer
	
	int i,*ptr,a[10];
	printf("Enter number :");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0;i<10;i++){
		if(*ptr % 2 == 0){
			printf("%d ",*ptr);
		}
		ptr++;
	}
}
