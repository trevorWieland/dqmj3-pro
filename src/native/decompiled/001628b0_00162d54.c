#include "001628b0_00162d54.h"



void fn_00162d54(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  piVar1 = *(int **)(iVar7 + 0x18);
  piVar4 = *(int **)(iVar7 + 0x1c);
  while( true ) {
    if (piVar1 != piVar4) {
      param_3 = *piVar1;
    }
    if (piVar1 == piVar4 || param_3 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  if (piVar1 != piVar4) {
    piVar2 = piVar1 + 1;
    if (piVar2 < piVar4) {
      iVar5 = (int)piVar4 - (int)piVar2;
      if (0 < iVar5) {
        piVar4 = piVar1;
        if (iVar5 * 0x20000000 < 0) {
          iVar6 = *piVar2;
          piVar2 = piVar1 + 2;
          if (iVar6 != param_2) {
            piVar4 = piVar1 + 1;
            *piVar1 = iVar6;
          }
        }
        piVar1 = piVar4;
        for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          piVar4 = piVar1;
          if (*piVar2 != param_2) {
            piVar4 = piVar1 + 1;
            *piVar1 = *piVar2;
          }
          piVar3 = piVar2 + 1;
          piVar2 = piVar2 + 2;
          piVar1 = piVar4;
          if (*piVar3 != param_2) {
            piVar1 = piVar4 + 1;
            *piVar4 = *piVar3;
          }
        }
      }
    }
    else {
      while (piVar2 != piVar4) {
        iVar5 = *piVar2;
        piVar2 = piVar2 + 1;
        if (iVar5 != param_2) {
          *piVar1 = iVar5;
          piVar1 = piVar1 + 1;
        }
      }
    }
  }
  piVar4 = *(int **)(iVar7 + 0x1c);
  *(int **)(iVar7 + 0x1c) = piVar1;
  if (piVar4 != piVar1) {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}



void fn_00162d08(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_00162ad0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  fn_00170704(param_1 + 0x100c);
  piVar1 = *(int **)(param_1 + 0x1018);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)fn_00145b00(0x18,&DAT_00812c8c);
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(0xc,0);
      piVar2[2] = iVar3;
      *piVar2 = *piVar1;
      piVar2[1] = 1;
      *piVar1 = (int)piVar2;
      iVar3 = piVar2[2];
      piVar1[2] = iVar3;
      piVar1[3] = iVar3 + 0xc;
      piVar1[4] = iVar3;
      piVar1[2] = iVar3 + 0xc;
      *(int *)iVar3 = iVar3;
      *(int *)(piVar1[4] + 4) = piVar1[4];
    }
    *(int **)(param_1 + 0x1018) = piVar1;
  }
  iVar3 = piVar1[4];
  piVar2 = (int *)piVar1[1];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)piVar1[2];
    if (piVar2 == (int *)piVar1[3]) {
      if (*piVar1 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar4 = *(uint *)(*piVar1 + 4);
        uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar6 < uVar4 + 0x20) {
          uVar6 = uVar4 + 0x20;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar5 = fn_00100fc6(uVar6 * 0xc,0);
      piVar2[2] = iVar5;
      *piVar2 = *piVar1;
      piVar2[1] = uVar6;
      *piVar1 = (int)piVar2;
      piVar2 = (int *)piVar2[2];
      piVar1[2] = (int)piVar2;
      piVar1[3] = (int)(piVar2 + uVar6 * 3);
    }
    piVar1[2] = (int)(piVar2 + 3);
  }
  else {
    piVar1[1] = *piVar2;
  }
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = param_2;
  }
  *piVar2 = iVar3;
  piVar2[1] = *(int *)(iVar3 + 4);
  **(undefined4 **)(iVar3 + 4) = piVar2;
  *(int **)(iVar3 + 4) = piVar2;
  piVar1[5] = piVar1[5] + 1;
  fn_001707b4(param_1 + 0x100c);
  return;
}



void fn_001628b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  byte local_140;
  byte local_13f;
  byte local_13e [61];
  byte local_101;
  byte local_100;
  byte local_ff;
  byte local_fe [61];
  byte local_c1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pbVar6 = (byte *)&local_188;
  pbVar5 = (byte *)&local_188;
  local_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  fn_00158f40(&local_140,0x40,0x36);
  fn_00158f40(&local_100,0x40,0x5c);
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  fn_00301a9c(&local_188,param_4,param_5);
  local_188 = CONCAT31(((unsigned int)(local_188) >> 8) & 0xffffff,(byte)local_188 ^ local_140);
  iVar3 = 0x1f;
  pbVar2 = &local_140;
  do {
    pbVar4 = pbVar5 + 1;
    bVar1 = pbVar2[2];
    iVar3 = iVar3 + -1;
    pbVar5 = pbVar5 + 2;
    *pbVar4 = local_13f ^ *pbVar4;
    local_13f = pbVar2[3];
    *pbVar5 = bVar1 ^ *pbVar5;
    pbVar2 = pbVar2 + 2;
  } while (iVar3 != 0);
  local_14c = CONCAT13(((unsigned int)(local_14c) >> 24) & 0xff ^ local_101,(undefined3)local_14c);
  iVar3 = fn_001287d4(param_3 + 0x40,&DAT_00812c8c);
  fn_00301a9c(iVar3,&local_188,0x40);
  fn_00301a9c(iVar3 + 0x40,param_2,param_3);
  fn_0013ef80(&local_60,iVar3,param_3 + 0x40);
  fn_002feca8(iVar3);
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = 0;
  local_164 = 0;
  local_160 = 0;
  local_15c = 0;
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_14c = 0;
  fn_00301a9c(&local_188,param_4,param_5);
  iVar3 = 0x1f;
  local_188 = CONCAT31(((unsigned int)(local_188) >> 8) & 0xffffff,(byte)local_188 ^ local_100);
  pbVar2 = &local_100;
  do {
    pbVar5 = pbVar6 + 1;
    bVar1 = pbVar2[2];
    iVar3 = iVar3 + -1;
    pbVar6 = pbVar6 + 2;
    *pbVar5 = local_ff ^ *pbVar5;
    local_ff = pbVar2[3];
    *pbVar6 = bVar1 ^ *pbVar6;
    pbVar2 = pbVar2 + 2;
  } while (iVar3 != 0);
  local_14c = CONCAT13(((unsigned int)(local_14c) >> 24) & 0xff ^ local_c1,(undefined3)local_14c);
  local_c0 = local_188;
  uStack_bc = local_184;
  uStack_b8 = local_180;
  uStack_b4 = local_17c;
  uStack_b0 = local_178;
  uStack_ac = local_174;
  uStack_a8 = local_170;
  uStack_a4 = local_16c;
  local_a0 = local_168;
  uStack_9c = local_164;
  uStack_98 = local_160;
  uStack_94 = local_15c;
  uStack_90 = local_158;
  uStack_8c = local_154;
  uStack_88 = local_150;
  uStack_84 = local_14c;
  local_80 = local_60;
  uStack_7c = uStack_5c;
  uStack_78 = uStack_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  fn_0013ef80(local_34,&local_c0,0x60);
  return;
}


