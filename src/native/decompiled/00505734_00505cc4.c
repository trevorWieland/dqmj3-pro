#include "00505734_00505cc4.h"



undefined1 fn_00505cc4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



void fn_00505c70(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    DAT_008edb1c = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    piVar1 = *(int **)(param_1 + 0x84);
    if (piVar1 + -0x40000 < (int *)0x3ff00000) {
                    /* WARNING: Could not recover jumptable at 0x00505cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x10))(piVar1,0);
      return;
    }
  }
  return;
}



undefined1 fn_00505c40(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



ushort fn_00505c04(int param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 1;
  uVar1 = 0;
  do {
    if ((*(uint *)(param_1 + 0x6c) & uVar2) == 0) {
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar2 << 1;
  } while (uVar1 < 0xc);
  return 0xfd;
}



undefined8 fn_00505b1c(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 4;
  if ((*(char *)(param_1 + 0x9c) == '\x04') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x88), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x8c);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



undefined1 fn_00505aec(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x05') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_00505ae4(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 2;
  if ((*(char *)(param_1 + 0x9c) == '\x02') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x88), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x8c);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



void fn_00505a0c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  fn_0050bc68(DAT_008c0670,0,param_2);
  local_14 = 1;
  local_18 = &DAT_00857044;
  local_13 = (undefined1)param_2;
  iVar1 = fn_0050cc80(DAT_008bf4d4 + 0x10,&local_18);
  if (-1 < iVar1) {
    fn_004fa260(*(undefined4 *)(param_1 + 0x30),param_2);
    fn_00505374(param_1,1,param_2);
    if (param_2 < 0xc) {
      uVar2 = 1;
      if (param_2 != 0) {
        if ((param_2 & 1) != 0) {
          uVar2 = 2;
        }
        for (param_2 = param_2 >> 1; param_2 != 0; param_2 = param_2 - 1) {
          uVar2 = uVar2 << 2;
        }
      }
      iVar1 = *(int *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & ~uVar2;
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x58) = *(uint *)(iVar1 + 0x58) & ~uVar2;
      }
    }
  }
  return;
}



void fn_00505a04(undefined4 param_1,undefined4 param_2)

{
  fn_00505734(param_1,param_2,1);
  return;
}



undefined1 fn_005059d4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x04') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_005059b8(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 1;
  if ((*(char *)(param_1 + 0x9c) == '\x01') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x88), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x8c);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



void fn_00505974(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)(DAT_008bf4cc + 0x3c);
      puVar1 != (undefined4 *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
      puVar1 = puVar1 + 1) {
    fn_0051c5c8(*puVar1);
  }
  return;
}



longlong fn_005058c4(int param_1)

{
  uint uVar1;
  uint extraout_r1;
  bool bVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x9c);
  bVar2 = uVar1 == 4;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x88);
  }
  if (bVar2 && uVar1 == 1) {
    fn_004ed158(param_1 + 0x88);
    return (ulonglong)extraout_r1 << 0x20;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,&DAT_e0a14827);
}



undefined8 fn_005058bc(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 5;
  if ((*(char *)(param_1 + 0x9c) == '\x05') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x88), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x8c);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



void fn_00505734(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    uVar6 = *(uint *)(param_1 + 0x78);
    iVar11 = *(int *)(param_1 + 0x7c);
    uVar2 = *(uint *)(DAT_008bf49c + 0x30);
    iVar5 = *(int *)(DAT_008bf49c + 0x34);
    iVar7 = param_2;
    if ((param_2 != 1) && (cVar1 = *(char *)(*(int *)(param_1 + 0x30) + 0x58), cVar1 != '\0')) {
      if (cVar1 == '\x02') {
        iVar7 = 4;
      }
      else {
        iVar7 = 5;
      }
    }
    iVar9 = *(int *)(param_1 + 0x70);
    uVar8 = (undefined1)*(ushort *)(param_1 + 0x5c);
    if ((*(ushort *)(param_1 + 0x5c) & 0xff) == 0) {
      uVar8 = 0xff;
    }
    if (iVar9 == 0) {
      iVar9 = -1;
    }
    if ((0x3fefffff < *(int *)(DAT_008bf4d4 + 100) - 0x100000U) ||
       (iVar10 = *(int *)(*(int *)(DAT_008bf4d4 + 100) + 0x20), iVar10 == 0)) {
      iVar10 = -1;
    }
    iVar12 = param_1;
    puVar3 = (undefined4 *)fn_004f0ce8();
    DAT_008ee0ac = fn_0011c134(uVar2 - uVar6,iVar5 - (iVar11 + (uint)(uVar2 < uVar6)),*puVar3,
                                puVar3[1],iVar12,param_2);
    DAT_008ee0b0 = (undefined1)iVar7;
    DAT_008ee0b1 = uVar8;
    DAT_008ee0b4 = iVar9;
    DAT_008ee0b8 = iVar10;
    fn_004fca2c(*(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 0x20) - 0x100000U < 0x3ff00000) {
      fn_005014b0();
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      DAT_008ee13c = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
    }
    fn_004f1208(DAT_008bf49c);
    fn_0051da64(DAT_008bf4d4,0);
    fn_00513384(DAT_008c06a8);
    fn_00514e84(DAT_008bf4d0);
    if ((*(char *)(param_1 + 0xa4) == '\0') &&
       (piVar4 = *(int **)(param_1 + 0x84), piVar4 + -0x40000 < (int *)0x3ff00000)) {
      (**(code **)(*piVar4 + 0x10))(piVar4,param_3);
    }
    if (param_3 == 1) {
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  return;
}


