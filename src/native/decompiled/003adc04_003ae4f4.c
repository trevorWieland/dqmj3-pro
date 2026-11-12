#include "003adc04_003ae4f4.h"



void fn_003ae4f4(int *param_1)

{
  undefined1 local_10 [16];
  
  (**(code **)(*param_1 + 0x18))(param_1,local_10);
  return;
}



void fn_003ae4a4(int param_1)

{
  fn_001db900();
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1a8),&DAT_008c8e78,param_1 + 0x38,param_1 + 0x2c,
               param_1 + 0x20);
  return;
}



undefined4 fn_003ae40c(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x44] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x134))(param_1);
    if (iVar1 == 0) {
      param_1[0x69] = 0;
    }
    else {
      iVar1 = param_1[0x69];
      param_1[0x69] = iVar1 + 1;
      if (param_1[0x68] < iVar1 + 1) {
        param_1[0x69] = 0;
        (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
  }
  return 0;
}



void fn_003ae280(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x3c))();
  if ((iVar3 == 0) || (1 < *(byte *)(DAT_008977e0 + 0x170))) {
    fn_001db0c0(param_1);
    cVar1 = (char)param_1[0x67];
    if (cVar1 == '\x01') {
      iVar3 = param_1[0x69];
      param_1[0x69] = iVar3 + 1;
      if (0x5a < iVar3 + 1) {
        param_1[0x69] = 0;
        (**(code **)(*param_1 + 0x44))(param_1,2,4,0);
        fn_001dbc64(param_1,0);
        uVar4 = fn_006f7a84(DAT_008977e0);
        iVar3 = (**(code **)(*param_1 + 0x134))(param_1,uVar4);
        if (iVar3 != 0) {
          iVar3 = fn_006f7a84(DAT_008977e0);
          *(uint *)(iVar3 + 0x130) = *(uint *)(iVar3 + 0x130) & 0xfffffffb;
        }
        *(undefined1 *)(param_1 + 0x67) = 2;
        return;
      }
    }
    else {
      if (cVar1 == '\x02') {
        iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
        if ((iVar3 != 0) || (iVar3 = (**(code **)(*param_1 + 0x4c))(param_1), iVar3 != 0)) {
          (**(code **)(*param_1 + 0x58))(param_1,0);
          iVar3 = fn_006f7a84(DAT_008977e0);
          fVar7 = *(float *)(iVar3 + 0x20) - (float)param_1[8];
          fVar6 = *(float *)(iVar3 + 0x24) - (float)param_1[9];
          fVar5 = *(float *)(iVar3 + 0x28) - (float)param_1[10];
          if (DAT_008918ac < fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
            (**(code **)(*param_1 + 0x58))(param_1,1);
            fn_001dbc64(param_1,1);
            (**(code **)(*param_1 + 0x44))(param_1,0,4);
            param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
            (**(code **)(*param_1 + 0xd8))(param_1);
            *(undefined1 *)(param_1 + 0x67) = 3;
          }
        }
        return;
      }
      if ((cVar1 == '\x03') && (param_1[0x3e] < 0x3f800000)) {
        fVar6 = (float)param_1[0x3e] + 0.03;
        fVar5 = 1.0;
        if (fVar6 <= 1.0) {
          fVar5 = fVar6;
        }
        (**(code **)(*param_1 + 0xd8))(param_1);
        if (0x3f7fffff < (int)fVar5) {
          param_1[0x4e] = param_1[0x4e] & 0xfffffff5U | (int)(char)param_1[0x6b] << 3;
          *(undefined1 *)(param_1 + 0x67) = 0;
        }
      }
    }
  }
  return;
}



void fn_003ae244(int param_1)

{
  fn_001db0b0();
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1a8),&DAT_008c8e78,param_1 + 0x38,param_1 + 0x2c,
               param_1 + 0x20);
  return;
}



void fn_003ae208(int param_1)

{
  fn_001daaf8();
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1a8),&DAT_008c8e78,param_1 + 0x38,param_1 + 0x2c,
               param_1 + 0x20);
  return;
}



undefined4 fn_003ae1c0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = fn_002113c8();
  uVar2 = fn_00211f24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  *(char *)(param_1 + 0x1ac) = (char)(uVar2 ^ 1);
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xfffffff7 | (uVar2 ^ 1) << 3;
  return uVar1;
}



undefined4 *
fn_003adf34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = &DAT_0082e254;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0x54;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0,param_3,param_4,param_4);
  iVar2 = fn_00100fc6(0x800,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[1];
  piVar1[1] = 0x20;
  param_1[1] = piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[3] = puVar3;
  param_1[4] = puVar3 + 0x800;
  param_1[3] = puVar3 + 0x40;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[5] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  *(undefined4 *)(param_1[5] + 0xc) = param_1[5];
  param_1[8] = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  return param_1;
}



undefined4 fn_003adeac(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
  uVar2 = 0;
  iVar1 = fn_006c72f0(param_1);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x20) == -1) && (iVar1 = fn_006c71b8(param_1,param_3), iVar1 != -1)) {
      *(int *)(param_1 + 0x20) = iVar1;
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0x25) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = 1;
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return uVar2;
}



void fn_003adc04(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  float *pfVar8;
  uint uVar9;
  int *local_98 [2];
  int local_90;
  undefined1 auStack_8c [4];
  char *local_88;
  char *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  char *local_48;
  undefined1 local_44;
  char *local_38 [2];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_98[0] = *(int **)(param_1 + 0x14);
  local_90 = local_98[0][2];
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  fn_00773148(auStack_8c,param_1 + 4,&local_90,local_98);
  if (*(char *)(param_2 + 0x28) != '\0') {
    uVar9 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_2 + 0x44) + uVar9 * 0x2c);
      bVar1 = true;
      local_80 = *piVar2;
      local_78 = piVar2[1];
      local_74 = piVar2[2];
      iStack_70 = piVar2[3];
      iStack_6c = piVar2[4];
      iStack_68 = piVar2[5];
      iStack_64 = piVar2[6];
      iStack_60 = piVar2[7];
      iStack_5c = piVar2[8];
      iStack_58 = piVar2[9];
      iStack_54 = piVar2[10];
      pcVar7 = *(char **)(param_1 + 0x14);
      pcVar3 = pcVar7;
      pcVar4 = *(char **)(pcVar7 + 4);
      while (pcVar4 != (char *)0x0) {
        bVar1 = local_80 < *(int *)(pcVar4 + 0x10);
        pcVar3 = pcVar4;
        if (bVar1) {
          pcVar4 = *(char **)(pcVar4 + 8);
        }
        else {
          pcVar4 = *(char **)(pcVar4 + 0xc);
        }
      }
      local_7c = local_80;
      if (*(char *)(param_1 + 0x1c) == '\0') {
        if (bVar1) {
          if (pcVar3 == *(char **)(pcVar7 + 8)) {
            local_98[0] = &local_80;
            fn_007738b0(&local_84);
            local_48 = local_84;
            local_44 = 1;
            goto LAB_003addd8;
          }
          if ((*pcVar3 == '\0') && (*(char **)(*(int *)(pcVar3 + 4) + 4) == pcVar3)) {
            pcVar3 = *(char **)(pcVar3 + 0xc);
          }
          else {
            pcVar4 = *(char **)(pcVar3 + 8);
            if (*(char **)(pcVar3 + 8) == (char *)0x0) {
              pcVar4 = pcVar3;
              pcVar3 = *(char **)(pcVar3 + 4);
              while (pcVar4 == *(char **)(pcVar3 + 8)) {
                pcVar4 = pcVar3;
                pcVar3 = *(char **)(pcVar3 + 4);
              }
            }
            else {
              do {
                pcVar3 = pcVar4;
                pcVar4 = *(char **)(pcVar3 + 0xc);
              } while (*(char **)(pcVar3 + 0xc) != (char *)0x0);
            }
          }
        }
        if (*(int *)(pcVar3 + 0x10) < local_80) {
          local_98[0] = &local_80;
          fn_007738b0(local_38);
          local_48 = local_38[0];
          local_44 = 1;
        }
        else {
          local_44 = 0;
          local_48 = pcVar3;
        }
      }
      else {
        local_98[0] = &local_80;
        fn_007738b0(&local_88);
        local_48 = local_88;
        local_44 = 1;
      }
LAB_003addd8:
      uVar9 = uVar9 + 1;
    } while (uVar9 < 8);
  }
  *(undefined4 *)(param_1 + 0x20) = local_28;
  iVar6 = DAT_008977e0;
  pfVar8 = (float *)(DAT_008977e0 + 0xb0);
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = 0.0;
    DAT_008f9e30 = 0.0;
    DAT_008f9e34 = 0.0;
  }
  if (((*pfVar8 == DAT_008f9e2c) && (*(float *)(iVar6 + 0xb4) == DAT_008f9e30)) &&
     (*(float *)(iVar6 + 0xb8) == DAT_008f9e34)) {
    iVar6 = *(int *)(param_1 + 0x20);
  }
  else {
    iVar6 = fn_006c70f4(param_1);
    *(int *)(param_1 + 0x20) = iVar6;
  }
  if (iVar6 != -1) {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}


