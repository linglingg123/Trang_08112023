#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bai1(){
	double inch, cm;
	printf("Enter the distance in inches: ");
	scanf("%lf", &inch);
	
	cm=inch*2.54;
	printf("%.2lf inches = %.2lf cm \n",inch, cm);
	//cach2
	printf("%.2lf inches = %.2lf cm \n",cm, inch);
	
	//cach1
	double mid;
	mid=inch;
	inch=cm;
	cm=mid;
	printf("%.2lf inches = %.2lf cm",inch, cm);
}

void hamswitch(){
	//ctrinh nhap ten va luu
	char name[234];int input;
	do{
		//muc tieu: neu input khong = 1 hay 2 hay 3 thi lap lai
		//neu input = 1 hay =2 hay =3 thi khong lap
	
	printf("Enter choice: ");
	scanf("%d", &input);
	switch(input){
		case 1:
			printf("Hello \n");
			printf("Enter name:");
			scanf("%s", &name);
			break;
		case 2:
			printf("Goodbye ");
			printf("%s \n", name);
			break;
		case 3:
			printf("...");
			break;
		default:
			printf("default");
			break;
	}
	}while(input!=1 && input!=2 && input != 3); //input!=1 && input!=2 && input != 3 la dung
} 


int main(int argc, char *argv[]) {
//	bai1();
	int check;
//	bool check=true;
	for(check=0; check<5; check++){
//		do{
//			hamswitch();
//		}while(check>1);
	}
	
	//lap check = 1 > do lam 1 lan
	//lap check = 2 >> do lam vo so lan
	
	
	hamswitch();
	
	
	return 0;
}
