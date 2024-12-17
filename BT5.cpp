#include <stdio.h>

int main(){
	int Count,Multiply;
	for (Count = 1; Count <=9;Count++){
		printf("Bang cuu chuong so %d la :\n",Count);
		for (int i = 1; i <= 10; i++){
			Multiply = Count * i;
			printf("%d * %d = %d \n",Count,i,Multiply);
	}
}
return 0;
}
