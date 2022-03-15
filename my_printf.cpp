#include <stdio.h>

extern "C" int my_printf_stdcall(const char *str, ...);

int main()
{
    my_printf_stdcall("%%\n%cello, world! %s %s %d = %b = %o = %x.\n%%\n$", 'H', "My name is Kostya$", " and i know that $" ,189, 189, 189, 189);

    return 0;   
}
