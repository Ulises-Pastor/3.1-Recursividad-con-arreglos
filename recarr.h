#ifndef RECARR_H
#define RECARR_H

void Insertar(int *array, int item, int longitud, unsigned capacidad);
int SumaRecurNoM(int *array, int longitud);
int SumaRecurSiM(int *array, int longitud);
int Is_full(int longitud, unsigned Capacidad);
int Is_empty(int longitud);

#endif