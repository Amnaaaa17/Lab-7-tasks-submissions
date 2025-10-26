#include<stdio.h>
int main (){
	int arr[5];
	int i;
	
	printf("enter 5 number: \n");
	
	for (i=0; i<5; i++){
		printf("enter elements:\n");
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for (i=0; i<5; i++){
		sum += arr[i];
	}
	printf("the sum is %d.", sum);
	
	return 0;
	

}
