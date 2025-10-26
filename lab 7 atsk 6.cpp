#include<stdio.h>
int main(){
	int arr1[5];
	int i;
	int arr2[5], merged[10];
	int j, k;
	
	
	for(i = 0; i<5; i++){
		printf("enter 5 integers: \n");
		scanf("%d", &arr1[i]);
	} 
	for(j = 0; j<5; j++){
		printf("enter 5 integers: \n");
		scanf("%d", &arr2[j]);
		
	}
	
	for(i = 0; i< 5; i++){
	    merged[i]= arr1[i];
	}
	for (j = 0; j<5; j++){
	    merged[i + j] = arr2[j];
	}
	printf("merged arrays are: \n");
	for(k = 0; k <10; k++){
	    printf("%d", merged[k]);
	}
	
	return 0;
}
