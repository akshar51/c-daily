#include<stdio.h>

main(){
	// LARGEST VALUE IN THE GIVEN ARRAY
	
	int i,n,a[10],max;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter the element of array :\n");
	for(i=0;i<n;i++){
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("Largest element in the given array : %d",max);
}
