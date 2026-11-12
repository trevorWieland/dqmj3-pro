#include "001ebb68_001ec184.h"



void fn_001ec184(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_006b77f0(uVar1,param_2);
  if (iVar2 == -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_002772e4(uVar1,param_2);
    return;
  }
  return;
}



undefined4 fn_001ec148(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001ec178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0x48))();
      return uVar2;
    }
  }
  return 1;
}



bool fn_001ec104(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  ushort local_c;
  
  uVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  fn_0019bc50(auStack_10,uVar1);
  return param_2 <= (int)(uint)local_c;
}



void fn_001ec0e0(void)

{
  fn_006f72b4(DAT_008977e0);
  fn_00219448();
  return;
}



void fn_001ec0b8(int param_1)

{
  fn_006f75ac(DAT_008977e0);
  fn_0016b40c();
  *(undefined1 *)(param_1 + 0xf90) = 1;
  return;
}



void fn_001ec068(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(DAT_008977e0 + 0x28);
  iVar1 = (**(code **)(*piVar2 + 0x2c))(piVar2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ec0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)piVar2[3] + 0x30))((int *)piVar2[3],0x48,0);
  return;
}



void fn_001ec044(int param_1)

{
  fn_00694b14(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001ec030(void)

{
  fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18));
  return;
}



void fn_001ebff8(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x30) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x001ec028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x20))(piVar2,param_2,0);
  return;
}



void fn_001ebfc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_0026f904(*(int *)(iVar1 + 0x44),param_2);
  return;
}



void fn_001ebfa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x90) = param_2;
  return;
}



void fn_001ebf08(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  *(char *)(param_1 + 0xf97) = (char)param_2;
  uVar1 = fn_006f7a0c(DAT_008977e0);
  fn_00685320(uVar1,param_2 ^ 1);
  uVar1 = fn_006f7a0c(DAT_008977e0);
  fn_00683dac(uVar1,param_2 ^ 1);
  iVar2 = fn_006f7a70(DAT_008977e0);
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2) {
    do {
      piVar3 = *(int **)(*(int *)(iVar2 + 0x18) + iVar4 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x54))(piVar3,param_2 ^ 1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x18) >> 2);
  }
  return;
}



void fn_001ebed8(void)

{
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_006f72b4(DAT_008977e0);
  return;
}



undefined * fn_001ebcb8(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if ((int)param_2 < 0) {
    return (undefined *)0x0;
  }
  if (0x4f < param_2) {
    return (undefined *)0x0;
  }
  iVar7 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar7 == 0) {
    return (undefined *)0x0;
  }
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) goto LAB_001ebe10;
  uVar9 = *(undefined4 *)(iVar7 + 0xe4);
  if (*(char *)(iVar7 + 0xdc) == '\0') {
    iVar2 = fn_006f7a84(DAT_008977e0);
    uVar9 = *(undefined4 *)(iVar2 + 0x18c);
  }
  uVar8 = *(uint *)(iVar7 + 0xe0);
  if (*(char *)(iVar7 + 0xdc) == '\0') {
    if ((-1 < (int)uVar8) &&
       (iVar2 = *(int *)(DAT_00897844 + 4),
       uVar8 < (uint)((*(int *)(DAT_00897844 + 8) - iVar2) / 0x34))) goto LAB_001ebdac;
LAB_001ebd70:
    iVar2 = 0;
  }
  else {
    iVar3 = fn_006f7a9c(DAT_008977e0);
    if (((int)uVar8 < 0) ||
       (iVar2 = *(int *)(iVar3 + 4), (uint)((*(int *)(iVar3 + 8) - iVar2) / 0x34) <= uVar8))
    goto LAB_001ebd70;
LAB_001ebdac:
    iVar2 = iVar2 + uVar8 * 0x34;
  }
  uVar4 = fn_006eb378(iVar2);
  uVar5 = fn_005ef148(uVar9);
  uVar8 = uVar4;
  if (uVar4 < uVar5) {
    do {
      puVar6 = (undefined4 *)fn_006ec1e4(uVar9,uVar8);
      iVar2 = fn_003035b0(param_3,*puVar6);
      if (iVar2 == 0) {
        cVar1 = *(char *)(iVar7 + 0xdc);
        iVar2 = uVar8 - uVar4;
        if (cVar1 == '\0') {
          iVar2 = iVar2 + 0x16;
          goto LAB_001ebeac;
        }
        if (cVar1 == '\x02') {
          return (undefined *)0x0;
        }
        if (cVar1 != '\x03') {
          return (undefined *)0x0;
        }
        goto LAB_001ebeb8;
      }
      uVar8 = uVar8 + 1;
      uVar5 = fn_005ef148(uVar9);
    } while (uVar8 < uVar5);
  }
LAB_001ebe10:
  uVar9 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_006b7868(uVar9,param_3);
  if (iVar2 == -1) {
    uVar9 = fn_006f7a9c(DAT_008977e0,0xffffffff);
    iVar2 = fn_002777fc(uVar9,param_3);
  }
  iVar2 = fn_001db994(iVar7,iVar2);
  if (iVar2 != -1) {
    cVar1 = *(char *)(iVar7 + 0xdc);
    if (cVar1 == '\0') {
LAB_001ebeac:
      return &DAT_007c1254 + iVar2 * 0x18;
    }
    if ((cVar1 != '\x02') && (cVar1 == '\x03')) {
LAB_001ebeb8:
      return &DAT_007c17ac + iVar2 * 0x18;
    }
  }
  return (undefined *)0x0;
}



void fn_001ebc70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xe84) == '\x05') {
    fn_00698fb8(DAT_008977e0,0xffffffff,param_3,param_4,param_4);
  }
  uVar1 = fn_006f75ac(DAT_008977e0);
  fn_0038ff40(uVar1,1,0,0,0);
  return;
}



void fn_001ebb68(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(DAT_008977e0 + 0x28);
  puVar2 = (undefined4 *)fn_001f751c(uVar1,0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_001ebbd0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_001ebbd0:
  uVar5 = *(undefined4 *)(param_1 + 0x80);
  iVar4 = fn_006f7a20(DAT_008977e0);
  if ((iVar4 == 0) &&
     (iVar4 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_2), iVar4 != 0)) {
    uVar5 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar5 = fn_0025f9d8(DAT_00897800,uVar5,param_2);
  fn_0036c140(puVar2,uVar5);
  *(undefined1 *)(param_1 + 0xf96) = 0;
  if (param_3 == 0) {
    *(undefined1 *)(puVar2 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xf96) = 1;
    *(undefined1 *)(puVar2 + 0xc) = 1;
  }
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 0x51) = param_4;
  *(undefined1 *)(puVar2 + 0x12) = 0;
  fn_001f749c(uVar1,0x48,0,0);
  return;
}


