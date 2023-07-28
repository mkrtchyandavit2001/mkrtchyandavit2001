#include <stdio.h>

int main(){
	
	int index = 0;
	
	printf("Mutqagrel zangvaci erkaruyuy: ");
	scanf("%d", &index);

	int arr[index];

	printf("Mutqagrel zangvaci tarreri arjeqneryi:\n");
	for(int i = 0; i < index; ++i){
		scanf("%d", &arr[i]);
	
	}
	
	printf("Zangvaci tarrern en: ");
	for(int i = 0; i < index; ++i){
		printf("%d ", arr[i]);
	}
	
return 0;
}
