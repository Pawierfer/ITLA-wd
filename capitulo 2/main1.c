#include <stdio.h> // Incluye la librería estándar de entrada y salida/* Promedio curso.El programa, al recibir como dato el promedio de un alumno en un cursouniversitario, escribe aprobado si su promedio es mayor o igual a 6.PRO: variable de tipo real. */int main (void) { // Define la función principal con retorno int    float PRO; // Declara la variable PRO de tipo float para almacenar el promedio del alumno        printf("Ingrese el promedio del alumno: "); // Solicita al usuario que ingrese el promedio del alumno    scanf("%f", &PRO); // Lee el promedio ingresado por el usuario y lo almacena en PRO        if (PRO >= 6) // Comprueba si el promedio es mayor o igual a 6        printf("\nAprobado\n"); // Imprime "Aprobado" si la condición es verdadera        return 0; // Termina la ejecución del programa y retorna 0