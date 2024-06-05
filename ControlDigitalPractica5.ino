#include <Arduino.h>

extern "C" {
    #include "inc/botones.h"
}

//Nuevo tipo de datos enumerado: estadoMEF
typedef enum{
    ESTADO_INICIAL,
    ESTADO_1,
    ESTADO_2,
    ESTADO_N
} estadoMEF_t;

// Variable de estado (global)
estadoMEF_t estadoActual;

// void InicializarMEF(estadoMEF_t *estado){
//     *estado = ESTADO_INICIAL;
// }


void setup () {
    InicializarMEF(*estadoActual);
}
void loop (){

}

