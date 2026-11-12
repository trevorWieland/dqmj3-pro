#include "0035cd40_0035d9ac.h"



undefined4 * fn_0035d9ac(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1 + 1;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0x1d);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x400,0);
  piVar1[2] = iVar2;
  *piVar1 = *piVar6;
  piVar1[1] = 0x20;
  *piVar6 = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[3] = puVar3;
  param_1[4] = puVar3 + 0x400;
  param_1[3] = puVar3 + 0x20;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  param_1[5] = puVar3;
  *puVar3 = 0;
  iVar2 = fn_00772b6c(piVar6,*(undefined4 *)(param_2[5] + 4),param_1[5]);
  *(int *)(param_1[5] + 4) = iVar2;
  iVar5 = param_1[5];
  if (iVar2 == 0) {
    *(int *)(iVar5 + 8) = iVar5;
    *(undefined4 *)(param_1[5] + 0xc) = param_1[5];
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar4 + 8);
    } while (iVar2 != 0);
    *(int *)(iVar5 + 8) = iVar4;
    iVar2 = *(int *)(param_1[5] + 4);
    do {
      iVar5 = iVar2;
      iVar2 = *(int *)(iVar5 + 0xc);
    } while (iVar2 != 0);
    *(int *)(param_1[5] + 0xc) = iVar5;
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  return param_1;
}



void fn_0035d714(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float in_s0;
  float fVar6;
  float in_s1;
  float in_s2;
  float fVar7;
  float fVar8;
  float fVar9;
  
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x8c))(piVar2,*(undefined4 *)(param_1 + 0x19c));
  if (iVar3 != 0) {
    iVar3 = fn_006bb544(iVar3,0);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x58);
    }
    if ((iVar3 != 0 && cVar1 != '\0') && (iVar4 = fn_006f7a30(DAT_008977e0), iVar4 == 0)) {
      fn_006f7a84(DAT_008977e0);
      iVar4 = fn_006aae90();
      if ((iVar4 == 0) && (iVar4 = fn_006b06e8(iVar3), iVar4 != 0)) {
        fn_006a7fac(iVar3);
        in_s0 = in_s0 * -1.0;
        in_s1 = in_s1 * -1.0;
        in_s2 = in_s2 * -1.0;
        iVar4 = fn_006f7a84(DAT_008977e0);
        fVar6 = in_s0 * (*(float *)(iVar4 + 0x20) - *(float *)(iVar3 + 0x20)) +
                in_s1 * (*(float *)(iVar4 + 0x24) - *(float *)(iVar3 + 0x24)) +
                in_s2 * (*(float *)(iVar4 + 0x28) - *(float *)(iVar3 + 0x28));
        if (fVar6 < *(float *)(param_1 + 0x3c)) {
          fVar9 = *(float *)(iVar3 + 0x20) + in_s0 * fVar6;
          fVar7 = *(float *)(iVar3 + 0x24) + in_s1 * fVar6;
          fVar8 = *(float *)(iVar3 + 0x28) + in_s2 * fVar6;
          iVar4 = fn_006f7a84(DAT_008977e0);
          fVar9 = *(float *)(iVar4 + 0x20) - fVar9;
          fVar7 = *(float *)(iVar4 + 0x24) - fVar7;
          fVar8 = *(float *)(iVar4 + 0x28) - fVar8;
          iVar4 = fn_006f7a84(DAT_008977e0);
          fVar6 = *(float *)(*(int *)(iVar4 + 0x100) + 0xc) +
                  *(float *)(*(int *)(iVar3 + 0x100) + 0xc);
          if (fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8 < fVar6 * fVar6) {
            fn_00683320(iVar3,0xb,0);
            iVar4 = fn_006f7a84(DAT_008977e0);
            if ((*(int *)(iVar4 + 0x44c) != 0) ||
               (iVar4 = fn_006f7a84(DAT_008977e0), *(int *)(iVar4 + 0x450) != 0)) {
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            cVar1 = *(char *)(iVar3 + 0x1be);
            uVar5 = fn_006f7a84(DAT_008977e0);
            fn_001e483c(uVar5,(int)cVar1);
            return;
          }
        }
      }
    }
  }
  return;
}



void fn_0035d6d4(undefined4 *param_1)

{
  *param_1 = &DAT_00826b40;
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7558);
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0035d66c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00211c48(param_1,0x25);
  puVar1[0x68] = 0xffffffff;
  *puVar1 = &DAT_00826b40;
  puVar1[0x67] = param_2;
  *(undefined1 *)(puVar1 + 0x69) = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7558);
  return puVar1;
}



void fn_0035d2c8(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_2c [4];
  int local_28;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  iVar2 = fn_006f7a9c(DAT_008977e0);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= param_2))
  {
    local_28 = 0;
  }
  else {
    local_28 = *(int *)(iVar2 + 4) + param_2 * 0x34;
  }
  uVar3 = fn_006eb378();
  iVar2 = (param_1[0x54] - param_1[0x53]) / 0xc;
  if ((int)uVar3 < iVar2) {
    uVar10 = uVar3;
    uVar7 = uVar3;
    if ((int)uVar3 < 0) {
      uVar10 = 0;
      uVar7 = uVar10;
    }
    for (; (int)uVar10 < iVar2; uVar10 = uVar10 + 1) {
    }
    iVar2 = param_1[0x53] + uVar7 * 0xc;
  }
  else {
    uVar10 = uVar3;
    if ((int)(param_1[0x55] & 0x3fffffffU) < (int)uVar3) {
      piVar4 = (int *)param_1[0x52];
      if (((piVar4 == (int *)0x0) || ((param_1[0x55] & 0xc0000000U) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,uVar3 * 0xc,0x20),
         puVar5 == (undefined4 *)0x0)) {
        uVar10 = param_1[0x55] & 0x3fffffff;
      }
      else {
        iVar2 = 0;
        puVar6 = (undefined4 *)param_1[0x53];
        puVar11 = (undefined4 *)param_1[0x54];
        puVar9 = puVar5;
        if (puVar6 != puVar11) {
          do {
            if (puVar9 != (undefined4 *)0x0) {
              uVar13 = puVar6[1];
              uVar14 = puVar6[2];
              *puVar9 = *puVar6;
              puVar9[1] = uVar13;
              puVar9[2] = uVar14;
            }
            puVar6 = puVar6 + 3;
            puVar9 = puVar9 + 3;
          } while (puVar6 != puVar11);
          iVar2 = (param_1[0x54] - param_1[0x53]) / 0xc;
        }
        uVar7 = param_1[0x53];
        if (uVar7 != 0) {
          uVar12 = param_1[0x54];
          uVar1 = uVar7;
          if (uVar7 < uVar12) {
            iVar8 = 1;
            if (1 < (int)(uVar12 - uVar7) / 0xc + 1) {
              do {
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)(uVar12 - uVar7) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar12; uVar1 = uVar1 + 0xc) {
            }
          }
          param_1[0x54] = uVar7;
          piVar4 = (int *)param_1[0x52];
          (**(code **)(*piVar4 + 0xc))(piVar4,param_1[0x53]);
        }
        param_1[0x53] = (int)puVar5;
        param_1[0x54] = (int)(puVar5 + iVar2 * 3);
        param_1[0x55] = param_1[0x55] & 0xc0000000U | uVar3;
      }
    }
    for (iVar2 = (param_1[0x54] - param_1[0x53]) / 0xc; iVar2 < (int)uVar10; iVar2 = iVar2 + 1) {
      puVar5 = (undefined4 *)(param_1[0x53] + iVar2 * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
      }
    }
    iVar2 = param_1[0x53] + uVar10 * 0xc;
  }
  param_1[0x54] = iVar2;
  iVar2 = 0;
  if (0 < (int)uVar3) {
    do {
      fn_005e8b54(auStack_2c,local_28,iVar2);
      fn_005eefe8(param_1[0x39],auStack_2c);
      iVar8 = fn_005ef148(param_1[0x39]);
      fn_001da490(param_1,iVar2,iVar8 + -1,0xffffffff,0xffffffff);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
    if (0 < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x0035d5c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,0,4);
      return;
    }
  }
  return;
}



undefined4 fn_0035ceb8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002113c8();
  (**(code **)(*param_1 + 0xe0))(param_1,1);
  (**(code **)(*param_1 + 0x54))(param_1,0);
  param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
  param_1[99] = 0x43700000;
  param_1[0x70] = 0;
  param_1[0x71] = 0x41200000;
  param_1[0x72] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x41200000;
  param_1[0x3d] = 0;
  return uVar1;
}



void fn_0035ce40(int param_1)

{
  undefined4 uVar1;
  
  fn_006b8d58(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10));
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    fn_002a682c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),
                 *(undefined4 *)(param_1 + 0x19c));
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021ed50(uVar1,5,param_1 + 0x20,0);
    return;
  }
  return;
}



void fn_0035cd40(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x3c))();
  cVar1 = (char)param_1[0x69];
  if (cVar1 == '\0') goto LAB_0035ce00;
  fVar5 = 0.5;
  if (cVar1 == '\x01') {
    fVar4 = (float)param_1[0x6b] + 0.016666668;
    param_1[0x6b] = (int)fVar4;
    if ((int)fVar4 < 0x3f000001) {
      fVar5 = fVar4;
    }
  }
  else {
    if ((cVar1 != '\x02') || (iVar3 == 0)) goto LAB_0035ce00;
    if (0x13 < param_1[0x6c]) {
      fVar5 = (float)VectorSignedToFloat(param_1[0x6c] + -0x14,(byte)(in_fpscr >> 0x16) & 3);
      fVar5 = 0.5 - fVar5 * 0.1 * 0.5;
      param_1[0x6b] = (int)fVar5;
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      param_1[0x6b] = (int)fVar5;
      goto LAB_0035ce00;
    }
  }
  param_1[0x6b] = (int)fVar5;
LAB_0035ce00:
  (**(code **)(*param_1 + 0xd8))(param_1);
  VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x68]);
  return;
}


