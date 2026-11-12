#include "0068b6e4_0068c0b4.h"



/* WARNING: Removing unreachable block (ram,0x0068c0fc) */
/* WARNING: Removing unreachable block (ram,0x0068c124) */
/* WARNING: Removing unreachable block (ram,0x0068c128) */
/* WARNING: Removing unreachable block (ram,0x0068c12c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0068c0b4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  puVar1[0x15] = 0;
  *puVar1 = &PTR_FUN_00851160;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  piVar3 = puVar1 + 0x18;
  *piVar3 = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  iVar2 = fn_00100fc6(0x40,0);
  *piVar3 = iVar2;
  puVar1[0x1a] = *piVar3 + 0x40;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x19] = *piVar3;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0xffffffff;
  puVar1[0x1f] = 0;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)((int)puVar1 + 0x89) = 0;
  return puVar1;
}



bool fn_0068c044(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 8) - *param_2;
  fVar2 = *(float *)(param_1 + 0xc) - param_2[1];
  fVar1 = *(float *)(param_1 + 0x10) - param_2[2];
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fn_0068c6a0(DAT_008977e8);
  fn_006ada88();
  return fVar2 < fVar1 + *(float *)(param_3 + 0xc);
}



void fn_0068bea4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x6c) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  uVar5 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  uVar3 = fn_0068c7e8(DAT_008977e8);
  uVar2 = fn_00179ac8(uVar3,0x9c5c,uVar2,(char *)&DAT_0068c02c,&local_34);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  local_34 = uVar5;
  local_30 = uVar5;
  local_2c = uVar5;
  local_28 = uVar5;
  local_24 = uVar5;
  local_20 = uVar5;
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  uVar3 = fn_0068c7e8(DAT_008977e8);
  uVar2 = fn_00179ac8(uVar3,0x9c5d,uVar2,(char *)&DAT_0068c038,&local_28);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_00263814();
  fn_00660790(0,iVar4 + 8,param_1 + 8);
  (**(code **)(**(int **)(param_1 + 0x58) + 0x18))(*(int **)(param_1 + 0x58),1);
  fn_0017fd38(*(undefined4 *)(param_1 + 0x58),1,0);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(*(int **)(param_1 + 0x5c),1);
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



void fn_0068bb10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  cVar1 = *(char *)(param_1 + 0x53);
  uVar2 = fn_00144810(DAT_008977e8);
  iVar3 = fn_006a88b8(uVar2,(int)cVar1,1);
  if (*(int *)(param_1 + 0x84) != iVar3) {
    fn_0017fd38(*(undefined4 *)(param_1 + 0x5c),iVar3,0);
    *(int *)(param_1 + 0x84) = iVar3;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    fn_0018367c(*(undefined4 *)(param_1 + 0x58));
    iVar3 = fn_006eb3a4();
    if (iVar3 != 0) {
      (**(code **)(**(int **)(param_1 + 0x58) + 0x18))(*(int **)(param_1 + 0x58),0);
      fn_0017fd38(*(undefined4 *)(param_1 + 0x58),0);
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(*(int **)(param_1 + 0x5c),0);
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x53);
  uVar2 = fn_00144810(DAT_008977e8);
  fn_006a8a10(uVar2,(int)cVar1);
  uVar2 = 0x3f800000;
  iVar3 = fn_0068eb0c(DAT_008977e8);
  fVar10 = *(float *)(iVar3 + 8) - *(float *)(param_1 + 8);
  fVar7 = *(float *)(iVar3 + 0x10) - *(float *)(param_1 + 0x10);
  iVar3 = fn_0068eb24(DAT_008977e8);
  fVar6 = *(float *)(iVar3 + 0x10);
  fVar9 = *(float *)(iVar3 + 8) - *(float *)(param_1 + 8);
  fVar8 = fVar6 - *(float *)(param_1 + 0x10);
  fVar7 = fVar10 * fVar10 + fVar7 * fVar7;
  fn_0068c6a0(DAT_008977e8);
  fn_006ada88();
  if (fVar6 <= SQRT(fVar7)) {
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
    fn_0068c6a0(DAT_008977e8);
    fn_006ada88();
    if (fVar6 <= SQRT(fVar7)) goto LAB_0068bc9c;
  }
LAB_0068bc9c:
  iVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x54));
  fn_00543c54(iVar3 + 0x4c,param_1 + 0x20,param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + 0x80) = uVar4;
  *(undefined4 *)(iVar3 + 0x84) = uVar5;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  fn_0017fde4(*(undefined4 *)(param_1 + 0x54));
  fn_0017fc3c();
  (**(code **)(**(int **)(param_1 + 0x54) + 0x10))();
  iVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  fn_00543c54(iVar3 + 0x4c,param_1 + 0x20,param_1 + 8);
  *(undefined4 *)(iVar3 + 0x7c) = uVar2;
  *(undefined4 *)(iVar3 + 0x80) = uVar2;
  *(undefined4 *)(iVar3 + 0x84) = uVar2;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  fn_0017fc3c();
  (**(code **)(**(int **)(param_1 + 0x58) + 0x10))();
  iVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
  fn_00543c54(iVar3 + 0x4c,param_1 + 0x20,param_1 + 8);
  *(undefined4 *)(iVar3 + 0x7c) = uVar2;
  *(undefined4 *)(iVar3 + 0x80) = uVar2;
  *(undefined4 *)(iVar3 + 0x84) = uVar2;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
  fn_0017fc3c();
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      iVar3 = *(int *)(param_1 + 0x80) + -1;
      *(int *)(param_1 + 0x80) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x7c) = 2;
        uVar2 = fn_0068c7e8(DAT_008977e8);
        fn_0023e640(uVar2,*(undefined4 *)(param_1 + 0x74),0);
        *(undefined1 *)(param_1 + 0x89) = 0;
      }
    }
    else if ((iVar3 == 2) && (*(int *)(param_1 + 0x74) != -1)) {
      uVar2 = fn_0068c7e8(DAT_008977e8);
      iVar3 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x74));
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    iVar3 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x6c));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    iVar3 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x70));
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    }
  }
  fn_001cc890(param_1);
  return;
}



void fn_0068ba8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x54));
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
  return;
}



int fn_0068b7f0(int param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar5 = *(int **)(param_1 + 0x54);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x54) = piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_3 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_3))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_3 * 0x34;
  }
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x54),iVar1,0);
  if (iVar1 != 0) {
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x54));
    iVar1 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar1 + 0x24),uVar3);
  }
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar5 = *(int **)(param_1 + 0x58);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x58) = piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x58),iVar1,0);
  if (iVar1 != 0) {
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
    iVar1 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar1 + 0x24),uVar3);
  }
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005efdbc();
  }
  piVar5 = *(int **)(param_1 + 0x5c);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x5c) = piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_4 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_4))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_4 * 0x34;
  }
  iVar1 = fn_0069ee40(*(undefined4 *)(param_1 + 0x5c),iVar1,0);
  if (iVar1 != 0) {
    uVar3 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
    iVar4 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar4 + 0x24),uVar3);
  }
  iVar4 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar4 + 0x24));
  *(undefined1 *)(param_1 + 0x53) = param_5;
  return iVar1;
}



void fn_0068b6e4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x78) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x58));
  uVar3 = fn_0068c7e8(DAT_008977e8);
  iVar4 = fn_00179ac8(uVar3,0x9c61,uVar2,(char *)&DAT_0068b7e0,&local_2c);
  *(int *)(param_1 + 0x78) = iVar4;
  if (iVar4 != -1) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    fn_0023dd30(uVar2,*(undefined4 *)(param_1 + 0x78));
  }
  (**(code **)(**(int **)(param_1 + 0x58) + 0x18))(*(int **)(param_1 + 0x58),1);
  fn_0017fd38(*(undefined4 *)(param_1 + 0x58),1,0);
  (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))(*(int **)(param_1 + 0x5c),1);
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}


