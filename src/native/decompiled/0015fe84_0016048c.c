#include "0015fe84_0016048c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0016048c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 0x24) & 1) != 0) {
    fn_00158f6c(param_2,param_3);
    return;
  }
  if ((*(uint *)(param_1 + 0x24) & 2) == 0) {
    return;
  }
  fn_00158f40(param_2,param_3,DAT_008c3cdc);
  return;
}



void fn_00160420(int param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(uint *)(param_1 + 0x24) = param_5 & 0xff;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  if ((param_5 & 2) != 0) {
    fn_00158f40(param_3,param_4 - param_3,DAT_008c3cd8);
  }
  puVar2 = &DAT_008f7520;
  iVar1 = fn_00171944(&DAT_008f7520,param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(iVar1 + 0x18);
  }
  fn_0017d948(puVar2,puVar2 + 1,param_1 + 4);
  return;
}



int fn_00160314(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_4 * param_4 + param_3 * param_3;
  if (iVar5 <= param_5 * param_5) {
    *param_2 = 0;
    *param_1 = 0;
    return 0;
  }
  iVar1 = iVar5 * 0x4000;
  if (iVar1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar4 = 1;
    iVar3 = iVar1;
    if (1 < iVar1) {
      do {
        iVar4 = iVar4 * 2;
        iVar3 = iVar3 >> 1;
      } while (iVar4 < iVar3);
    }
    do {
      iVar3 = iVar4;
      iVar4 = fn_00300f74(iVar1,iVar3);
      iVar4 = iVar4 + iVar3 >> 1;
    } while (iVar4 < iVar3);
  }
  if (iVar5 < param_6 * param_6) {
    iVar5 = iVar3 + param_5 * -0x80;
    param_6 = (iVar3 >> 7) - param_5;
  }
  else {
    param_6 = param_6 - param_5;
    iVar5 = param_6 * 0x80;
  }
  uVar2 = fn_00300f74(param_3 * iVar5,iVar3);
  *param_1 = uVar2;
  uVar2 = fn_00300f74(param_4 * iVar5,iVar3);
  *param_2 = uVar2;
  return (int)(short)param_6;
}



void fn_00160190(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar1 = param_1[5];
  (**(code **)(*param_1 + 8))(param_1,&DAT_008bfba8,1);
  uVar3 = param_1[5] & 0x3f;
  uVar2 = 0x40 - uVar3;
  if (uVar2 < 8) {
    puVar6 = (undefined4 *)((int)param_1 + uVar3 + 0x18);
    uVar4 = 4 - ((uint)puVar6 & 3);
    uVar7 = uVar4 & 3;
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)((int)param_1 + uVar3 + 0x17);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)puVar6 = 0;
        puVar5 = puVar6;
      }
      for (uVar3 = uVar7 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)((int)puVar5 + 1) = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 2);
        *(undefined1 *)puVar5 = 0;
      }
      puVar6 = (undefined4 *)((int)puVar6 + uVar7);
      uVar2 = uVar2 - uVar7;
    }
    for (; 3 < uVar2; uVar2 = uVar2 - 4) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    (**(code **)(*param_1 + 0x1c))(param_1);
    uVar3 = 0;
    uVar2 = 0x40;
  }
  else if (uVar2 < 9) goto LAB_001602e8;
  puVar6 = (undefined4 *)((int)param_1 + uVar3 + 0x18);
  uVar4 = 4 - ((uint)puVar6 & 3);
  uVar7 = uVar4 & 3;
  uVar2 = uVar2 - 8;
  if (uVar7 != 0) {
    puVar5 = (undefined4 *)((int)param_1 + uVar3 + 0x17);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)puVar6 = 0;
      puVar5 = puVar6;
    }
    for (uVar3 = uVar7 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)((int)puVar5 + 1) = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 2);
      *(undefined1 *)puVar5 = 0;
    }
    puVar6 = (undefined4 *)((int)puVar6 + uVar7);
    uVar2 = uVar2 - uVar7;
  }
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
LAB_001602e8:
  param_1[0x14] = iVar1 << 3;
  param_1[0x15] = 0;
  (**(code **)(*param_1 + 0x1c))(param_1);
  fn_001694e4(param_2,param_1 + 1,0x10);
  return;
}



void fn_001600c4(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[5] & 0x3f;
  uVar2 = 0x40 - uVar1;
  param_1[5] = param_1[5] + param_3;
  if (param_3 < uVar2) {
    if (param_3 != 0) {
      fn_001694e4((int)param_1 + uVar1 + 0x18,param_2);
      return;
    }
  }
  else {
    fn_001694e4((int)param_1 + uVar1 + 0x18,param_2,uVar2);
    (**(code **)(*param_1 + 0x1c))(param_1);
    param_2 = uVar2 + param_2;
    uVar1 = param_3 - uVar2 >> 6;
    if (uVar1 != 0) {
      do {
        fn_001694e4(param_1 + 6,param_2,0x40);
        param_2 = param_2 + 0x40;
        (**(code **)(*param_1 + 0x1c))(param_1);
        uVar1 = uVar1 - 1;
      } while (0 < (int)uVar1);
    }
    if ((param_3 - uVar2 & 0x3f) != 0) {
      fn_001694e4(param_1 + 6,param_2);
      return;
    }
  }
  return;
}



void fn_00160094(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



void fn_0015ff44(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 4;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    puVar3 = (undefined4 *)(param_2 + *(int *)(param_4 + iVar1) * 4);
    *param_1 = *puVar3;
    param_1[1] = puVar3[param_3];
    puVar4 = puVar3 + param_3 * 2;
    param_1[2] = puVar3[1];
    param_1[3] = puVar3[param_3 + 1];
    param_1[4] = *puVar4;
    param_1[5] = puVar4[param_3];
    puVar3 = param_1 + 7;
    param_1[6] = puVar4[1];
    param_1 = param_1 + 8;
    *puVar3 = puVar4[param_3 + 1];
  } while (0 < iVar2);
  return;
}



undefined4 fn_0015ff34(void)

{
  return DAT_008bfbf8;
}



int fn_0015ff24(void)

{
  return (int)DAT_008bfbde;
}



int fn_0015fed4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x130042;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    *param_4 = *(undefined4 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0015fe84(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = 0x180000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar5 + 0x88);
    uVar3 = *(undefined4 *)(iVar5 + 0x8c);
    uVar4 = *(undefined4 *)(iVar5 + 0x90);
    uVar9 = *(undefined4 *)(iVar5 + 0x94);
    uVar6 = *(undefined4 *)(iVar5 + 0x98);
    uVar7 = *(undefined4 *)(iVar5 + 0x9c);
    uVar8 = *(undefined4 *)(iVar5 + 0xa0);
    param_2[7] = *(undefined4 *)(iVar5 + 0xa4);
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = uVar4;
    param_2[3] = uVar9;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}


