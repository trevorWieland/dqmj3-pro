#include "001f5660_001f5d88.h"



undefined4 fn_001f5d88(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if ((iVar1 == 0) || (iVar1 = fn_0024df44(), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0015a130(param_1);
  return uVar2;
}



void fn_001f5cfc(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  iVar2 = fn_003035b0(param_3,(char *)&DAT_00861d18);
  if (iVar2 != 0) {
    uVar3 = fn_001639b0(param_1,param_3);
  }
  if (((int)param_2 < 0) || (0x4f < param_2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  }
  cVar1 = *(char *)(iVar2 + 0xdc);
  if ((cVar1 == '\0') || ((cVar1 != '\x02' && (cVar1 == '\x03')))) {
    *(undefined4 *)(iVar2 + 0x140) = uVar3;
  }
  return;
}



void fn_001f5b70(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((((int)param_2 < 0) || (0x4f < param_2)) ||
     (piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c), piVar1 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f5ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x54))(piVar1,param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00220100) */

undefined4 fn_001f5b00(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_28;
  float local_24;
  float fStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  piVar3 = (int *)**(int **)(iVar1 + 0x20c);
  while( true ) {
    if (piVar3 == *(int **)(iVar1 + 0x20c)) {
      return 0;
    }
    if (piVar3[3] == param_2) break;
    piVar3 = (int *)*piVar3;
  }
  iVar4 = piVar3[5];
  iVar2 = *(int *)(iVar1 + 0x68);
  local_28 = *(float *)(iVar4 + 0x1c) + *(float *)(iVar2 + 0x1c);
  local_24 = *(float *)(iVar4 + 0x20) + *(float *)(iVar2 + 0x20);
  fStack_20 = *(float *)(iVar4 + 0x24) + *(float *)(iVar2 + 0x24);
  if (*(int *)(iVar1 + 0x138) != 4 && *(int *)(iVar1 + 0x138) != 1) {
    iVar2 = *(int *)(iVar1 + 0x68);
    uVar5 = *(undefined4 *)(iVar2 + 0x20);
    uVar6 = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar1 + 0x13c) = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar1 + 0x140) = uVar5;
    *(undefined4 *)(iVar1 + 0x144) = uVar6;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  fn_0021b74c(iVar1,&local_28,&local_1c,0);
  *(undefined4 *)(iVar1 + 0x138) = 4;
  return 1;
}



void fn_001f5abc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c));
  if (iVar1 != -1) {
    fn_00699b18(DAT_008977e0,iVar1,0xffffffff);
    *(undefined1 *)(param_1 + 0xf94) = 0;
  }
  return;
}



void fn_001f5a68(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 local_10 [16];
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  uVar2 = param_2 * 0xb;
  piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(piVar1 + 0x37);
  }
  if (piVar1 != (int *)0x0 && uVar2 != 0) {
    (**(code **)(*piVar1 + 0x18))(piVar1,local_10);
  }
  return;
}



void fn_001f5a08(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 local_10 [16];
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  uVar2 = param_2 * 0xb;
  piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(piVar1 + 0x37);
  }
  if (piVar1 != (int *)0x0 && uVar2 != 0) {
    (**(code **)(*piVar1 + 0x18))(piVar1,local_10);
  }
  return;
}



void fn_001f59d0(int param_1,uint param_2)

{
  int *piVar1;
  
  if ((-1 < (int)param_2) && (param_2 < 0x50)) {
    piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001f5a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0xd8))();
      return;
    }
  }
  return;
}



void fn_001f580c(int param_1,undefined4 param_2)

{
  fn_001eb9e8();
  fn_001f0a7c(param_1,param_2);
  (**(code **)(**(int **)(param_1 + 0x8c) + 0xd8))();
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x134) = *(uint *)(*(int *)(param_1 + 0x8c) + 0x134) | 1;
  *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x114) = 0;
  return;
}



void fn_001f578c(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x3e5] != '\0') {
    if (*(char *)(DAT_008977e0 + 0x218) == '\0') {
      iVar1 = fn_006f72b4();
      if (*(int *)(iVar1 + 0x138) != 2) {
        fn_00698fb8(DAT_008977e0,0xffffffff);
      }
      *(undefined1 *)(param_1 + 0x3e5) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3a1) = 0xff;
  fn_00158f50(param_1);
  fn_001484b4(param_1);
                    /* WARNING: Could not recover jumptable at 0x001f5804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x74))(param_1);
  return;
}



void fn_001f5760(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_0026f90c();
  return;
}



void fn_001f56ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_006f75ac(DAT_008977e0);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  iVar2 = fn_006f7a20(DAT_008977e0);
  if ((iVar2 == 0) &&
     (iVar2 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_2), iVar2 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar3 = fn_0025f9d8(DAT_00897800,uVar3,param_2);
  fn_0038fee8(uVar1,uVar3);
  return;
}



void fn_001f56ac(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0036a470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + 0x24) + 0x10))();
  return;
}



void fn_001f5660(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (((((int)param_2 < 0) || (0x4f < param_2)) ||
      (piVar1 = *(int **)(param_1 + param_2 * 0x2c + 0x8c), piVar1 == (int *)0x0)) ||
     ((char)piVar1[0x37] != '\0' && (char)piVar1[0x37] != '\x03')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f56a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x124))(piVar1,param_3);
  return;
}


