#include <stdio.h>

int main(){
	int Num,Guess;
	Num = 45;
	printf("Hay nhap mot so nguyen : ");
	scanf("%d",&Guess);
	while (Guess != Num){
		printf("Hay nhap mot so nguyen khac : ");
		scanf("%d",&Guess);
	}
	printf("So nay dung roi!");
	return 0;
}
