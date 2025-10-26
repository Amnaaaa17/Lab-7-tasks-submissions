#include<stdio.h>
int main (){
	int arr[100];
	int i, n, temp;
	
	printf("enter how many number u want in reversed order: \n");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("enter elements:\n");
		scanf("%d", &arr[i]);
	}
	for (i = 0; i<n/2; i++){
		first val = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1]= first val;
	}
	printf(" reversed value is");
	for(i = 0; i<n; i++){
		printf("%d", arr[i]);
	}
	return 0;
	
	
	}
