#include "mylib.h"

int main() {
nivel_tanque config;
estado_tanque estado = cargar; // primer estado

config = inicio();

while (2){
    switch (estado){
    case cargar:estado = f_cargar(config);
         break;
    case mezclar:estado = f_mezclar(config);
         break;
    case descargar:estado = f_descargar(config);
         break;
    }
}
    return 0;
}
