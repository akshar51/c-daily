#include<stdio.h>
#include<string.h>

main(){
	int i=0;
	char str[]="HelLo worLD";
	while(str[i]!='\0'){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
		i++;	
	}
	printf("%s",str);
}
