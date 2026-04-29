#include <stdio.h>
#include"sumar.h"
#include"restar.h"
#include"multiplicar.h"
#include"dividir.h"
int main( int argc, char const  *argv[])
{

    int a,b;
    printf("ingrese 1er numero ");
    scanf("%d",&a);
    printf("ingrese 2do numero  ");
    scanf("%d",&b);
    sumar (a,b);
    restar (a,b);
    multiplicar (a,b);
    dividir (a,b);
    printf("la suma es : %d",sumar (a,b));
    printf("la resta es : %d",restar (a,b));
    printf("la multiplicacion es : %d",multiplicar (a,b));
    printf("la division es : %d",dividir (a,b));
    return 0 ;



}