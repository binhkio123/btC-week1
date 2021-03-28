/* Vu Anh Quan - ITE6-01 */

#include<stdio.h>

int main(){
	int n;
	printf("What is the weather like today ?\n");
	printf("1. Sunny\n2. Rainy\n3. Cool day\n");
	printf("Choose(1~3): ");
	scanf("%d", &n);
	switch(n){
		case 1:{
			printf("\nQuan dui ao 3 lo, ban co the di bien choi hoac o nha nam dieu hoa\n");
			break;
		}
		case 2:{
			printf("\nBan nen o nha, co the mac quan ao dai neu cam thay lanh\n");
			break;
		}
		case 3:{
			printf("\nMot ngay tuyet voi de di ra ngoai choi, ban co the mac ao ngan hoac dai tuy the trang\n");
			break;
		}
		default:{
			printf("Xin vui long chi chon 1,2,3");
			break;
		}
	}
	return 0;
}
