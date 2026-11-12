#include "005ff0f0_00600298.h"



undefined4 fn_00600298(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*param_2 != 0) {
    iVar1 = fn_00660d04();
    iVar2 = fn_00660d04((int)*param_2);
    if (iVar2 <= iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_00600174(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(*(int *)(param_1 + 0x18) + 0x1c) == '\0') &&
     (iVar1 = fn_00163868((int)*(short *)(param_1 + 0x10) + (int)*(short *)(param_1 + 0x12)),
     *(short *)(param_1 + 0x10) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_005ffb80(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(char *)(param_1 + 4) = (char)param_2;
  }
  else {
    puVar1 = (undefined1 *)fn_00145b00(0xc,&DAT_00812c8c);
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = (undefined1 *)0x0;
    }
    else {
      *puVar1 = (char)param_2;
      *(undefined4 *)(puVar1 + 4) = param_3;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    if (*(undefined1 **)(param_1 + 0x14) != puVar1) {
      fn_002feef8();
      *(undefined1 **)(param_1 + 0x14) = puVar1;
    }
    iVar2 = fn_006f7a0c(DAT_008977e0);
    fn_003696ac(*(undefined4 *)(iVar2 + 0x30),param_2 != 0,param_3);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



void fn_005ff9d4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  float in_s0;
  
  *(char *)(param_1 + 1) = (char)param_2;
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  if (*(char *)(param_1[6] + 0x1c) != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,1,0);
    fn_005ff8c0(param_1[6],2);
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0);
  if (0.0 <= in_s0) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  pcVar2 = (char *)param_1[6];
  if (*pcVar2 != '\0') {
    if (*(int *)(pcVar2 + 4) != -1) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      pcVar2[4] = -1;
      pcVar2[5] = -1;
      pcVar2[6] = -1;
      pcVar2[7] = -1;
    }
    if (-1 < *(int *)(pcVar2 + (uint)(byte)pcVar2[1] * 4 + 8)) {
      uVar1 = fn_0023e194(*(undefined4 *)(DAT_008977e0 + 0x2c),
                           *(undefined4 *)(pcVar2 + (uint)(byte)pcVar2[1] * 4 + 8),0);
      *(undefined4 *)(pcVar2 + 4) = uVar1;
      fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
      return;
    }
  }
  return;
}



void fn_005ff978(int param_1)

{
  if ((*(char *)(param_1 + 5) != '\0') && (**(char **)(param_1 + 0x18) != '\0')) {
    if (*(int *)(*(char **)(param_1 + 0x18) + 4) != -1) {
      fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
    }
    **(undefined1 **)(param_1 + 0x18) = 0;
  }
  return;
}



void fn_005ff8c0(char *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 != '\0') {
    uVar2 = (uint)(byte)param_1[1];
  }
  if (*param_1 == '\0' || uVar2 == param_2) {
    return;
  }
  param_1[1] = (char)param_2;
  if (*(int *)(param_1 + 4) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
  }
  if (*(int *)(param_1 + (uint)(byte)param_1[1] * 4 + 8) < 0) {
    return;
  }
  uVar1 = fn_0023e194(*(undefined4 *)(DAT_008977e0 + 0x2c),
                       *(undefined4 *)(param_1 + (uint)(byte)param_1[1] * 4 + 8),0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar1);
  return;
}



void fn_005ff714(void)

{
  undefined4 uVar1;
  
  fn_00698fb8(DAT_008977e0,1);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  uVar1 = fn_006f7a84(DAT_008977e0);
  fn_001ea890(uVar1,0xc);
  uVar1 = fn_006f7a84(DAT_008977e0);
  fn_006a9878(uVar1,s_Effect1_008c6741);
  fn_006f7a84(DAT_008977e0);
  fn_006a7fac();
  fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x756b);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_005ff664(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fn_00698fb8(DAT_008977e0,1);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  fVar6 = 0.0;
  fVar7 = 40.0;
  iVar2 = fn_006f7a5c(DAT_008977e0);
  fn_006f7a5c(DAT_008977e0);
  pfVar3 = (float *)fn_006a9660();
  fVar4 = pfVar3[1];
  fVar5 = pfVar3[2];
  *(float *)(iVar2 + 0x34) = *pfVar3 + fVar6;
  *(float *)(iVar2 + 0x38) = fVar4 + fVar7;
  *(float *)(iVar2 + 0x3c) = fVar5 + fVar6;
  *(undefined1 *)(param_1 + 0x10) = 1;
  fn_00699648(DAT_008977e0,0xff,1,1,0x14);
  return;
}



void fn_005ff0f0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float in_r12;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    fn_006f7a84(DAT_008977e0);
    iVar4 = fn_006aa6e0();
    if (iVar4 == 0) {
      fn_006f7a84(DAT_008977e0);
      iVar4 = fn_006a9938();
      if (iVar4 != 0) {
        iVar4 = fn_006f7a84(DAT_008977e0);
        uVar5 = *(undefined4 *)(iVar4 + 0x24);
        uVar3 = *(undefined4 *)(iVar4 + 0x28);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(param_1 + 8) = uVar5;
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
    }
    break;
  case 1:
    if (*(char *)(DAT_008977e0 + 0x170) == -1) {
      fn_00698fb8(DAT_008977e0,1);
    }
    iVar4 = fn_006f73a0(DAT_008977e0,1);
    if (iVar4 != 0) {
      fVar11 = 0.0;
      if (*(char *)(param_1 + 0x18) == '\0') {
        fVar10 = 40.0;
        iVar4 = fn_006f7a5c(DAT_008977e0);
        fn_006f7a5c(DAT_008977e0);
        pfVar1 = (float *)fn_006a9660();
        fVar9 = pfVar1[1];
        fVar8 = pfVar1[2];
        *(float *)(iVar4 + 0x34) = *pfVar1 - fVar11;
        *(float *)(iVar4 + 0x38) = fVar9 - fVar10;
        *(float *)(iVar4 + 0x3c) = fVar8 - fVar11;
        fn_006f7a5c(DAT_008977e0);
        fn_001d6828();
      }
      uVar5 = fn_006f7a84(DAT_008977e0);
      fn_001ea890(uVar5,0);
      fn_006f7a84(DAT_008977e0);
      iVar4 = fn_006aaa00();
      if (iVar4 != 0) {
        uVar5 = fn_006f7a84(DAT_008977e0);
        fn_001ea230(uVar5,1);
        iVar4 = fn_006f72c8(DAT_008977e0);
        if (iVar4 != 0) {
          fn_00225fd8(iVar4,1);
        }
      }
      uVar5 = fn_006f7984(DAT_008977e0);
      fn_00408f90(uVar5,0);
      fn_006f7a84(DAT_008977e0);
      fn_001ea9c0();
      local_20 = -1.0;
      iVar4 = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28;
      if (0 < iVar4) {
        in_r12 = -1.0;
      }
      iVar6 = 0;
      local_24 = fVar11;
      if (0 < iVar4) {
        do {
          iVar7 = *(int *)(param_1 + 0x1c) + iVar6 * 0x28;
          fVar8 = *(float *)(param_1 + 4) - *(float *)(iVar7 + 4);
          fVar9 = *(float *)(param_1 + 0xc) - *(float *)(iVar7 + 0xc);
          fVar10 = *(float *)(param_1 + 8) - *(float *)(iVar7 + 8);
          fVar8 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
          if ((local_20 == in_r12) || (fVar8 < local_20)) {
            local_28 = *(undefined4 *)(iVar7 + 0xc);
            local_24 = *(float *)(iVar7 + 0x14);
            local_30 = *(float *)(iVar7 + 4);
            local_2c = *(float *)(iVar7 + 8);
            local_20 = fVar8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      uVar5 = fn_006f7a70(DAT_008977e0);
      fn_00300398(uVar5,&local_30);
      piVar2 = (int *)fn_006f7a84(DAT_008977e0);
      (**(code **)(*piVar2 + 0xd0))(piVar2,&local_30);
      piVar2[0x8a] = 0;
      (**(code **)(*piVar2 + 0x44))(piVar2,0,0,1);
      fn_001da640(piVar2);
      piVar2[0xc] = (int)local_24;
      iVar4 = fn_006f72c8(DAT_008977e0);
      if (iVar4 != 0) {
        fn_00222020(iVar4,0);
      }
      iVar4 = fn_006f7a5c(DAT_008977e0);
      *(undefined1 *)(iVar4 + 0xc) = 0;
      fn_001d91ec(iVar4);
      fn_001d92ac(iVar4);
      fn_001d5fa4(iVar4);
      *(float *)(iVar4 + 0x104) = fVar11;
      fn_001d6988(iVar4,1);
      *(undefined1 *)(param_1 + 0x10) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
      return;
    }
    break;
  case 2:
    if (*(char *)(DAT_008977e0 + 0x170) == -1) {
      fn_00698fb8(DAT_008977e0,1);
    }
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  case 3:
    iVar4 = fn_006f7ad0(DAT_008977e0,1);
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        iVar4 = fn_00154ac8(0x30c);
        if (iVar4 == 0) {
          uVar5 = fn_006f75ac(DAT_008977e0);
          uVar3 = fn_006945fc(DAT_008977e0,s_FieldRespawn_008c6734);
          fn_0038fee8(uVar5,uVar3);
          local_30 = 0.0;
          fn_0038ff40(uVar5,0,1);
          fn_00144834(0x30c,1);
          fn_00144834(0x232,1);
        }
      }
      else {
        uVar5 = fn_006f75ac(DAT_008977e0);
        uVar3 = fn_006945fc(DAT_008977e0,s_FieldBarriered_008c6725);
        fn_0038fee8(uVar5,uVar3);
        local_30 = 0.0;
        fn_0038ff40(uVar5,0,1);
      }
      *(undefined1 *)(param_1 + 0x10) = 4;
      *(undefined1 *)(param_1 + 0x18) = 0;
      return;
    }
    break;
  case 4:
    iVar4 = fn_006f75ac(DAT_008977e0);
    iVar4 = fn_001759d0(*(undefined4 *)(iVar4 + 8));
    if (iVar4 == 0) {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      uVar5 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar5,0);
      *(undefined1 *)(param_1 + 0x10) = 0;
      return;
    }
  }
  return;
}


