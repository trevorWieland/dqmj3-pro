#include "0065d474_0065dae4.h"



void fn_0065dae4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  fn_001daaf8();
  uStack_58 = 0x41200000;
  uStack_54 = 0x41200000;
  uStack_50 = 0x42a00000;
  fStack_70 = *(float *)(param_1 + 0x20);
  fStack_6c = *(float *)(param_1 + 0x24);
  fStack_68 = *(float *)(param_1 + 0x28);
  fVar8 = *(float *)(param_1 + 0x34) * 40.743664;
  fVar3 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar5 = *(float *)(param_1 + 0x30) * 40.743664;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar6 = ABS(fVar5);
  fVar4 = ABS(fVar8);
  for (fVar7 = ABS(fVar3); 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar9 = VectorFloatToUnsigned(fVar7,3);
  uVar10 = VectorFloatToUnsigned(fVar6,3);
  uVar11 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar10 & 0xff;
  uVar1 = uVar9 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar9 = uVar11 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar7 - fVar15) * (float)(&DAT_007d6f28)[uVar1 * 4];
  fVar15 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar7 - fVar15) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  fVar7 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar6 - fVar13) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if (fVar3 < 0.0) {
    fVar12 = -fVar12;
  }
  fStack_20 = (float)(&DAT_007d6f24)[uVar2 * 4] +
              (fVar6 - fVar13) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f28)[uVar9 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar4 - fVar14) * (float)(&DAT_007d6f2c)[uVar9 * 4];
  if (fVar5 < 0.0) {
    fVar7 = -fVar7;
  }
  if (fVar8 < 0.0) {
    fVar6 = -fVar6;
  }
  fStack_48 = fVar4 * fStack_20;
  fStack_38 = fVar6 * fStack_20;
  fStack_24 = fVar12 * fStack_20;
  fStack_20 = fVar15 * fStack_20;
  fStack_28 = -fVar7;
  fStack_44 = fVar12 * fVar4 * fVar7 - fVar15 * fVar6;
  fStack_30 = fVar15 * fVar6 * fVar7 - fVar12 * fVar4;
  fStack_40 = fVar12 * fVar6 + fVar15 * fVar4 * fVar7;
  fStack_34 = fVar15 * fVar4 + fVar12 * fVar6 * fVar7;
  uStack_3c = 0;
  uStack_2c = 0;
  uStack_1c = 0;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  fStack_5c = 80.0;
  fn_0016947c(&fStack_64);
  fStack_70 = fStack_70 + fStack_64;
  fStack_6c = fStack_6c + fStack_60;
  fStack_68 = fStack_68 + fStack_5c;
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1a0),&uStack_58,&uStack_18,param_1 + 0x2c,
               &fStack_70);
  return;
}



void fn_0065dab4(int param_1)

{
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7549);
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  return;
}



void fn_0065da58(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x19c) != -1) {
    fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x19c),param_2);
  }
  fn_001d96b0(param_1,param_2);
  return;
}



undefined4 fn_0065d780(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((char)param_1[0x67] == '\0') {
    fn_006f7a48(DAT_008977e0);
    iVar3 = fn_006a7dc8();
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0xc4))(param_1,param_2), iVar3 != 0)) {
      piVar1 = (int *)fn_006f7a84(DAT_008977e0);
      (**(code **)(*piVar1 + 0x44))(piVar1,0,4);
      fn_006f7a84(DAT_008977e0);
      iVar3 = fn_006aba74();
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_1 + 0x19d) = 3;
        uVar4 = fn_006945fc(DAT_008977e0,s_Obstacle_LackingPower_008c6d1f);
        uVar2 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar2,0,0,1,0);
        uVar2 = fn_006f75ac(DAT_008977e0);
        fn_0038fee8(uVar2,uVar4);
      }
      else {
        fn_00698fb8(DAT_008977e0,1);
        *(undefined1 *)((int)param_1 + 0x19d) = 4;
        uVar4 = fn_006945fc(DAT_008977e0,s_Obstacle_Query_008c6d10);
        uVar2 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar2,0,0,0,0);
        uVar2 = fn_006f75ac(DAT_008977e0);
        fn_0038fee8(uVar2,uVar4);
      }
      return 1;
    }
  }
  else {
    if ((char)param_1[0x67] != '\x02') {
      return 0;
    }
    if ((*(char *)((int)param_1 + 0x19d) == '\0') &&
       (iVar3 = (**(code **)(*param_1 + 0x134))(param_1), iVar3 != 0)) {
      fn_006f7a84(DAT_008977e0);
      uVar4 = fn_006aab6c();
      iVar3 = fn_006f7a84(DAT_008977e0);
      *(undefined4 *)(iVar3 + 0x228) = uVar4;
      fn_006f7a84(DAT_008977e0);
      fn_001e49b0();
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



void fn_0065d474(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  fn_001db0c0();
  cVar1 = *(char *)(param_1 + 0x19c);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x19d) != '\x03') {
      if (*(char *)(param_1 + 0x19d) != '\x04') {
        return;
      }
      iVar2 = fn_006f75ac(DAT_008977e0);
      iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x19d) = 0;
        fn_00698fb8(DAT_008977e0,0xffffffff);
        return;
      }
      fn_006f75ac(DAT_008977e0);
      iVar2 = fn_006b5398();
      if (iVar2 == 0) {
        return;
      }
      iVar2 = fn_006f75ac(DAT_008977e0);
      cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x8f);
      fn_006f75ac(DAT_008977e0);
      fn_0016b40c();
      if (cVar1 == '\x01') {
        fn_00144834(*(undefined4 *)
                      (&DAT_007bf350 + (short)((short)*(undefined4 *)(param_1 + 0x1a8) + -1) * 4),1)
        ;
        *(undefined1 *)(param_1 + 0x19c) = 1;
        *(undefined1 *)(param_1 + 0x19d) = 8;
        fn_006f7a84(DAT_008977e0);
        fn_001dde28();
        fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7577);
        return;
      }
      return;
    }
    iVar2 = fn_006f75ac(DAT_008977e0);
    iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
    if (iVar2 != 0) {
      return;
    }
  }
  else if (cVar1 == '\x01') {
    switch(*(undefined1 *)(param_1 + 0x19d)) {
    case 0:
    case 3:
    case 4:
    case 7:
      return;
    case 1:
      iVar2 = fn_006f73a0(DAT_008977e0,1,0);
      if (iVar2 == 0) {
        return;
      }
      fn_001d9f6c(param_1,0x7577);
      fn_001da5e4(param_1);
      fn_001dbc64(param_1,0);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(undefined1 *)(param_1 + 0x19d) = 6;
      return;
    case 2:
      iVar2 = fn_006f7ad0(DAT_008977e0,1,0);
      if (iVar2 == 0) {
        return;
      }
      fn_00698fb8(DAT_008977e0,0xffffffff);
      *(undefined1 *)(param_1 + 0x19c) = 2;
      break;
    case 5:
      *(undefined1 *)(param_1 + 0x19d) = 1;
      fn_00699648(DAT_008977e0,0xff,1,0,0x14);
      *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
      return;
    case 6:
      iVar2 = *(int *)(param_1 + 0x1a0) + 1;
      *(int *)(param_1 + 0x1a0) = iVar2;
      if (iVar2 < 0xb) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      fn_001d9fcc(param_1);
      uVar3 = fn_006f72b4(DAT_008977e0);
      fn_0021b714(uVar3,s_ic_tornado_00_008c6d35,1);
      uVar3 = fn_006f72b4(DAT_008977e0);
      fn_0021b714(uVar3,s_ic_exclamation_008c6d43,0);
      fn_0069922c(DAT_008977e0);
      *(undefined1 *)(param_1 + 0x19d) = 2;
      return;
    case 8:
      fn_006f7a84(DAT_008977e0);
      iVar2 = fn_001de26c();
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x19d) = 5;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      return;
    default:
      return;
    }
  }
  else {
    bVar4 = cVar1 != '\x02';
    if (!bVar4) {
      cVar1 = *(char *)(param_1 + 0x19d);
    }
    if (bVar4 || cVar1 != '\x06') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x1a0) + 1;
    *(int *)(param_1 + 0x1a0) = iVar2;
    if (iVar2 < 0x10) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  *(undefined1 *)(param_1 + 0x19d) = 0;
  return;
}


