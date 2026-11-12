#include "006d36d4_006d3b9c.h"



longlong fn_006d3b9c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = *param_1;
  uVar2 = uVar5 >> 0x1a | (param_1[1] & 0xff) << 6;
  uVar1 = (uVar5 & 0x3c00000) >> 0x16;
  uVar3 = uVar2 - 2000;
  if (uVar1 < 3) {
    iVar7 = uVar1 + 9;
    uVar3 = uVar2 - 0x7d1;
  }
  else {
    iVar7 = uVar1 - 3;
  }
  iVar8 = 1;
  if (-1 < (int)uVar3) goto LAB_006d3c88;
  if ((int)uVar3 % 400 != 0) {
    iVar8 = 0;
    if ((int)uVar3 % 100 == 0) goto LAB_006d3c88;
    if ((uVar3 & 3) != 0) {
      iVar8 = 0;
      goto LAB_006d3c88;
    }
  }
  iVar8 = 1;
LAB_006d3c88:
  iVar6 = ((int)uVar3 / 100) * 0x23ab1;
  iVar4 = ((int)uVar3 % 100) * 0x5b5;
  return (ulonglong)((uVar5 & 0xfc0) >> 6) * 0x3c + (ulonglong)((uVar5 & 0x1f000) >> 0xc) * 0xe10 +
         (longlong)
         (int)(((int)(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1e)) >> 2) +
               ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) + (iVar7 * 0x99 + 2) / 5 +
               ((uVar5 & 0x3e0000) >> 0x11) + iVar8 + 0x3a) * 0x15180 + (ulonglong)(uVar5 & 0x3f);
}



int fn_006d3b8c(int *param_1)

{
  return (*param_1 >> 0x1f) + 1;
}



bool fn_006d3b74(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



bool fn_006d3b54(int *param_1,char *param_2)

{
  return (*param_1 >> 0x1f) + 1 == (int)*param_2;
}



undefined8 fn_006d3b00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 2) == '\x01' || *(char *)(param_1 + 2) == '\x06') {
    uVar1 = param_1[1];
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  return CONCAT44(uVar1,uVar2);
}



undefined8 fn_006d3a88(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 2) == '\x01' || *(char *)(param_1 + 2) == '\x06') {
    uVar1 = param_1[1];
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
    uVar1 = uVar2;
  }
  return CONCAT44(uVar1,uVar2);
}



int fn_006d3a74(char *param_1)

{
  int iVar1;
  
  if (param_1[8] == '\x03') {
    iVar1 = (int)*param_1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



longlong fn_006d39e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  if ((uint)(*(int *)(param_1 + 0x10) == 0) <= (uint)-*(int *)(param_1 + 0x14)) {
    fn_0013d0fc(&local_20);
    uVar1 = *(uint *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    uVar2 = uVar1 - local_20;
    if ((int)(iVar3 - (local_1c + (uint)(uVar1 < local_20))) < 0 !=
        (SBORROW4(iVar3,local_1c) != SBORROW4(iVar3 - local_1c,(uint)(uVar1 < local_20))))
    goto LAB_006d3a5c;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  uVar2 = 0;
  if (*(char *)(iVar3 + 0x30) != '\0') {
    uVar1 = *(uint *)(iVar3 + 0x38);
    iVar3 = *(int *)(iVar3 + 0x3c);
    fn_0013d0fc(&local_18);
    uVar2 = uVar1 - local_18;
    if ((int)(iVar3 - (local_14 + (uint)(uVar1 < local_18))) < 0 !=
        (SBORROW4(iVar3,local_14) != SBORROW4(iVar3 - local_14,(uint)(uVar1 < local_18)))) {
LAB_006d3a5c:
      return CONCAT44(uVar2,1);
    }
  }
  return (ulonglong)uVar2 << 0x20;
}



void fn_006d39a4(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar1 + 8))();
  fn_00786550(param_2,param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x006d39e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



int fn_006d380c(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  undefined *local_28;
  short *local_24;
  undefined *local_20;
  short *local_1c [2];
  
  iVar4 = -1;
  if (*(short **)(param_1 + 4) != (short *)0x0 && param_2 != (short *)0x0) {
    bVar5 = **(short **)(param_1 + 4) != 0;
    sVar1 = 0;
    if (bVar5) {
      sVar1 = *param_2;
    }
    if (bVar5 && sVar1 != 0) {
      local_20 = &DAT_00855a94;
      fn_0015e6f0(local_1c);
      if (local_1c[0] != (short *)0x0) {
        sVar1 = *local_1c[0];
        psVar3 = local_1c[0];
        while (sVar1 != 0) {
          sVar1 = fn_00102b04(sVar1);
          *psVar3 = sVar1;
          psVar3 = psVar3 + 1;
          sVar1 = *psVar3;
        }
      }
      local_28 = &DAT_00855a94;
      fn_0015e6f0(&local_24,param_2);
      if (local_24 != (short *)0x0) {
        sVar1 = *local_24;
        psVar3 = local_24;
        while (sVar1 != 0) {
          sVar1 = fn_00102b04(sVar1);
          *psVar3 = sVar1;
          psVar3 = psVar3 + 1;
          sVar1 = *psVar3;
        }
      }
      iVar2 = fn_00101160(local_1c[0],local_24);
      if (iVar2 != 0) {
        iVar4 = iVar2 - (int)local_1c[0] >> 1;
      }
      fn_00170f54(&local_28);
      fn_00170f54(&local_20);
    }
  }
  return iVar4;
}



void fn_006d373c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,&DAT_007db524);
  iVar1 = param_1[1];
  bVar9 = iVar1 == 0;
  if (!bVar9) {
    iVar1 = iVar1 + -4;
    bVar9 = iVar1 == 0;
  }
  iVar6 = *(int *)(param_2 + 0x10) * 2 + 1;
  if (!bVar9) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  piVar2 = (int *)fn_0015ece0(iVar6 * 2 + 4);
  *piVar2 = iVar6;
  param_1[1] = piVar2 + 1;
  *(undefined2 *)(piVar2 + 1) = 0;
  iVar6 = *(int *)(param_2 + 0x18);
  iVar8 = param_1[1];
  iVar1 = *(int *)(param_2 + 0xc);
  uVar7 = *(uint *)(param_2 + 0x10);
  iVar5 = 0;
  uVar4 = 0;
  if (uVar7 != 0) {
    do {
      iVar3 = fn_00101a50(iVar8 + iVar5 * 2,3,L"%02X",*(undefined1 *)(iVar1 + iVar6 + uVar4));
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + iVar3;
    } while (uVar4 < uVar7);
  }
  return;
}



int fn_006d370c(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
}



void fn_006d36d4(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  bool bVar9;
  
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,&DAT_007db524);
  iVar2 = param_1[1];
  iVar8 = (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)) * 2 + 1;
  bVar9 = iVar2 == 0;
  if (!bVar9) {
    iVar2 = iVar2 + -4;
    bVar9 = iVar2 == 0;
  }
  if (!bVar9) {
    if (*(code **)(iVar2 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar2 + -8))();
    }
  }
  piVar3 = (int *)fn_0015ece0(iVar8 * 2 + 4);
  *piVar3 = iVar8;
  param_1[1] = piVar3 + 1;
  *(undefined2 *)(piVar3 + 1) = 0;
  uVar4 = 0;
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0xc)) {
    do {
      bVar1 = *(byte *)(*(int *)(param_2 + 0xc) + uVar4);
      uVar6 = bVar1 & 0xf;
      bVar1 = bVar1 >> 4;
      if (bVar1 < 10) {
        sVar5 = bVar1 + 0x30;
      }
      else {
        sVar5 = bVar1 + 0x57;
      }
      *(short *)(param_1[1] + uVar4 * 4) = sVar5;
      uVar7 = uVar6;
      if (uVar6 < 10) {
        uVar7 = uVar6 + 0x30;
      }
      if (9 < uVar6) {
        uVar7 = uVar7 + 0x57;
      }
      *(ushort *)(param_1[1] + uVar4 * 4 + 2) = uVar7;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc)));
  }
  *(undefined2 *)(param_1[1] + uVar4 * 4) = 0;
  return;
}


