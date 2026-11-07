#include "../squirrel-wave020/lookup_error.h"

void sq_lookup_vformat020(char *destination,const char *format,SqLookupVarargs020 arguments)
{
    (void)arguments;
    while(*format)*destination++=*format++;
    *destination=0;
}
