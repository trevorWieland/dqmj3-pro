#include "type_error.h"

static char *integer(char *destination,SqPrototypeI32 value)
{
    SqPrototypeU32 magnitude=value<0?0u-(SqPrototypeU32)value:(SqPrototypeU32)value;
    char digits[10];SqPrototypeU32 count=0;
    if(value<0)*destination++='-';
    do {digits[count++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);
    while(count)*destination++=digits[--count];
    return destination;
}

void sq_lookup_format_integer020(char *destination,SqPrototypeI32 value)
{*integer(destination,value)=0;}

void sq_lookup_vformat020(char *destination,const char *format,SqLookupVarargs020 arguments)
{
    while(*format) {
        char current=*format++;
        if(current!='%'){*destination++=current;continue;}
        current=*format++;
        if(current=='%')*destination++='%';
        else if(current=='d')destination=integer(destination,__builtin_va_arg(arguments,SqPrototypeI32));
        else if(current=='s') {
            const char *input=__builtin_va_arg(arguments,const char*);
            if(!input)sq_type_error_format_unsupported025();
            while(*input)*destination++=*input++;
        } else sq_type_error_format_unsupported025();
    }
    *destination=0;
}

void sq_lookup_format_float020(char *destination,double floating)
{(void)destination;(void)floating;sq_type_error_format_unsupported025();}
