#include "00404ee8_004059d8.h"



int fn_004059d8(int param_1)

{
  return (int)*(short *)(DAT_008923f4 + param_1 * 6);
}



int fn_004059a4(int param_1)

{
  return (int)*(short *)(DAT_008923f4 + param_1 * 6 + 2);
}



int fn_00405990(void)

{
  return (int)(short)DAT_008923f8;
}



undefined4 fn_00405900(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00405984,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 6;
  iVar2 = 0;
  DAT_008923f8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008923f8 = 0;
  }
  DAT_008923f4 = param_1;
  return 1;
}



undefined1 fn_004058e4(int param_1)

{
  return *(undefined1 *)(DAT_008923f4 + param_1 * 6 + 4);
}



int fn_00405898(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  fn_004055f8();
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 8) < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != *(uint *)(param_1 + 8));
  }
  fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0xc) - uVar1) >> 2,0);
  return param_1;
}



void fn_00405730(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar5;
  int *piVar4;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  
  piVar11 = *(int **)(param_1 + 4);
  while (*(int **)(param_1 + 8) != piVar11) {
    iVar9 = *piVar11;
    (**(code **)(**(int **)(iVar9 + 0xc) + 0x2c))();
    fVar13 = *(float *)(*(int *)(iVar9 + 0x10) + 0x10);
    uVar1 = fn_00176970();
    fVar12 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar13 == fVar12) {
      puVar2 = (undefined4 *)*piVar11;
      if (puVar2 != (undefined4 *)0x0) {
        fn_0016a43c(*puVar2,puVar2[2]);
        puVar2[3] = 0;
        fn_002feef8(puVar2);
      }
      piVar6 = *(int **)(param_1 + 8);
      if (*(int **)(param_1 + 4) != piVar6) {
        piVar4 = piVar11 + 1;
        if (piVar4 != piVar6) {
          piVar10 = piVar11;
          if (piVar4 < piVar6) {
            uVar3 = (int)piVar6 - (int)piVar4;
            if (0 < (int)uVar3) {
              uVar7 = (uVar3 & 7) >> 2;
              if (uVar7 != 0) {
                *piVar11 = *piVar4;
              }
              uVar8 = (uint)(uVar7 != 0);
              for (; (int)uVar7 < (int)uVar3 >> 2; uVar7 = uVar7 + 2) {
                piVar11[uVar8] = piVar4[uVar8];
                piVar11[uVar8 + 1] = piVar4[uVar8 + 1];
                uVar8 = uVar8 + 2;
              }
            }
          }
          else {
            do {
              piVar5 = piVar4 + 1;
              *piVar10 = *piVar4;
              piVar4 = piVar5;
              piVar10 = piVar10 + 1;
            } while (piVar5 != piVar6);
          }
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      }
    }
    else {
      piVar11 = piVar11 + 1;
    }
  }
  return;
}



void fn_00405724(undefined4 param_1)

{
  fn_00313870(param_1,2);
  return;
}



void fn_004055f8(int param_1)

{
  uint uVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  
  puVar9 = *(undefined4 **)(param_1 + 4);
  while (*(undefined4 **)(param_1 + 8) != puVar9) {
    puVar7 = (undefined4 *)*puVar9;
    if (puVar7 != (undefined4 *)0x0) {
      fn_0016a43c(*puVar7,puVar7[2]);
      puVar7[3] = 0;
      fn_002feef8(puVar7);
    }
    puVar7 = *(undefined4 **)(param_1 + 8);
    if (*(undefined4 **)(param_1 + 4) != puVar7) {
      puVar2 = puVar9 + 1;
      if (puVar2 != puVar7) {
        puVar8 = puVar9;
        if (puVar2 < puVar7) {
          uVar1 = (int)puVar7 - (int)puVar2;
          if (0 < (int)uVar1) {
            uVar4 = (uVar1 & 7) >> 2;
            if (uVar4 != 0) {
              *puVar9 = *puVar2;
            }
            uVar6 = (uint)(uVar4 != 0);
            for (; (int)uVar4 < (int)uVar1 >> 2; uVar4 = uVar4 + 2) {
              puVar9[uVar6] = puVar2[uVar6];
              puVar9[uVar6 + 1] = puVar2[uVar6 + 1];
              uVar6 = uVar6 + 2;
            }
          }
        }
        else {
          do {
            puVar3 = puVar2 + 1;
            *puVar8 = *puVar2;
            puVar2 = puVar3;
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar7);
        }
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    }
  }
  uVar6 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar4 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar5 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = uVar6;
  if (uVar4 < uVar6) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar4);
  }
  fn_002feef8(uVar6,(int)(iVar5 - uVar6) >> 2,0,uVar6,unaff_r4,in_lr);
  return;
}



void fn_0040520c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  cVar1 = *(char *)(param_1 + 0x9d);
  uVar9 = 0x3d4ccccd;
  switch(cVar1) {
  case '\x01':
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    do {
      iVar3 = param_1 + uVar6 * 8;
      fVar8 = *(float *)(iVar3 + 0x78);
      fVar7 = *(float *)(iVar3 + 0x7c) + fVar8 * (float)uVar9;
      *(float *)(iVar3 + 0x7c) = fVar7;
      if (fVar8 < fVar7) {
        fVar7 = fVar8;
      }
      *(float *)(iVar3 + 0x7c) = fVar7;
      if (fVar7 < fVar8) {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      else {
        *(float *)(iVar3 + 0x7c) = fVar8;
      }
      uVar4 = fn_00689220(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb684 + uVar6 * 0x40);
      uVar5 = fn_001828f0(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb664 + uVar6 * 0x40);
      fn_003eff3c(uVar5,uVar4,*(undefined4 *)(param_1 + 0x74),(int)*(float *)(iVar3 + 0x7c));
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    if (*(char *)(param_1 + 0x90) != '\0') {
      *(undefined1 *)(param_1 + 0x88) = 0;
    }
    break;
  case '\x02':
    iVar3 = *(int *)(param_1 + 0x6c);
    if (*(char *)(iVar3 + 0x14) != '\0') {
      if (*(float *)(iVar3 + 0x24) == 0.0) {
        fn_00190cdc(iVar3,0);
        fn_00190e00(*(undefined4 *)(param_1 + 0x70));
        fn_0069e82c(param_1,0x1000100);
        *(undefined1 *)(param_1 + 0x9d) = 3;
      }
      (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
    }
    break;
  case '\x03':
    piVar2 = *(int **)(param_1 + 0x70);
    if (piVar2 != (int *)0x0) {
      cVar1 = (char)piVar2[5];
    }
    if (piVar2 != (int *)0x0 && cVar1 != '\0') {
      if ((float)piVar2[9] == 0.0) {
        *(undefined1 *)(param_1 + 0x9d) = 4;
      }
      (**(code **)(*piVar2 + 0xc))();
      (**(code **)(**(int **)(param_1 + 0x70) + 0x14))();
    }
    break;
  case '\x04':
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    do {
      iVar3 = param_1 + uVar6 * 8;
      fVar8 = *(float *)(iVar3 + 0x78);
      fVar7 = *(float *)(iVar3 + 0x7c) + fVar8 * (float)uVar9;
      *(float *)(iVar3 + 0x7c) = fVar7;
      if (fVar8 < fVar7) {
        fVar7 = fVar8;
      }
      *(float *)(iVar3 + 0x7c) = fVar7;
      if (fVar7 < fVar8) {
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      else {
        *(float *)(iVar3 + 0x7c) = fVar8;
      }
      uVar4 = fn_00689220(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb684 + uVar6 * 0x40);
      uVar5 = fn_001828f0(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb664 + uVar6 * 0x40);
      fn_003eff3c(uVar5,uVar4,*(undefined4 *)(param_1 + 0x74),(int)*(float *)(iVar3 + 0x7c));
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
  }
  fn_0068a5a8(param_1);
  return;
}



void fn_00404ee8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x90) == '\0') {
    return;
  }
  uVar3 = 0;
  do {
    uVar1 = fn_00689220(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb684 + uVar3 * 0x40);
    uVar2 = fn_001828f0(*(undefined4 *)(param_1 + 100),(char *)&DAT_007bb664 + uVar3 * 0x40);
    fn_003eff3c(uVar2,uVar1,*(undefined4 *)(param_1 + 0x74),
                 (int)*(float *)(param_1 + uVar3 * 8 + 0x7c));
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x9d) = 2;
  uVar1 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30),
                              (byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x38),
                              (byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  fn_00190e00(*(undefined4 *)(param_1 + 0x6c));
  return;
}


