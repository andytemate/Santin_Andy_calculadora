#include <stdio.h>
#include"sumar.h"
int main( int argc, char const  *argv[])
{

    int a,b;
    printf("ingrese 1er numero ");
    scanf("%d",&a);
    printf("ingrese 2do numero  ");
    scanf("%d",&b);
    sumar (a,b);
    printf("la suma es : %d",sumar (a,b));
    return 0 ;



}