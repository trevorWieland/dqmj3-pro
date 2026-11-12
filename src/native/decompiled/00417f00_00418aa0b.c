#include "00417f00_00418aa0b.h"



undefined * fn_00418aa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((DAT_008965dc & 1) == 0) {
    fn_00303afc(&DAT_008965dc);
  }
  iVar1 = *(int *)(param_1 + 0xd4);
  DAT_008965f0 = iVar1 + 0x78;
  DAT_00896600 = iVar1 + 0x58;
  DAT_00896604 = *(undefined4 *)(iVar1 + 0x50);
  *param_2 = 2;
  return &DAT_008965ec;
}



undefined4 * fn_0041899c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397f10();
  *puVar1 = &DAT_0083942c;
  puVar1[0x34] = &DAT_008590b0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  return puVar1;
}



void fn_00418794(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_120 [4];
  uint local_11c;
  undefined1 auStack_110 [244];
  
  iVar1 = fn_006ba274();
  iVar2 = fn_006ba284(param_1);
  fn_0017821c(auStack_120,*(int *)(param_1 + 0xf4) + (iVar1 * iVar2 + param_2) * 0x100,0x100);
  iVar1 = fn_006b4ea4(auStack_120);
  puVar5 = (undefined4 *)0x0;
  if (iVar1 == 0) {
    iVar1 = fn_006b4e74(auStack_120);
    if (iVar1 == 0) {
      iVar1 = fn_006b4ee4(auStack_120);
      if (iVar1 == 0) {
        fn_00689efc(param_1,0x90,0);
        return;
      }
      puVar3 = (undefined4 *)fn_001f74d8(param_1,0x2d);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_008951dc) {
            puVar5 = puVar3;
            break;
          }
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      fn_0025f3f4(puVar5,auStack_110);
      fn_00689efc(param_1,0x2d,0);
      return;
    }
    puVar5 = (undefined4 *)fn_001f74d8(param_1,0x42);
    if (puVar5 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar3 == &DAT_00893a0c) goto LAB_004188c0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_004188c0:
    *(undefined2 *)(puVar5 + 0x156) = (undefined2)local_11c;
    *(undefined1 *)(puVar5 + 0x15b) = 0;
    fn_00689efc(param_1,0x42,0,0);
    return;
  }
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar5 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar3 == &DAT_00893a00) goto LAB_00418834;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00418834:
  puVar5[0x158] = 0;
  puVar5[0x159] = 0;
  puVar5[0x156] = 1;
  puVar5[0x157] = local_11c & 0xffff;
  fn_00689efc(param_1,0x41,0);
  return;
}



void fn_0041845c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *local_28;
  undefined4 local_24 [2];
  
  fn_002c3e78();
  iVar5 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba274(param_1);
      iVar2 = fn_006ba284(param_1);
      uVar3 = iVar1 * iVar2 + iVar5;
      if (uVar3 < (uint)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 8)) {
        iVar2 = *(int *)(param_1 + 0xf4) + uVar3 * 0x100;
        iVar1 = fn_006cd1f8(param_1);
        if (iVar1 == 0) {
          puVar6 = (undefined4 *)&DAT_00895e98;
        }
        else {
          puVar6 = (undefined4 *)&DAT_00895ea0;
        }
        iVar1 = fn_006b4ed4(iVar2);
        if (iVar1 == 0) {
          fn_002317d8(&local_28,(int)*(short *)(iVar2 + 0x2c),0);
        }
        else {
          fn_0023097c(&local_28,(int)*(short *)(iVar2 + 4),0);
        }
        fn_0031b78c(param_1,iVar5,0xc,local_28);
        local_24[0] = *puVar6;
        fn_002c37b4(param_1,iVar5,0xc,local_24);
        fn_00229bd8(*(undefined4 *)(param_1 + 0x104),iVar5,iVar2 + 8,puVar6);
        if (local_28 != &DAT_008f9cf4) {
          piVar4 = local_28 + -3;
          iVar1 = *piVar4;
          if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
            fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar5 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}


