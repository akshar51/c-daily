#include<stdio.h>

main(){
	int i,size;
	printf("Enter array size :");
	scanf("%d",&size);
	int arr[size];
	for(i=0;i<=size;i++){
		printf("Enter array element :\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("Length of array : %d",size);
}
