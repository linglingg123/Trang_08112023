#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define str "kajgdfewhjdfc"
int main(int argc, char *argv[]) {
//	int i = 12.3; //assign //== vs =
//	float y=12.37382648732462;
//	double d=128737.672734692378489;
//	char c='t';
//	char C[23]="Trang"; //array
//	printf("my number is %d and a letter %c \n",i,c); 
//	printf("aduheofiewe %d \n",5216%786);
//	printf("%f \n \\ \" &&",y); 
//	printf("%c \n",c);
//	printf("%s \n",str);
//	printf("Enter double d: ");
//	scanf("%lf",&d);
//	printf("%5.3lf",d);
//	printf("%10f",y);
	
	
	
	int a,b;
	printf("Enter int a: ");
	scanf("%d",&a);
	printf("Enter int b: ");
	scanf("%d",&b);
////	printf("%d",calculator(a,b));
//	int c = cal(a,b);
//	printf("%d",c);
	
	printf("%d \n", cong(a,b));
	printf("%d \n", tru(a,b));
	return 0;
}

//ham
int cal(int a, int b){ 
//	kdyvgadkslhvuadsbckjawdh
	int c=a+b;
//	printf("%d",c);

	if(a>9){
		printf("a=%d \n",a);
	}
	else if(a==9){// =: assign //==: equal
		printf("hello \n");
	}
	else{
		printf("b=%d \n",b);
	}

	return c;
}

int cong(int a, int b){
	return a+b;
} 

int tru(int a, int b){
	int c =a-b;
	if(a-b>0){
		printf("ket qua >0 \n");
		
	}else if(a-b==0){
		printf("a=b \n");
	}else{
		printf("ket qua am \n");
	}
	return c;
}
