#include<stdio.h>
#include<string.h>

main(){
	// REVERSE OF STRING
	
	char ch;
	int i,len;
	char str[30];
	printf("Enter your string :");
	gets(str);
	len =strlen(str);
	for(i=0;i<len/2;i++){
		ch=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=ch;
	}
	printf("%s",str);
}
