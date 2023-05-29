#include <string.h>
#include <unistd.h>
#include <stdio.h>

int    pt_char()
{ 
int x;
int y;
scanf("%d", &x);
scanf("%d", &y);
printf("x");
printf("y");
    // (1, *, *) -> 0 -> pega entrada, 1 -> devolve saída, 2 -> devolve erro. Caso seja uma entrada já especificada onde vai se inserir um valor, não precisa
    // (*, &x, *) -> instancia de variavel/ endereco na memoria da variavel "x"
    // (*,*, definicao do tipo de variavel) 
    //iQtdeWrite = write (iFileDescriptor, &aBuffer, strlen (aBuffer)) 
//write (0, &x, 1);
//write (0, &y, 1);
    // nessas duas funções write estamos pegango o input em x e y, como char mesmo, definindo assim seu valor.
    //agora recebemos o valor de x e y, podemos colocar ele em algum lugar
// x = x_wight; 
// y = y_length;
}
