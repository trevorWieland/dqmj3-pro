#include "0032d79c_00351dc8.h"



void fn_00351dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    return;
  }
  local_10 = param_4;
  switch(*(undefined1 *)(param_1 + 0x70)) {
  case 0:
    fn_002698b8(DAT_00897818,*(undefined4 *)(param_1 + 0x68));
    uVar1 = 1;
    break;
  case 1:
    iVar3 = fn_00269b38(DAT_00897818);
    if (iVar3 != 6) {
      if (iVar3 == 2 || iVar3 == 5) {
        *(undefined1 *)(param_1 + 0x71) = 1;
        *(undefined1 *)(param_1 + 0x70) = 8;
        uVar4 = fn_001603f8(&local_10,0xff);
        fn_00163988(DAT_0089780c,uVar4,1);
        uVar4 = fn_001603f8(&local_10,0xff);
        fn_00163988(DAT_00897808,uVar4,1);
        return;
      }
      return;
    }
    iVar3 = fn_00250e58(0);
    if (iVar3 == 0) goto LAB_0035202c;
    goto LAB_00351ebc;
  case 2:
    fn_0026a494(DAT_00897818,*(undefined4 *)(param_1 + 0x68),0);
    uVar1 = 3;
    break;
  case 3:
    iVar3 = fn_00269b38(DAT_00897818);
    if (iVar3 != 2) {
      return;
    }
LAB_00351ebc:
    uVar1 = 4;
    break;
  case 4:
    fn_0026a398(DAT_00897818,*(undefined4 *)(param_1 + 0x68),0);
    uVar1 = 5;
    break;
  case 5:
    iVar3 = fn_00269b38(DAT_00897818);
    if (iVar3 != 2) {
      if (*(char *)(param_1 + 0x71) == '\0') {
        if (iVar3 != 5) {
          return;
        }
        uVar1 = 0;
        break;
      }
      if (iVar3 != 5) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x70) = 6;
    return;
  case 6:
    *(undefined1 *)(param_1 + 0x70) = 7;
    if (DAT_00898964 != '\0') {
      DAT_00897a2c = fn_00154ac8(0x322);
      DAT_00897a2d = fn_00154ac8(0x323);
      DAT_00898964 = '\0';
    }
    iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar2 != 0) {
      uVar4 = fn_00689b18(param_1);
      iVar3 = fn_002e3ad8(iVar2,uVar4);
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (iVar2 != iVar3) {
      if (iVar2 != 0) {
        fn_002e3bbc(iVar2);
        fn_002feef8();
      }
      *(int *)(param_1 + 0x74) = iVar3;
    }
    fn_002e3524(*(undefined4 *)(param_1 + 0x74),1,0,local_10);
    return;
  case 7:
    iVar3 = fn_002e3564(*(undefined4 *)(param_1 + 0x74));
    if (iVar3 == 0) {
      return;
    }
LAB_0035202c:
    *(undefined1 *)(param_1 + 0x70) = 8;
    uVar4 = fn_001603f8(&local_10,0xff);
    fn_00163988(DAT_0089780c,uVar4,1);
    uVar4 = fn_001603f8(&local_10,0xff);
    fn_00163988(DAT_00897808,uVar4,1);
    return;
  case 8:
    if (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc)) {
      return;
    }
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return;
    }
    uVar1 = 9;
    break;
  case 9:
    fn_006899f4(param_1,0xd6,0);
    fn_00689930(param_1,0xd8,0);
    return;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 0x70) = uVar1;
  return;
}



undefined4 fn_0032d79c(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_38 [8];
  float local_30;
  float local_2c;
  undefined1 auStack_28 [16];
  
  uVar8 = 0;
  switch(*param_1) {
  case 0:
    fn_002d1038(1);
    uVar8 = fn_001603f8(auStack_28,0);
    fn_00163988(DAT_00897808,uVar8,0xf);
    uVar8 = fn_001603f8(auStack_28,0);
    fn_00163988(DAT_0089780c,uVar8,0xf);
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23d) = 0;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23e) = 0;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23f) = 0;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x240) = 0;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x241) = 0;
    *param_1 = 1;
    return 0;
  case 1:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    fn_002d0f94(s_race_tutorial_step1_1_subscripti_008c5771,0);
    uVar1 = 2;
    break;
  case 2:
    fn_0068c800(DAT_008977e8);
    iVar7 = fn_001759d0();
    if (iVar7 != 0) {
      return 0;
    }
    fn_002d0f94(s_race_tutorial_step1_start_008c5794,1);
    uVar1 = 3;
    break;
  case 3:
    iVar7 = fn_0068c800(DAT_008977e8);
    if (*(char *)(iVar7 + 0x8f) == '\0') {
      return 0;
    }
    if (*(char *)(iVar7 + 0x8f) == '\x01') {
      uVar1 = 4;
    }
    else {
      fn_002d0f94(s_race_tutorial_step1_1_to_race_008c57ae,0);
      uVar1 = 5;
    }
    *param_1 = uVar1;
    fn_0068c800(DAT_008977e8);
    fn_0016b414();
    return 0;
  case 4:
    fn_002d0f94(s_race_tutorial_step1_1_start_1_008c57cc,0);
    uVar4 = fn_0014481c(DAT_008977e8);
    iVar7 = fn_006b6d3c(uVar4,0);
    uVar4 = fn_0068c700(DAT_008977e8);
    fn_001feb50(uVar4,1,iVar7 + 8);
    uVar1 = 6;
    break;
  case 5:
    fn_0068c800(DAT_008977e8);
    iVar7 = fn_001759d0();
    if (iVar7 == 0) {
      uVar8 = fn_001603f8(auStack_38,0xff);
      fn_00163988(DAT_00897808,uVar8,0x1e);
      uVar8 = fn_001603f8(auStack_38,0xff);
      fn_00163988(DAT_0089780c,uVar8,0x1e);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    return 0;
  case 6:
    fn_0068c800(DAT_008977e8);
    iVar7 = fn_001759d0();
    if (iVar7 != 0) {
      return 0;
    }
    fn_002d0f94(s_race_tutorial_step1_1_start_2_008c57ea,0);
    uVar1 = 7;
    break;
  case 7:
    fn_0068c800(DAT_008977e8);
    iVar7 = fn_001759d0();
    if (iVar7 != 0) {
      return 0;
    }
    fn_0068c700(DAT_008977e8);
    fn_001fed04();
    fn_0068c700(DAT_008977e8);
    fn_001fed14();
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x1e5) = 1;
    uVar1 = 8;
    break;
  case 8:
    if (param_1[9] == '\0') {
      uVar8 = fn_0014481c(DAT_008977e8);
      iVar7 = fn_006b6d3c(uVar8,0);
      fn_0014481c(DAT_008977e8);
      iVar2 = fn_00263814();
      fVar10 = *(float *)(iVar7 + 8) - *(float *)(iVar2 + 8);
      fVar9 = *(float *)(iVar7 + 0x10) - *(float *)(iVar2 + 0x10);
      fn_0014481c(DAT_008977e8);
      piVar3 = (int *)fn_00263814();
      local_2c = 1.0 / SQRT(fVar10 * fVar10 + fVar9 * fVar9);
      local_30 = fVar10 * local_2c;
      local_2c = fVar9 * local_2c;
      (**(code **)(*piVar3 + 0x58))(piVar3,&local_30);
      fn_0014481c(DAT_008977e8);
      fn_00263814();
      iVar7 = fn_006f7de8();
      if (iVar7 < 1) {
        return 0;
      }
      param_1[9] = 1;
      return 0;
    }
    iVar7 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar7 + 1;
    if (iVar7 < 0x1e) {
      return 0;
    }
    uVar4 = fn_001603f8(auStack_38,0xff);
    fn_00163988(DAT_00897808,uVar4,0x1e);
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x1e5) = 0;
    fn_0068c700(DAT_008977e8);
    fn_001fed8c();
    uVar1 = 9;
    break;
  case 9:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    fn_002d1038(1);
    fn_002d0fe8();
    uVar4 = fn_001603f8(auStack_38,0);
    fn_00163988(DAT_00897808,uVar4,0x1e);
    uVar1 = 10;
    break;
  case 10:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    fn_002d0f94(s_race_tutorial_step1_1_start_3_008c5808,0);
    uVar1 = 0xb;
    break;
  case 0xb:
    fn_0068c800(DAT_008977e8);
    iVar7 = fn_001759d0();
    if (iVar7 != 0) {
      return 0;
    }
    uVar4 = fn_0068c700(DAT_008977e8);
    fn_002013cc(uVar4,1);
    uVar1 = 0xc;
    break;
  case 0xc:
    fn_0068c700(DAT_008977e8);
    iVar7 = fn_00201384();
    if (iVar7 != 0) {
      return 0;
    }
    uVar4 = fn_00144810(DAT_008977e8);
    fn_001cc118(uVar4,1);
    uVar4 = fn_0068c700(DAT_008977e8);
    fn_001fede8(uVar4,s_race_tutorial_step1_1_direction_008c5826);
    uVar1 = 0xd;
    *(undefined4 *)(param_1 + 4) = 0;
    break;
  case 0xd:
    fn_0014481c(DAT_008977e8);
    fn_00263814();
    iVar7 = fn_006f7de8();
    param_1[8] = 0 < iVar7;
    if (0 >= iVar7) {
      return 0;
    }
    iVar7 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar7 + 1;
    if (iVar7 < 0x1e) {
      return 0;
    }
    uVar8 = fn_00144810(DAT_008977e8);
    fn_001cc118(uVar8,0);
    *param_1 = 0xe;
    uVar8 = fn_0068c700(DAT_008977e8);
    fn_001fe830(uVar8,1);
    return 0;
  case 0xe:
    fn_0068c700(DAT_008977e8);
    iVar7 = fn_00201384();
    if (iVar7 != 0) {
      return 0;
    }
    fn_0068c700(DAT_008977e8);
    fn_001fedc0();
    iVar7 = fn_00145b00(8,&DAT_00812c8c);
    uVar8 = 0;
    if (iVar7 != 0) {
      uVar8 = fn_0032ea2c();
    }
    *param_2 = uVar8;
    return 0;
  case 0xf:
    if (*(int *)(DAT_00897808 + 0x14) != *(int *)(DAT_00897808 + 0xc)) {
      return 0;
    }
    uVar4 = fn_0068c6b8(DAT_008977e8);
    uVar5 = fn_0014481c(DAT_008977e8);
    uVar6 = fn_0068eb30(DAT_008977e8);
    fn_0024a9d4(uVar6,uVar5,uVar4,1);
    uVar4 = fn_0068c6b8(DAT_008977e8);
    uVar5 = fn_0014481c(DAT_008977e8);
    uVar6 = fn_0068eb30(DAT_008977e8);
    fn_0024b7e4(uVar6,uVar5,uVar4,0x17b);
    uVar1 = 0x10;
    break;
  case 0x10:
    fn_0068c6f4(DAT_008977e8);
    fn_001fd748();
    fn_0068e988(DAT_008977e8);
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23d) = 1;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23e) = 1;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x23f) = 1;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x240) = 1;
    fn_0014481c(DAT_008977e8);
    iVar7 = fn_00263814();
    *(undefined1 *)(iVar7 + 0x241) = 1;
    uVar8 = fn_0068c700(DAT_008977e8);
    fn_001fe9f8(uVar8,1);
    uVar8 = fn_0068c700(DAT_008977e8);
    fn_001fea78(uVar8,1);
    uVar8 = fn_0068c700(DAT_008977e8);
    fn_001fea48(uVar8,1);
    uVar8 = 1;
  default:
    goto switchD_0032d7bc_default;
  }
  *param_1 = uVar1;
switchD_0032d7bc_default:
  return uVar8;
}


