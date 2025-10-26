#include<stdio.h>
int main(){
	char str[25];
	printf("enter a string ");
	scanf("%[^1-9]", str);
	
	printf("u entered %s", str);
	return 0;
}
