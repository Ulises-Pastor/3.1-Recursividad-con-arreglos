#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "recarr.h"

int menu();

int main(){
    unsigned Capacity=20;
    int Arreglo[Capacity];;
    int longitud=-1, Numero, option, ResultadoSuma;
    while (1)
    {
        option=menu();
        switch (option)
        {
        case 1:
            printf("Ingresa el elemento a insertar: ");
            scanf("%d", &Numero);
            Insertar(Arreglo, Numero, longitud, Capacity);
            if(!Is_full(longitud, Capacity))
                longitud++;
            break;
        
        case 2:
            if (Is_empty(longitud))
            {
                printf("No se puede sumar, el arreglo esta vacio.\n");
            } else{
                ResultadoSuma=SumaRecurNoM(Arreglo, longitud);
                printf("El resultado de la suma es: %d\n", ResultadoSuma);
            }
            break;

        case 3:
            if (Is_empty(longitud))
            {
                printf("No se puede sumar, el arreglo esta vacio.\n");
            } else{
                ResultadoSuma=SumaRecurSiM(Arreglo, longitud);
                printf("El resultado de la suma es: %d\n", ResultadoSuma);
            }
            break;

        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
}

int menu(){
    int election;
    printf("Funciones recursivas con arreglos\n");
    printf("1. Insertar\n");
    printf("2. Sumar\n");
    printf("3. Mostrar\n");
    printf("4. Salir\n");
    printf("Ingresa la accion a realizar\n");
    scanf("%d", &election);
    return election;
}