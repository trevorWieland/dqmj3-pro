#include "0023c5b0_0023c898.h"



void fn_0023c898(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *extraout_r1;
  int *piVar3;
  int *extraout_r1_00;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int local_40;
  int local_3c;
  int *local_30;
  
  fn_004b5030(&local_40,param_1);
  fn_00786e18(param_2);
  piVar4 = (int *)*local_30;
  piVar3 = extraout_r1;
  if (piVar4 != local_30) {
    do {
      uVar8 = fn_006d27ac(piVar4 + 2,piVar3);
      piVar3 = (int *)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) {
        piVar5 = (int *)param_2[1];
        iVar7 = param_2[4];
        if (piVar5 == (int *)0x0) {
          if (param_2[2] == param_2[3]) {
            if (*param_2 == 0) {
              uVar6 = 0x20;
            }
            else {
              uVar1 = *(uint *)(*param_2 + 4);
              uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
              if (uVar6 < uVar1 + 0x20) {
                uVar6 = uVar1 + 0x20;
              }
            }
            piVar3 = (int *)fn_0015ece0(0xc);
            iVar2 = fn_0015ece0(uVar6 * 0x78);
            piVar3[2] = iVar2;
            *piVar3 = *param_2;
            piVar3[1] = uVar6;
            *param_2 = (int)piVar3;
            iVar2 = piVar3[2];
            param_2[2] = iVar2;
            param_2[3] = iVar2 + uVar6 * 0x78;
          }
          piVar5 = (int *)param_2[2];
          piVar3 = piVar5 + 0x1e;
          param_2[2] = (int)piVar3;
        }
        else {
          piVar3 = (int *)*piVar5;
          param_2[1] = (int)piVar3;
        }
        if (piVar5 != (int *)0xfffffff8) {
          fn_0048c758();
          piVar3 = extraout_r1_00;
        }
        *piVar5 = iVar7;
        piVar5[1] = *(int *)(iVar7 + 4);
        **(undefined4 **)(iVar7 + 4) = piVar5;
        *(int **)(iVar7 + 4) = piVar5;
        param_2[5] = param_2[5] + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != local_30);
  }
  if (local_30 != (int *)0x0) {
    fn_00786e18(&local_40);
    *local_30 = local_3c;
    piVar3 = (int *)local_40;
    while (piVar3 != (int *)0x0) {
      local_40 = *piVar3;
      fn_0014f1bc(piVar3[2]);
      fn_0014f1bc(piVar3);
      piVar3 = (int *)local_40;
    }
  }
  return;
}



undefined1 * fn_0023c618(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_5d8 [96];
  undefined1 auStack_578 [336];
  undefined4 local_428;
  undefined1 auStack_420 [8];
  undefined4 local_418;
  undefined1 local_414;
  undefined1 local_413;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 auStack_3f0 [968];
  
  iVar1 = fn_0066eb80(DAT_00898840,3);
  iVar4 = param_2 + 0x558;
  fn_0017821c(auStack_5d8,iVar4,0x1b0);
  local_428 = *(undefined4 *)(param_2 + 0x708);
  iVar2 = fn_004b9b4c(auStack_420,param_2 + 0x710);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_2 + 0x718);
  *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(param_2 + 0x71c);
  *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(param_2 + 0x71d);
  uVar5 = *(undefined4 *)(param_2 + 0x724);
  uVar6 = *(undefined4 *)(param_2 + 0x728);
  uVar7 = *(undefined4 *)(param_2 + 0x72c);
  uVar8 = *(undefined4 *)(param_2 + 0x730);
  uVar9 = *(undefined4 *)(param_2 + 0x734);
  uVar10 = *(undefined4 *)(param_2 + 0x738);
  uVar11 = *(undefined4 *)(param_2 + 0x73c);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 0x720);
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  *(undefined4 *)(iVar2 + 0x18) = uVar6;
  *(undefined4 *)(iVar2 + 0x1c) = uVar7;
  *(undefined4 *)(iVar2 + 0x20) = uVar8;
  *(undefined4 *)(iVar2 + 0x24) = uVar9;
  *(undefined4 *)(iVar2 + 0x28) = uVar10;
  *(undefined4 *)(iVar2 + 0x2c) = uVar11;
  fn_0017821c(iVar2 + 0x30,param_2 + 0x740,0x3c0);
  if ((*(char *)(param_2 + 0xb00) != '\0') && (iVar2 = fn_006b8b58(param_3,local_428), iVar2 != 0))
  {
    fn_0017821c(auStack_3f0,iVar2,0x3c0);
    fn_0017821c(iVar4,auStack_5d8,0x1b0);
    *(undefined4 *)(param_2 + 0x708) = local_428;
    fn_0014f510(param_2 + 0x710,auStack_420);
    *(undefined4 *)(param_2 + 0x718) = local_418;
    *(undefined1 *)(param_2 + 0x71c) = local_414;
    *(undefined1 *)(param_2 + 0x71d) = local_413;
    *(undefined4 *)(param_2 + 0x720) = local_410;
    *(undefined4 *)(param_2 + 0x724) = uStack_40c;
    *(undefined4 *)(param_2 + 0x728) = uStack_408;
    *(undefined4 *)(param_2 + 0x72c) = uStack_404;
    *(undefined4 *)(param_2 + 0x730) = uStack_400;
    *(undefined4 *)(param_2 + 0x734) = uStack_3fc;
    *(undefined4 *)(param_2 + 0x738) = uStack_3f8;
    *(undefined4 *)(param_2 + 0x73c) = uStack_3f4;
    fn_0017821c(param_2 + 0x740,auStack_3f0,0x3c0);
    fn_005fc96c(param_2,0);
  }
  if ((*(char *)(param_2 + 0xb01) != '\0') &&
     (puVar3 = (undefined4 *)fn_006b8bf4(param_3,local_428), puVar3 != (undefined4 *)0x0)) {
    local_410 = *puVar3;
    uStack_40c = puVar3[1];
    uStack_408 = puVar3[2];
    uStack_404 = puVar3[3];
    uStack_400 = puVar3[4];
    uStack_3fc = puVar3[5];
    uStack_3f8 = puVar3[6];
    uStack_3f4 = puVar3[7];
    fn_0017821c(iVar4,auStack_5d8,0x1b0);
    *(undefined4 *)(param_2 + 0x708) = local_428;
    fn_0014f510(param_2 + 0x710,auStack_420);
    *(undefined4 *)(param_2 + 0x718) = local_418;
    *(undefined1 *)(param_2 + 0x71c) = local_414;
    *(undefined1 *)(param_2 + 0x71d) = local_413;
    *(undefined4 *)(param_2 + 0x720) = local_410;
    *(undefined4 *)(param_2 + 0x724) = uStack_40c;
    *(undefined4 *)(param_2 + 0x728) = uStack_408;
    *(undefined4 *)(param_2 + 0x72c) = uStack_404;
    *(undefined4 *)(param_2 + 0x730) = uStack_400;
    *(undefined4 *)(param_2 + 0x734) = uStack_3fc;
    *(undefined4 *)(param_2 + 0x738) = uStack_3f8;
    *(undefined4 *)(param_2 + 0x73c) = uStack_3f4;
    fn_0017821c(param_2 + 0x740,auStack_3f0,0x3c0);
    fn_005fc980(param_2,0);
  }
  if ((param_1 != 0) && (iVar2 = fn_0066e158(DAT_00898840), iVar2 == 0)) {
    if (*(char *)(param_2 + 0xb00) == '\0') {
      if (*(char *)(param_2 + 0xb01) == '\0') goto LAB_0023c84c;
      if (*(char *)(param_3 + 8) == '\0') {
        fn_0038e4b4(param_3,local_428);
      }
    }
    else if (*(char *)(param_3 + 8) == '\0') {
      fn_0038e440(param_3,local_428);
    }
    fn_0038e594(param_3);
  }
LAB_0023c84c:
  if (*(int *)(iVar1 + 0x44) == 0xe) {
    DAT_00899304 = 0x1e;
  }
  else if (DAT_00899304 != 0) {
    DAT_00899304 = DAT_00899304 + -1;
  }
  *(bool *)(param_2 + 0xb04) = DAT_00899304 != 0;
  return auStack_578;
}



undefined1 * fn_0023c5b0(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_5d8 [96];
  undefined1 auStack_578 [336];
  undefined4 uStack_428;
  undefined1 auStack_420 [8];
  undefined4 uStack_418;
  undefined1 uStack_414;
  undefined1 uStack_413;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined1 auStack_3f0 [976];
  
  iVar4 = *(int *)(param_1 + 0xe4);
  if (*(int *)(param_1 + 0x100) == *(int *)(iVar4 + 0x708)) {
    if (9 < *(int *)(param_1 + 0xfc)) {
      iVar5 = *(int *)(param_1 + 0xf4);
      iVar1 = fn_0066eb80(DAT_00898840,3);
      iVar6 = iVar4 + 0x558;
      fn_0017821c(auStack_5d8,iVar6,0x1b0);
      uStack_428 = *(undefined4 *)(iVar4 + 0x708);
      iVar2 = fn_004b9b4c(auStack_420,iVar4 + 0x710);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 0x718);
      *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar4 + 0x71c);
      *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(iVar4 + 0x71d);
      uVar7 = *(undefined4 *)(iVar4 + 0x724);
      uVar8 = *(undefined4 *)(iVar4 + 0x728);
      uVar9 = *(undefined4 *)(iVar4 + 0x72c);
      uVar10 = *(undefined4 *)(iVar4 + 0x730);
      uVar11 = *(undefined4 *)(iVar4 + 0x734);
      uVar12 = *(undefined4 *)(iVar4 + 0x738);
      uVar13 = *(undefined4 *)(iVar4 + 0x73c);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar4 + 0x720);
      *(undefined4 *)(iVar2 + 0x14) = uVar7;
      *(undefined4 *)(iVar2 + 0x18) = uVar8;
      *(undefined4 *)(iVar2 + 0x1c) = uVar9;
      *(undefined4 *)(iVar2 + 0x20) = uVar10;
      *(undefined4 *)(iVar2 + 0x24) = uVar11;
      *(undefined4 *)(iVar2 + 0x28) = uVar12;
      *(undefined4 *)(iVar2 + 0x2c) = uVar13;
      fn_0017821c(iVar2 + 0x30,iVar4 + 0x740,0x3c0);
      if ((*(char *)(iVar4 + 0xb00) != '\0') && (iVar2 = fn_006b8b58(iVar5,uStack_428), iVar2 != 0)
         ) {
        fn_0017821c(auStack_3f0,iVar2,0x3c0);
        fn_0017821c(iVar6,auStack_5d8,0x1b0);
        *(undefined4 *)(iVar4 + 0x708) = uStack_428;
        fn_0014f510(iVar4 + 0x710,auStack_420);
        *(undefined4 *)(iVar4 + 0x718) = uStack_418;
        *(undefined1 *)(iVar4 + 0x71c) = uStack_414;
        *(undefined1 *)(iVar4 + 0x71d) = uStack_413;
        *(undefined4 *)(iVar4 + 0x720) = uStack_410;
        *(undefined4 *)(iVar4 + 0x724) = uStack_40c;
        *(undefined4 *)(iVar4 + 0x728) = uStack_408;
        *(undefined4 *)(iVar4 + 0x72c) = uStack_404;
        *(undefined4 *)(iVar4 + 0x730) = uStack_400;
        *(undefined4 *)(iVar4 + 0x734) = uStack_3fc;
        *(undefined4 *)(iVar4 + 0x738) = uStack_3f8;
        *(undefined4 *)(iVar4 + 0x73c) = uStack_3f4;
        fn_0017821c(iVar4 + 0x740,auStack_3f0,0x3c0);
        fn_005fc96c(iVar4,0);
      }
      if ((*(char *)(iVar4 + 0xb01) != '\0') &&
         (puVar3 = (undefined4 *)fn_006b8bf4(iVar5,uStack_428), puVar3 != (undefined4 *)0x0)) {
        uStack_410 = *puVar3;
        uStack_40c = puVar3[1];
        uStack_408 = puVar3[2];
        uStack_404 = puVar3[3];
        uStack_400 = puVar3[4];
        uStack_3fc = puVar3[5];
        uStack_3f8 = puVar3[6];
        uStack_3f4 = puVar3[7];
        fn_0017821c(iVar6,auStack_5d8,0x1b0);
        *(undefined4 *)(iVar4 + 0x708) = uStack_428;
        fn_0014f510(iVar4 + 0x710,auStack_420);
        *(undefined4 *)(iVar4 + 0x718) = uStack_418;
        *(undefined1 *)(iVar4 + 0x71c) = uStack_414;
        *(undefined1 *)(iVar4 + 0x71d) = uStack_413;
        *(undefined4 *)(iVar4 + 0x720) = uStack_410;
        *(undefined4 *)(iVar4 + 0x724) = uStack_40c;
        *(undefined4 *)(iVar4 + 0x728) = uStack_408;
        *(undefined4 *)(iVar4 + 0x72c) = uStack_404;
        *(undefined4 *)(iVar4 + 0x730) = uStack_400;
        *(undefined4 *)(iVar4 + 0x734) = uStack_3fc;
        *(undefined4 *)(iVar4 + 0x738) = uStack_3f8;
        *(undefined4 *)(iVar4 + 0x73c) = uStack_3f4;
        fn_0017821c(iVar4 + 0x740,auStack_3f0,0x3c0);
        fn_005fc980(iVar4,0);
      }
      if ((param_2 != 0) && (iVar2 = fn_0066e158(DAT_00898840), iVar2 == 0)) {
        if (*(char *)(iVar4 + 0xb00) == '\0') {
          if (*(char *)(iVar4 + 0xb01) == '\0') goto LAB_0023c84c;
          if (*(char *)(iVar5 + 8) == '\0') {
            fn_0038e4b4(iVar5,uStack_428);
          }
        }
        else if (*(char *)(iVar5 + 8) == '\0') {
          fn_0038e440(iVar5,uStack_428);
        }
        fn_0038e594(iVar5);
      }
LAB_0023c84c:
      if (*(int *)(iVar1 + 0x44) == 0xe) {
        DAT_00899304 = 0x1e;
      }
      else if (DAT_00899304 != 0) {
        DAT_00899304 = DAT_00899304 + -1;
      }
      *(bool *)(iVar4 + 0xb04) = DAT_00899304 != 0;
      return auStack_578;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar4 + 0x708);
  }
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  return param_1;
}


