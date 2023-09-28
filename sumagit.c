#include <stdio.h> // Comentarios

int main (){
    int elem1 = 1;
    int elem2 = 2;
    int result = suma(elem1,elem2);
    printf("La sumita es: %d", result);
}

int suma (int op1, int op2){ // Funcion/  (Recibe 2 argumentos, )
    return(op1+op2); // Suma
}

