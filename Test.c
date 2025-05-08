/***************************************************
ESTRUCTURA DE UN PROGRAMA EN C
Ing. Teresa Cortes Magallon
11/12/23
****************************************************/

//Directivas del preprocesador
#include "stdio.h" 
#define PI 3.1416     //Macro
                  
 struct Cuadrado //Estructuras
 { int Base;
   int Altura;
 };         
  
 void FuncionSec(); //Prototipos de funcion
 float varGlobal=5;//Variables globales
                  
int main()   //Funcion principal main
{   char  Nombre[]="Teresa";   //Declaracion de variables locales
    
    printf("Hola %s \n", Nombre);  //Sentencias de codido
    FuncionSec();
     
    return 0; //Para indicar al compilador que todo termino bien.
}

void FuncionSec()   //Funcion
{ int a=2, b=3; 
  printf("%d", a+b);
  return;
}