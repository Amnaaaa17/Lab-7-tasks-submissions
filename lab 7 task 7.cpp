#include<stdio.h>
int main(){
	int arr[10];
	int i;
	int n;
	int found = -1;
	
	printf("enter number u want to find in array:\n ");
	scanf("%d", &n);

    for (i = 0; i< 10; i++){
		printf("enter element %d:\n ", i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i< 10; i++){
		if ( n == arr[i]){
			found = i;
			break;
		} 
	}
	
	if ( found != -1){
	 printf("Number %d found at index %d.\n", n, found);
    } else {
        printf("-1 (number not found)\n");
    }

	return 0;
	
	
	
}
