#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

    archivo=fopen("archivo.txt","r+");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    int c=0;

    while (!feof(archivo)){
        c++;
        fgets(buffer,100,archivo);
        printf("la línea %d es %s",c,buffer);
    }

    /*
    fgets(buffer,100,archivo);
    printf("la primera línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la segunda línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la tercera línea es %s",buffer);

    fscanf(archivo, "%lf", &pi);
    printf("el número en la cuarta línea es %lf",pi);

    fprintf(archivo,"\n");

    fputs("se agrega una quinta línea",archivo);
  */
 
    fclose(archivo);


    return 0;
}