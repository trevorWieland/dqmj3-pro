#include "003f7684_003f7cdc.h"



void fn_003f7cdc(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  undefined1 uStack_18;
  char local_17;
  ushort local_16;
  ushort local_14;
  undefined4 local_10;
  
  local_10 = -1;
  fn_0019bc50(&uStack_18,param_3);
  iStack_1c = (int)&local_10 + 2;
  if (local_17 < '\0') {
    local_17 = local_17 + -0x10;
  }
  local_20 = (int)&local_10 + 1;
  fn_001c15a8(local_17,local_16 & 0xff,local_14 & 0xff,&local_10);
  iVar1 = 0;
  do {
    local_20 = local_10;
    (**(code **)(*param_2 + 0x10))(param_2,iVar1,&local_20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



void fn_003f7c78(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008357b0;
  uVar1 = param_1[0x31];
  uVar2 = uVar1;
  if ((uint)param_1[0x32] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x32]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x33] - uVar1) >> 4,0);
  fn_00410cac(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003f7b4c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_20;
  uint local_1c [2];
  
  puVar1 = (undefined4 *)fn_00410bb8();
  puVar1[0x30] = 0;
  *puVar1 = &DAT_008357b0;
  puVar1[0x31] = 0;
  puVar9 = puVar1 + 0x31;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  local_20 = 100;
  if ((uint)((int)(puVar1[0x33] - puVar1[0x31]) >> 4) < 100) {
    uVar10 = (int)(puVar1[0x32] - puVar1[0x31]) >> 4;
    local_1c[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_1c[0] < uVar10 + 0x20) {
      local_1c[0] = uVar10 + 0x20;
    }
    puVar6 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar6 = &local_20;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 4,0);
    puVar8 = (undefined4 *)puVar1[0x32];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 4) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = puVar7[1];
        uVar12 = puVar7[2];
        uVar13 = puVar7[3];
        *puVar3 = *puVar7;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
      }
      puVar3 = puVar3 + 4;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if ((uint)puVar1[0x32] < uVar4) {
      do {
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != puVar1[0x32]);
    }
    fn_001008c4(uVar4,(int)(puVar1[0x33] - uVar4) >> 4,0);
    uVar5 = *puVar9;
    puVar1[0x31] = puVar2;
    puVar1[0x32] = (puVar1[0x32] - uVar5 & 0xfffffff0) + (int)puVar2;
    puVar1[0x33] = puVar2 + uVar10 * 4;
  }
  return puVar1;
}



void fn_003f7ae0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) || ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar3)
     ) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar3 * 0x10);
  }
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  iVar1 = *(int *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0x558) = *puVar4;
  *(undefined4 *)(iVar1 + 0x55c) = uVar5;
  *(undefined4 *)(iVar1 + 0x560) = uVar6;
  *(undefined4 *)(iVar1 + 0x564) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x568) = 1;
  return;
}



void fn_003f7ab0(int *param_1)

{
  fn_0036bae4(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1 + 0x31);
                    /* WARNING: Could not recover jumptable at 0x003f7adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_003f7a70(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_003f77c4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30 [3];
  
  fn_002c3e78();
  iVar6 = *(int *)(param_1 + 0xb0);
  uVar2 = fn_006ba284(param_1);
  *(undefined4 *)(iVar6 + 0xc) = uVar2;
  uVar2 = fn_0022f584((char *)&DAT_003f7a50,0);
  iVar7 = 0;
  iVar6 = fn_006ba274(param_1);
  if (0 < iVar6) {
    do {
      iVar6 = fn_006ba284(param_1);
      iVar3 = fn_006ba274(param_1);
      uVar4 = iVar6 * iVar3 + iVar7;
      if ((((int)uVar4 < 0) ||
          ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar4)) ||
         (iVar6 = *(int *)(param_1 + 0xc4) + uVar4 * 0x10, iVar6 == 0)) break;
      iVar3 = fn_0036ba6c(iVar6);
      if (iVar3 == 0) {
        fn_0031b78c(param_1,iVar7,7,"");
      }
      else {
        fn_0031b78c(param_1,iVar7,7,uVar2);
      }
      local_38 = &DAT_008f9cf4;
      local_34 = &DAT_008f9cf4;
      fn_002318cc(iVar6,&local_38,&local_34);
      fn_0031b78c(param_1,iVar7,1,local_38);
      fn_0031b78c(param_1,iVar7,4,local_34);
      uVar8 = _DAT_0089398c;
      iVar6 = fn_006ba284(param_1);
      iVar3 = fn_006ba274(param_1);
      uVar4 = iVar6 * iVar3 + iVar7;
      if (((int)uVar4 < 0) ||
         ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar4)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xc4) + uVar4 * 0x10;
      }
      iVar3 = fn_006ccfd4(param_1,(int)*(short *)(iVar6 + 4));
      bVar1 = 0;
      if (iVar3 != 0) {
        bVar1 = *(byte *)(iVar6 + 6);
      }
      local_30[0] = uVar8;
      if (iVar3 == 0 || 2 < bVar1) {
        local_30[0] = _DAT_00893994;
      }
      fn_002c37b4(param_1,iVar7,1,local_30);
      if (local_34 != &DAT_008f9cf4) {
        piVar5 = local_34 + -3;
        iVar6 = *piVar5;
        if ((iVar6 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
        }
      }
      if (local_38 != &DAT_008f9cf4) {
        piVar5 = local_38 + -3;
        iVar6 = *piVar5;
        if ((iVar6 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = fn_006ba274(param_1);
    } while (iVar7 < iVar6);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_003f7684(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  iVar2 = fn_006ba284();
  iVar3 = fn_006ba274(param_1);
  uVar4 = iVar2 * iVar3 + param_2;
  puVar10 = (undefined4 *)0x0;
  if (((int)uVar4 < 0) || ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar4)
     ) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc4) + uVar4 * 0x10;
  }
  iVar3 = fn_006ccfd4(param_1,(int)*(short *)(iVar2 + 4));
  bVar1 = 0;
  if (iVar3 != 0) {
    bVar1 = *(byte *)(iVar2 + 6);
  }
  if (iVar3 == 0 || 2 < bVar1) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  fn_006899f4(param_1,0x83,0);
  puVar5 = (undefined4 *)fn_001f74ec(param_1,0x83);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008939d8) goto LAB_003f7740;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003f7740:
  *(undefined1 *)(puVar5 + 2) = 1;
  iVar2 = fn_006ba284(param_1);
  iVar3 = fn_006ba274(param_1);
  uVar4 = iVar2 * iVar3 + param_2;
  if ((-1 < (int)uVar4) && (uVar4 < (uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4))
     ) {
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0xc4) + uVar4 * 0x10);
  }
  uVar7 = puVar10[1];
  uVar8 = puVar10[2];
  uVar9 = puVar10[3];
  puVar5[3] = *puVar10;
  puVar5[4] = uVar7;
  puVar5[5] = uVar8;
  puVar5[6] = uVar9;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *puVar10;
  fn_0068ab44(param_1,0x100094b);
  return;
}


