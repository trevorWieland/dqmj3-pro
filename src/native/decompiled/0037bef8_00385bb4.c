#include "0037bef8_00385bb4.h"



undefined4 fn_00385bb4(int *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [36];
  
  local_4c = (int)*(short *)(param_1[0x26] + 0x1c);
  uVar1 = (uint)((short)(*(byte *)(param_1[0x26] + 0x464) + 9) * 0xcd) >> 0xb;
  if (uVar1 + 1 < 2) {
    iVar3 = 1;
  }
  else {
    iVar3 = (int)(uVar1 + 1) >> 1;
  }
  param_1[0x20] = iVar3;
  iVar3 = fn_003492bc(param_1[0x26]);
  if (iVar3 == 1) {
    iVar3 = param_1[0x20] + -1;
  }
  else {
    iVar3 = 0;
  }
  param_1[0x21] = iVar3;
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008954a0,DAT_008954a4,DAT_008954a8);
  fn_0022cd44(param_1,0);
  uVar4 = fn_0022f750((char *)&DAT_00385e28);
  fn_0022cd58(param_1,uVar4);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar10 = *(int **)(iVar3 + 0x10);
  local_50 = 0;
  iVar9 = 0;
  iVar3 = local_50;
  do {
    local_50 = iVar3;
    iVar3 = local_50;
    fn_0017d96c(auStack_48,0x20,0x1f);
    piVar5 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,auStack_48,1);
    if (piVar5 != (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
      do {
        if (puVar6 == &DAT_0089a930) goto LAB_00385cf4;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    piVar5 = (int *)0x0;
LAB_00385cf4:
    iVar8 = iVar9 + 1;
    param_1[iVar3 * 2 + iVar9 + 0x32] = (int)piVar5;
    iVar9 = iVar8;
    if (1 < iVar8) {
      if (9 < iVar3 + 1) {
        fn_0022cdb4(param_1,local_4c != 0);
        iVar3 = 0;
        *(short *)(param_1 + 0x31) = (short)local_4c;
        do {
          iVar9 = 0;
          do {
            fn_00190d50(param_1[iVar9 * 2 + iVar3 + 0x32],&DAT_00385f30);
            iVar9 = iVar9 + 1;
          } while (iVar9 < 10);
          if ((short)param_1[0x31] != 0) {
            iVar9 = param_1[0x21] * 0x14 + iVar3 * 10;
            bVar2 = *(byte *)(param_1[0x26] + 0x464);
            iVar8 = 0;
            do {
              if (iVar9 < (int)(uint)bVar2) {
                iVar7 = (int)*(short *)(param_1[0x26] + iVar9 * 2 + 0x468);
                if (iVar7 != 0) {
                  fn_0022f818(&local_50,0x15,iVar7,0);
                  fn_00190d50(param_1[iVar8 * 2 + iVar3 + 0x32],&local_50);
                }
                iVar9 = iVar9 + 1;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < 10);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 2);
        *(undefined1 *)((int)param_1 + 0xc6) = *(undefined1 *)(param_1[0x26] + 0x338);
        return 1;
      }
      iVar9 = 0;
      iVar3 = iVar3 + 1;
    }
  } while( true );
}



void fn_00385214(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 4) <= uVar3)) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 0xec) + uVar3 * 0x10);
  }
  if (*piVar6 == 0) {
    uVar4 = fn_0022f750((char *)&DAT_003852d0);
    uVar5 = fn_0022eefc(0x327,0);
  }
  else {
    uVar4 = fn_0016a82c((int)*(short *)((int)piVar6 + 10));
    uVar5 = fn_0022ee7c((int)*(short *)((int)piVar6 + 10));
  }
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar4,uVar5);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00381e08(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x105) != '\0') {
    iVar7 = 0;
    do {
      piVar1 = (int *)fn_002c11d0(param_1,1,0);
      iVar2 = (**(code **)(*piVar1 + 8))(piVar1,0,iVar7);
      if ((*(int *)(param_1 + 0xd8) == 0) ||
         (iVar3 = fn_002e3e9c(piVar1,0,iVar7), iVar3 != *(int *)(param_1 + 0xd8))) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(iVar2 + 0x27) = uVar5;
      uVar4 = (**(code **)(*piVar1 + 8))(piVar1,0,iVar7);
      if ((*(int *)(param_1 + 0xdc) == 0) ||
         (iVar2 = fn_002e3e9c(piVar1,0,iVar7), iVar2 != *(int *)(param_1 + 0xdc))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      fn_002b3d78(uVar4,uVar6,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  return;
}



void fn_0037fba4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xb8) == 0) {
    return;
  }
  uVar1 = fn_0022f750((&PTR_s_coursename1_1_007c6d44)
                       [(uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) * 2 +
                        (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9)]);
  fn_0031c0e0(*(undefined4 *)(param_1 + 0xb8),uVar1);
  return;
}



void fn_0037c30c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_48;
  undefined1 local_38;
  undefined1 local_37;
  uint local_30;
  uint auStack_2c [2];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892b2c) goto LAB_0037c358;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0037c358:
  param_1[0x2d] = (int)puVar1;
  fn_00689efc(param_1,0xe8,0);
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_0037c3a8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0037c3a8:
  fn_002c330c(&local_64);
  local_64 = DAT_00892930;
  local_60 = DAT_00892934;
  local_5c = 7;
  local_50 = 7;
  if (*(char *)(puVar1 + 2) == '\0') {
    local_58 = 0;
    local_54 = 0;
  }
  else {
    local_58 = puVar1[4];
    local_54 = puVar1[5];
  }
  puVar1 = (undefined4 *)fn_0022f750(DAT_00892938);
  uVar3 = fn_00100b58();
  puVar2 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar4 = local_48 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_0037c614;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar8 = local_48[-3] + 1;
    bVar10 = local_48[-3] != -1;
    bVar9 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar10 = (uint)local_48[-2] <= uVar3;
      bVar9 = uVar3 == local_48[-2];
    }
    if (bVar10 && !bVar9) {
LAB_0037c464:
      uVar8 = local_48[-1];
      local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_30 < uVar8 + 0x80) {
        local_30 = uVar8 + 0x80;
      }
      puVar5 = auStack_2c;
      if (uVar3 <= local_30) {
        puVar5 = &local_30;
      }
      auStack_2c[0] = uVar3;
      uVar8 = *puVar5;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar8);
      }
      if (uVar8 != 0) {
        puVar2 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[2] = uVar3;
        puVar6 = (undefined2 *)((int)puVar2 + uVar3 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar8;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,puVar1,uVar3 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar2 + 3;
      goto LAB_0037c614;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar9 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar9 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar9) goto LAB_0037c464;
    }
    fn_001006ac(local_48,puVar1,uVar3);
    local_48[-1] = uVar3;
    puVar1 = (undefined4 *)((int)local_48 + uVar3 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_0037c614:
  local_38 = 0;
  local_37 = 0;
  fn_002c29a0(param_1,&local_64);
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



undefined4 fn_0037bef8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  switch(param_3) {
  case 0:
    puVar2 = &UNK_007c4c18;
    break;
  case 1:
    puVar2 = &UNK_007c4c68;
    break;
  case 2:
    iVar1 = fn_00154ac8(0x38);
    if (iVar1 == 0) {
      puVar2 = &DAT_007c4c80;
    }
    else {
      puVar2 = &DAT_007c4cb8;
    }
    goto LAB_0037bf58;
  case 3:
    iVar1 = fn_00154ac8(0x38);
    if (iVar1 == 0) {
      puVar2 = &DAT_007c4cf8;
    }
    else {
      puVar2 = &UNK_007c4d18;
    }
LAB_0037bf58:
    puVar3 = (undefined4 *)(puVar2 + param_4 * 8);
    goto LAB_0037bf5c;
  case 4:
    puVar2 = &UNK_007c4d40;
    break;
  case 5:
    puVar2 = &DAT_007c4d68;
    break;
  case 6:
    uVar4 = *(undefined4 *)(&DAT_007c4bc4 + param_4 * 0xc);
    goto code_r0x0037bf64;
  default:
    return 0;
  }
  puVar3 = (undefined4 *)(puVar2 + param_4 * 8);
LAB_0037bf5c:
  uVar4 = *puVar3;
code_r0x0037bf64:
  uVar4 = fn_0022f750(uVar4);
  uVar4 = fn_0075650c(param_1,param_2,uVar4,param_2 + -1);
  return uVar4;
}


