#include <stdio.h>
#include <string.h>
#include <unistd.h>

int    rush00(int x,int y)
{
int y;
int x;
int x_i = 0;
int y_i = 0;

    //Caso o input seja menor ou igual a 0.
    //Só faz sentido printar o que for maior do que zero, senão não tem dimensao. 
    if (x <= 0 || y <= 0)
    {
        return (-1);
        printf("Não dá pra desenhar um retângulo sem dimensões Zé");
    }else{
       while (x_i<=x && y_i<=y)
       {
         if ((y_i>0 && y_i<y) && (x_i>0 && x_i<x))
         {  
            printf(" ");
            y_i++;
            x_i++;
        }else if ((y_i=0 && (x_i>0&&x_i<x))||((y_i=y)&&(x_i>0 && x_i<x)))
        {
            printf("-");
            x_i++;
        }else if (((x_i=0) && (y_i<y &&y_i<y))||((x_i=x) && (y_i>0&&y_i<y)))
        {
           printf("|"); 
        }else{
            printf("+");
        }
       }
    }
}