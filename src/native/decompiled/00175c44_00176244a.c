#include "00175c44_00176244a.h"



undefined4 fn_00175dcc(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((((int)*param_2 - 0x20U < 2) && (uVar2 = (uint)(char)(*param_2 + -0x10), -1 < (int)uVar2)) &&
     (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2))) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
  }
  return uVar1;
}



undefined4 fn_00175d88(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((((int)*param_2 - 0x22U < 2) && (uVar2 = (uint)(char)(*param_2 + -0x10), -1 < (int)uVar2)) &&
     (uVar2 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2))) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
  }
  return uVar1;
}



int fn_00175d48(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((((cVar1 == '\x1b' || cVar1 == '\x1c') || (cVar1 == '\x1d' || cVar1 == '\x1e')) ||
      (cVar1 == '\x1f' || cVar1 == ' ')) || (cVar1 == '!' || cVar1 == '\"')) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



char * fn_00175c44(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *(char *)(param_1 + 4);
  if ((((((cVar1 == '\0') && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
        (*pcVar2 == '\x01')) && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)) ||
      (((cVar1 == '\0' && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
       ((*pcVar2 == '\x03' && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)))))) ||
     (((((cVar1 == '\0' && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
        ((*pcVar2 == '\x02' && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)))) ||
       (((((cVar1 == '\0' && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
          (*pcVar2 == '\f')) && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)) ||
        (((cVar1 == '\0' && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
         ((*pcVar2 == '\x10' && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)))))))) ||
      (((cVar1 == '\0' && (pcVar2 = *(char **)(param_1 + 8), pcVar2 != (char *)0x0)) &&
       ((*pcVar2 == '\x15' && (pcVar2 = pcVar2 + 4, pcVar2 != (char *)0x0)))))))) {
    return pcVar2;
  }
  return (char *)0x0;
}


