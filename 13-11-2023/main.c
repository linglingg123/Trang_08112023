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

int main(int argc, char *argv[]) {
	BMIgender();
	return 0;
}
