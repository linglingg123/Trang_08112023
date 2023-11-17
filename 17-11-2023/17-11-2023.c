#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct book{
	int id;
	char name[100];
	char author[100];
	char genre[100];
	char description[100];
};

void enterAndDisplay(int num, struct book b[]){
	//enter number of books
	//enter books
	int i;
	for(i=0; i<=num-1; i++){
		printf("Enter book name: ");
		scanf("%s", &b[i].name);
		
		printf("Enter book author: ");
		scanf("%s", &b[i].author);
		
		printf("Enter book genre: ");
		scanf("%s", &b[i].genre);
		
		printf("Enter book description: ");
		scanf("%s", &b[i].description);
	}
	
	for(i=0; i<=num-1; i++){
		printf("%s | %s | %s | %s \n", b[i].name, b[i].author, b[i].genre, b[i].description);
	}
}

int main(int argc, char *argv[]) {
//	int *number1;//point to box
//	int number1; //box
	
//	int var2, temp;
//	int *var1; //con tro khai bao
//	var2=&var1; //&: tro toi dia chi bien
//	temp=*var1; //*: tro toi gia tri bien
//	
//	scanf("%d", &var1);
	
	//struct
	struct book listBook[20]; int num;
	struct book b; char name[100]; //string == char[]
//	listBook[0].id=100;
//	printf("%d", listBook[0].id);
//	printf("Enter book name: ");
//	scanf("%s", &b.name);
////	char test[3]={1,1,2,3};
//	printf("%s", b.name);

	printf("Enter number of books: ");
	scanf("%d", &num);
	listBook[num];
	enterAndDisplay(num,listBook);
	return 0;
}
