#include <stdio.h>

int main(){
	int Num,Multiply;
	printf("Hay nhap mot so nguyen duong tu 1 den 10 : ");
	scanf("%d",&Num);
	if (Num < 1 || Num > 10){
		printf("So khong co trong khoang tu 1 den 10");
	} else{
		printf("Bang cuu chuong so %d la :\n",Num);
		for (int i = 1; i <= 10; i++){
			Multiply = Num * i;
			printf("%d * %d = %d \n",Num,i,Multiply);
		}
	}
	return 0;
}

