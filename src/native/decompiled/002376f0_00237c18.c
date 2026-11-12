#include "002376f0_00237c18.h"



int fn_00237c18(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  iVar1 = fn_00163868(10);
  fVar2 = (float)VectorSignedToFloat(param_1 * (iVar1 + 0x5a),(byte)(in_fpscr >> 0x16) & 3);
  fVar2 = fVar2 * 0.01;
  fn_006f9f20();
  iVar1 = (int)(short)(int)fVar2;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}



void fn_0023798c(int param_1,int *param_2,undefined2 param_3,char param_4,undefined4 param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined2 *local_24;
  undefined2 *local_20;
  int local_1c;
  
  fn_00301f50(param_1,0xf0);
  *(undefined2 *)(param_1 + 0x1c) = param_3;
  uVar2 = fn_00661570();
  *(char *)(param_1 + 0x2e) = param_4;
  uVar3 = fn_002cd49c((int)(char)(param_4 + -1),uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  local_24 = (undefined2 *)0x0;
  local_20 = (undefined2 *)0x0;
  local_1c = 0;
  fn_002377a0(&local_24,(int)*(short *)(param_1 + 0x1c),param_5,*(undefined1 *)(param_1 + 0x2e),0);
  uVar1 = (int)local_20 - (int)local_24 >> 1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 & 1;
    if (uVar4 != 0) {
      *(undefined2 *)(param_1 + 0x44) = *local_24;
    }
  }
  for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 2) {
    iVar6 = param_1 + uVar4 * 2;
    *(undefined2 *)(iVar6 + 0x44) = local_24[uVar4];
    *(undefined2 *)(iVar6 + 0x46) = local_24[uVar4 + 1];
  }
  uVar1 = param_2[1] - *param_2 >> 1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 & 1;
    if (uVar4 != 0) {
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)*param_2;
    }
  }
  for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 2) {
    iVar6 = param_1 + uVar4 * 4;
    *(undefined2 *)(iVar6 + 0x56) = *(undefined2 *)(*param_2 + uVar4 * 2);
    *(undefined2 *)(iVar6 + 0x5a) = *(undefined2 *)(*param_2 + (uVar4 + 1) * 2);
  }
  uVar3 = fn_005fe128(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x1e) = (short)(int)fVar7;
  uVar3 = fn_0020ddfc(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  *(short *)(param_1 + 0x20) = (short)(int)fVar7;
  *(short *)(param_1 + 0x24) = (short)(int)fVar7;
  uVar3 = fn_0020fd10(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x26) = (short)(int)fVar7;
  uVar3 = fn_00210174(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x28) = (short)(int)fVar7;
  uVar3 = fn_0020e628(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x2a) = (short)(int)fVar7;
  uVar3 = fn_0020e3a4(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x2c) = (short)(int)fVar7;
  puVar5 = local_24;
  if (local_20 < local_24) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_20);
  }
  fn_001008c4(local_24,local_1c - (int)local_24 >> 1,0);
  return;
}



int fn_002377a0(uint *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  uVar3 = param_1[1];
  uVar5 = *param_1;
  if (uVar5 != uVar3) {
    uVar1 = uVar5;
    if (uVar3 <= uVar5) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 - (uVar3 - uVar5 & 0xfffffffe);
  }
  local_28[0] = fn_00660a50((int)(char)param_3);
  puVar4 = (undefined2 *)param_1[1];
  if (puVar4 == (undefined2 *)param_1[2]) {
    fn_0079e460(param_1,puVar4,local_28);
  }
  else {
    param_1[1] = (uint)(puVar4 + 1);
    if (puVar4 != (undefined2 *)0x0) {
      *puVar4 = local_28[0];
    }
  }
  iVar7 = *(int *)(&DAT_007c3380 + param_3 * 4);
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar2 = fn_006616f4(param_2,iVar6);
      local_24[0] = (undefined2)iVar2;
      if (iVar2 - 1U < 0x21f) {
        puVar4 = (undefined2 *)param_1[1];
        if (puVar4 == (undefined2 *)param_1[2]) {
          fn_0079e460(param_1,puVar4,local_24);
        }
        else {
          param_1[1] = (uint)(puVar4 + 1);
          if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = local_24[0];
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  uVar3 = 0;
  if (param_5 == 0) {
    if (param_4 < 0x32) {
      if (0x1d < param_4) {
        uVar3 = 5;
      }
    }
    else {
      uVar3 = 10;
    }
  }
  else if (param_4 < 0x32) {
    if (0x1d < param_4) {
      uVar3 = 0x32;
    }
  }
  else {
    uVar3 = 100;
  }
  iVar6 = 0;
  if (uVar3 < 100) {
    if (uVar3 < 0x32) {
      if (0x18 < uVar3) {
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 2;
    }
  }
  else {
    iVar6 = 3;
  }
  iVar7 = 0;
  if (iVar6 != 0) {
    do {
      iVar2 = fn_006616f4(param_2,iVar7 + 5);
      local_24[0] = (undefined2)iVar2;
      if (iVar2 - 1U < 0x21f) {
        puVar4 = (undefined2 *)param_1[1];
        if (puVar4 == (undefined2 *)param_1[2]) {
          fn_0079e460(param_1,puVar4,local_24);
        }
        else {
          param_1[1] = (uint)(puVar4 + 1);
          if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = local_24[0];
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  return (int)(param_1[1] - *param_1) >> 1;
}



undefined4 fn_00237730(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x110) != '\0') && (iVar1 = fn_006add5c(param_2), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x111) = 1;
  }
  uVar2 = fn_002f9da0(param_1);
  if ((*(char *)(param_1 + 0x110) != '\0') && (iVar1 = fn_00205b58(param_2), iVar1 == 0xff)) {
    fn_00205888(param_2,0x3c);
  }
  return uVar2;
}



undefined4 fn_002376f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    if (param_1 < 0x32) {
      if (0x1d < param_1) {
        uVar1 = 5;
      }
      return uVar1;
    }
    uVar1 = 10;
  }
  else if (param_1 < 0x32) {
    if (0x1d < param_1) {
      uVar1 = 0x32;
    }
  }
  else {
    uVar1 = 100;
  }
  return uVar1;
}


