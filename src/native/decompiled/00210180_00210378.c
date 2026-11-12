#include "00210180_00210378.h"



void fn_00210378(void)

{
  fn_0074602c();
  return;
}



undefined4 fn_002101cc(undefined1 *param_1,short *param_2,short *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28 [2];
  
  iVar4 = 0;
  while( true ) {
    pcVar5 = (char *)(*(int *)(param_2 + 2) + iVar4 * 6);
    pcVar6 = (char *)(*(int *)(param_3 + 2) + iVar4 * 6);
    if (*pcVar5 != '\0') {
      iVar2 = fn_002429d0((int)*param_2);
      local_38[0] = *(undefined1 *)(iVar2 + iVar4);
      local_2c = (int)pcVar5[1];
      fn_006a82f4(local_34,local_38,&local_2c);
      puVar3 = (undefined1 *)fn_002429d0(0x18b);
      local_30[0] = *puVar3;
      fn_006a82e0(local_28,local_34,local_30);
      *param_1 = 1;
      uVar1 = fn_001c801c(local_28[0]);
      param_1[1] = uVar1;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(pcVar5 + 2);
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(pcVar5 + 4);
      return 1;
    }
    if (*pcVar6 != '\0') break;
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      return 0;
    }
  }
  iVar2 = fn_002429d0((int)*param_3);
  local_34[0] = *(undefined1 *)(iVar2 + iVar4);
  local_2c = (int)pcVar6[1];
  fn_006a82f4(local_30,local_34,&local_2c);
  puVar3 = (undefined1 *)fn_002429d0(0x18b);
  local_38[0] = *puVar3;
  fn_006a82e0(local_28,local_30,local_38);
  *param_1 = 1;
  uVar1 = fn_001c801c(local_28[0]);
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(pcVar6 + 2);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(pcVar6 + 4);
  return 1;
}



int fn_002101c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  afStack_50[0] = 0.0;
  afStack_50[1] = 0.7;
  afStack_50[2] = 0.7;
  afStack_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  uStack_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = afStack_50[iVar1];
  uVar2 = fn_006bf1d4(auStack_24);
  switch(uVar2) {
  case 0:
    fVar4 = 0.5;
    break;
  case 1:
    fVar4 = 0.55;
    break;
  case 2:
    fVar4 = 0.6;
    break;
  case 3:
    fVar4 = 0.65;
    break;
  case 4:
    fVar4 = 0.7;
    break;
  case 5:
    fVar4 = 0.75;
    break;
  case 6:
    fVar4 = 0.8;
    break;
  case 7:
    fVar4 = 0.85;
    break;
  case 8:
    fVar4 = 0.9;
    break;
  case 9:
    fVar4 = 0.95;
    break;
  default:
    fVar4 = 1.0;
  }
  uVar2 = fn_005fe134(param_1,3,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}



int fn_002101b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  afStack_50[0] = 0.0;
  afStack_50[1] = 0.7;
  afStack_50[2] = 0.7;
  afStack_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  uStack_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = afStack_50[iVar1];
  uVar2 = fn_006bf1d4(auStack_24);
  switch(uVar2) {
  case 0:
    fVar4 = 0.5;
    break;
  case 1:
    fVar4 = 0.55;
    break;
  case 2:
    fVar4 = 0.6;
    break;
  case 3:
    fVar4 = 0.65;
    break;
  case 4:
    fVar4 = 0.7;
    break;
  case 5:
    fVar4 = 0.75;
    break;
  case 6:
    fVar4 = 0.8;
    break;
  case 7:
    fVar4 = 0.85;
    break;
  case 8:
    fVar4 = 0.9;
    break;
  case 9:
    fVar4 = 0.95;
    break;
  default:
    fVar4 = 1.0;
  }
  uVar2 = fn_005fe134(param_1,2,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}



void fn_00210198(void)

{
  fn_0074602c();
  return;
}



int fn_0021018c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  afStack_50[0] = 0.0;
  afStack_50[1] = 0.7;
  afStack_50[2] = 0.7;
  afStack_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  uStack_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = afStack_50[iVar1];
  uVar2 = fn_006bf1d4(auStack_24);
  switch(uVar2) {
  case 0:
    fVar4 = 0.5;
    break;
  case 1:
    fVar4 = 0.55;
    break;
  case 2:
    fVar4 = 0.6;
    break;
  case 3:
    fVar4 = 0.65;
    break;
  case 4:
    fVar4 = 0.7;
    break;
  case 5:
    fVar4 = 0.75;
    break;
  case 6:
    fVar4 = 0.8;
    break;
  case 7:
    fVar4 = 0.85;
    break;
  case 8:
    fVar4 = 0.9;
    break;
  case 9:
    fVar4 = 0.95;
    break;
  default:
    fVar4 = 1.0;
  }
  uVar2 = fn_005fe134(param_1,4,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}



int fn_00210180(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  afStack_50[0] = 0.0;
  afStack_50[1] = 0.7;
  afStack_50[2] = 0.7;
  afStack_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  uStack_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = afStack_50[iVar1];
  uVar2 = fn_006bf1d4(auStack_24);
  switch(uVar2) {
  case 0:
    fVar4 = 0.5;
    break;
  case 1:
    fVar4 = 0.55;
    break;
  case 2:
    fVar4 = 0.6;
    break;
  case 3:
    fVar4 = 0.65;
    break;
  case 4:
    fVar4 = 0.7;
    break;
  case 5:
    fVar4 = 0.75;
    break;
  case 6:
    fVar4 = 0.8;
    break;
  case 7:
    fVar4 = 0.85;
    break;
  case 8:
    fVar4 = 0.9;
    break;
  case 9:
    fVar4 = 0.95;
    break;
  default:
    fVar4 = 1.0;
  }
  uVar2 = fn_005fe134(param_1,5,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}


