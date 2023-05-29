#include <stdio.h>

int main()
{
    int x;
    int y;

    x = 5;
    y = 6;

    int i = 0;

    while (i < x) {
        printf("|");
        printf (i);
        i = i + 1;
    }

    return (0);
}