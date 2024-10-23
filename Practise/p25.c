#include<stdio.h>
#include<stdlib.h>
main(){
	//COPY CONTENT FROM ONE FILE TO ANOTHER
	
	FILE *ptr,*ptr1;
	char ch;
	
	ptr=fopen("test.txt","r");
	if(ptr == NULL){
		printf("error");
		exit(1);
	}
	ptr1=fopen("file2.txt","w");
	if(ptr1 == NULL){
		printf("error");
		exit(1);
	}
	while((ch=fgetc(ptr))!=EOF){
		fputc(ch,ptr1);
	}
	fclose(ptr);
	fclose(ptr1);
	printf("Successfully printed.");
}
