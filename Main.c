#include <stdio.h>
/*Reemplace en otro archivo los multiplos del 3*/
int main(){
    int num;
    FILE *archivo=NULL;
    FILE *archivo2=NULL;
    archivo=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");

    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    while(!feof(archivo)){
        fscanf(archivo, "%d", &num);
    if(num%3==0){
        fprintf(archivo,"modulo de 3");
    }
    else{
        fprintf(archivo2,"%d\n",num);
    }
    }


    for(int i=0; i<100; i++){
        fprintf(archivo,"%d\n",i);
    }
    fclose(archivo);
     return 0;
}