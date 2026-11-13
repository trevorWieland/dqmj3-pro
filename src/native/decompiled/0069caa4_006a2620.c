#include "0069caa4_006a2620.h"



int fn_006a2620(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  float fVar7;
  float local_28;
  float local_24;
  float local_20;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2 != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xec) + -4);
    fn_002cf370(iVar4,param_1 + 0x54);
    iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_002cfa2c();
    }
    in_fpscr = in_fpscr & 0xfffffff;
    if (in_s0 != 0.0) {
      local_28 = *(float *)(iVar4 + 8) - *param_2;
      fVar7 = *(float *)(iVar4 + 0x10) - param_2[2];
      local_20 = 1.0 / SQRT(local_28 * local_28 + 0.0 + fVar7 * fVar7);
      local_28 = local_28 * local_20;
      fVar6 = local_20 * 0.0;
      local_20 = fVar7 * local_20;
      local_24 = fVar6;
      fn_006dc524(&local_28);
      local_28 = in_s0;
      local_24 = fVar6;
      local_20 = fVar7;
      iVar2 = fn_00163868(200);
      fVar7 = 0.03;
      fVar6 = (float)VectorSignedToFloat(iVar2 + -100,(byte)(in_fpscr >> 0x16) & 3);
      local_28 = local_28 + fVar6 * 0.03;
      iVar2 = fn_00163868(200);
      fVar6 = (float)VectorSignedToFloat(iVar2 + -100,(byte)(in_fpscr >> 0x16) & 3);
      local_20 = local_20 + fVar6 * fVar7;
      local_24 = 6.0;
      *(float *)(iVar1 + 8) = local_28;
      *(undefined4 *)(iVar1 + 0xc) = 0x40c00000;
      *(float *)(iVar1 + 0x10) = local_20;
    }
    fn_002cfa60(iVar4,iVar1);
    iVar1 = *(int *)(param_1 + 0xec) + -4;
    *(int *)(param_1 + 0xec) = iVar1;
    iVar1 = iVar1 - *(int *)(param_1 + 0xe8) >> 2;
    bVar5 = iVar1 == 0;
    if (bVar5) {
      iVar1 = *(int *)(param_1 + 0xfc);
    }
    if ((bVar5 && iVar1 == 0) && (*(int *)(param_1 + 0xf8) != -1)) {
      piVar3 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 0xf8));
      *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
    }
  }
  return iVar4;
}



void fn_006a08dc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  
  local_14 = param_2;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c,param_3,param_4,param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002cf5e4(iVar2,param_1);
  }
  fn_002cfa60(local_14,uVar3);
  iVar2 = 0;
  uVar4 = 0;
  uVar1 = param_1[0x3b] - param_1[0x3a] >> 2;
  if (uVar1 != 0) {
    do {
      iVar6 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(*(int *)(param_1[0x3a] + iVar6) + 0x94) + 1;
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
    } while (uVar4 < uVar1);
  }
  if (param_1[0x3f] != 0) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(local_14 + 0x94) = iVar2;
  iVar6 = local_14 + 8;
  fn_0014481c(DAT_008977e8);
  iVar2 = fn_00263814();
  fn_00660790(1,iVar2 + 8,iVar6);
  piVar5 = (int *)param_1[0x3b];
  if (piVar5 == (int *)param_1[0x3c]) {
    fn_007984ec(param_1 + 0x3a,piVar5,&local_14);
  }
  else {
    param_1[0x3b] = (int)(piVar5 + 1);
    if (piVar5 != (int *)0x0) {
      *piVar5 = local_14;
    }
  }
  fn_002cfa94(local_14,param_1 + 0x15);
  if (param_1[0x3e] == -1) {
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0x9c51,0);
    param_1[0x3e] = iVar2;
  }
  return;
}



void fn_0069fbd4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_28;
  
  if (param_1[0x6a] < 1) {
    local_28 = param_4;
    fn_00144810(DAT_008977e8);
    iVar2 = fn_006a8730();
    if (((iVar2 == 1) || (*(char *)((int)param_1 + 0x1e5) != '\0')) &&
       (*(byte *)((int)param_1 + 0x156) < 2)) {
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar10 = 0;
      iVar2 = fn_006b6e94();
      if (0 < iVar2) {
        do {
          iVar2 = fn_006b6d3c(uVar3,iVar10);
          iVar4 = fn_006b6c9c(uVar3,iVar2);
          if (((iVar4 != 0) && (iVar4 = fn_006ba7d4(iVar2), iVar4 == 0)) &&
             (iVar4 = fn_006a8a84(param_1,iVar2 + 0x98,iVar2 + 8,1), iVar4 != 0)) {
            piVar5 = (int *)param_1[0x34];
            piVar7 = (int *)param_1[0x35];
            if (piVar5 < piVar7) {
              iVar8 = 1;
              iVar4 = (int)piVar7 - (int)piVar5 >> 3;
              if (1 < iVar4 + 1) {
                do {
                  if (*piVar5 == iVar2) goto LAB_0069fe10;
                  iVar8 = iVar8 + 1;
                  piVar5 = piVar5 + 2;
                } while (iVar8 < iVar4 + 1);
              }
            }
            else {
              for (; piVar5 != piVar7; piVar5 = piVar5 + 2) {
                if (*piVar5 == iVar2) goto LAB_0069fe10;
              }
            }
            local_28 = iVar2;
            iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
            uVar6 = 0;
            if (iVar2 != 0) {
              uVar6 = fn_002cf5e4(iVar2,param_1);
            }
            fn_002cfa60(local_28,uVar6);
            iVar2 = 0;
            uVar9 = 0;
            uVar1 = param_1[0x3b] - param_1[0x3a] >> 2;
            if (uVar1 != 0) {
              do {
                iVar4 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                iVar4 = *(int *)(*(int *)(param_1[0x3a] + iVar4) + 0x94) + 1;
                if (iVar2 < iVar4) {
                  iVar2 = iVar4;
                }
              } while (uVar9 < uVar1);
            }
            if (param_1[0x3f] != 0) {
              iVar2 = iVar2 + 1;
            }
            *(int *)(local_28 + 0x94) = iVar2;
            iVar4 = local_28 + 8;
            fn_0014481c(DAT_008977e8);
            iVar2 = fn_00263814();
            fn_00660790(1,iVar2 + 8,iVar4);
            piVar5 = (int *)param_1[0x3b];
            if (piVar5 == (int *)param_1[0x3c]) {
              fn_007984ec(param_1 + 0x3a,piVar5,&local_28);
            }
            else {
              param_1[0x3b] = (int)(piVar5 + 1);
              if (piVar5 != (int *)0x0) {
                *piVar5 = local_28;
              }
            }
            fn_002cfa94(local_28,param_1 + 0x15);
            if (param_1[0x3e] == -1) {
              iVar2 = (**(code **)(*param_1 + 0x40))(param_1,0x9c51,0);
              param_1[0x3e] = iVar2;
            }
          }
LAB_0069fe10:
          iVar10 = iVar10 + 1;
          iVar2 = fn_006b6e94(uVar3);
        } while (iVar10 < iVar2);
      }
    }
  }
  else {
    param_1[0x6a] = param_1[0x6a] + -1;
  }
  return;
}



undefined4 fn_0069caa4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  char local_20;
  
  if ((*(byte *)(param_3 + 0x7c) & 2) != 0) {
    if ((2 < *(byte *)(param_1 + 0x61e)) && (*(char *)(param_1 + 0x30) != '\0')) {
      param_2 = fn_0054f158(param_1);
    }
    return param_2;
  }
  uVar1 = fn_0054e5b8(param_1);
  uVar2 = *(undefined4 *)(param_3 + 0x70);
  uVar3 = *(undefined4 *)(param_3 + 0x6c);
  if ((*(byte *)(param_3 + 0x7c) & 4) == 0) {
    if (*(char *)(param_1 + 0x36) == '\x01') goto LAB_0069cb78;
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar1 = fn_0054f158(param_1,uVar1);
    }
    uVar1 = fn_00560bf4(param_1,uVar1);
    local_20 = '\x01';
  }
  else {
    fn_00560c1c(&local_28,param_1,uVar2,uVar3);
    uVar2 = local_28;
    uVar3 = uStack_24;
    if (local_20 == *(char *)(param_1 + 0x36)) goto LAB_0069cb78;
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar1 = fn_0054f158(param_1,uVar1);
    }
    uVar1 = fn_00561320(param_1,uVar1,local_20);
  }
  *(char *)(param_1 + 0x36) = local_20;
LAB_0069cb78:
  if (4 < *(byte *)(param_1 + 0x61e)) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar1 = fn_0054f158(param_1,uVar1);
    }
    local_28 = 1;
    uVar1 = fn_00550670(param_1,uVar1,uVar2,uVar3);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar1 = fn_0054f158(param_1,uVar1);
  }
  uVar2 = fn_0069c778(param_1,uVar1,param_3);
  *(undefined1 *)(param_1 + 0x61e) = 6;
  return uVar2;
}


