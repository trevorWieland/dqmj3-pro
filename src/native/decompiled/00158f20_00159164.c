#include "00158f20_00159164.h"



undefined4 fn_00159164(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  *param_4 = piVar1;
  if (*piVar1 == param_3) {
    uVar2 = 1;
  }
  else {
    piVar1 = (int *)fn_00197fe0(param_1,piVar1);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    piVar1[1] = piVar1[1] + 1;
    uVar2 = fn_00191f28(param_3);
    fn_0019813c(param_1,"wrong argument type, expected \'%s\' got \'%.50s\'",uVar2,piVar1 + 7);
    iVar3 = piVar1[1];
    piVar1[1] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00158fd0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  fn_00173d14();
  iVar1 = DAT_008c3648;
  while (iVar1 != 0) {
    fn_00158128(param_1,(&DAT_008c3648)[iVar2 * 4],0xffffffff);
    fn_00176fc8(param_1,(&DAT_008c364c)[iVar2 * 4],0);
    fn_00177160(param_1,0xffffffff,(&DAT_008c3648)[iVar2 * 4]);
    fn_00177270(param_1,(&DAT_008c3650)[iVar2 * 4],(&DAT_008c3654)[iVar2 * 4]);
    fn_00166f0c(param_1,0xfffffffd,0);
    iVar2 = iVar2 + 1;
    iVar1 = (&DAT_008c3648)[iVar2 * 4];
  }
  fn_00158128(param_1,(char *)&DAT_0015911c,0xffffffff);
  fn_00158128(param_1,(char *)&DAT_00159128,0xffffffff);
  fn_00166f0c(param_1,0xfffffffd,0);
  fn_00158128(param_1,(char *)&DAT_00159140,0xffffffff);
  fn_001580cc(param_1,1);
  fn_00166f0c(param_1,0xfffffffd,0);
  fn_00158128(param_1,(char *)&DAT_0015914c,0xffffffff);
  fn_001580cc(param_1,4);
  fn_00166f0c(param_1,0xfffffffd,0);
  fn_00158128(param_1,(char *)&DAT_00159158,0xffffffff);
  fn_001580cc(param_1,4);
  fn_00166f0c(param_1,0xfffffffd,0);
  fn_00173cb8(param_1,1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00158fa0) */
/* WARNING: Removing unreachable block (ram,0x00158f98) */
/* WARNING: Removing unreachable block (ram,0x00158f9c) */
/* WARNING: Removing unreachable block (ram,0x00158fa4) */
/* WARNING: Removing unreachable block (ram,0x00158fa8) */

undefined4 * fn_00158f50(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  fn_001cf52c();
  puVar2 = (undefined4 *)(param_1 + 0x1e);
  uVar4 = 0x20;
  if (((uint)puVar2 & 3) != 0) {
    iVar5 = 4 - ((uint)puVar2 & 3);
    puVar3 = puVar2;
    if (iVar5 != 2) {
      puVar3 = (undefined4 *)(param_1 + 0x1f);
      *(undefined1 *)puVar2 = 0;
    }
    uVar4 = 0x20 - iVar5;
    puVar2 = puVar3;
    if (1 < iVar5) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
  }
  bVar6 = 0x1f < uVar4;
  uVar4 = uVar4 - 0x20;
  do {
    if (bVar6) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2 = puVar2 + 8;
      bVar6 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
    }
  } while (bVar6);
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  uVar1 = uVar4 << 0x1e;
  puVar3 = puVar2;
  if ((bool)((byte)((uVar4 & 0xf) >> 2) & 1)) {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = 0;
  }
  puVar3 = puVar2;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
  }
  return puVar3;
}



undefined4 * fn_00158f40(undefined4 *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar2,uVar2);
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = param_3;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar7 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_3;
    }
    param_2 = param_2 - iVar7;
    param_1 = puVar3;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = uVar2;
    }
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 & 0xf) >> 2) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar5 = puVar3;
  if ((int)uVar1 < 0) {
    puVar5 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = uVar2;
  }
  puVar3 = puVar5;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar5 + 1);
    *(undefined1 *)puVar5 = param_3;
  }
  return puVar3;
}



/* WARNING: Removing unreachable block (ram,0x00158fa0) */
/* WARNING: Removing unreachable block (ram,0x00158f98) */
/* WARNING: Removing unreachable block (ram,0x00158f9c) */
/* WARNING: Removing unreachable block (ram,0x00158fa4) */
/* WARNING: Removing unreachable block (ram,0x00158fa8) */

undefined4 * fn_00158f20(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x84 + 0x30);
  uVar4 = 0x80;
  if (((uint)puVar2 & 3) != 0) {
    iVar5 = 4 - ((uint)puVar2 & 3);
    puVar3 = puVar2;
    if (iVar5 != 2) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = 0xff;
    }
    uVar4 = 0x80 - iVar5;
    puVar2 = puVar3;
    if (1 < iVar5) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0xffff;
    }
  }
  bVar6 = 0x1f < uVar4;
  uVar4 = uVar4 - 0x20;
  do {
    if (bVar6) {
      *puVar2 = 0xffffffff;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0xffffffff;
      puVar2[3] = 0xffffffff;
      puVar2[4] = 0xffffffff;
      puVar2[5] = 0xffffffff;
      puVar2[6] = 0xffffffff;
      puVar2[7] = 0xffffffff;
      puVar2 = puVar2 + 8;
      bVar6 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
    }
  } while (bVar6);
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    puVar2 = puVar2 + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2 = puVar2 + 2;
  }
  uVar1 = uVar4 << 0x1e;
  puVar3 = puVar2;
  if ((bool)((byte)((uVar4 & 0xf) >> 2) & 1)) {
    puVar3 = puVar2 + 1;
    *puVar2 = 0xffffffff;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar2 = puVar3;
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = 0xffff;
  }
  puVar3 = puVar2;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0xff;
  }
  return puVar3;
}


