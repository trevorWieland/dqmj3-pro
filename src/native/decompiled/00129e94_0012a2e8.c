#include "00129e94_0012a2e8.h"



undefined4 fn_0012a2e8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_008bf798 = param_1;
  iVar2 = fn_00146510();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    piVar1 = DAT_008bf798;
    uVar3 = 0;
    *DAT_008bf798 = iVar2;
    piVar1[1] = 0;
    piVar1[2] = iVar2;
    piVar1[3] = 0;
  }
  return uVar3;
}



void fn_0012a2d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



uint fn_0012a27c(undefined4 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = 0;
  puVar4 = &DAT_007d6270;
  iVar6 = 0x1d;
  pcVar3 = "\x01";
  puVar5 = &DAT_007d6274;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 0xc;
    bVar8 = cVar1 != '\0' || param_2 != 0;
    uVar7 = 0;
    if (bVar8) {
      uVar7 = *puVar4;
    }
    puVar4 = puVar4 + 3;
    if (bVar8 && (uVar7 & param_3) != 0) {
      uVar2 = uVar2 | *puVar5;
    }
    puVar5 = puVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return uVar2;
}



void fn_0012a25c(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0012a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14) + 0x38) + 0x14))();
  return;
}



void fn_0012a208(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 1;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 2;
      }
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 2;
    }
  }
  return;
}



undefined4 fn_0012a1dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145a40(*(int *)(param_1 + 4) + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 == param_2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



int fn_0012a198(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [16];
  int local_18;
  
  iVar1 = fn_001457bc(param_2,auStack_28);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = local_18;
  }
  return iVar2 * 0xa000;
}



uint fn_0012a034(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  
  uVar1 = fn_00156818(param_2);
  uVar5 = uVar1 * 0x5c + 0x1f & 0xffffffe0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      local_48 = 0;
      local_44 = 0;
      iVar2 = fn_001562d0(param_2,uVar4 | 0x4000000,&local_48);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = local_44;
      }
      if (iVar2 != 0 && iVar3 != 0) {
        uVar5 = local_48 * ((iVar3 + 0x1fU & 0xffffffe0) + 0x40) + uVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  iVar3 = fn_001457bc(param_2,&local_40);
  if (iVar3 != 0) {
    uVar5 = (local_3c * 0x138 + 0x1fU & 0xffffffe0) +
            (local_38 * 0x3298 + 0x1fU & 0xffffffe0) +
            (local_40 * 0x88 + 0x1fU & 0xffffffe0) + (local_40 * 0x2d8 + 0x1fU & 0xffffffe0) + uVar5
            + (local_2c * 0x1e8 + 0x1fU & 0xffffffe0) + (local_2c * 0x4c + 0x1fU & 0xffffffe0);
  }
  if (param_3 != 0) {
    uVar5 = (param_3 + 3U & 0xfffffffc) * (local_38 + local_2c + local_40) + uVar5;
  }
  return uVar5;
}



int fn_0012a014(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00156750(param_2);
  return iVar1 * 4 + 4;
}



longlong fn_00129f6c(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar5 = (uint)((ulonglong)param_4 * (ulonglong)uVar7);
  lVar9 = (ulonglong)param_3 * (ulonglong)uVar7 +
          CONCAT44(((int)uVar7 >> 0x1f) * param_3,
                   (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20));
  uVar3 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar1 = uVar6 * ((int)param_4 >> 0x1f) + (int)((ulonglong)param_4 * (ulonglong)uVar6 >> 0x20) +
          (uint)CARRY4((uint)lVar9,(uint)((ulonglong)param_4 * (ulonglong)uVar6));
  uVar2 = uVar1 + uVar3 + uVar5;
  iVar4 = ((int)uVar1 >> 0x1f) + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3) +
          uVar7 * ((int)param_4 >> 0x1f) +
          ((int)uVar7 >> 0x1f) * param_4 + (int)((ulonglong)param_4 * (ulonglong)uVar7 >> 0x20) +
          (uint)CARRY4(uVar1 + uVar3,uVar5);
  if ((int)param_4 < 0) {
    bVar8 = CARRY4(uVar2,uVar6);
    uVar2 = uVar2 + uVar6;
    iVar4 = iVar4 + uVar7 + (uint)bVar8;
  }
  lVar9 = fn_0011c10c(uVar2,iVar4,param_5);
  return lVar9 + (ulonglong)(uint)-((int)param_1[1] >> 0x1f);
}



int fn_00129f00(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 86400000;
  fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),86400000,0)
  ;
  uVar1 = iVar2 / 1000;
  iVar2 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  return uVar1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c;
}



int fn_00129e94(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 86400000;
  fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),86400000,0)
  ;
  uVar1 = iVar2 / 60000;
  iVar2 = (int)((longlong)(int)uVar1 * -0x77777777 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  return uVar1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x3c;
}


