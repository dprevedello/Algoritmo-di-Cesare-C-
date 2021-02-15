#include <stdio.h>

int main(void) {
    char frase[500];

    printf("Inserire una frase da cifrare: ");
    scanf("%s", frase);

    for(int i=0; frase[i]!='\0'; i++){
        if( frase[i]>='a' && frase[i]<='z' )
            frase[i] = (frase[i] - 'a' + 3) % 26 + 'a';
        if( frase[i]>='A' && frase[i]<='Z' )
            frase[i] = (frase[i] - 'A' + 3) % 26 + 'A';
    }
    
    printf("La frase cifrata è: %s\n", frase);

    return 0;
}