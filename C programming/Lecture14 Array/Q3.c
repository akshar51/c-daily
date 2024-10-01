#include<stdio.h>

main(){
	//UPDATING A ARRAY VALUE
	
	int i,n,index,a[10],value=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the array element :\n");
	for(i=0;i<n;i++){
		printf("a[%d] =" ,i);
		scanf("%d",&a[i]);
	}
	printf("Enter the index value you want to update :");
	scanf("%d",&index);
	printf("Enter the value you want to update :");
	scanf("%d",&value);
	if(index>=n+1){
		printf("Enter valid index value.");
	}
	else{
		for(i=0;i<n;i++){
		if(i==index){
			a[i]=value;
		}
		}
	}
		printf("New updated value is :");
		for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
}

