#include "003bd0b4_003be5f8.h"



undefined4 fn_003be5f8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  undefined4 local_50;
  int local_4c;
  undefined1 auStack_48 [36];
  
  local_4c = (int)*(short *)(param_1[0x26] + 0x1c);
  iVar6 = 0;
  iVar1 = 0;
  do {
    fn_0042ec00(param_1[0x26],iVar1,&local_50,(int)&local_50 + 2);
    iVar5 = iVar1 + 1;
    param_1[iVar1 + 0x2a] = local_50;
    if ((short)local_50 != 0) {
      iVar6 = iVar6 + 1;
    }
    iVar1 = iVar5;
  } while (iVar5 < 7);
  if (iVar6 + 1 < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = (iVar6 + 1) / 2;
  }
  param_1[0x20] = iVar1;
  iVar1 = fn_003492bc(param_1[0x26]);
  if (iVar1 == 1) {
    iVar1 = param_1[0x20] + -1;
  }
  else {
    iVar1 = 0;
  }
  param_1[0x21] = iVar1;
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895560,DAT_00895564,DAT_00895568);
  fn_0022cd44(param_1,local_4c != 0);
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar7 = *(int **)(iVar1 + 0x10);
  local_50 = 0;
  iVar6 = 0;
  iVar1 = local_50;
  do {
    local_50 = iVar1;
    iVar1 = local_50;
    fn_0017d96c(auStack_48,0x20,0x1f);
    piVar2 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,auStack_48,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a930) goto LAB_003be760;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_003be760:
    iVar5 = iVar6 + 1;
    param_1[iVar1 * 2 + iVar6 + 0x32] = (int)piVar2;
    iVar6 = iVar5;
    if (1 < iVar5) {
      if (9 < iVar1 + 1) {
        fn_0022cdb4(param_1,local_4c != 0);
        iVar1 = 0;
        *(short *)(param_1 + 0x31) = (short)local_4c;
        do {
          local_50 = 0;
          uVar4 = iVar1 + param_1[0x21] * 2;
          if (uVar4 < 7) {
            local_50 = param_1[uVar4 + 0x2a];
          }
          bVar8 = (short)param_1[0x31] != 0;
          iVar6 = 0;
          if (bVar8) {
            iVar6 = (int)(short)local_50;
          }
          if (!bVar8 || iVar6 == 0) {
            iVar6 = 0;
          }
          fn_003bbbdc(param_1,iVar1,iVar6);
          fn_003be878(param_1,&local_50,iVar1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        *(undefined1 *)((int)param_1 + 0xc6) = *(undefined1 *)(param_1[0x26] + 0x338);
        return 1;
      }
      iVar6 = 0;
      iVar1 = iVar1 + 1;
    }
  } while( true );
}



void fn_003be34c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *local_10;
  
  iVar1 = *(int *)(param_1 + 0x98);
  local_10 = param_4;
  if ((*(char *)(iVar1 + 0x544) == '\x01') && (*(int *)(iVar1 + 0x554) == *(int *)(iVar1 + 0x2d4)))
  {
    uVar2 = fn_0022f584((char *)&DAT_003be434,0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x110),uVar2);
  }
  else {
    fn_00231690(&local_10,(int *)(iVar1 + 0x554),0);
    fn_00190d50(*(undefined4 *)(param_1 + 0x110),local_10);
    if (local_10 != &DAT_008f9cf4) {
      piVar3 = local_10 + -3;
      iVar1 = *piVar3;
      if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
      }
    }
  }
  pcVar4 = "";
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x544) == '\x01') {
    pcVar4 = (char *)fn_00231ca0(0x9e,0);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x10c),pcVar4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003be51c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffec : 0x003be520 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003bdd6c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_18;
  
  iVar1 = fn_00145b00(0x124,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003bc118(iVar1,param_1);
  *puVar2 = &DAT_0082f650;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  piVar4 = puVar2 + 0x46;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  *piVar4 = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  local_18 = 3;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_18 != 0; local_18 = local_18 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x48] = *piVar4 + 0x80;
  puVar2[0x47] = *piVar4 + 0xc;
  return puVar2;
}



void fn_003bd5c4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x18))();
  if (*(int **)(param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 4))();
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  fn_0022ccb4(param_1);
  return;
}



undefined4 * fn_003bd438(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_LAB_0082f52c;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  return puVar1;
}



void fn_003bd2b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  short local_30 [2];
  undefined2 local_2c [2];
  undefined1 auStack_28 [20];
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x98);
    if (puVar6 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar2 == &DAT_008951c0) goto LAB_003bd304;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_003bd304:
    fn_006c3bc0(puVar6,local_30,local_2c);
    iVar1 = (int)local_30[0];
    if (iVar1 == 0) {
      fn_0031c0e0(*(undefined4 *)(param_1 + 0x94),&DAT_003bd434);
    }
    else {
      iVar3 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24),iVar1);
      if (iVar3 == 0) {
        fn_0022ef60(auStack_28,9);
        uVar5 = *(undefined4 *)(param_1 + 0x94);
        puVar4 = auStack_28;
      }
      else {
        puVar4 = (undefined1 *)fn_00231d50(iVar1);
        uVar5 = *(undefined4 *)(param_1 + 0x94);
      }
      fn_0031c0e0(uVar5,puVar4);
    }
    fn_003bd0b4(param_1,(int)local_30[0],local_2c[0]);
    fn_003bc340(param_1,(int)local_30[0]);
  }
  return;
}



void fn_003bd0b4(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_68 [44];
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [8];
  
  iVar6 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  iVar7 = iVar6 >> 0x1f;
  uVar2 = 0;
  if (iVar6 / 0xc + iVar7 != iVar7) {
    do {
      uVar1 = uVar2 + 1;
      iVar7 = *(int *)(*(int *)(param_1 + 0x9c) + uVar2 * 0xc);
      *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xfe;
      uVar2 = uVar1;
    } while (uVar1 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0xc));
  }
  if (param_2 != 0) {
    uVar2 = fn_0068f654(param_2);
    iVar7 = fn_006b7e5c(*(undefined4 *)(DAT_00897804 + 0x24),param_2);
    fn_0022ef60(auStack_3c,9);
    fn_0022ef60(auStack_28,3);
    uVar1 = 1;
    if (uVar2 != 0) {
      do {
        piVar8 = (int *)(*(int *)(param_1 + 0x9c) + (uVar1 - 1) * 0xc);
        *(byte *)(*piVar8 + 0x44) = *(byte *)(*piVar8 + 0x44) & 0xfe | 1;
        if (iVar7 == 0) {
          fn_00190d50(piVar8[1],auStack_3c);
          fn_00190d50(piVar8[2],auStack_28);
LAB_003bd238:
          fn_00688fd8(piVar8[1]);
          fn_00688fd8(piVar8[2]);
        }
        else {
          iVar6 = fn_0068f7c4(param_2,uVar1);
          if (iVar6 == 0) {
            fn_0068f7f8(param_2,uVar1);
            puVar3 = (undefined1 *)fn_0016a7c4();
            iVar6 = piVar8[1];
          }
          else {
            fn_0022f818(auStack_68,0x15,iVar6,0);
            iVar6 = piVar8[1];
            puVar3 = auStack_68;
          }
          fn_00190d50(iVar6,puVar3);
          uVar4 = fn_0068f85c(param_2,uVar1);
          fn_00688c04(piVar8[2],uVar4,0);
          uVar5 = fn_0068f85c(param_2,uVar1);
          if (uVar5 <= param_3) goto LAB_003bd238;
          fn_00689080(piVar8[1]);
          fn_00689080(piVar8[2]);
        }
        uVar1 = uVar1 + 1 & 0xff;
      } while (uVar1 <= uVar2);
    }
  }
  return;
}


