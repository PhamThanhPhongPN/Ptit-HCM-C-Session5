#include <stdio.h>

int main(){
	int Num,Sum;
	Sum = 0;
	printf("Hay nhap mot so nguyen duong : ");
	scanf("%d",&Num);
	if (Num < 0){
		printf("So nay khong phai so nguyen duong.");
	} else {
		for (int i = 1; i <= Num;i++){
			Sum = Sum + i;
		}
		printf("Tong tat ca cac so tu 1 toi %d la : %d",Num,Sum);
	}
	return 0;
}
