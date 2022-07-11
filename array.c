#include "main.h"
int (*fnc (char j))(va_list)
{
    type_t array[] = {
    {"c",_print_char},
    {"s",_print_str},
    {"%",_print_percent},
    {NULL, NULL},
    };
    int i;
    for(i = 0; array[i].choice; i++)
    {
        if(j == *array[i].choice)
            return(array[i].f);
    }
    return(NULL);
}
