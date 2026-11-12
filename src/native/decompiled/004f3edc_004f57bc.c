#include "004f3edc_004f57bc.h"



int fn_004f57bc(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 auStack_14 [2];
  
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  if (bVar1 < 0xc) {
    auStack_14[0] = *(undefined4 *)(param_1 + 0xc);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                      (*(int **)(param_1 + 0x10),auStack_14,param_2,2,0);
    if (iVar2 - 0x100000U < 0x3ff00000) {
      *(undefined1 *)(*(int *)(iVar2 + 0x1c) + 0x14) = 0x22;
      *(byte *)(*(int *)(iVar2 + 0x1c) + 0x15) = bVar1;
      iVar2 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      return (iVar2 >> 0x1f) + 1;
    }
  }
  return 0;
}



int fn_004f5524(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_18;
  
  iVar5 = *(int *)(DAT_008bf4cc + 0xa4);
  if (iVar5 - 0x100000U < 0x3ff00000) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    uVar4 = (uint)bVar1;
    if (((uVar4 < 0xc) && (*(byte *)(iVar5 + 0x14) == uVar4)) &&
       (local_18 = param_4, iVar2 = fn_0050b080(DAT_008bf4cc,param_2), iVar2 != 0)) {
      if (uVar4 <= param_2) {
        param_2 = param_2 - 1;
      }
      iVar6 = *(int *)(param_1 + 0x40) + param_2 * 0x68;
      iVar2 = fn_006db038(iVar6);
      if (iVar2 != 0) {
        **(undefined1 **)(param_1 + 0x4c) = 0x10;
        *(byte *)(*(int *)(param_1 + 0x4c) + 1) = bVar1;
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 3) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 2) = 0;
        fn_006d6e58(iVar5 + 4,*(int *)(param_1 + 0x4c) + 4,&local_18,*(int *)(param_1 + 0x48) + -4)
        ;
        iVar5 = fn_00517cf0(iVar6,*(undefined4 *)(param_1 + 0x4c),local_18 + 4);
        if ((-1 < iVar5) && (DAT_008bf4a0 != 0)) {
          uVar3 = *(undefined4 *)(iVar6 + 0x1c);
          uVar7 = fn_004eea84(DAT_008bf4a0,7);
          fn_004f15b4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar3,0);
        }
        return (iVar5 >> 0x1f) + 1;
      }
    }
  }
  return 0;
}



int fn_004f4f30(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_14;
  
  if ((((*(int *)(DAT_008bf4cc + 0xa4) != 0) && (bVar1 = *(byte *)(DAT_008bf4e0 + 99), bVar1 < 0xc))
      && (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) == bVar1)) &&
     (iVar2 = fn_0050b080(DAT_008bf4cc,param_2), iVar2 != 0)) {
    uStack_14 = *(undefined4 *)(param_1 + 0xc);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                      (*(int **)(param_1 + 0x10),&uStack_14,param_2,2,0);
    if (iVar2 - 0x100000U < 0x3ff00000) {
      *(undefined1 *)(*(int *)(iVar2 + 0x1c) + 0x14) = 0x40;
      *(byte *)(*(int *)(iVar2 + 0x1c) + 0x15) = bVar1;
      iVar2 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      return (iVar2 >> 0x1f) + 1;
    }
  }
  return 0;
}



int fn_004f426c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar8 = *(int *)(DAT_008bf4d4 + 0x30) - 1;
  *(uint *)(param_1 + 0x3c) = uVar8;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar8 * 0x68,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        if (iVar2 + uVar6 * 0x68 != 0) {
          fn_00517f28();
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  *(int *)(param_1 + 0x40) = iVar2;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      iVar2 = fn_00517050(*(int *)(param_1 + 0x40) + uVar8 * 0x68,4);
      if (iVar2 < 0) {
        iVar7 = *(int *)(param_1 + 0x4c);
        if (iVar7 != 0) {
          fn_00656b0c(iVar7);
          fn_00656b7c(iVar7);
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        iVar7 = *(int *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x48) = 0;
        if (iVar7 != 0) {
          fn_00656b0c(iVar7);
          fn_00656b7c(iVar7);
          *(undefined4 *)(param_1 + 0x54) = 0;
        }
        iVar7 = *(int *)(param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x50) = 0;
        if (iVar7 != 0) {
          uVar8 = fn_00656b0c(iVar7);
          uVar6 = 0;
          iVar3 = uVar8 * 0x4ec4ec4f;
          if (uVar8 / 0x68 != 0) {
            do {
              (*(code *)**(undefined4 **)(iVar7 + uVar6 * 0x68))();
              uVar6 = uVar6 + 1;
              iVar3 = extraout_r1;
            } while (uVar6 < uVar8 / 0x68);
          }
          fn_00656b7c(iVar7,iVar3);
          *(undefined4 *)(param_1 + 0x40) = 0;
        }
        iVar7 = *(int *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if (iVar7 != 0) {
          fn_00656b0c(iVar7);
          fn_00656b7c(iVar7);
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return iVar2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x3c));
  }
  uVar8 = *(int *)(DAT_008bf4d4 + 0x30) - 1;
  *(uint *)(param_1 + 0x5c) = uVar8;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar8 * 8,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        puVar4 = (undefined4 *)(iVar2 + uVar6 * 8);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  *(int *)(param_1 + 0x60) = iVar2;
  uVar8 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x60) + uVar8 * 8);
      local_78 = 0;
      uStack_74 = 0;
      fn_004f01f4(&local_78);
      uVar8 = uVar8 + 1;
      *puVar4 = local_78;
      puVar4[1] = uStack_74;
    } while (uVar8 < *(uint *)(param_1 + 0x5c));
  }
  fn_00124e48(&local_78);
  uVar8 = fn_006db058();
  fn_0051811c(&local_78);
  uVar8 = *(int *)(DAT_008bf4d4 + 0x30) * ((uVar8 - (uVar8 & 3)) + 4) + 0xc;
  *(uint *)(param_1 + 0x50) = uVar8;
  *(uint *)(param_1 + 0x48) = uVar8;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e58(uVar8,uVar1,4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar6);
        uVar6 = uVar6 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar6 < uVar8);
    }
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e58(uVar8,uVar1,4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        puVar5 = (undefined1 *)(iVar2 + uVar6);
        uVar6 = uVar6 + 1;
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = 0;
        }
      } while (uVar6 < uVar8);
    }
  }
  *(int *)(param_1 + 0x54) = iVar2;
  return 0;
}



undefined4 fn_004f40c0(int *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  int iStack_14;
  
  iVar2 = fn_006d88c8();
  if (((iVar2 == 4) || (iVar2 = fn_006d88c8(param_1), iVar2 == 1)) ||
     (iVar2 = fn_006d88c8(param_1), iVar2 == 3)) {
    return 0;
  }
  if (param_2 != 0) {
    param_1[0x13] = param_2;
    fn_004ed050(param_2);
  }
  local_18 = 0;
  iStack_14 = 0;
  fn_004f01f4(&local_18);
  uVar7 = param_1[0x12];
  puVar3 = (uint *)fn_004f0ce8();
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  lVar1 = (ulonglong)uVar7 * (ulonglong)uVar5;
  uVar4 = (uint)lVar1;
  param_1[0x10] = uVar4 + local_18;
  param_1[0x11] =
       uVar5 * ((int)uVar7 >> 0x1f) + uVar6 * uVar7 + (int)((ulonglong)lVar1 >> 0x20) + iStack_14 +
       (uint)CARRY4(uVar4,local_18);
  fn_00505a04(DAT_008bf4e0,2);
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[0xb] = (int)(char *)&DAT_004f41f8;
  param_1[9] = (int)fn_004f3c30;
  param_1[10] = 0;
  iVar2 = *(int *)(DAT_008bf4e0 + 0x14);
  if (*(char *)(iVar2 + 0xa4) != '\0') {
    fn_004feb10(iVar2);
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  iVar2 = *(int *)(DAT_008bf4e0 + 0x20);
  uVar4 = DAT_008bf4e0;
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0x6f);
  }
  if (iVar2 != 0 && uVar4 != 0) {
    fn_00502890(iVar2);
    *(undefined1 *)(iVar2 + 0x30) = 1;
  }
  return 1;
}



void fn_004f405c(int param_1)

{
  char *pcVar1;
  
  *(undefined1 *)(param_1 + 0x54) = 0;
  pcVar1 = *(char **)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed0e4(pcVar1,0);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  pcVar1 = *(char **)(param_1 + 0x50);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\x01') {
      fn_004ed0e4(pcVar1,0);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



uint fn_004f3edc(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint unaff_r8;
  uint in_r12;
  
  iVar5 = *(int *)(DAT_008bf4cc + 0xa4);
  if (iVar5 == 0) {
    *(char **)(param_1 + 0x2c) = "LeaveMeshJob::LeaveSuccess";
    *(undefined1 **)(param_1 + 0x24) = &LAB_004f3b6c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return in_r12 & 0xff00;
  }
  for (piVar4 = (int *)(DAT_008bf4cc + 0x3c);
      piVar4 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
      piVar4 = piVar4 + 1) {
    if (*piVar4 != iVar5) {
      iVar1 = fn_006d92e4(DAT_008bf4e0,*(undefined1 *)(*piVar4 + 0x14));
      if (iVar1 != 0) {
        fn_00505a0c(DAT_008bf4e0,*(undefined1 *)(*piVar4 + 0x14));
      }
      iVar1 = *(int *)(*piVar4 + 0x30);
      if ((iVar1 == 0) || (iVar2 = fn_00515598(iVar1), iVar2 < 0)) {
        pcVar3 = (code *)**(undefined4 **)*piVar4;
        (*pcVar3)((undefined4 *)*piVar4,pcVar3,0,1);
      }
      else {
        fn_004efcf4(iVar1,0);
      }
    }
  }
  *(char **)(param_1 + 0x2c) = "LeaveMeshJob::WaitLeavingProcess";
  *(undefined1 **)(param_1 + 0x24) = &LAB_004f3dd0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return unaff_r8 & 0xff00;
}


