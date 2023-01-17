#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    char buffer[100];
    int vector[99];

    archivo=fopen("multiplicacion.txt","w");
    archivo2=fopen("vector.txt","r+");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    if (archivo2==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    
    int aux=0;

    while (!feof(archivo2)){
        fscanf(archivo2,"%d",vector+aux);
        aux++;
    }

    for(int i=0; i<100; i++){
        vector[i]=vector[i]*3;
    }

    for(int i=0; i<100; i++){
        fprintf(archivo,"%d\n",vector[i]);
    }

    fclose(archivo);
    fclose(archivo2);
     return 0;
}