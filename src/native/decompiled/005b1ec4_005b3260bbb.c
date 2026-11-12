#include "005b1ec4_005b3260bbb.h"



void fn_005b3260(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x78);
  do {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *param_2;
    bVar4 = param_2[1] == '\0';
    pcVar1 = pcVar2;
    param_2 = param_2 + 1;
  } while ((bVar4 || uVar3 < 0x20) && (!bVar4 && uVar3 != 0x1f));
  *pcVar2 = '\0';
  return;
}



void fn_005b3224(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0;
  pcVar1 = (char *)(param_1 + 0x58);
  do {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *param_2;
    bVar4 = param_2[1] == '\0';
    pcVar1 = pcVar2;
    param_2 = param_2 + 1;
  } while ((bVar4 || uVar3 < 0x20) && (!bVar4 && uVar3 != 0x1f));
  *pcVar2 = '\0';
  return;
}



void fn_005b31ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = &DAT_00848004;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}


