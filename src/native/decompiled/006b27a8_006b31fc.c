#include "006b27a8_006b31fc.h"



/* WARNING: Removing unreachable block (ram,0x006b2f98) */
/* WARNING: Removing unreachable block (ram,0x006b2fa8) */
/* WARNING: Removing unreachable block (ram,0x006b2fbc) */
/* WARNING: Removing unreachable block (ram,0x006b3008) */
/* WARNING: Removing unreachable block (ram,0x006b3014) */
/* WARNING: Removing unreachable block (ram,0x006b3030) */
/* WARNING: Removing unreachable block (ram,0x006b3034) */
/* WARNING: Removing unreachable block (ram,0x006b303c) */
/* WARNING: Removing unreachable block (ram,0x006b3058) */
/* WARNING: Removing unreachable block (ram,0x006b3064) */
/* WARNING: Removing unreachable block (ram,0x006b3078) */
/* WARNING: Removing unreachable block (ram,0x006b307c) */
/* WARNING: Removing unreachable block (ram,0x006b2fd4) */
/* WARNING: Removing unreachable block (ram,0x006b2fe4) */
/* WARNING: Removing unreachable block (ram,0x006b2ff0) */
/* WARNING: Removing unreachable block (ram,0x006b3098) */

void fn_006b31fc(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  
  if (param_3 == 0) {
    fn_00230ce8();
    return;
  }
  iVar1 = fn_006b39b4(*(undefined4 *)(param_2 + 4));
  if (iVar1 <= param_3) {
    *param_1 = (int)&DAT_008f9cf4;
    return;
  }
  iVar1 = fn_006b3e50(*(undefined4 *)(param_2 + 4),param_3);
  iVar2 = *(int *)(iVar1 + 4);
  puVar6 = &DAT_008f9ce8;
  if (*(int *)(iVar2 + -0xc) != -1) {
    *param_1 = iVar2;
    piVar3 = (int *)(iVar2 + -0xc);
    if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = *piVar3 + 1;
    }
    return;
  }
  uVar5 = *(uint *)(iVar2 + -4);
  local_18 = param_4;
  if (0xfffffff1 < uVar5) {
    local_18 = 0xfffffff1;
    fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5);
  }
  if (uVar5 != 0) {
    puVar6 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
    }
    puVar6[1] = uVar5;
    puVar4 = (undefined2 *)((int)puVar6 + uVar5 * 2 + 0xc);
    *puVar6 = 0;
    puVar6[2] = uVar5;
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = 0;
    }
  }
  *param_1 = (int)(puVar6 + 3);
  fn_00301a9c(puVar6 + 3,*(undefined4 *)(iVar1 + 4),uVar5 << 1,local_18);
  return;
}



int fn_006b31cc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006b38f4(param_1[1] + 0x90);
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  return iVar1 - iVar2;
}



int fn_006b31ac(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b38c8(*(int *)(param_1 + 4) + 0x90);
  return (int)(char)(&DAT_007c672e)[iVar1];
}



bool fn_006b30d4(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    *param_2 = *(undefined4 *)(iVar1 + 0x72);
    param_2[1] = *(undefined4 *)(iVar1 + 0x76);
    param_2[2] = *(undefined4 *)(iVar1 + 0x7a);
    param_2[3] = *(undefined4 *)(iVar1 + 0x7e);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar1 + 0x82);
    return true;
  }
  iVar1 = fn_006b3e50(*(int *)(param_1 + 4),param_3);
  if (iVar1 != 0) {
    *param_2 = *(undefined4 *)(iVar1 + 0x12);
    param_2[1] = *(undefined4 *)(iVar1 + 0x16);
    param_2[2] = *(undefined4 *)(iVar1 + 0x1a);
    param_2[3] = *(undefined4 *)(iVar1 + 0x1e);
    *(undefined2 *)(param_2 + 4) = *(undefined2 *)(iVar1 + 0x22);
  }
  return iVar1 != 0;
}



undefined1 fn_006b2f08(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b3854(*(int *)(param_1 + 4) + 0x90);
  return (&DAT_007c6734)[iVar1];
}



undefined4 fn_006b2ec0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8 + 4);
}



void fn_006b2e74(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*param_1 + 6);
  if (cVar1 == '\x02') {
    fn_0022f750((char *)&DAT_00234d94);
    return;
  }
  if ((cVar1 == '\x01') || (cVar1 != '\0')) {
    fn_0022f750((char *)&DAT_00234d8c);
    return;
  }
  fn_0022f750(&DAT_00234d9c);
  return;
}



bool fn_006b2b80(int param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x5f < param_2)) {
    return false;
  }
  return ((uint)*(byte *)(*(int *)(param_1 + 4) +
                         ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1d)) >> 3) + 0x898) &
         1 << ((int)param_2 % 8 & 0xffU)) != 0;
}



int fn_006b2b44(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  if (param_3 != 0) {
    if (param_2 != 0xffffffff) {
      iVar1 = param_2 - 0x50;
    }
    return iVar1;
  }
  iVar2 = fn_006f72a0(DAT_008977e0);
  iVar1 = 0;
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x44)) {
    do {
      if (*(short *)(*(int *)(iVar2 + 0x40) + iVar3 * 0x1c + 0x12) == 10) {
        if (*(ushort *)(*(int *)(iVar2 + 0x40) + iVar3 * 0x1c + 0x10) == param_2) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(iVar2 + 0x44));
  }
  return -1;
}



int fn_006b2aa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_2 == 0x30 || param_2 == 0x43) && (DAT_00897804 != 0)) &&
     (iVar2 = fn_00250280(), iVar1 = DAT_00897804, iVar2 != 0)) {
    *(undefined2 *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60) = 0;
    *(undefined2 *)(*(int *)(*(int *)(iVar1 + 0x14) + 4) + 0x86) = 0;
    fn_0025bddc(*(undefined4 *)(iVar1 + 8));
    fn_002507f8(0);
  }
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 2);
}



int * fn_006b2a74(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = fn_0077f194(param_2,*param_1,100);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  piVar1 = (int *)uVar3;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 == (int *)0x0 || iVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



int fn_006b2a40(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*param_1 + iVar2 * 0x1c) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 100);
  return iVar1;
}



int fn_006b2974(int *param_1)

{
  return (int)*(char *)(*param_1 + 0xb18);
}



undefined4 fn_006b2948(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((param_2 < 0) || (99 < param_2)) ||
     (puVar1 = (undefined4 *)(*param_1 + param_2 * 0x1c), puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



bool fn_006b27a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = 0;
  iVar1 = fn_002febd8(param_3);
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = ~(iVar1 - 1U) & 1;
    if (uVar3 != 0) {
      uVar4 = (uint)*(char *)(param_3 + (iVar1 - 1U));
    }
  }
  iVar2 = (iVar1 - uVar3) + -1;
  if (iVar1 - uVar3 != 0 && -2 < iVar2) {
    do {
      iVar1 = iVar2 + -2;
      bVar5 = iVar2 != 1;
      uVar4 = (int)*(char *)(param_3 + iVar2 + -1) |
              ((int)*(char *)(param_3 + iVar2) | uVar4 << 8) << 8;
      iVar2 = iVar1;
    } while (bVar5 && -2 < iVar1);
  }
  uVar3 = fn_006b282c(param_1,param_2);
  return uVar3 == uVar4;
}



/* WARNING: Removing unreachable block (ram,0x006b28d4) */

uint fn_006b282c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_2) {
  case 0:
    iVar2 = 1;
    break;
  case 1:
  case 3:
  case 5:
    iVar2 = 2;
    break;
  case 7:
    iVar2 = 3;
  }
  uVar1 = 0;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uVar1 = (uint)*(byte *)(param_2 + iVar2 + param_1 + 1) | uVar1 << 8;
  }
  return uVar1;
}


