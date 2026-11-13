#include "00163a1c_00163e50ab.h"



char fn_00163cd8(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_008994a4 + param_1 * 0x60;
  cVar1 = *(char *)(iVar2 + 3);
  if ((((cVar1 == '\a') && ((*(uint *)(iVar2 + 0x40) & 0x7fffff) >> 0x16 == 0)) &&
      (param_2 == 3 || param_2 == 4)) && (*(char *)(iVar2 + 2) == '\x01')) {
    cVar1 = '\b';
  }
  return cVar1;
}



undefined1 fn_00163cbc(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 3);
}



byte fn_00163c9c(int param_1)

{
  return *(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 1;
}


