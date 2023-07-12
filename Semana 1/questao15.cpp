#include <stdio.h>

/* Leia uma letra e verifique se a letra digitada é vogal ou consoante.*/

main(){
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%s",&letra);
	
	if (letra == 'a' || letra == 'A'){
		printf("A letra digitada eh uma VOGAL!");
	}else if(letra == 'e' || letra == 'E'){
		printf("A letra digitada eh uma VOGAL!");
	}else if(letra == 'i' || letra == 'I'){
		printf("A letra digitada eh uma VOGAL!");
	}else if(letra == 'o' || letra == 'O'){
		printf("A letra digitada eh uma VOGAL!");
	}else if(letra == 'u' || letra == 'U'){
		printf("A letra digitada eh uma VOGAL!");
	}else{
		printf("A letra digitada eh uma CONSOANTE");
	}
	
}
