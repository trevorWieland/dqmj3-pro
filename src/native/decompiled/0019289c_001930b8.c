#include "0019289c_001930b8.h"



int fn_001930b8(void)

{
  if (DAT_0089a680 == 0) {
    fn_00146594();
  }
  return DAT_0089a680;
}



void fn_0019303c(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_28;
  short *psStack_24;
  int local_20;
  
  piVar2 = (int *)fn_0017750c();
  if (piVar2 != (int *)0x0) {
    do {
      psStack_24 = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_24;
    } while (sVar1 != 0x3a);
    local_28 = 4;
    iVar3 = fn_00100b58(psStack_24);
    local_20 = (iVar3 + 1) * 2;
    (**(code **)(*piVar2 + 0x18))(piVar2,&local_28,param_3,param_4);
  }
  return;
}



int fn_00193004(int param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xfffffffe) != 0) {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(*(uint *)(param_1 + 4) & 0xfffffffe);
    *(uint *)(param_1 + 4) = 0;
  }
  return param_1;
}



void fn_00192f64(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  undefined4 local_14;
  
  local_14 = 0;
  if (param_4 == 0) {
    fn_00102908(&local_14,3,&DAT_00193000,param_5);
  }
  else {
    fn_00102908(&local_14,3,&DAT_00192fec);
  }
  fn_00102908(param_1,param_2,(char *)&DAT_00192ff4);
  return;
}



void fn_00192f50(undefined4 param_1,int param_2)

{
  if (param_2 != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1);
  }
  return;
}



void fn_00192e20(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar1 = *(int *)(param_1 + 0x124) - *(int *)(param_1 + 0x120) >> 2;
  if (uVar1 <= param_4) {
    fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_4,uVar1);
  }
  iVar2 = *(int *)(param_1 + 0x120);
  iVar3 = *(int *)(iVar2 + param_4 * 4);
  for (; iVar4 = -1, param_2 < iVar3; param_2 = param_2 + 1) {
    if (((&DAT_007bab54)[param_2] & uVar5) != 0) {
      iVar4 = param_2;
      break;
    }
  }
  do {
    iVar3 = iVar3 + 1;
    if (param_3 + 1 <= iVar3) goto LAB_00192f08;
  } while (((&DAT_007bab54)[iVar3] & uVar5) == 0);
  if (iVar3 < 0) {
LAB_00192f08:
    if (-1 < iVar4) {
      uVar1 = *(int *)(param_1 + 0x124) - iVar2 >> 2;
      if (uVar1 <= param_4) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_4,uVar1);
      }
      *(int *)(*(int *)(param_1 + 0x120) + param_4 * 4) = iVar4;
      return;
    }
  }
  else {
    uVar1 = *(int *)(param_1 + 0x124) - iVar2 >> 2;
    if (uVar1 <= param_4) {
      fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,param_4,uVar1);
    }
    *(int *)(*(int *)(param_1 + 0x120) + param_4 * 4) = iVar3;
  }
  return;
}



void fn_00192d0c(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (param_3 < 3) {
    uVar1 = fn_0017fde4(param_2);
    pcVar4 = (&PTR_s_Ride_S_0088fecc)[param_3];
  }
  else {
    uVar1 = fn_0017fde4(param_2);
    pcVar4 = (char *)&DAT_00192e10;
  }
  uVar1 = fn_00191238(uVar1,pcVar4);
  puVar2 = (undefined4 *)fn_00145b00(0x14,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &DAT_00840cf8;
  }
  uVar1 = fn_0017fde4(param_1);
  fn_0018cdf4(puVar2,uVar1);
  uVar1 = fn_0017fde4(param_2);
  uVar1 = fn_0018d16c(uVar1,puVar2);
  uVar3 = fn_0017fde4(param_1);
  fn_00196998(uVar3,uVar1);
  if (param_4 == -1) {
    param_4 = 0;
  }
  if (param_5 == 0) {
    fn_0018d060(param_1,param_4,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00192df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_4);
  return;
}



int fn_00192cb4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  if (param_3 == 0) {
    ppuVar3 = &PTR_s_icon_group_dance_008984e8;
  }
  else {
    ppuVar3 = &PTR_s_iconcol_group_dance_00898254;
  }
  puVar4 = ppuVar3[param_2];
  uVar1 = fn_0016752c(param_1,param_1 + 8,DAT_00898220);
  iVar2 = fn_00188184(param_1,uVar1,puVar4,0);
  if (iVar2 == 0) {
    iVar2 = DAT_00898200;
  }
  return iVar2;
}



undefined4 * fn_00192b9c(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  
  puVar1 = (undefined4 *)fn_002fece8(0x78);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &DAT_0081c358;
    puVar1[2] = 0;
    puVar1[6] = 0x1000001;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0x1000001;
    puVar1[0x11] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((int)puVar1 + 0x66) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    local_20 = 0x8000100;
    local_1c = param_2;
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590(0,&local_20);
    }
    param_2[1] = param_2[1] + 1;
    fn_0019e864(puVar1 + 6);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    puVar1[5] = param_1;
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    puVar1[0x12] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    fn_0019e8c4(param_1 + 0x44,puVar1);
  }
  return puVar1;
}



undefined4 fn_0019289c(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint local_30;
  int *local_2c;
  
  if (*(char *)(param_1 + 0x74) == '\x01') {
    fn_0019813c(param_2,(char *)&DAT_00192b3c);
    return 0;
  }
  if (*(char *)(param_1 + 0x74) == '\x02') {
    fn_0019813c(param_2,(char *)&DAT_00192b68);
    return 0;
  }
  puVar11 = *(undefined4 **)(param_2 + 0x84);
  iVar12 = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *puVar11;
  *(undefined4 *)(param_1 + 0x3c) = puVar11[1];
  fn_0019e864(param_1 + 0x40,puVar11 + 2);
  *(undefined4 *)(param_1 + 0x48) = puVar11[4];
  *(undefined4 *)(param_1 + 0x4c) = puVar11[5];
  *(undefined4 *)(param_1 + 0x50) = puVar11[6];
  *(undefined4 *)(param_1 + 0x54) = puVar11[7];
  *(undefined4 *)(param_1 + 0x58) = puVar11[8];
  *(undefined4 *)(param_1 + 0x5c) = puVar11[9];
  *(undefined4 *)(param_1 + 0x60) = puVar11[10];
  *(undefined4 *)(param_1 + 100) = puVar11[0xb];
  local_30 = 0x1000001;
  local_2c = (int *)0x0;
  fn_0019d320(param_1 + 0x20,iVar12,&local_30);
  if (((local_30 & 0x8000000) != 0) &&
     (iVar6 = local_2c[1], local_2c[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  iVar6 = 0;
  if (0 < iVar12) {
    do {
      fn_0019e864(*(int *)(param_1 + 0x20) + iVar6 * 8,
                   *(int *)(param_2 + 0x18) + (*(int *)(param_2 + 0x34) + iVar6) * 8);
      fn_0019e864(*(int *)(param_2 + 0x18) + (*(int *)(param_2 + 0x34) + iVar6) * 8,&DAT_008c06e8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar12);
  }
  uVar2 = (uint)*(ushort *)(*(int *)(param_2 + 0x84) + 0x2c);
  uVar1 = *(ushort *)(*(int *)(param_2 + 0x84) + 0x2e);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    piVar10 = (int *)(param_1 + 0x2c);
    puVar13 = (uint *)(*(int *)(param_2 + 0x24) + (uVar1 + uVar2) * 8);
    if (*(uint *)(param_1 + 0x34) <= *(uint *)(param_1 + 0x30)) {
      iVar12 = *(uint *)(param_1 + 0x30) << 1;
      if (iVar12 == 0) {
        iVar12 = 4;
      }
      iVar6 = fn_0018388c(*piVar10,*(uint *)(param_1 + 0x34) << 3,iVar12 << 3);
      *piVar10 = iVar6;
      *(int *)(param_1 + 0x34) = iVar12;
    }
    puVar3 = (uint *)(*piVar10 + *(int *)(param_1 + 0x30) * 8);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    if (puVar3 != (uint *)0x0) {
      *puVar3 = *puVar13;
      uVar7 = puVar13[1];
      puVar3[1] = uVar7;
      if ((*puVar3 & 0x8000000) != 0) {
        *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      piVar10 = (int *)(param_1 + 0x68);
      puVar11 = (undefined4 *)(*(int *)(param_2 + 0x78) + *(int *)(param_2 + 0x7c) * 0x10 + -0x10);
      if (*(uint *)(param_1 + 0x70) <= *(uint *)(param_1 + 0x6c)) {
        iVar6 = *(uint *)(param_1 + 0x6c) << 1;
        if (iVar6 == 0) {
          iVar6 = 4;
        }
        iVar4 = fn_0018388c(*piVar10,*(uint *)(param_1 + 0x70) << 4);
        *piVar10 = iVar4;
        *(int *)(param_1 + 0x70) = iVar6;
      }
      iVar12 = iVar12 + 1;
      puVar5 = (undefined4 *)(*piVar10 + *(int *)(param_1 + 0x6c) * 0x10);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      if (puVar5 != (undefined4 *)0x0) {
        uVar8 = puVar11[1];
        uVar9 = puVar11[2];
        uVar14 = puVar11[3];
        *puVar5 = *puVar11;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar14;
      }
      *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + -1;
    } while (iVar12 < *(int *)(param_1 + 0x4c));
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  return 1;
}


