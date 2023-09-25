#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
    char str1[20];
    char str2[20];

    printf("String1: ");
    fgets(str1, 20, stdin);
    printf("String2: ");
    fgets(str2, 20, stdin);

    //Conte os caracteres da primeira string que são 
    //letras do alfabeto

    int counter1 = 0;
    int len1 = strlen(str1);

    for(int i = 0; i < len1; i++){
        if(isalpha(str1[i])){
            counter1++;
        }
    }

    printf("String1 -> %d chars\n", counter1);

    //Conte os caracteres da segunda string que são 
    //letras maiúsculas.

    int counter2 = 0;
    int len2 = strlen(str2);

    for(int i = 0; i < len2; i++){
        if(isupper(str2[i])){
            counter2++;
        }
    }

    printf("String2 -> %d upper chars\n", counter2);

    //Converta todas as letras maiúsculas, das duas 
    //strings, para minúsculas

    char str1NEW[20];

    for(int i = 0; i < len1; i++){
        str1NEW[i] = tolower(str1[i]);
    }

    printf("String1 to lower: %s", str1NEW);

    char str2NEW[20];

    for(int i = 0; i < len2; i++){
        str2NEW[i] = tolower(str2[i]);
    }

    printf("String2 to lower: %s", str2NEW);

    //Compare as duas strings resultantes e escreva 
    //uma mensagem indicando que são iguais, ou
    //apresentando as duas strings na sua ordem 
    //lexicográfica

    if (strcmp (str1, str2) == 0){
        printf("Same strings!");
    }

    //Crie uma cópia da segunda string

    char str2COPY[20];
    strcpy(str2COPY, str2);

    printf("String2 copy: %s", str2COPY);

    //Crie e imprima uma string que resulta da 
    //concatenação da segunda string com a sua 
    //cópia

    printf("str2 + str2 copy: %s", strcat(str2, str2COPY));

    return 0;
}
