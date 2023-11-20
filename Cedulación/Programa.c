#include <stdio.h>// librerias a utilizar
#include <stdlib.h>


// Definir una estructura para la cédula
struct Cedula {
    char nombre[50];//declarando variables adyacentes de la estructura.
    char apellido[50];
    char fecha_nacimiento[20];
    char sexo[10];
    char tipo_sangre[5];
    char equipo_pelota[50];
};

 int main() { //Funcion principal//

    int cantidad_cedulas, i;

    // Pedir la cantidad de cédulas
    printf("Ingrese la cantidad de cedulas: ");
    scanf("%d", &cantidad_cedulas);

    // Declarar un arreglo de estructuras para almacenar la información de las cédulas
    struct Cedula cedulas[cantidad_cedulas];

    // Pedir y almacenar información de cada cédula
    for (i = 0; i < cantidad_cedulas; ++i) {
        printf("\nCedula %d:\n", i + 1);
        printf("Nombre: ");
        fflush( stdin); //descarta cualquier dato almacenado en el búfer que se haya obtenido del archivo subyacente, pero que la aplicaci
        scanf("%s", cedulas[i].nombre);
        printf("Apellido: ");
        scanf("%s", cedulas[i].apellido);
        printf("Fecha de Nacimiento: ");
        scanf("%s", cedulas[i].fecha_nacimiento);
        printf("Sexo: ");
        scanf("%s", cedulas[i].sexo);
        printf("Tipo de Sangre: ");
        scanf("%s", cedulas[i].tipo_sangre);
        printf("Equipo de Pelota: ");
        scanf("%s", cedulas[i].equipo_pelota);

        printf("\n ********************* \n");
    }

    // Imprimir la información de todas las cédulas ingresadas
    printf("\nInformacion de las cedulas ingresadas:\n");
    for (i = 0; i < cantidad_cedulas; ++i) {
        printf("Cedula %d:\n", i + 1);
        printf("Nombre: %s\n", cedulas[i].nombre);
        printf("Apellido: %s\n", cedulas[i].apellido);
        printf("Fecha de Nacimiento: %s\n", cedulas[i].fecha_nacimiento);
        printf("Sexo: %s\n", cedulas[i].sexo);
        printf("Tipo de Sangre: %s\n", cedulas[i].tipo_sangre);
        printf("Equipo de Pelota: %s\n", cedulas[i].equipo_pelota);
 }

    // Pedir al usuario un nombre de archivo para abrir y guardar la información
    char nombre_archivo[100];
    printf("\nIngrese el nombre del archivo para guardar la informacion: ");
    scanf("%s", nombre_archivo);

    // Escribir la información en el archivo
    FILE *archivo = fopen(nombre_archivo, "w");
    for (i = 0; i < cantidad_cedulas; ++i) { //imprimir datos en el archivo creado
        fprintf(archivo, "Cedula %d:\n", i + 1);
        fprintf(archivo, "Nombre: %s\n", cedulas[i].nombre);
        fprintf(archivo, "Apellido: %s\n", cedulas[i].apellido);
        fprintf(archivo, "Fecha de Nacimiento: %s\n", cedulas[i].fecha_nacimiento);
        fprintf(archivo, "Sexo: %s\n", cedulas[i].sexo);
        fprintf(archivo, "Tipo de Sangre: %s\n", cedulas[i].tipo_sangre);
        fprintf(archivo, "Equipo de Pelota: %s\n", cedulas[i].equipo_pelota);
    }

    // Cerrar el archivo creado
    fclose(archivo);

    printf("La informacion se ha guardado en el archivo: %s\n", nombre_archivo);// mesaje de tenimo de programa

return 0;
}
