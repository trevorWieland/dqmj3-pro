#include "004e15f8_004e2270.h"



void fn_004e2270(int *param_1)

{
  if (param_1[0x496] - 0x100000U < 0x3ff00000) {
    (**(code **)(*(int *)param_1[0x496] + 8))((int *)param_1[0x496],0);
  }
  if (param_1[0x494] - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(param_1[0x494] + 0x30) = 1;
    fn_004edd1c(param_1[0x494],2);
  }
  if (param_1[0x493] - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(param_1[0x493] + 0x30) = 1;
    fn_004edd1c(param_1[0x493],2);
    fn_004e99d4(param_1[0x493]);
  }
  if (param_1[0x492] - 0x100000U < 0x3ff00000) {
    (**(code **)(*(int *)param_1[0x492] + 8))((int *)param_1[0x492],0);
  }
  if (param_1[0x480] - 0x100000U < 0x3ff00000) {
    fn_004e2f94();
    (**(code **)(*(int *)param_1[0x480] + 8))((int *)param_1[0x480],0);
  }
  if (param_1[0x495] - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(param_1[0x495] + 0x30) = 1;
    fn_004edd1c(param_1[0x495],2);
  }
  (**(code **)(*param_1 + 0x8c))(param_1);
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf) = 0xff;
  param_1[0x49c] = 0;
  param_1[0x49d] = 0;
  *(undefined1 *)(param_1 + 0x49e) = 1;
  return;
}



void fn_004e2204(int param_1)

{
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined1 local_18;
  short local_16;
  short local_14;
  
  fn_004edc34(param_1 + 0x48);
  fn_004e9f6c(auStack_24,param_1 + 0x6c,0x5dc);
  fn_004e9f20(auStack_24);
  fn_004e137c(param_1,local_20,local_18,local_16 + local_14,0xfe);
  fn_004edc70(param_1 + 0x48);
  return;
}



void fn_004e21dc(undefined4 param_1,int param_2,undefined4 param_3)

{
  fn_004e137c(param_1,*(undefined4 *)(param_2 + 4),*(undefined1 *)(param_2 + 0xc),
               *(short *)(param_2 + 0xe) + *(short *)(param_2 + 0x10),param_3);
  return;
}



void fn_004e1d70(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 0x1ad0) != '\0') ||
     ((iVar1 = fn_006d5980(DAT_008bf504), iVar1 != 0 &&
      (*(char *)(*(int *)(DAT_008bf504 + 0x1c) + 0x4d4c) != '\0')))) {
    fn_004edc34(param_1 + 0x1280);
    uVar2 = 0;
    uVar3 = *(uint *)(param_1 + 0x1acc);
    if (uVar3 != 0) {
      do {
        iVar1 = param_1 + uVar2 * 0x58;
        fn_0017821c(iVar1 + 0x16ac,iVar1 + 0x128c,0x58);
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    *(uint *)(param_1 + 0x1acc) = 0;
    *(undefined1 *)(param_1 + 0x1ad0) = 0;
    iVar1 = fn_006d5980(DAT_008bf504);
    if (iVar1 != 0) {
      fn_004eabac(*(undefined4 *)(DAT_008bf504 + 0x1c));
    }
    fn_004edc70(param_1 + 0x1280);
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        iVar1 = param_1 + uVar2 * 0x58;
        (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x1c))
                  (*(int **)(DAT_008bf504 + 0x14),iVar1 + 0x16ac,*(undefined4 *)(iVar1 + 0x16fc),
                   *(undefined2 *)(iVar1 + 0x1702));
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    iVar1 = fn_006d5980(DAT_008bf504);
    if (iVar1 != 0) {
      fn_004ea99c(*(undefined4 *)(DAT_008bf504 + 0x1c));
      return;
    }
  }
  return;
}



void fn_004e1d04(int param_1)

{
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined1 local_18;
  short local_16;
  short local_14;
  
  fn_004edc34(param_1 + 0x48);
  fn_004e8134(auStack_24,param_1 + 0x6c,0x5dc);
  fn_004e80e8(auStack_24);
  fn_004e137c(param_1,local_20,local_18,local_16 + local_14,0xfe);
  fn_004edc70(param_1 + 0x48);
  return;
}



void fn_004e1910(int param_1,int param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [14];
  ushort local_5a;
  ushort local_58;
  uint local_54;
  undefined4 local_50;
  undefined1 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  short local_3a;
  short local_38;
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  fn_004e8078(auStack_68,param_2,0x50,0);
  iVar3 = fn_004e7fa0(auStack_68);
  if ((iVar3 != 0) &&
     ((((*(char *)(param_1 + 0xe) == -1 || (*(char *)(param_1 + 0xe) != *(char *)(param_1 + 0xf)))
       && (((uint)local_5a + (uint)local_58 & 0xffff) == *(uint *)(local_28 + 0x50))) &&
      (*(char *)(param_1 + 0x1f15) != '\0')))) {
    uVar1 = *(ushort *)(param_1 + 0xc);
    if (uVar1 < local_54) {
      fn_006d53ac(auStack_68,param_1 + 0x28,0,0x18);
      uVar5 = 0;
      while (iVar3 = param_1 + uVar5 * 2, *(short *)(iVar3 + 0x10) == *(short *)(iVar3 + 0x28)) {
        uVar5 = uVar5 + 1;
        if (0xb < uVar5) {
          uVar5 = 0;
          do {
            if ((*(uint *)(param_1 + 0x1244) & 1 << (uVar5 & 0xff)) != 0) {
              fn_004dedfc(DAT_008bf504,uVar5 + 1 & 0xff);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0xc);
          *(undefined4 *)(param_1 + 0x1244) = 0;
          uVar5 = 1;
          *(undefined4 *)(param_1 + 0x123c) = local_50;
          iVar3 = DAT_008bf504;
          *(undefined1 *)(DAT_008bf504 + 0x80) = local_4c;
          iVar3 = fn_006d58dc(iVar3);
          if (iVar3 != 0) {
            fn_006d53ac(auStack_68,*(undefined4 *)(*(int *)(DAT_008bf504 + 0x18) + 8),0x18,0x18);
            uVar6 = 0;
            local_40 = 0x30;
            do {
              uVar7 = uVar6 + 1 & 0xff;
              if (uVar7 == 0xfe) {
                local_48 = (uint)*(ushort *)(param_1 + 0x44);
              }
              else if ((uVar7 == 0) || (0xc < uVar7)) {
                local_48 = (uint)*(ushort *)(param_1 + 0x42);
              }
              else {
                iVar3 = fn_006d58dc(DAT_008bf504);
                if (iVar3 == 0) {
                  local_48 = (uint)*(ushort *)(param_1 + uVar7 * 2 + 0xe);
                }
                else {
                  local_48 = fn_006d6aa8(*(undefined4 *)(DAT_008bf504 + 0x18),uVar7);
                }
              }
              uVar8 = (**(code **)(**(int **)(DAT_008bf504 + 0x18) + 0x24))
                                (*(int **)(DAT_008bf504 + 0x18),local_48);
              uVar7 = fn_004e4a58(*(undefined4 *)(DAT_008bf504 + 0x18),uVar7,local_48);
              uVar6 = uVar6 + 1;
              uVar5 = uVar5 & uVar7;
            } while (uVar6 < 0xc);
            fn_006d53ac(auStack_68,&local_44,local_40,1,uVar8);
            *(bool *)(*(int *)(DAT_008bf504 + 0x18) + 0x34) = (char)local_44 == '\x01';
          }
          if ((*(char *)(param_1 + 0xe) == -1) ||
             (uVar6 = fn_006d6700(param_1,*(undefined2 *)(param_1 + 0x40)),
             uVar6 != *(byte *)(param_1 + 0xe))) {
            uVar2 = fn_006d6700(param_1,*(undefined2 *)(param_1 + 0x40));
            *(undefined1 *)(param_1 + 0xe) = uVar2;
          }
          uVar6 = fn_006d6700(param_1,*(undefined2 *)(local_28 + 0x56));
          if (uVar6 != *(byte *)(param_1 + 0xf)) {
            uVar2 = fn_006d6700(param_1,*(undefined2 *)(local_28 + 0x56));
            *(undefined1 *)(param_1 + 0xf) = uVar2;
          }
          if (uVar5 != 0) {
            *(short *)(param_1 + 0xc) = (short)local_54;
            uVar4 = fn_006d6700(param_1,*(undefined2 *)(local_28 + 0x56));
            fn_004edc34();
            fn_004df3c4(&local_48,param_1 + 0x6c,0x5dc,0x21,local_54);
            fn_004df370(&local_48);
            fn_004e137c(param_1,local_44,local_3c,local_3a + local_38,uVar4);
            fn_004edc70(param_1 + 0x48);
          }
          uVar6 = 0;
          uVar5 = 0;
          do {
            if ((*(short *)(param_1 + uVar5 * 2 + 0x10) != *(short *)(param_1 + 0x42)) &&
               (iVar3 = fn_006d6700(param_1), iVar3 != 0xff)) {
              uVar6 = uVar6 | 1 << (iVar3 - 1U & 0xff);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0xc);
          *(uint *)(param_1 + 0x127c) = uVar6;
          return;
        }
      }
    }
    else {
      uVar4 = fn_006d6700(param_1,*(undefined2 *)(local_28 + 0x56));
      fn_004edc34();
      fn_004df3c4(&local_48,param_1 + 0x6c,0x5dc,0x21,(uint)uVar1);
      fn_004df370(&local_48);
      fn_004e137c(param_1,local_44,local_3c,local_3a + local_38,uVar4);
      fn_004edc70(param_1 + 0x48);
    }
  }
  return;
}



void fn_004e17b8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined1 local_34;
  short local_32;
  short local_30;
  
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
  fn_004edc34();
  fn_004e8078(auStack_40,param_1 + 0x6c,0x5dc,*(undefined2 *)(param_1 + 0xc));
  fn_004dbd70(auStack_40,param_1 + 0x10,0,0x18);
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 != 0) {
    fn_004dbd70(auStack_40,*(undefined4 *)(*(int *)(DAT_008bf504 + 0x18) + 8),0x18,0x18);
    local_50 = CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,*(char *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) == '\x01');
    fn_004dbd70(auStack_40,&local_50,0x30,1);
  }
  uVar4 = 0;
  uVar3 = 0;
  do {
    if (((*(short *)(param_1 + uVar3 * 2 + 0x10) != *(short *)(param_1 + 0x42)) &&
        (uVar2 = fn_006d6700(param_1), uVar2 != 0xff)) && (*(byte *)(param_1 + 0xe) != uVar2)) {
      uVar4 = uVar4 | 1 << (uVar2 - 1 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xc);
  local_50 = (uint)*(ushort *)(param_1 + 0xc);
  uStack_48 = 1;
  uStack_4c = uVar4;
  fn_004e2ffc(*(undefined4 *)(param_1 + 0x1200),local_34,local_3c,local_32 + local_30);
  fn_004edc70(param_1 + 0x48);
  return;
}



bool fn_004e173c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_18;
  int iStack_14;
  
  fn_004edc34(param_1 + 0x1260);
  local_18 = 0;
  iStack_14 = 0;
  fn_004f01f4(&local_18);
  iVar3 = local_18 - *(uint *)(param_1 + 0x1270);
  iVar4 = iStack_14 - (*(int *)(param_1 + 0x1274) + (uint)(local_18 < *(uint *)(param_1 + 0x1270)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  uVar2 = fn_0011c134(iVar3,iVar4,*puVar1,puVar1[1]);
  fn_004edc70(param_1 + 0x1260);
  return uVar2 < 100;
}



undefined1 *
fn_004e15f8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = param_1 + 0x1280;
  fn_004edc34(iVar3);
  if ((param_3 == 0x14 || param_3 == 0x15) ||
     ((param_3 == 0x16 || param_3 == 0x24) || param_3 == 0x26)) {
    iVar2 = fn_006d5980(DAT_008bf504);
    if (iVar2 == 0) {
      fn_004edc70(iVar3);
      return &DAT_e0a14827;
    }
    puVar1 = (undefined1 *)
             fn_004ea86c(*(undefined4 *)(DAT_008bf504 + 0x1c),param_2,param_3,param_4,param_5);
    fn_004edc70(iVar3);
    return puVar1;
  }
  puVar4 = (uint *)(param_1 + 0x1acc);
  if (0xb < *puVar4) {
    fn_004edc70(iVar3);
    return (undefined1 *)0xd861482c;
  }
  iVar2 = param_1 + *puVar4 * 0x58;
  fn_00301a9c(iVar2 + 0x128c,param_2,param_4);
  *(undefined4 *)(iVar2 + 0x12dc) = param_4;
  *(char *)(iVar2 + 0x12e0) = (char)param_3;
  *(short *)(iVar2 + 0x12e2) = (short)param_5;
  if (*(char *)(param_1 + 0x1ad0) == '\0') {
    *(undefined1 *)(param_1 + 0x1ad0) = 1;
  }
  *puVar4 = *puVar4 + 1;
  fn_004edc70(iVar3);
  return (undefined1 *)0x0;
}


