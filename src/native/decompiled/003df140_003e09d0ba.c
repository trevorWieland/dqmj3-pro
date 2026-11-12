#include "003df140_003e09d0ba.h"



void fn_003df77c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x2a);
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x2c);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_0018a618(&local_24,5,4,&DAT_003df6b4,(int)*(short *)(param_1 + 0xd0));
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(&local_24,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 300),&local_24);
  fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x16) & 3);
  if ((int)(fVar4 / fVar5) < 0x3e4cccce) {
    uVar2 = DAT_00895618;
  }
  else {
    uVar2 = DAT_0089560c;
  }
  iVar3 = *(int *)(param_1 + 300);
  *(undefined4 *)(iVar3 + 0xac) = uVar2;
  *(undefined4 *)(iVar3 + 0xb0) = uVar2;
  return;
}



void fn_003df748(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x19c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e0780(iVar1,param_1);
  return;
}


