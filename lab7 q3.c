#include <stdio.h>

int main(){
	
	int i, j, k;
	int marks[10], pass[10], fail[10];
	int num_pass=0, num_fail=0;
	int sum_pass = 0, sum_fail = 0;
	float avg_pass, avg_fail;
	
	for(i=0 ; i<10 ; i++){
		printf("Enter marks for Student %d:  ", i+1);
		scanf("%d", &marks[i]);
		printf("\n");
		
		if(marks[i] > 5 && marks[i] <= 10){
			pass[num_pass] = marks[i];
			sum_pass += pass[num_pass];
			num_pass++;
		}
		else if (marks[i] <= 5 && marks[i] >= 0){
			fail[num_fail] = marks[i];
			sum_fail += fail[num_fail];
			num_fail++;
		}
		
		//if marks entered = -1 exits the program.
		else if(marks[i] == -1){
			printf("You entered -1.\nExiting the program.\nGOODBYE!");
			return 0;
		}
	}
	
	avg_pass = (float) sum_pass/num_pass;
	avg_fail = (float) sum_fail/num_fail;
	
	if(num_pass > 0){
	
    	printf("\nFollowing are the marks obtained for students who have passed the quiz.\n");
	    for(j=0 ; j<num_pass ; j++){
      	    printf("%d)  %d\n", j+1, pass[j]);
        }
        printf("\nAverage Passing Quiz Marks for Class BCS-1G is: %.2f\n\n", avg_pass);
    }
    
    if(num_fail > 0){
	    printf("\nFollowing are the marks obtained for students who have failed the quiz.\n");
	    for(k=0 ; k<num_fail ; k++){
	        printf("%d)  %d\n", k+1, fail[k]);
        }
        printf("\nAverage Failing Quiz Marks for Class BCS-1G is: %.2f", avg_fail);
    }
    
	return 0;
}