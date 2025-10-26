#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	int count = 0;
	
	printf("enter text and to stop enter (.): \n");
	scanf("%[^.]", text);
	
	for(int i= 0; i < strlen(text); i++){
		if(text[i] ==' '){
			count++;
		}
	}
	printf(" u entered this text: %s\n", text);
	printf(" number of white soaces in the text: %d\n", count);
		
		return 0;
}
