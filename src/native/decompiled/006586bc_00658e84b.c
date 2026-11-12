#include "006586bc_00658e84b.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


uint fn_00658e84(byte *param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_008c3ce4 == '\0') {
    uVar5 = 0;
    do {
      iVar6 = 4;
      uVar2 = uVar5;
      do {
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar2 >> 1;
        }
        else {
          uVar2 = uVar2 >> 1 ^ 0xa001;
        }
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar2 >> 1;
        }
        else {
          uVar2 = uVar2 >> 1 ^ 0xa001;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar3 = &DAT_008f752c + uVar5;
      uVar5 = uVar5 + 1;
      *puVar3 = (short)uVar2;
    } while (uVar5 < 0x100);
    DAT_008c3ce4 = '\x01';
  }
  uVar5 = 0;
  if (param_2 != 0) {
    pbVar4 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      uVar5 = (uint)(ushort)(&DAT_008f752c)[*param_1];
      pbVar4 = param_1;
    }
    for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 2;
      uVar5 = (uint)(ushort)((&DAT_008f752c)
                             [((uint)*pbVar4 ^
                              (uint)(ushort)(&DAT_008f752c)[(*pbVar1 ^ uVar5) & 0xff] ^ uVar5 >> 8)
                              & 0xff] ^ (ushort)(&DAT_008f752c)[(*pbVar1 ^ uVar5) & 0xff] >> 8);
    }
  }
  return uVar5;
}



int fn_00658e6c(int param_1,undefined4 param_2)

{
  svc_0x28();
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}



void fn_00658e3c(int *param_1)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



void fn_00658e20(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  return;
}



void fn_00658d54(int *param_1,int param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  if (1 < param_1[2]) {
    if ((uint)param_1[2] < 2) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(param_1[1] + 4);
    }
    while (piVar1 = piVar5, piVar1 != param_1) {
      puVar3 = (undefined4 *)*piVar1;
      piVar5 = (int *)piVar1[1];
      iVar2 = (*param_3)((int)puVar3 - param_2);
      if (0 < iVar2) {
        piVar4 = (int *)*puVar3;
        while ((piVar4 != param_1 &&
               (iVar2 = (*param_3)((int)piVar4 - param_2,(int)piVar1 - param_2), 0 < iVar2))) {
          piVar4 = (int *)*piVar4;
        }
        if (*piVar1 != 0) {
          *(int *)(*piVar1 + 4) = piVar1[1];
        }
        if ((int *)piVar1[1] != (int *)0x0) {
          *(int *)piVar1[1] = *piVar1;
        }
        piVar1[1] = 0;
        *piVar1 = 0;
        puVar3 = (undefined4 *)piVar4[1];
        piVar4[1] = (int)piVar1;
        piVar1[1] = (int)puVar3;
        *piVar1 = (int)piVar4;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = piVar1;
        }
      }
    }
  }
  return;
}


