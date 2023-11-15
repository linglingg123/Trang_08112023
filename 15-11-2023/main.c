#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int countDiv3(int arr[], int size){
	int i;
	int count = 0;
	for(i=0; i<=size; i++){
		printf("%d \n",arr[i]);
		if(arr[i] % 3==0){
			count++;
//			printf("%d \n", count);
		}
	}
	return count;
}

int main(int argc, char *argv[]) {
	int i; int y = 0;
//	for(i=0; i<=20; i++){
//		printf("%d \n", numbers[i]);
//	}
	
	printf("Enter number in array: ");
	scanf("%d", &i);
	int numbers[i];
	
	while(y<=i){
//		numbers[y]=y + 1000;
		printf("Enter numbers [%d]",y);
		scanf("%d", &numbers[y]);
		printf("%d \n \n", numbers[y]);
		y++;
	};
	y=0;
//	while(y<=i){
//		printf("%d \n", numbers[y]);
//		y++;
//	};
	
//	int arr[9]={1,2,3,4,5,6,7,8,9,1};
//	int arr[1]={3,2};
	//bt example
	int result=countDiv3(numbers, i);
	printf("there are %d elements divisible by 3", result);
	return 0;
}
