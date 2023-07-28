#include <stdio.h>

int main(){

	int index = 0;
	
	printf("Mutqagrel zangvaci erkarutyuny: ");
	scanf("%d", &index);

	char arr[index];
	
	printf("Mutqagrel zangvaci arjeqnery: ");
	for(char i = 0; i < index; ++i){
		scanf("%c", &arr[i]);
	}
	
	printf("Zangvaci hakarak hertakanutyunn e: ");	
	for(int i = index; i > 0; --i){
		printf("%c ", arr[i]);
	}


return 0;
}
