#include <stdio.h>
#include "alerta.h"

void emitir_alerta(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("BIP!\n");
        return 0;
    }
}