#include <stdio.h>

int main(){
	int arr[5];
	int i;
	
	printf("Enter a number:\n ");
	while(i<=5){
		scanf("%d", &arr[i]);
		i++;
    }
	 
	printf("%d", arr[4]); 
	for(i=0; i<=3; i++){
		printf("%d", arr[i]);
	}
	
	return 0;
}
