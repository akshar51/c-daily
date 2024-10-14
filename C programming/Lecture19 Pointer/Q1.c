#include<stdio.h>

main(){
	int i,n,a[n],*p[n];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
			printf("a[%d] = ",i);
			scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++){
		p[i]=&a[i];
	}
	printf("Square of all element :");
	for(i=0;i<n;i++){
		*p[i]=*p[i]**p[i];
		printf("%d",*p[i]);
	}
}
