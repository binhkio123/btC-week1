#include<stdio.h>

int main(){
	int a;
	printf("Nhap so phan tu: ");
	scanf("%d", &a);
	int arr[a];
	int i,j,n;
	printf("\nNhap mang: ");
	for(i=0; i<a;i++){
		scanf("%d", &arr[i]);
	}
	//Sap xep mang
	printf("Mang sau khi sap xep:\n%3d", arr[0]);
	for(i=1;i<a;i++){
		for(j=0;j<i;j++){
			if(arr[j] == arr[i]){
				n=1;
			}
		}
		if(n!=1){
			printf("%3d", arr[i]);
		} else{
			n=0;
		}
	}
	
	return 0;
}
