#include<stdio.h>
int main(){
	int arr[100];
	int i, n, j;
	int count = 0;
	
	printf("enter how many numbers u want to enter: \n");
	scanf(" %d", &n);
	#include<stdio.h>
int main(){
	int arr[100];
	int i, n, j;
	int count = 0;
	
	printf("enter how many numbers u want to enter: \n");
	scanf(" %d", &n);
	
	for(i = 0; i < n; i++){
		printf("Element %d: \n", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("Duplicate elements are: \n");
	for(i = 0; i < n ; i++){
		for ( j = i + 1; j<n; j++){
			if (arr[i] == arr[j]){
				printf(" %d", arr[i]);
				count++;
				break;
		}
	}
}
 if (count == 0){
 	printf(" no duplicates found.");
 }
 return 0;
}

