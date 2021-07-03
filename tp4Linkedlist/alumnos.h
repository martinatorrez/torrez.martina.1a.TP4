#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED
#include "LinkedList.h"

typedef struct
{

    int legajo;
    char nombre[20];
    char sexo;

} eAlumnos;

#endif // ALUMNOS_H_INCLUDED

void mostrarAlumno(eAlumnos* a);
void mostrarAlumnos(LinkedList* list);
int ordenarAlumnos(void* alumno1, void* alumno2);
