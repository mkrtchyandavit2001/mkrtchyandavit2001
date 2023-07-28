#include <stdio.h>

int main(){

	int index = 0;

	printf("Mutqagrel zangvaci erlkarutyuny: ");
	scanf("%d", &index);

	char arr[index];
	int i = 0;

	printf("Mutqagrel zangvaci tarrery:\n");
	for(i = 0; i < index; ++i){
		scanf("%c", &arr[i]);
	}

	printf("Zangvaci tvayin arjeqnern en: ");
	for(int j = 65; j <=90; ++j){
		if(arr[i] != j)
			printf("%c", arr[i]);
	}
	
	for(int k = 97; k <= 122; ++k){
		if(arr[i] != k)
			printf("%c", arr[i]);		
	}
return 0;
}
