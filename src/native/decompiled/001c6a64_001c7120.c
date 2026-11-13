#include "001c6a64_001c7120.h"



undefined4 fn_001c7120(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 4) == '\0') &&
     (iVar1 = param_1 + param_2 * 0x10, *(int *)(iVar1 + 0x5c) != param_3)) {
    *(int *)(iVar1 + 0x60) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return 1;
  }
  return 0;
}



void fn_001c709c(int *param_1,float *param_2,undefined4 param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float in_s1;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[0x11] = (int)*param_2;
  param_1[0x12] = (int)fVar2;
  param_1[0x13] = (int)fVar3;
  bVar1 = *param_2 == 0.0;
  if (bVar1) {
    in_s1 = param_2[1];
  }
  bVar4 = false;
  if (bVar1 && (bVar1 && in_s1 == 0.0)) {
    bVar4 = param_2[2] == 0.0;
  }
  if (!bVar4) {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,0,0);
  }
  return;
}



undefined4 fn_001c7084(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 0x10 + 0x68);
  }
  return uVar1;
}



undefined4 * fn_001c6fa8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081ba94;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = &DAT_00858fe0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_003b675c();
  }
  param_1[0xb] = uVar2;
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_002899cc();
  }
  param_1[0xc] = uVar2;
  param_1[0xd] = 0;
  return param_1;
}



char fn_001c6e88(int param_1)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar4;
  *(uint *)(param_1 + 0x10) = uVar2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if ((iVar5 == *(int *)(param_1 + 0x1c)) &&
     (((iVar5 == 0 && (((*(byte *)(param_1 + 0x18) | uVar2) & 1) == 0)) || (uVar4 == uVar2)))) {
    iVar5 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar5;
  if ((*(int *)(param_1 + 0xc) != 0) ||
     ((*(uint *)(param_1 + 0x10) & 1) != 0 && *(uint *)(param_1 + 0x10) != 0)) {
    pcVar3 = *(code **)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x10) >> 1)));
    }
    (*pcVar3)();
  }
  fn_003b6608(*(undefined4 *)(param_1 + 0x2c));
  fn_003b6738(*(undefined4 *)(param_1 + 0x2c));
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 != '\x02') {
    cVar1 = '\0';
  }
  return cVar1;
}



void fn_001c6e0c(int param_1)

{
  int iVar1;
  
  if ((*(int **)(DAT_008977e0 + 0x28) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar1 == 0)) {
    *(code **)(param_1 + 0x1c) = fn_001c6d80;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_001c6d80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = fn_006f7a84(DAT_008977e0);
    fn_00698fb8(DAT_008977e0,1);
    uVar2 = fn_006f7a84(DAT_008977e0);
    fn_001e6a50(uVar2,0);
    fn_00289788(*(undefined4 *)(param_1 + 0x30),uVar1,*(undefined4 *)(param_1 + 0x34));
  }
  fn_002898fc(*(undefined4 *)(param_1 + 0x30));
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x34) != '\0') {
    *(undefined1 **)(param_1 + 0x1c) = &LAB_001c6f6c;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_001c6d58(int param_1)

{
  fn_00696764(DAT_008977e0,*(undefined4 *)(param_1 + 0x34));
  fn_00698fb8(DAT_008977e0,1);
  return;
}



void fn_001c6c54(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar3 * 0x14) == 0) goto LAB_001c6c9c;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  iVar3 = -1;
LAB_001c6c9c:
  uVar1 = fn_00278c50(param_2,iVar3,param_3,0,param_4,1,0);
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar3 * 0x14) == 0) goto LAB_001c6cf0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xf);
  iVar3 = -1;
LAB_001c6cf0:
  uVar2 = fn_00278c50(param_2,iVar3,param_3,1,param_4,0,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0xffffffff;
  return;
}



void fn_001c6c38(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



int * fn_001c6ba4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *param_2;
  if (*(int *)(iVar2 + -0xc) == -1) {
    uVar4 = *(undefined4 *)(iVar2 + -4);
    iVar2 = fn_002ff0c8(param_1,uVar4,uVar4);
    *param_1 = iVar2 + 0xc;
    fn_00301a9c(iVar2 + 0xc,*param_2,uVar4);
  }
  else {
    piVar1 = (int *)(iVar2 + -0xc);
    *param_1 = iVar2;
    if (piVar1 != &DAT_008f9cf8) {
      *piVar1 = *piVar1 + 1;
    }
  }
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[1] = param_2[1];
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  iVar2 = param_2[5];
  iVar3 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  iVar2 = param_2[8];
  iVar3 = param_2[9];
  param_1[7] = param_2[7];
  param_1[8] = iVar2;
  param_1[9] = iVar3;
  return param_1;
}



void fn_001c6b78(undefined4 *param_1)

{
  *param_1 = &DAT_0081ba58;
  fn_002feef8(param_1[4]);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_001c6a64(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_0081ba58;
  *(undefined1 *)(puVar1 + 1) = 0xff;
  puVar2 = (undefined1 *)fn_00145b00(0x60,&DAT_00812c8c);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    puVar2[0x18] = 0;
    *(undefined4 *)(puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    puVar2[0x34] = 0;
    puVar2[0x35] = 0;
    puVar2[0x36] = 0;
    puVar2[0x37] = 0;
    puVar2[0x38] = 0;
    puVar2[0x39] = 0;
    puVar2[0x3a] = 0;
    puVar2[0x3b] = 0;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = 0;
    puVar2[0x3e] = 0;
    puVar2[0x3f] = 0;
    puVar2[0x40] = 0;
    puVar2[0x41] = 0;
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    *(undefined4 *)(puVar2 + 0x48) = 0;
    puVar2[0x4c] = 0;
    puVar2[0x4d] = 0;
    puVar2[0x4e] = 0;
    puVar2[0x4f] = 0;
    puVar2[0x50] = 0;
    *(undefined4 *)(puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 0x58) = 0;
    puVar2[0x5c] = 0;
    puVar2[0xd] = 0;
  }
  puVar1[4] = puVar2;
  return puVar1;
}


