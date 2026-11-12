#include "0066c8c8_0066cfe8b.h"



undefined4 fn_0066cfe8(int *param_1,int *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_1[0x1c] = 0;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  iVar7 = param_2[6];
  iVar8 = param_2[7];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar2;
  param_1[0x22] = iVar3;
  param_1[0x23] = iVar4;
  param_1[0x24] = iVar5;
  param_1[0x25] = iVar6;
  param_1[0x26] = iVar7;
  param_1[0x27] = iVar8;
  iVar2 = param_2[9];
  param_1[0x28] = param_2[8];
  param_1[0x29] = iVar2;
  *(undefined1 *)(param_1 + 0x3e) = param_3;
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    fn_00673ce8(param_1,7);
    uVar1 = fn_0066d1cc(param_1);
    return uVar1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,7);
  return 1;
}



undefined4 fn_0066cf80(int *param_1,int *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_1[0x1c] = 0;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  iVar5 = param_2[4];
  iVar6 = param_2[5];
  iVar7 = param_2[6];
  iVar8 = param_2[7];
  param_1[0x20] = *param_2;
  param_1[0x21] = iVar2;
  param_1[0x22] = iVar3;
  param_1[0x23] = iVar4;
  param_1[0x24] = iVar5;
  param_1[0x25] = iVar6;
  param_1[0x26] = iVar7;
  param_1[0x27] = iVar8;
  iVar2 = param_2[9];
  param_1[0x28] = param_2[8];
  param_1[0x29] = iVar2;
  *(undefined1 *)(param_1 + 0x3e) = param_3;
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    fn_00673ce8(param_1,4);
    uVar1 = fn_0066d1cc(param_1);
    return uVar1;
  }
  (**(code **)(*param_1 + 0x30))(param_1,4);
  return 1;
}



char * fn_0066ceec(void)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar2 = *(char **)(*(int *)(DAT_00897804 + 0x30) + 4);
  cVar1 = *pcVar2;
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = pcVar2[1];
  }
  if (bVar3 && cVar1 == '\0') {
    cVar1 = pcVar2[2];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = pcVar2[3];
    }
    if (bVar3 && cVar1 == '\0') {
      cVar1 = pcVar2[4];
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = pcVar2[5];
      }
      if (bVar3 && cVar1 == '\0') {
        cVar1 = pcVar2[6];
        bVar3 = cVar1 == '\0';
        if (bVar3) {
          cVar1 = pcVar2[7];
        }
        if (bVar3 && cVar1 == '\0') {
          cVar1 = pcVar2[8];
          bVar3 = cVar1 == '\0';
          if (bVar3) {
            cVar1 = pcVar2[9];
          }
          if (bVar3 && cVar1 == '\0') {
            cVar1 = pcVar2[10];
            bVar3 = cVar1 == '\0';
            if (bVar3) {
              cVar1 = pcVar2[0xb];
            }
            if (bVar3 && cVar1 == '\0') {
              pcVar2 = (char *)0x0;
            }
          }
        }
      }
    }
  }
  return pcVar2;
}


