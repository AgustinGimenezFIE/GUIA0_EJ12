#include <stdio.h>
/*
 EJERCICIO 12 : Implemente una función que reciba un string por referencia y lo invierta. Por ejemplo, si el string es "hola", el resultado debe ser "aloh".
*/

#define MAX 50

void invertir(char cadena[]);

void invertir(char cadena[MAX])
{
    int i=0 , cont=0;
    char aux[MAX];
    for (i=0;*(cadena + i) != '\0';i++){
        *(aux+i) = *(cadena+i);
        cont++;
    }
    for(i=0;i<cont;i++){
        cadena[i] = aux[cont-i-1]; // -1 porque el ultimo caracter de aux[cont] es '\0' y no puedo asignar eso al primer caracter de cadena
    }
}

int main()
{
    char cadena[MAX];
    printf("Ingrese una cadena de caracteres . El Resultado sera invertirla : \n");
    gets(cadena);
    printf("Texto Original : %s",cadena);
    invertir(cadena);
    printf("\nTexto Modificado : %s",cadena);
    return 0;
}
