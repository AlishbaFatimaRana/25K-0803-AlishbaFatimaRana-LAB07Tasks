#include <stdio.h>

int main(){
	int arr[10];
	int i, num, count_num=0;
	
	printf("Enter 10 values: \n");
	while(i<10){
		scanf("%d", &arr[i]);
		i++;
	}
	
	printf("Enter the number you want to search for: ");
	scanf("%d", &arr[0]);
	
	for(i=0; i<10; i++){
		if(arr[0]== num){
			count_num++;
		}
	}
	
	 if (count_num > 0) {
        printf("The number %d occurred %d times.\n", arr[0], count_num);
    } else {
        printf("The number %d not found.\n", arr[0]);
    }
	
}
