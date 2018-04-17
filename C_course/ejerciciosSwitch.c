/*
 * Author: Fabián Camp Mussa.
 * Github: https://github.com/fcampm
 * Created on April 16, 2018.
 * */

/* Dada una nota de un examen mediante un código escribir la letra que le corresponde a la nota.
 *
 * A - Excelente
 * B - Notable
 * C - Aprobado
 * D y F - Reprobado */

// Librerías a usar.
#include <stdio.h>

// Macros a usar en el problemaVehiculoTelepeaje.
#define TURISMO 500;
#define AUTOBUS 3000;
#define MOTOCICLETA 300;

int main(){

    // Llamamos la función problemaCalificaciones() para correr la solución del problema de las calificaciones
    //problemaCalificaciones();
    problemaVehiculoTelepeaje();
    return 0;
}

void problemaCalificaciones(){
    // Declaración de variables para resolver el problema
    char calificacion;

    printf("Ingrese la calificacion del alumno: ");
    scanf("%c", &calificacion);

    // Declaración del switch a usar para el problema planteado
    switch(calificacion){
        case 'A':
        case 'a':
            printf("Excelente");
            break;
        case 'B':
        case 'b':
            printf("Notable");
            break;
        case 'C':
        case 'c':
            printf("Aprobado");
            break;
        case 'D':
        case 'd':
        case 'F':
        case 'f':
            printf("Reprobado");
            break;
        default:
            printf("Calificacion no valida");
    }
}

void problemaVehiculoTelepeaje(){

    // Variables de instancia y macros de la función problemaVehiculoTelepeaje
    int tipoVehiculo;
    int tarifa;

    printf("Tipo vehiculo: ");
    printf("\n1. Turismo");
    printf("\n2. Autobus");
    printf("\n3. Motocicleta");
    printf("\nSeleccione su tipo de vehiculo: ");

    scanf("%i", &tipoVehiculo);

    // Declaración del switch para la solución del problema.
    switch(tipoVehiculo){
        case 1:
            tarifa = TURISMO;
            printf("El costo de telepeaje es: $%i", tarifa);
            break;
        case 2:
            tarifa = AUTOBUS;
            printf("El costo de telepeaje es: $%i", tarifa);
            break;
        case 3:
            tarifa = MOTOCICLETA;
            printf("El costo de telepeaje es: $%i", tarifa);
            break;
        default:
            printf("Vehiculo no autorizado");
    }
}

