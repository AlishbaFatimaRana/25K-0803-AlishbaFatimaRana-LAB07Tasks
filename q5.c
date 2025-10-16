#include <stdio.h>

int main(){
	int arr[10];
	int i, max=arr[0], min=arr[0];
	
	printf("Enter 10 values: \n");
	while(i<10){
		scanf("%d", &arr[i]);
		i++;
	}
	
	for(i=0; i<10; i++){
		if(arr[i] > max){
			max=arr[i];
		}
		if(arr[i] < min){
			min=arr[i];
		}
	}
	
	printf("The max value is %d\n", max);
	printf("The min value is %d\n", min);
	printf("The difference of max and min values is %d", max-min);
	
	return 0;
}
