#include <stdio.h>
#include <string.h>


void    pt_char(int x, int y)
{ 
int x;
int y;
    scanf ("%d", &x);
    scanf ("%d", &y);

    write ("Variáveis recebidas na função pt_char são: ");
    write (x, y);
   // (1, *, *) -> 0 -> pega entrada, 1 -> devolve saída 
   // (*, &x, *) -> 
   // (*,*, referencia do tipo de variavel) 
   //iQtdeWrite = write (iFileDescriptor, &aBuffer, strlen (aBuffer)) 
   write (0, &x, )
}

