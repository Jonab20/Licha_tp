#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  cargar = 0,
  mezclar = 1,
  descargar = 2
}estado_tanque;


typedef struct{
    char n; //nivel leido
    char na_set; //nivel liquido A
    char nb_Set; //nivel liquido B
    char t; //Tiempo del motor activo leído
    char tm_set; //Tiempo configurado para el motor activo
}nivel_tanque;


nivel_tanque f_inicio(void); // lee el archivo de configuración y carga las variables.
estado_tanque f_cargar(nivel_tanque);
estado_tanque f_mezclar(nivel_tanque);
estado_tanque f_descargar(nivel_tanque);

#endif
