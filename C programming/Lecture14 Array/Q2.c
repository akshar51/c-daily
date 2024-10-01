#include<stdio.h>

main(){
	// DELETING THE ARRAY
	
	int i,n,a[5],index;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the array element :\n");
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the array you want to delete :");
	scanf("%d",&index);
	if(index>=n+1){
		printf("Enter valid index value.");
	}
	else{
		for(i=index;i<n-1;i++){
			a[i]=a[i+1];	
		}
		printf("The array after deleting the element is:");
		for(i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
	}
}
