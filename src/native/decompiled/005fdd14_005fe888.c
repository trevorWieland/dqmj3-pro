#include "005fdd14_005fe888.h"



bool fn_005fe888(int param_1,int param_2)

{
  return *(float *)(param_1 + 0x188) < *(float *)(param_2 + 0x188);
}



void fn_005fe840(int *param_1)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_10 = *(undefined2 *)(*param_1 + 0x90);
  local_e = *(undefined2 *)(*param_1 + 0xb0);
  local_c = *(undefined2 *)(param_1[1] + 0x90);
  local_a = *(undefined2 *)(param_1[1] + 0xb0);
  fn_0020e260(&local_10);
  return;
}



int fn_005fe6d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  fn_0020bbc4(auStack_28,param_1);
  local_50[0] = 0.0;
  local_50[1] = 0.7;
  local_50[2] = 0.7;
  local_50[3] = 0.7;
  uStack_40 = 0x3f4ccccd;
  uStack_3c = 0x3f4ccccd;
  uStack_38 = 0x3f4ccccd;
  uStack_34 = 0x3f666666;
  local_30 = 0x3f800000;
  iVar1 = fn_006bfdec(auStack_24);
  fVar5 = local_50[iVar1];
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
  uVar2 = fn_005fe134(param_1,0,param_2);
  fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = fVar3 * fVar5 * fVar4;
  fn_006f9f20();
  return (int)(short)(int)fVar4;
}



bool fn_005fe110(int param_1,int param_2)

{
  return *(short *)(param_2 + 4) < *(short *)(param_1 + 4);
}



undefined4 fn_005fdff8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short local_30 [2];
  char local_2c [8];
  
  local_30[0] = *(short *)(*param_1 + 0x1c);
  local_30[1] = *(undefined2 *)(param_1[1] + 0x1c);
  iVar1 = fn_00378ba8();
  iVar7 = 0;
  if (iVar1 < 1) {
    return 0;
  }
LAB_005fe034:
  iVar6 = 0;
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  do {
    if ((local_2c[iVar6] == '\0') && (iVar2 = fn_00378bbc(iVar7), iVar2 == local_30[iVar6])) {
      local_2c[iVar6] = '\x01';
      iVar2 = 1;
      iVar6 = 0;
      goto LAB_005fe08c;
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 2);
  goto LAB_005fe0e4;
LAB_005fe08c:
  do {
    if (local_2c[iVar6] == '\0') {
      iVar3 = fn_00378afc(iVar7);
      iVar4 = fn_00661094((int)local_30[iVar6]);
      if (iVar3 == iVar4) {
        iVar2 = 2;
        local_2c[iVar6] = '\x01';
        break;
      }
    }
    iVar6 = (int)(short)((short)iVar6 + 1);
  } while (iVar6 < 2);
  if (iVar2 == 2) {
    uVar5 = fn_00378bf0(iVar7);
    return uVar5;
  }
LAB_005fe0e4:
  iVar7 = (int)(short)((short)iVar7 + 1);
  if (iVar1 <= iVar7) {
    return 0;
  }
  goto LAB_005fe034;
}



int fn_005fdd14(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int unaff_r5;
  int iVar5;
  short local_4c [4];
  short local_44 [4];
  short local_3c [2];
  short local_38 [10];
  
  if (param_2 <= param_1) {
    unaff_r5 = param_1;
  }
  iVar5 = param_1;
  if (param_2 < param_1) {
    iVar5 = param_2;
  }
  if (param_1 < param_2) {
    unaff_r5 = param_2;
  }
  iVar2 = fn_0033a39c();
  local_3c[0] = (short)iVar2;
  sVar1 = (short)iVar2 / 10;
  iVar4 = 0;
  if (param_3 == 0) {
    iVar5 = iVar5 % 10 + unaff_r5 % 10;
    local_4c[0] = ((short)unaff_r5 / 10 + 1) * 10;
    local_38[0] = sVar1 * 10;
    psVar3 = local_38;
    if (local_4c[0] <= local_38[0]) {
      psVar3 = local_4c;
    }
    sVar1 = *psVar3 + (short)iVar5 +
                      (((short)(iVar5 / 10) + (short)(iVar5 >> 0x1f)) -
                      (short)((longlong)iVar5 * 0x66666667 >> 0x3f)) * -10;
  }
  else {
    if (param_3 != 1) {
      if (param_3 == 2) {
        local_44[0] = (short)((unaff_r5 + iVar5) / 2);
        if (iVar2 < local_44[0]) {
          psVar3 = local_3c;
        }
        else {
          psVar3 = local_44;
        }
        iVar4 = (int)*psVar3;
      }
      goto LAB_005fde24;
    }
    iVar4 = iVar5 % 10 + unaff_r5 % 10 + 5;
    local_4c[0] = ((short)iVar5 / 10 + 1) * 10;
    local_38[0] = sVar1 * 10;
    psVar3 = local_38;
    if (local_4c[0] <= local_38[0]) {
      psVar3 = local_4c;
    }
    sVar1 = (short)iVar4 +
            (((short)(iVar4 / 10) + (short)(iVar4 >> 0x1f)) -
            (short)((longlong)iVar4 * 0x66666667 >> 0x3f)) * -10 + *psVar3;
  }
  iVar4 = (int)sVar1;
LAB_005fde24:
  iVar5 = 0;
  iVar2 = fn_0033a3c4(iVar4);
  while( true ) {
    if (iVar2 != 0) {
      iVar5 = fn_0033a3ac(iVar4);
    }
    if ((iVar4 < 1) ||
       (iVar2 = fn_0033a374(iVar4), (iVar2 != 0 && iVar5 != param_4) && iVar5 != param_5)) break;
    iVar4 = (int)(short)((short)iVar4 + -1);
    iVar2 = fn_0033a3c4(iVar4);
  }
  iVar4 = fn_0033a3c4(iVar4);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  return iVar5;
}


