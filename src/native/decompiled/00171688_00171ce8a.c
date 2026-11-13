#include "00171688_00171ce8a.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0017189c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x140000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00171860(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1f0082;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00171800(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  do {
    puVar3 = (uint *)*param_1;
    uVar2 = *puVar3;
    if (0xe < (uVar2 & 0xff)) {
      uVar2 = 0;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 & 0xff;
  *param_1 = 0;
  return;
}



undefined1 * fn_00171708(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar5 = (uint *)*param_1;
  if (puVar5 == (uint *)0x0) {
    puVar2 = &DAT_d8a02bf8;
  }
  else if (*(byte *)((int)puVar5 + 1) < 0xf) {
    uVar4 = *puVar5;
    uVar3 = (uVar4 & 0xffff) >> 8;
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    uVar12 = param_2[4];
    puVar5 = puVar5 + (((uVar4 & 0xff) + uVar3) % 0xf) * 8 + 8;
    uVar10 = param_2[5];
    uVar11 = param_2[6];
    puVar5[7] = param_2[7];
    *puVar5 = uVar6;
    puVar5[1] = uVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar9;
    puVar5[4] = uVar12;
    puVar5[5] = uVar10;
    puVar5[6] = uVar11;
    coproc_moveto_Data_Synchronization(0);
    uVar3 = (uVar3 + 1) * 0x100 & 0xff00 | uVar4 & 0xffff00ff;
    while( true ) {
      bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
      if (bVar1) break;
      uVar3 = (((*(uint *)*param_1 & 0xffff) >> 8) + 1) * 0x100 & 0xff00 |
              *(uint *)*param_1 & 0xffff00ff;
    }
    *(uint *)*param_1 = uVar3;
    if ((uVar3 & 0xffff) >> 8 == 1) {
      fn_001502a4();
      fn_0017d7e4();
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_d8a02a02;
  }
  return puVar2;
}



undefined4 * fn_00171688(void)

{
  int iVar1;
  
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e3c = 0;
    DAT_008f9e40 = 0;
    DAT_008f9e44 = 0;
    DAT_008f9e48 = 0;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e50 = 0;
    DAT_008f9e54 = 0;
    DAT_008f9e58 = 0;
    DAT_008f9e5c = 0;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e64 = 0;
  }
  return &DAT_008f9e38;
}


