#include "005165d8_0051bf00.h"



undefined4 fn_0051bf00(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined1 auStack_68 [84];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[0x14] = (int)param_2;
  (**(code **)*param_2)(param_2,*(code **)*param_2,0x80000000,0);
  fn_004ed0e4(param_1[0x15],0);
  cVar1 = *(char *)(param_1[0x14] + 0x20);
  if ((cVar1 == '\x03') && (param_4 == 0)) {
    uVar10 = *(undefined4 *)(param_1[0x14] + 0x2c);
    fn_00124e48(auStack_68);
    iVar8 = fn_006db908(DAT_008c06a0,param_1[0x14],auStack_68);
    if ((-1 < iVar8) &&
       (iVar8 = fn_0050f758(uVar10,param_1[0x15],param_1[0x14],auStack_68,1,param_3), -1 < iVar8))
    {
      fn_004efcf4(uVar10,0);
    }
    fn_0051811c(auStack_68);
  }
  else if (cVar1 == '\x03' || param_4 == 0) {
    return 0;
  }
  param_1[0x12] = param_3;
  *(undefined1 *)(param_1[0x14] + 0x20) = 4;
  iVar8 = DAT_008bf49c;
  uVar9 = param_1[0x12];
  puVar11 = (uint *)(DAT_008bf49c + 0x30);
  puVar3 = (uint *)fn_004f0ce8();
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  lVar2 = (ulonglong)uVar9 * (ulonglong)uVar5;
  uVar4 = (uint)lVar2;
  uVar7 = *puVar11;
  iVar8 = *(int *)(iVar8 + 0x34);
  param_1[0x13] = 0;
  param_1[0x10] = uVar4 + uVar7;
  param_1[0x11] =
       uVar5 * ((int)uVar9 >> 0x1f) + uVar6 * uVar9 + (int)((ulonglong)lVar2 >> 0x20) + iVar8 +
       (uint)CARRY4(uVar4,uVar7);
  *(undefined1 *)(param_1 + 0x16) = 1;
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[0xb] = (int)"ProcessConnectionRequestJob::WaitInverseConnection";
  param_1[9] = (int)fn_0051bc70;
  param_1[10] = 0;
  return 1;
}



undefined1 * fn_0051b984(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_00509460(iVar1);
    if (iVar1 == 0) {
      puVar2 = &DAT_e0a14827;
    }
    else if (DAT_008c06a0 == 0) {
      puVar3 = (undefined4 *)fn_004ecfe0(0x100);
      iVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = &DAT_008572c4;
        iVar1 = fn_00124e48(puVar3 + 1);
        iVar1 = fn_00124e48(iVar1 + 0x54);
        iVar1 = fn_0014f590(iVar1 + 0x54);
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x44) = 0;
        iVar1 = fn_004edc74(iVar1 + 0x48,0xffffffff);
        iVar1 = iVar1 + -0xf4;
      }
      puVar2 = (undefined1 *)0x0;
      DAT_008c06a0 = iVar1;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



void fn_0051b6cc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_00857298;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  *(undefined1 *)((int)puVar1 + 0x16) = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  iVar2 = fn_0014f590(puVar1 + 0x20);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  return;
}



void fn_00518c0c(int param_1)

{
  fn_0050c6d8(DAT_008bf4d4 + 0x10,*(undefined4 *)(param_1 + 4),0x100);
  return;
}



undefined1 * fn_0051893c(void)

{
  int iVar1;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_00509460();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008c06a4 != (undefined4 *)0x0) {
    return &DAT_d8a1482e;
  }
  DAT_008c06a4 = (undefined4 *)fn_004ecfe0(0xc);
  if (DAT_008c06a4 != (undefined4 *)0x0) {
    *DAT_008c06a4 = 0;
    DAT_008c06a4[1] = 0;
    DAT_008c06a4[2] = 0;
  }
  return (undefined1 *)0x0;
}



int fn_00518610(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085723c;
  iVar1 = fn_0050942c(param_1 + 1);
  *(int *)(iVar1 + 0x30) = iVar1 + -4;
  *(undefined1 **)(iVar1 + 0x34) = &LAB_00518174;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined **)(iVar1 + 0x2c) = &DAT_008599fc;
  iVar1 = fn_00657430(iVar1 + 0x40,0);
  *(undefined1 *)(iVar1 + 0x14) = 4;
  *(undefined4 *)(iVar1 + 0x18) = 5;
  *(undefined4 *)(iVar1 + 0x1c) = 0xe7e3ffff;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  fn_0065754c(iVar1 + 0x28);
  *(undefined1 *)(iVar1 + 0x38) = 0;
  return iVar1 + -0x44;
}



void fn_0051702c(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0xfd;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = DAT_008c067c;
  return;
}



int fn_00516db8(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = fn_0014f590(param_1 + 0xc);
  return iVar1 + -0xc;
}



undefined4
fn_005167a4(int *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined *local_48 [5];
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  if (param_3 != 0) {
    piStack_34 = param_1;
    uStack_30 = param_2;
    uStack_2c = param_3;
    local_28 = param_4;
    if (param_6 == 0) {
      piVar3 = (int *)param_1[1];
      uVar1 = piVar3[1];
      if (uVar1 != piVar3[2]) {
        do {
          if (uVar1 < *(uint *)*piVar3) {
            iVar4 = ((uint *)*piVar3)[1] + uVar1 * 0x5ec;
          }
          else {
            iVar4 = 0;
          }
          if (*(char *)(iVar4 + 0x5d5) == '\0') {
            bVar5 = *(uint *)(iVar4 + 0x5b8) == param_5;
            if (*(uint *)(iVar4 + 0x5b8) <= param_5) {
              bVar5 = *(byte *)(iVar4 + 0x5bc) == param_2;
            }
            if (bVar5) {
              if (iVar4 != 0) goto LAB_005168c4;
              break;
            }
          }
          uVar1 = uVar1 + 1;
          if (*(int *)*piVar3 <= (int)uVar1) {
            uVar1 = 0;
          }
        } while (uVar1 != piVar3[2]);
      }
    }
    fn_0014f590(local_48);
    iVar4 = fn_006d9ef0(DAT_008bf4cc,local_48,param_2);
    if ((iVar4 < 0) ||
       (iVar4 = (**(code **)(*param_1 + 0x20))
                          (param_1,param_2,1 << (param_2 & 0xff),local_48,param_6), iVar4 == 0)) {
      return 0;
    }
    local_48[0] = &DAT_00856c94;
LAB_005168c4:
    uVar2 = fn_0050a26c(param_1,iVar4,local_28);
    fn_00516e0c(param_1 + 3,iVar4,uVar2,param_3,0,1);
    param_1[0x5a] = param_1[0x5a] | param_3;
  }
  return 1;
}



undefined4 fn_005165d8(int *param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_3c [2];
  int *piStack_34;
  uint uStack_30;
  undefined4 local_2c;
  uint uStack_28;
  
  uVar1 = DAT_008c06a0;
  if (param_2 != 0) {
    piVar2 = (int *)param_1[1];
    uVar7 = piVar2[1];
    piStack_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    uStack_28 = param_4;
    if (param_5 != 0) {
      uVar7 = piVar2[2];
    }
    do {
      while (uVar7 == piVar2[2]) {
        iVar3 = (**(code **)(*param_1 + 0x20))(param_1,0xfd,0,param_1 + 0x53,param_5);
        if (iVar3 == 0) {
          return 0;
        }
        uVar7 = uVar7 + 1;
        if (*(int *)*piVar2 <= (int)uVar7) {
          uVar7 = 0;
        }
LAB_00516770:
        while( true ) {
          if (param_2 == 0) {
            return 1;
          }
          if (param_4 < *(uint *)(iVar3 + 0x5b8)) break;
          uVar4 = fn_00656680((-param_2 & param_2) - 1);
          uVar4 = uVar4 & 0xff;
          iVar5 = fn_006db5f8(uVar1,uVar4,local_3c);
          if (-1 < iVar5) {
            uVar6 = fn_0050a26c(param_1,iVar3,local_2c);
            fn_00516e0c(param_1 + 3,iVar3,uVar6,local_3c[0],1,1);
            param_1[0x5a] = param_1[0x5a] | 1 << uVar4;
          }
          param_2 = param_2 & ~(1 << uVar4);
        }
      }
      if (uVar7 < *(uint *)*piVar2) {
        iVar3 = ((uint *)*piVar2)[1] + uVar7 * 0x5ec;
      }
      else {
        iVar3 = 0;
      }
      uVar7 = uVar7 + 1;
      if (*(int *)*piVar2 <= (int)uVar7) {
        uVar7 = 0;
      }
      if (*(char *)(iVar3 + 0x5d5) == '\0') {
        bVar8 = *(uint *)(iVar3 + 0x5b8) == param_4;
        if (*(uint *)(iVar3 + 0x5b8) <= param_4) {
          bVar8 = *(char *)(iVar3 + 0x5bc) == -3;
        }
        bVar9 = false;
        if (bVar8) {
          bVar9 = *(int *)(iVar3 + 0x5c0) == 0;
        }
        if ((bVar9) && (iVar5 = fn_006d70ac(iVar3 + 0x5c4,param_1 + 0x53), iVar5 != 0))
        goto LAB_00516770;
      }
    } while (param_2 != 0);
  }
  return 1;
}


