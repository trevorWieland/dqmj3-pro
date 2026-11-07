#include "capture.h"
#include "../squirrel-wave020/lookup_error.h"

static char *integer(char *out,SqPrototypeI32 value)
{
    SqPrototypeU32 magnitude=value<0?0u-(SqPrototypeU32)value:(SqPrototypeU32)value;
    char digits[10];SqPrototypeU32 size=0;
    if(value<0)*out++='-';
    do{digits[size++]=(char)('0'+magnitude%10);magnitude/=10;}while(magnitude);
    while(size)*out++=digits[--size];return out;
}

void sq_lookup_format_integer020(char *out,SqPrototypeI32 value)
{*integer(out,value)=0;}

void sq_lookup_vformat020(char *out,const char *format,SqLookupVarargs020 arguments)
{
    while(*format) {
        char code=*format++;
        if(code!='%'){*out++=code;continue;}
        code=*format++;SqPrototypeU32 limit=0xffffffffu;
        if(code=='.') {
            if(format[0]!='5'||format[1]!='0'||format[2]!='s')sq_capture_assert041(10);
            limit=50;format+=3;code='s';
        }
        if(code=='%')*out++='%';
        else if(code=='d')out=integer(out,__builtin_va_arg(arguments,SqPrototypeI32));
        else if(code=='s') {
            const char *input=__builtin_va_arg(arguments,const char*);
            if(!input)sq_capture_assert041(11);
            while(limit&&*input){*out++=*input++;limit--;}
        } else sq_capture_assert041(12);
    }
    *out=0;
}
