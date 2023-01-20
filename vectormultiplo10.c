#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivovec=NULL;
    int i;

    archivo=fopen("vector.txt","r");
    archivovec=fopen("vector3.txt","w");
//VECTOR MULTIPLO DE 10
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
    if (archivovec==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
//GUARDAR ARCHIVO
    while (!feof(archivo)){
        fscanf(archivo,"%d",&i);
        if(i%10==0){
            fprintf(archivovec," Es multiplo de 10\n");
        }else{
            fprintf(archivovec,"%d\n",i);
        }
    
    
    }
    

     fclose(archivo);
     fclose(archivovec);
     return 0;
}