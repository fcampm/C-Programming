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
    //problemaVehiculoTelepeaje();
    //problemaEnterosARomanos();
    problemaNumeroMes();
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

void problemaEnterosARomanos(){

    // Declaración de variables a usar
    int numero, unidades, decenas, centenas, millar;

    printf("Digite un numero: ");
    scanf("%i", &numero);

    unidades = numero % 10;
    numero /= 10;
    decenas = numero % 10;
    numero /= 10;
    centenas = numero % 10;
    numero /= 10;
    millar = numero % 10;
    numero /= 10;

    switch(millar){
        case 1:
            printf("M");
            break;
        case 2:
            printf("MM");
            break;
        case 3:
            printf("MMM");
    }
    switch(centenas){
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        case 6:
            printf("DC");
            break;
        case 7:
            printf("DCC");
            break;
        case 8:
            printf("DCCC");
            break;
        case 9:
            printf("CM");
            break;
    }
    switch(decenas){
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
    }
    switch(unidades){
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
    }
}

void problemaNumeroMes(){

    // Variables de instancia.
    int numeroMes;

    printf("Digite un numero para mostrar su mes: ");
    scanf("%i", &numeroMes);

    switch(numeroMes){
        case 1:
            printf("Enero");
            break;
        case 2:
            printf("Febrero");
            break;
        case 3:
            printf("Marzo");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Mayo");
            break;
        case 6:
            printf("Junio");
            break;
        case 7:
            printf("Julio");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Septiembre");
            break;
        case 10:
            printf("Octubre");
            break;
        case 11:
            printf("Noviembre");
            break;
        case 12:
            printf("Diciembre");
            break;
    }
}