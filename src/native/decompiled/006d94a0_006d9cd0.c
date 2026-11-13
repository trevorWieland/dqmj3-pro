#include "006d94a0_006d9cd0.h"



undefined1 *
fn_006d9cd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
    puVar2 = (undefined4 *)fn_006d9e0c(param_1,param_3,param_4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar1 = &DAT_d8814829;
    }
    else {
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar2 + 2);
      param_2[3] = puVar2[3];
      puVar1 = (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



undefined1 * fn_006d9c6c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 + -0x40000 < (undefined4 *)0x3ff00000) {
    puVar2 = (undefined4 *)fn_006d9dd0(param_1,param_3);
    if (puVar2 == (undefined4 *)0x0) {
      puVar1 = &DAT_d8814829;
    }
    else {
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar2 + 2);
      param_2[3] = puVar2[3];
      puVar1 = (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



int fn_006d9c3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = 0;
  if (iVar2 != param_1 + 8) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = iVar1 + 1;
    } while (iVar2 != param_1 + 8);
  }
  return iVar1;
}



bool fn_006d9aa4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x14) == 0x10) {
    iVar5 = DAT_008c3614;
  }
  else {
    iVar5 = DAT_008c3618;
  }
  uVar3 = *(uint *)(DAT_008bf4d4 + 8);
  iVar2 = *(int *)(DAT_008bf4d4 + 0xc);
  puVar1 = (undefined4 *)fn_004f0ce8();
  iVar6 = fn_0011c134(uVar3 - uVar4,iVar2 - (iVar6 + (uint)(uVar3 < uVar4)),*puVar1,puVar1[1]);
  return iVar5 <= iVar6;
}



int fn_006d9a38(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + 0xdc;
  }
  return iVar1;
}



undefined1 * fn_006d9940(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000 || param_3 - 0x100000U < 0x3ff00000) {
    if ((*(int *)(param_1 + 0x124) - 0x100000U < 0x3ff00000) &&
       (*(int *)(param_1 + 0x128) - 0x100000U < 0x3ff00000)) {
      if (((0x3fefffff < param_2 - 0x100000U) ||
          (puVar1 = (undefined1 *)fn_006d9b10(), -1 < (int)puVar1)) &&
         ((0x3fefffff < param_3 - 0x100000U ||
          (puVar1 = (undefined1 *)fn_006d9b10(*(undefined4 *)(param_1 + 0x128),param_3),
          -1 < (int)puVar1)))) {
        return (undefined1 *)0x0;
      }
    }
    else {
      puVar1 = &DAT_e0a14827;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



ulonglong fn_006d9b10(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_18;
  int iStack_14;
  
  if (0x3fefffff < param_2 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,0xe0e14826);
  }
  fn_004edc34(param_1 + 0x340);
  fn_0017821c(param_2,param_1,0x340);
  fn_004edc70(param_1 + 0x340);
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    local_18 = *(uint *)(DAT_008bf4d4 + 8);
    iStack_14 = *(int *)(DAT_008bf4d4 + 0xc);
  }
  else {
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4();
  }
  uVar2 = *(uint *)(param_1 + 0x350);
  iVar3 = *(int *)(param_1 + 0x354);
  puVar1 = (undefined4 *)fn_004f0ce8();
  uVar4 = fn_0011c134(local_18 - uVar2,iStack_14 - (iVar3 + (uint)(local_18 < uVar2)),*puVar1,
                       puVar1[1]);
  *(int *)(param_2 + 0x304) = (int)uVar4;
  return uVar4 & 0xffffffff00000000;
}



int fn_006d9934(int param_1)

{
  return *(int *)(param_1 + 0x104) + -0x14;
}



undefined4 fn_006d96e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x72) == '\x02') {
    uVar2 = 4;
  }
  else if (*(char *)(param_1 + 0x72) == '\x03') {
    uVar2 = 5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x71);
    if (cVar1 == '\x02') {
      uVar2 = 1;
    }
    else if (cVar1 == '\x03') {
      uVar2 = 2;
    }
    else if (cVar1 == '\x04') {
      uVar2 = 3;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 fn_006d9600(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 100) == 0) {
    if (0x3fefffff < DAT_008bf4e0 - 0x100000U) {
      return 0;
    }
    if (0xb < *(byte *)(DAT_008bf4e0 + 99)) {
      return 0;
    }
    if (*(byte *)(DAT_008bf4e0 + 99) != *(byte *)(DAT_008bf4e0 + 0x62)) {
      return 0;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8) + 0x88))()
    ;
  }
  else {
    piVar1 = (int *)fn_0013d4ec();
    if ((*(int *)(param_1 + 0x74) == *piVar1) && (*(int *)(param_1 + 0x78) == piVar1[1])) {
      return 0;
    }
    if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x7c)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x80)) {
      return 0;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8) + 0x88))()
    ;
  }
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



undefined1 fn_006d95d0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_006d95c8(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 1;
  if ((*(char *)(param_1 + 0xa4) == '\x01') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x90), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x94);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



undefined1 fn_006d9598(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined8 fn_006d94a0(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 2;
  if ((*(char *)(param_1 + 0xa4) == '\x02') &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x90), (uVar2 == 2 || uVar2 == 3) || uVar2 == 4)) {
    puVar1 = *(undefined1 **)(param_1 + 0x94);
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}


