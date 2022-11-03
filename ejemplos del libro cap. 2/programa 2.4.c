#include <stdio.h>
/* incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al
➥mismo 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual).
PRE y NPR: variables de tipo real. */

void main (void)
{
    float pre, npr;
    printf ("ingrese el precio del producto: ");
    scanf ("%f", &pre);
    if (pre< 1500)
        npr = pre * 1.11;
        npr = pre * 1.00;
        printf ("nuevo precio del producto: &8.2f", npr);

}
