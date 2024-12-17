#include <stdio.h>

int main(){
	int Choice;
	float Num1,Num2;
	printf("Hay nhap vao 2 so bat ky :\n");
	scanf("%f%f",&Num1,&Num2);
	do{
		printf("CALCULATOR\n");
		printf("1. Tinh tong 2 so\n");
		printf("2. Tinh hieu 2 so\n");
		printf("3. Tinh tich 2 so\n");
		printf("4. Tinh thuong 2 so\n");
		printf("5. Thoat\n");
		printf("\n");
		printf("Lua chon cua ban : ");
		scanf("%d",&Choice);
		
		switch (Choice) {
			case 1:
				printf("Tong hai so la %.2f\n",Num1 + Num2);
				break;
			case 2:
				printf("Hieu hai so la %.2f\n",Num1 - Num2);
				break;
			case 3:
				printf("Tich hai so la %.2f\n",Num1 * Num2);
				break;
			case 4:
				printf("Thuong hai so la %.2f\n",Num1 / Num2);
				break;
			case 5:
				break;
			default:
				break;
		} 
	} while (Choice != 5);
	return 0;
}
