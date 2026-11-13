#include "0057d8c8_0057fbd4ba.h"



undefined * fn_0057dd9c(int param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 9);
  if (cVar1 == '\0') {
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_0057ddf0);
    return puVar2;
  }
  if (cVar1 == '\x01') {
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_0057ddfc);
    return puVar2;
  }
  if (cVar1 == '\x02') {
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_0057dde4);
    return puVar2;
  }
  return &DAT_0057dde0;
}



int fn_0057dd88(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return (int)cVar1;
}



void fn_0057dce8(int param_1,char *param_2)

{
  *(char *)(*(int *)(param_1 + 8) + 0x90) = *param_2;
  if (*param_2 == '\x02') {
    *(char *)(*(int *)(param_1 + 8) + 0x91) = param_2[1];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x92) = param_2[2];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x93) = param_2[3];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x94) = param_2[4];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x95) = param_2[5];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x97) = param_2[7];
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(char *)(*(int *)(param_1 + 8) + 0x96) = param_2[6];
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x98) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}


