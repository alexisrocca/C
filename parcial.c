#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define NO_OF_CHARS 256

void printCommonChars(char *str1, char *str2) {
    // Inicializamos arrays de conteo
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
 
    // Contamos los caracteres en las dos cadenas

    for (i = 0; i < strlen(str1) ; i++)
        count1[str1[i]]++;

    for (i = 0; i < strlen(str2) ; i++) 
        count2[str2[i]]++;

    // Imprimimos los caracteres comunes
    printf("\nLos Caracteres en comun de ambos strings son:\n");
    for (i = 0; i < NO_OF_CHARS; i++)
        // ((count1[i] != 0) && (count2[i] != 0))
        if (count1[i] && count2[i])
            printf("%c", i);
    
    printf("\n\n-- String N1 --\n%s\n",str1);

    for( i = 0; i < NO_OF_CHARS; i++)
        if (count1[i] > 0)
            printf("[%c - %i] = %i\n",i,i,count1[i]);

    printf("\n-- String N2 --\n%s\n",str2);
    for( i = 0; i < NO_OF_CHARS; i++)
        if (count2[i] > 0)
            printf("[%c - %i] = %i\n",i,i,count2[i]);
}

int main() {
    char str1[] = "holaholab";
    char str2[] = "chauchaubxxxbx";
    printCommonChars(str1, str2);
    return 0;
}