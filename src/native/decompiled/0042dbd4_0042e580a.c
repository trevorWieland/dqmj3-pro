#include "0042dbd4_0042e580a.h"



void fn_0042df94(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  fn_0036bae4(uVar1,param_1[0x29],param_1 + 0x33);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_0042dd30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  
  fn_002c3e78();
  iVar5 = *(int *)(param_1 + 0xb0);
  uVar1 = fn_006ba284(param_1);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  uVar1 = fn_0022f584((char *)&DAT_0042df78,0);
  iVar6 = 0;
  iVar5 = fn_006ba274(param_1);
  if (0 < iVar5) {
    do {
      iVar5 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar5 * iVar2 + iVar6;
      if (((int)uVar3 < 0) ||
         ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0xcc) + uVar3 * 0x10;
      }
      fn_00396588(param_1,iVar6,uVar1);
      local_28 = &DAT_008f9cf4;
      local_24 = &DAT_008f9cf4;
      fn_002318cc(iVar5,&local_28,&local_24);
      fn_0031b78c(param_1,iVar6,1,local_28);
      fn_0031b78c(param_1,iVar6,4,local_24);
      if (local_24 != &DAT_008f9cf4) {
        piVar4 = local_24 + -3;
        iVar5 = *piVar4;
        if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
        }
      }
      if (local_28 != &DAT_008f9cf4) {
        piVar4 = local_28 + -3;
        iVar5 = *piVar4;
        if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = fn_006ba274(param_1);
    } while (iVar6 < iVar5);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_0042dc04(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x154))(param_1);
  puVar6 = (undefined4 *)0x0;
  if (iVar2 == 0) {
    iVar2 = fn_006ba284(param_1);
    iVar3 = fn_006ba274(param_1);
    uVar4 = iVar2 * iVar3 + param_2;
    if ((-1 < (int)uVar4) && (uVar4 < (uint)(param_1[0x34] - param_1[0x33] >> 4))) {
      puVar6 = (undefined4 *)(param_1[0x33] + uVar4 * 0x10);
    }
    uVar5 = fn_0036bb90((int)*(short *)(puVar6 + 1),*(undefined1 *)((int)puVar6 + 6));
    fn_0068974c(param_1,uVar5,1);
    uVar1 = 2;
  }
  else {
    iVar2 = fn_006ba284(param_1);
    iVar3 = fn_006ba274(param_1);
    uVar4 = iVar2 * iVar3 + param_2;
    if ((-1 < (int)uVar4) && (uVar4 < (uint)(param_1[0x34] - param_1[0x33] >> 4))) {
      puVar6 = (undefined4 *)(param_1[0x33] + uVar4 * 0x10);
    }
    iVar2 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*puVar6);
    fn_0015b0dc(iVar2 + 4);
    fn_0015b0dc(iVar2 + 4);
    uVar5 = fn_0022f584((char *)&DAT_0042da28,0);
    fn_0068974c(param_1,uVar5,1);
    *(undefined4 *)(param_1[0x17] + 0x40) = 0;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x2f) = uVar1;
  return;
}



undefined4 * fn_0042dbd4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_00396678(iVar1,param_1);
  puVar2[0x32] = 0;
  *puVar2 = &DAT_0083bbd8;
  puVar2[0x33] = 0;
  puVar10 = puVar2 + 0x33;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  local_20 = 100;
  if ((uint)((int)(puVar2[0x35] - puVar2[0x33]) >> 4) < 100) {
    uVar11 = (int)(puVar2[0x34] - puVar2[0x33]) >> 4;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 4,0);
    puVar9 = (undefined4 *)puVar2[0x34];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 4) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        *puVar4 = *puVar8;
        puVar4[1] = uVar12;
        puVar4[2] = uVar13;
        puVar4[3] = uVar14;
      }
      puVar4 = puVar4 + 4;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[0x34] < uVar5) {
      do {
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != puVar2[0x34]);
    }
    fn_001008c4(uVar5,(int)(puVar2[0x35] - uVar5) >> 4,0);
    uVar6 = *puVar10;
    puVar2[0x33] = puVar3;
    puVar2[0x34] = (puVar2[0x34] - uVar6 & 0xfffffff0) + (int)puVar3;
    puVar2[0x35] = puVar3 + uVar11 * 4;
  }
  return puVar2;
}


