#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "recarr.h"

void Insertar(int *array, int item, int longitud, unsigned capacidad){
    if (Is_full(longitud, capacidad))
    {
        printf("El arreglo esta lleno, no se puede insertar otro elemento.\n");
    } else{
        array[longitud+1]=item;
    }
    
}
int SumaRecurNoM(int *array, int longitud){
    if (longitud==0)
    {
        return array[longitud];
    } else{
        return array[longitud]+SumaRecurNoM(array, longitud-1);
    }
}

int SumaRecurSiM(int *array, int longitud){
    int Num=longitud;
    int Numero=array[Num];
    if (Num==0)
    {
        return Numero;
    } else{
        printf("Llamada recursiva a %d\n", array[Num]);
        return Numero+SumaRecurNoM(array, Num-1);
    }
}

int Is_full(int longitud, unsigned Capacidad){
    return longitud+1==(int)Capacidad;
}

int Is_empty(int longitud){
    return longitud==-1;
}