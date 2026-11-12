#include "00161104_00161898ab.h"



undefined4 * fn_001615f0(int param_1,char *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar1 = (undefined4 *)fn_00194ee4(0x90,4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0x22] = 0;
    *(undefined1 *)(puVar1 + 0x23) = 0;
    uVar4 = 0;
    pcVar2 = (char *)(puVar1 + 2);
    do {
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *param_2;
      param_2 = param_2 + 1;
      bVar6 = *param_2 == '\0';
      uVar5 = 0;
      if (!bVar6) {
        uVar5 = 0x7f;
      }
      pcVar2 = pcVar3;
    } while ((bVar6 || uVar4 <= uVar5) && (!bVar6 && uVar5 != uVar4));
    *pcVar3 = '\0';
    puVar1[0x22] = param_3;
    *(undefined1 *)(puVar1 + 0x23) = 0;
    fn_0017d948(param_1 + 0x10,param_1 + 0x14,puVar1);
  }
  return puVar1;
}



int fn_0016156c(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((char)param_1[3] != '\0') {
    iVar1 = (uint)*(ushort *)((int)param_1 + 6) * 0x448 + (*param_1 + 0xfU & 0xfffffff0) * 4 + 100;
  }
  iVar1 = (*(ushort *)(param_1 + 1) + 1) * 0x6c + (uint)*(ushort *)((int)param_1 + 6) * 0x278 +
          (uint)*(ushort *)(param_1 + 2) * 0x218 + iVar1;
  if (*(char *)((int)param_1 + 10) != '\0') {
    iVar1 = iVar1 + 0x1d0;
  }
  return iVar1;
}


