#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void BMI(int gender){
	double weight, height;
	
	do{
		printf("Enter your weight (kg) and height (m):");
		scanf("%lf ", &weight);
		scanf("%lf", &height);
		double BMI = weight / (height * height);
		if(height <= 1 || height > 2.2 || weight < 2){
			printf("Invalid entry. Enter again.");
		}else{
			if(gender==0){
				if(BMI <= 19){
					printf("You are a little skinny");
				}else if(BMI <= 24 && BMI > 19){
					printf("You are in good shape");
				}else if(BMI > 24){
					printf("You are a little big");
				}
			}
			
			if(gender==1){
				if(BMI <= 20){
					printf("You are a little skinny");
				}else if(BMI <= 25 && BMI > 20){
					printf("You are in good shape");
				}else if(BMI > 25){
					printf("You are a little big");
				}
			}
		}
	}while(height <= 1 || height > 2.2 || weight < 2);
	
}
void BMIgender(){
	int gender;
	
	do{
		printf("Enter your gender ( 0 for female, 1 for male): ");
		scanf("%d", &gender);
		switch(gender){
			case 0:
				BMI(gender);
				break;
			case 1:
				BMI(gender);
				break;
			default:
				printf("Please choose again.");
				break;
		}
	}while(gender != 0 && gender != 1);
	
}

int hundredCount(int input){
	int hundred, countH;
	if(input<100){
		hundred=0;
	}else if(input>=100 && input<1000){
		do{
			input = input - 100;
			countH++;
		}while(input >= 100);
		hundred=countH;
	}else if(input >= 1000){
		do{
			input = input - 1000;
		}while(input >= 1000);
		do{
			input = input - 100;
			countH++;
		}while(input >= 100);
		hundred=countH;
	}
	return hundred;
}
void ascendingHundreds(){
	int a, b, c;
	printf("Enter 3 positive integers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("The integers are: %d, %d and %d \n",a,b,c);
	if(hundredCount(a) < hundredCount(b) && hundredCount(b) < hundredCount(c)){
		printf("Yes");
	}else{
		printf("No");
	}
}

int main(int argc, char *argv[]) {
	//BMIgender();
	//ascendingHundreds();
	
	//for loop
	int i = 0;
	int y;
	printf("test");
	for(i = 0; i <= 10; i++){
		y++;
		printf("hello");
	}
	printf("%d", y);
	return 0;
}
