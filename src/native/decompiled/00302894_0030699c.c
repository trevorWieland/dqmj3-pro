#include "00302894_0030699c.h"



void fn_0030699c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  uint local_2c [6];
  
  if (param_2 == 0) {
    param_3 = (int)*(short *)(param_1 + 0x48);
  }
  if (param_2 == 0 && param_3 == *(short *)(param_1 + 0x4a)) {
    iVar3 = (int)*(short *)(param_1 + 0x4c);
    bVar5 = iVar3 == *(short *)(param_1 + 0x4e);
    if (bVar5) {
      iVar3 = (int)*(char *)(param_1 + 0x5c);
    }
    if (bVar5 && iVar3 == *(char *)(param_1 + 0x5d)) {
      return;
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x5d) == 0) {
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    fn_0018a618(local_2c + 1,5,4,DAT_008936c8,(int)*(short *)(param_1 + 0x4a));
    fn_00190d50(uVar4,local_2c + 1);
  }
  else {
    uVar1 = fn_0022f5a8();
    fn_00190d50(uVar4,uVar1);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  if (*(char *)(param_1 + 0x5d) == '\0') {
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    fn_0018a618(local_2c + 1,5,4,DAT_008936c8,(int)*(short *)(param_1 + 0x4e));
    fn_00190d50(uVar4,local_2c + 1);
  }
  else {
    uVar1 = fn_0022f5a8();
    fn_00190d50(uVar4,uVar1);
  }
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4a),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x4e),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (fVar7 / fVar6) * 100.0;
  if ((int)fVar6 < 0x41a00001) {
    uVar2 = 0xff0000ff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  uVar2 = uVar2 << 0x18 | ((uVar2 & 0xffff) >> 8) << 0x10 | ((uVar2 & 0xffffff) >> 0x10) << 8 |
          uVar2 >> 0x18;
  local_2c[0] = uVar2;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(*(int **)(param_1 + 0x30),0,local_2c);
  local_2c[0] = uVar2;
  (**(code **)(**(int **)(param_1 + 0x30) + 0x10))(*(int **)(param_1 + 0x30),2,local_2c);
  local_2c[0] = uVar2;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(*(int **)(param_1 + 0x34),0,local_2c);
  local_2c[0] = uVar2;
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(*(int **)(param_1 + 0x34),2,local_2c);
  iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20));
  *(float *)(iVar3 + 0x10) = fVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00306774(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_10 [8];
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x58) == *(char *)(param_1 + 0x59))) {
    uVar2 = (uint)*(byte *)(param_1 + 0x5a);
    bVar5 = uVar2 == *(byte *)(param_1 + 0x5b);
    if (bVar5) {
      uVar2 = (uint)*(char *)(param_1 + 0x5c);
    }
    if ((bVar5 && uVar2 == (int)*(char *)(param_1 + 0x5d)) &&
       (*(char *)(param_1 + 0x5e) == *(char *)(param_1 + 0x5f))) {
      return;
    }
  }
  if ((int)*(char *)(param_1 + 0x5d) != 0) {
    uVar1 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x40),uVar1);
    uVar1 = _DAT_008936d0;
    iVar3 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(iVar3 + 0xac) = _DAT_008936d0;
    *(undefined4 *)(iVar3 + 0xb0) = uVar1;
    return;
  }
  uVar2 = fn_00246858(*(undefined1 *)(param_1 + 0x5b),(int)*(char *)(param_1 + 0x5f));
  uVar4 = (uint)*(byte *)(param_1 + 0x59);
  if (uVar4 < uVar2) {
    fn_002309d8(auStack_10,4,uVar4,0);
  }
  else {
    fn_002309d8(auStack_10,4,uVar4,1);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x40),auStack_10);
  return;
}



void fn_003066c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char *local_48 [13];
  
  local_48[0] = (char *)&DAT_008637fc;
  local_48[1] = "ganganikouze";
  local_48[2] = (char *)&DAT_00863824;
  local_48[3] = "senryokuubae";
  local_48[4] = "battleicon_care_support";
  local_48[5] = "supportwonomuzo";
  local_48[6] = "battleicon_savelife";
  local_48[7] = "inotidaijini";
  local_48[8] = "battleicon_no_skill";
  local_48[9] = (char *)&DAT_00863794;
  local_48[10] = (char *)&DAT_00863810;
  local_48[0xb] = "tensiontamero";
  iVar3 = 0;
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0xac) + 0x10);
  do {
    iVar1 = fn_00688920(uVar4,local_48[iVar3 * 2]);
    bVar5 = param_2 == iVar3;
    iVar3 = iVar3 + 1;
    *(byte *)(iVar1 + 0x44) = bVar5 | *(byte *)(iVar1 + 0x44) & 0xfe;
  } while (iVar3 < 6);
  uVar4 = fn_0068897c(uVar4,(char *)&DAT_00306764);
  uVar2 = fn_0022f750(local_48[param_2 * 2 + 1]);
  fn_00190d50(uVar4,uVar2);
  return;
}



void fn_00305898(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  return;
}



void fn_00304270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  uVar1 = fn_00304076(&uStack_18);
  uVar1 = fn_00104b00(uVar1,param_3);
  fn_00304076(param_1,uVar1);
  return;
}



void fn_00303fd0(undefined1 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = 0xff;
  return;
}



void fn_00303f6c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00303ae8(param_1,param_2,0x20);
  *puVar1 = &DAT_0085acf8;
  return;
}



void fn_00303f40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00303ae8(param_1,param_2,0x20);
  *puVar1 = &DAT_0085acc8;
  return;
}



void fn_00303ebc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00303ae8(param_1,param_2,0x20);
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = &DAT_0085ac84;
  return;
}



void fn_00303810(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}



void fn_003034e4(int *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_18;
  
  local_18 = param_4;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    if (*param_3 == 0) {
      DAT_008c75fc = DAT_008c75fc + 1;
      *param_3 = DAT_008c75fc;
    }
    (**(code **)(*param_2 + 8))(param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar4 = *param_3;
  if (*(uint *)(*param_1 + 0xc) <= uVar4) {
    local_18 = 0;
    fn_00303478(*param_1 + 8,uVar4 + 1,&local_18);
  }
  piVar1 = (int *)fn_00303588(*param_1 + 8,uVar4);
  piVar1 = (int *)*piVar1;
  if ((piVar1 != (int *)0x0) && (iVar3 = piVar1[3], piVar1[3] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*piVar1 + 4))();
  }
  param_2[3] = param_2[3] + 1;
  puVar2 = (undefined4 *)fn_00303588(*param_1 + 8,uVar4);
  *puVar2 = param_2;
  return;
}



void fn_00302894(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((int)(param_2 << 0x1e) < 0) {
    iVar1 = fn_001054b0(&DAT_008864f8,param_3,param_3,param_4,param_4);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = fn_00300190();
    *(int *)(iVar2 + 4) = iVar1 + 1;
  }
  if ((param_2 & 1) != 0) {
    puVar3 = (undefined4 *)fn_00300190(&DAT_008864f8,param_3);
    *puVar3 = &DAT_008864f8;
  }
  if ((int)(param_2 << 0x1d) < 0) {
    iVar1 = fn_00300190(&DAT_008864f8,param_3);
    *(undefined **)(iVar1 + 8) = &DAT_008864f8;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    iVar1 = fn_00177494(&DAT_008864f8,param_3);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = fn_00300190();
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  if ((int)(param_2 << 0x1b) < 0) {
    iVar1 = fn_00300190(&DAT_008864f8,param_3);
    *(undefined **)(iVar1 + 0x10) = &DAT_008864f8;
  }
  fn_0030278c(param_1,param_2);
  return;
}


