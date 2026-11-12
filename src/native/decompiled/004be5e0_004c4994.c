#include "004be5e0_004c4994.h"



void fn_004c4994(undefined4 *param_1,int param_2,int param_3)

{
  *param_1 = &DAT_00855e00;
  param_1[1] = param_2;
  param_1[2] = param_3;
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1[2] = param_2 + 0xc;
  }
  return;
}



int fn_004c4950(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) ||
      (piVar2 = *(int **)(param_1 + 8), (int *)(*(int *)(iVar1 + 4) + iVar1) <= piVar2)) ||
     (piVar2 == (int *)0x0)) {
    return 0;
  }
  iVar1 = *piVar2;
  *(int *)(param_1 + 8) = (int)piVar2 + iVar1;
  return (int)piVar2 + iVar1;
}



short * fn_004bebd8(undefined4 *param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  undefined4 uVar8;
  short *psVar9;
  bool bVar10;
  
  if ((*(int *)(param_2 + 4) == 0) || (iVar3 = fn_00100b58(), iVar3 == 0)) {
    *param_1 = &DAT_00855a94;
    psVar9 = (short *)fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_3 + 4));
    return psVar9;
  }
  if ((*(int *)(param_3 + 4) == 0) || (iVar4 = fn_00100b58(), iVar4 == 0)) {
    *param_1 = &DAT_00855a94;
    psVar9 = (short *)fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_2 + 4));
    return psVar9;
  }
  uVar8 = *(undefined4 *)(param_2 + 4);
  psVar9 = *(short **)(param_3 + 4);
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,&DAT_007db524);
  iVar5 = param_1[1];
  iVar4 = iVar3 + iVar4 + 1;
  bVar10 = iVar5 == 0;
  if (!bVar10) {
    iVar5 = iVar5 + -4;
    bVar10 = iVar5 == 0;
  }
  if (!bVar10) {
    if (*(code **)(iVar5 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar5 + -8))();
    }
  }
  piVar6 = (int *)fn_0015ece0(iVar4 * 2 + 4);
  *piVar6 = iVar4;
  param_1[1] = piVar6 + 1;
  *(undefined2 *)(piVar6 + 1) = 0;
  iVar4 = param_1[1];
  fn_001003e0(iVar4,uVar8);
  psVar7 = (short *)(iVar4 + iVar3 * 2);
  psVar2 = psVar7;
  do {
    sVar1 = *psVar9;
    psVar9 = psVar9 + 1;
    *psVar2 = sVar1;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  return psVar7;
}



ushort * fn_004bead4(undefined4 *param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  ushort *puVar8;
  undefined4 uVar9;
  bool bVar10;
  
  if ((*(int *)(param_2 + 4) == 0) || (uVar2 = fn_00100b58(), uVar2 == 0)) {
    *param_1 = &DAT_00855a94;
    puVar6 = (ushort *)fn_0015e6f0(param_1 + 1,param_3);
    return puVar6;
  }
  uVar3 = uVar2;
  if (param_3 != (ushort *)0x0) {
    uVar3 = (uint)*param_3;
  }
  if (param_3 != (ushort *)0x0 && uVar3 != 0) {
    iVar4 = fn_00100b58(param_3);
    uVar9 = *(undefined4 *)(param_2 + 4);
    *param_1 = &DAT_00855a94;
    fn_0015e6f0(param_1 + 1,&DAT_007db524);
    iVar5 = param_1[1];
    iVar4 = uVar2 + iVar4 + 1;
    bVar10 = iVar5 == 0;
    if (!bVar10) {
      iVar5 = iVar5 + -4;
      bVar10 = iVar5 == 0;
    }
    if (!bVar10) {
      if (*(code **)(iVar5 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar5 + -8))();
      }
    }
    piVar7 = (int *)fn_0015ece0(iVar4 * 2 + 4);
    *piVar7 = iVar4;
    param_1[1] = piVar7 + 1;
    *(undefined2 *)(piVar7 + 1) = 0;
    iVar4 = param_1[1];
    fn_001003e0(iVar4,uVar9);
    puVar8 = (ushort *)(iVar4 + uVar2 * 2);
    puVar6 = puVar8;
    do {
      uVar1 = *param_3;
      param_3 = param_3 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (uVar1 != 0);
    return puVar8;
  }
  *param_1 = &DAT_00855a94;
  puVar6 = (ushort *)fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_2 + 4));
  return puVar6;
}



short * fn_004be9d4(undefined4 *param_1,ushort *param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  short *psVar8;
  short *psVar9;
  bool bVar10;
  
  puVar3 = param_1;
  if (param_2 != (ushort *)0x0) {
    puVar3 = (undefined4 *)(uint)*param_2;
  }
  if (param_2 != (ushort *)0x0 && puVar3 != (undefined4 *)0x0) {
    if ((*(int *)(param_3 + 4) == 0) || (iVar4 = fn_00100b58(), iVar4 == 0)) {
      *param_1 = &DAT_00855a94;
      psVar9 = (short *)fn_0015e6f0(param_1 + 1,param_2);
      return psVar9;
    }
    iVar5 = fn_00100b58(param_2);
    psVar9 = *(short **)(param_3 + 4);
    *param_1 = &DAT_00855a94;
    fn_0015e6f0(param_1 + 1,&DAT_007db524);
    iVar6 = param_1[1];
    iVar4 = iVar5 + iVar4 + 1;
    bVar10 = iVar6 == 0;
    if (!bVar10) {
      iVar6 = iVar6 + -4;
      bVar10 = iVar6 == 0;
    }
    if (!bVar10) {
      if (*(code **)(iVar6 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar6 + -8))();
      }
    }
    piVar7 = (int *)fn_0015ece0(iVar4 * 2 + 4);
    *piVar7 = iVar4;
    param_1[1] = piVar7 + 1;
    *(undefined2 *)(piVar7 + 1) = 0;
    iVar4 = param_1[1];
    fn_001003e0(iVar4,param_2);
    psVar8 = (short *)(iVar4 + iVar5 * 2);
    psVar2 = psVar8;
    do {
      sVar1 = *psVar9;
      psVar9 = psVar9 + 1;
      *psVar2 = sVar1;
      psVar2 = psVar2 + 1;
    } while (sVar1 != 0);
    return psVar8;
  }
  *param_1 = &DAT_00855a94;
  psVar9 = (short *)fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_3 + 4));
  return psVar9;
}



undefined4 fn_004be80c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar1 = fn_0045f3dc(param_1,L"NotificationEvent (");
  uVar1 = fn_0045f3dc(uVar1,L" PIDSource=");
  uVar1 = fn_0045f0f8(uVar1,*(undefined4 *)(param_2 + 8));
  uVar1 = fn_0045f3dc(uVar1,L" Type=");
  uVar1 = fn_0045f0f8(uVar1,*(uint *)(param_2 + 0xc) / 1000,*(uint *)(param_2 + 0xc) * 0x10624dd3);
  uVar1 = fn_0045f3dc(uVar1,L" SubType=");
  uVar1 = fn_0045f0f8(uVar1,*(uint *)(param_2 + 0xc) % 1000);
  uVar1 = fn_0045f3dc(uVar1,L" Param1=");
  uVar1 = fn_0045f0f8(uVar1,*(undefined4 *)(param_2 + 0x10));
  uVar1 = fn_0045f3dc(uVar1,L" Param2=");
  uVar1 = fn_0045f0f8(uVar1,*(undefined4 *)(param_2 + 0x14));
  uVar1 = fn_0045f3dc(uVar1,L" Param3=");
  uVar1 = fn_0045f0f8(uVar1,*(undefined4 *)(param_2 + 0x20));
  uVar4 = fn_0045f3dc(uVar1,L" UInt64Param1=");
  uVar1 = fn_0045f42c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uVar3,uVar2);
  uVar1 = fn_0045f3dc(uVar1,L" StrParam=");
  uVar1 = fn_004be9cc(uVar1,param_2 + 0x18);
  fn_0045f3dc(uVar1,&DAT_004be9c4);
  return param_1;
}



int * fn_004be680(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int local_20;
  undefined1 auStack_1c [8];
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (param_1[5] == 0) {
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar3 = *(int *)(iVar2 + 4);
          iVar6 = iVar2;
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            do {
              iVar6 = iVar3;
              iVar3 = *(int *)(iVar6 + 4);
            } while (iVar6 == *(int *)(iVar3 + 0xc));
          }
          if (*(int *)(iVar6 + 0xc) != iVar3) {
            iVar6 = iVar3;
          }
        }
        else {
          do {
            iVar6 = iVar3;
            iVar3 = *(int *)(iVar6 + 8);
          } while (*(int *)(iVar6 + 8) != 0);
        }
        local_20 = iVar2;
        fn_00779a60(auStack_1c,param_1,&local_20);
        iVar2 = iVar6;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_0077a0bc(param_1,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(int *)(iVar1 + 0xc) = param_1[1];
        param_1[1] = iVar1;
        iVar1 = iVar2;
      }
      *(int *)(param_1[4] + 8) = param_1[4];
      *(undefined4 *)(param_1[4] + 4) = 0;
      *(int *)(param_1[4] + 0xc) = param_1[4];
      param_1[5] = 0;
    }
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar4 = (int *)*param_1;
    while (piVar4 != (int *)0x0) {
      *param_1 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar5 = *(code **)(piVar4[2] + -8);
        if (pcVar5 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar5)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*param_1;
    }
  }
  return param_1;
}



int * fn_004be5e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}


