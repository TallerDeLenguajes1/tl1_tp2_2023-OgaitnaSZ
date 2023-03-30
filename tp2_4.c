#include<stdio.h>
#include<stdlib.h>
int masRapida;

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct{
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
}typedef Compu;

Compu cargarDatos();
void mostrarDatos(Compu compus);
void mostrarCompuMasVieja(Compu compus[], Compu masVieja);
void mostrarCopuMasRapida(Compu compus[], Compu masRapida);

void main(){
    Compu compus[5];
    Compu compuMasVieja;
    Compu compuMasRapida;

    for(int i = 0 ; i<5 ; i++){
        compus[i] = cargarDatos();
    };

    puts("\nLos datos de las PCs cargadas son:");
    for(int i = 0 ; i<5 ; i++){
        mostrarDatos(compus[i]);
    };

    mostrarCompuMasVieja(compus, compuMasVieja);
    mostrarCompuMasRapida(compus, compuMasRapida);
}

Compu cargarDatos(){
    Compu compus;
    compus.velocidad = rand()%3 + 1;
    compus.anio = rand()%8 + 2015;
    compus.cantidad = rand()%8 + 1;
    compus.tipo_cpu = &tipos[rand()%6][0];
    return(compus);
}
void mostrarDatos(Compu compus){
    printf("\nVelocidad: %dGHZ", compus.velocidad);
    printf("\nAnio: %d", compus.anio);
    printf("\nNucleos: %d", compus.cantidad);
    printf("\nTipo de CPU: ");
    puts(compus.tipo_cpu);
}

void mostrarCompuMasVieja(Compu compus[], Compu compu){
    int masVieja = 2021;
    for(int i = 0 ; i<5 ; i++){
        if(compus[i].anio < masVieja){
            masVieja = compus[i].anio;
            compu.velocidad = compus[i].velocidad;
            compu.anio = compus[i].anio;
            compu.cantidad = compus[i].cantidad;
            compu.tipo_cpu = compus[i].tipo_cpu;
        }
    }
    printf("\nLa pc mas vieja es:");
    mostrarDatos(compu);
}
void mostrarCompuMasRapida(Compu compus[], Compu compu){
    for(int i = 0 ; i<5 ; i++){
        if(compus[i].velocidad > masRapida){
            masRapida = compus[i].velocidad;
            compu.velocidad = compus[i].velocidad;
            compu.anio = compus[i].anio;
            compu.cantidad = compus[i].cantidad;
            compu.tipo_cpu = compus[i].tipo_cpu;
        }
    }
    printf("\nLa pc mas rapida es:");
    mostrarDatos(compu);
}