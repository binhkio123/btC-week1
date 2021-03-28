/* Vu Anh Quan - ITE6-01 */

#include<stdio.h>

int main(){
	int max=100, a ;
	int cd1=10, cd2=15, cd3=20, cd4=50;
	printf("We give you a Voucher 100$ and you can buy one of them: \n");
	printf("1. CD sieu nhan gao (10$)\n2. CD sieu nhan cuong phong (15$)\n3. CD Pokemon (20$)\n4. CD nihongo (50$)\n");
	while(max>0){
		
		printf("\n~~ Which do you want(Press 0 if you dont need more): ");
		scanf("%d", &a);
		switch(a){
			case 1:{
				max= max -10;
				if(max<0){
					printf("-->You cant buy it !!\n");
					break;
				}
				printf("-->You bought CD sieu nhan gao (10$)\n");
				break;
			}
			case 2:{
				max= max -15;
				if(max<0){
					printf("-->You cant buy it !!\n");
					break;
				}
				printf("-->You bought CD sieu nhan cuong phong (15$)\n");
				break;
			}
			case 3:{
				max= max -20;
				if(max<0){
					printf("-->You cant buy it !!\n");
					break;
				}
				printf("-->You bought CD Pokemon (20$)\n");
				break;
			}
			case 4:{
				max= max -50;
				if(max<0){
					printf("-->You cant buy it !!\n");
					break;
				}
				printf("-->You bought CD nihongo (50$)\n");
				break;
			}
			case 0:{
				max=0;
				break;
			}
			default:{
				printf("Answer can not found!\nPlease try again.");
				break;
			}
		}
		
	}
	if(max==0){
		printf("\nThanks for buying !!");
	} else if(max <0){
		printf("\nYou dont have enough money to buy the last CD.\nThanks for buying !!");
	}
	return 0;
}
