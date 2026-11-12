#include "00399df8_0039ae28.h"



void fn_0039ae28(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0xcc));
  return;
}



void fn_0039ac50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = param_1[0x34];
  bVar6 = *(byte *)(iVar1 + 0x44) & 0xfe;
  if (param_2 == 0) {
    *(byte *)(iVar1 + 0x44) = bVar6;
  }
  else {
    *(byte *)(iVar1 + 0x44) = bVar6 | 1;
    iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
    if ((short)param_1[0x27] != iVar1 || param_3 != 0) {
      iVar7 = 0;
      do {
        iVar8 = *(int *)(param_1[0x35] + iVar7 * 4);
        iVar2 = iVar7 + 1;
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
        iVar8 = *(int *)(param_1[0x38] + iVar7 * 4);
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
        iVar8 = *(int *)(param_1[0x3b] + iVar7 * 4);
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
        iVar8 = *(int *)(param_1[0x3e] + iVar7 * 4);
        *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
        iVar7 = *(int *)(param_1[0x41] + iVar7 * 4);
        *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
        iVar7 = iVar2;
      } while (iVar2 < 3);
      iVar7 = (**(code **)(*param_1 + 0x120))(param_1,iVar1);
      iVar2 = fn_00203e2c(iVar1);
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          iVar3 = *(int *)(param_1[0x35] + iVar8 * 4);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
          iVar3 = *(int *)(param_1[0x38] + iVar8 * 4);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
          if (iVar7 != 0) {
            iVar3 = *(int *)(param_1[0x3b] + iVar8 * 4);
            *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
            iVar3 = *(int *)(param_1[0x3e] + iVar8 * 4);
            *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
            iVar3 = *(int *)(param_1[0x41] + iVar8 * 4);
            *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
            piVar4 = (int *)fn_00203e08(iVar1,iVar8);
            iVar3 = param_1[0x3b];
            iVar9 = *piVar4;
            uVar5 = fn_0016a82c((int)(short)iVar9);
            fn_00190d50(*(undefined4 *)(iVar3 + iVar8 * 4),uVar5);
            fn_00688c04(*(undefined4 *)(param_1[0x3e] + iVar8 * 4),iVar9 >> 0x10,0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar2);
      }
    }
  }
  return;
}



void fn_0039a378(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if ((short)param_1[0x27] != iVar1 || param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar1);
    if (iVar2 == 0) {
      uVar3 = fn_0022f584((char *)&DAT_0039a43c,0);
      fn_00190d50(param_1[0x28],uVar3);
      local_18 = DAT_00895340;
      fn_00688d44(param_1[0x28],&local_18);
      return;
    }
    uVar3 = (**(code **)(*param_1 + 0x128))(param_1,iVar1);
    fn_00190d50(param_1[0x28],uVar3);
    local_18 = DAT_00895338;
    fn_00688d44(param_1[0x28],&local_18);
  }
  return;
}



void fn_0039a220(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_20;
  uint local_1c [2];
  
  puVar8 = param_1 + 0x2e;
  *param_1 = &PTR_FUN_0082c42c;
  local_20 = 100;
  if ((uint)((int)(param_1[0x30] - param_1[0x2e]) >> 4) < 100) {
    uVar9 = (int)(param_1[0x2f] - param_1[0x2e]) >> 4;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 4,0);
    puVar7 = (undefined4 *)param_1[0x2f];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 4) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar10 = puVar6[1];
        uVar11 = puVar6[2];
        uVar12 = puVar6[3];
        *puVar2 = *puVar6;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
      }
      puVar2 = puVar2 + 4;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[0x2f] < uVar3) {
      do {
        uVar4 = uVar4 + 0x10;
      } while (uVar4 != param_1[0x2f]);
    }
    fn_001008c4(uVar3,(int)(param_1[0x30] - uVar3) >> 4,0);
    uVar4 = *puVar8;
    param_1[0x2e] = puVar1;
    param_1[0x2f] = (param_1[0x2f] - uVar4 & 0xfffffff0) + (int)puVar1;
    param_1[0x30] = puVar1 + uVar9 * 4;
  }
  uVar4 = param_1[0x2e];
  uVar9 = uVar4;
  if ((uint)param_1[0x2f] < uVar4) {
    do {
      uVar9 = uVar9 + 0x10;
    } while (uVar9 != param_1[0x2f]);
  }
  fn_001008c4(uVar4,(int)(param_1[0x30] - uVar4) >> 4,0);
  fn_002c471c(param_1);
  return;
}



undefined4 * fn_0039a1d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_0082c42c;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  return puVar1;
}



void fn_0039a16c(int param_1,int param_2)

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
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 4) <= uVar3)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar3 * 0x10);
  }
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(iVar1 + 0x558) = *puVar4;
  *(undefined4 *)(iVar1 + 0x55c) = uVar5;
  *(undefined4 *)(iVar1 + 0x560) = uVar6;
  *(undefined4 *)(iVar1 + 0x564) = uVar7;
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x568) = 1;
  return;
}



void fn_0039a13c(int *param_1)

{
  fn_0036bae4(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1 + 0x2e);
                    /* WARNING: Could not recover jumptable at 0x0039a168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_0039a0fc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_00399f04(int param_1)

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
  uVar1 = fn_0022f584((char *)&DAT_0039a0e0,0);
  iVar6 = 0;
  iVar5 = fn_006ba274(param_1);
  if (0 < iVar5) {
    do {
      iVar5 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar5 * iVar2 + iVar6;
      if (((int)uVar3 < 0) ||
         ((uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 4) <= uVar3)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0xb8) + uVar3 * 0x10;
      }
      iVar2 = fn_0036ba6c(iVar5);
      if (iVar2 == 0) {
        fn_0031b78c(param_1,iVar6,7,"");
      }
      else {
        fn_0031b78c(param_1,iVar6,7,uVar1);
      }
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



void fn_00399df8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    fn_006899f4(param_1,0x81,0);
                    /* WARNING: Could not recover jumptable at 0x00399e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
    return;
  }
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0x87);
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008939f4) goto LAB_00399e88;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00399e88:
  iVar1 = fn_006ba284(param_1);
  iVar4 = fn_006ba274(param_1);
  uVar5 = iVar1 * iVar4 + param_2;
  if ((-1 < (int)uVar5) &&
     (uVar5 < (uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 4))) {
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0xb8) + uVar5 * 0x10);
  }
  puVar2[3] = *puVar6;
  *(int *)(*(int *)(param_1 + 0xb0) + 8) = param_2;
  fn_006899f4(param_1,0x87,0);
  fn_0068ab44(param_1,0x100094b);
  return;
}


