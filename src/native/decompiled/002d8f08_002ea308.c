#include "002d8f08_002ea308.h"



void fn_002ea308(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  if (param_1 < 10000) {
    iVar3 = DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48;
  }
  else {
    iVar3 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  sVar2 = *(short *)(iVar3 + 2);
  if (param_1 < 10000) {
    cVar1 = *(char *)(DAT_00892854 + *(short *)(DAT_00892858 + param_1 * 2) * 0x48 + 6);
  }
  else {
    iVar3 = fn_0014cd2c(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
    cVar1 = *(char *)(iVar3 + 4);
  }
  if (cVar1 == -1) {
    fn_0066173c((int)sVar2);
    return;
  }
  return;
}



undefined4 fn_002de6e4(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  pcVar2 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar3 = fn_006afe0c(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if (iVar3 == 0) {
    cVar1 = *pcVar2;
    if ((((cVar1 == 'O' || cVar1 == 'L') || (**(int **)(DAT_008977e0 + 0x40) != 0)) ||
        ((cVar1 == 'C' && (uVar5 = fn_00163d44(0), uVar5 < 9)))) ||
       (*pcVar2 == 'Z' || *pcVar2 == 'D')) {
      uVar4 = fn_0022f584(DAT_00891d24,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      return 1;
    }
    iVar3 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
    if (iVar3 == 0) {
      uVar4 = fn_0022f584(DAT_00891d28,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      uVar4 = fn_0022f584(DAT_00891d2c,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      return 1;
    }
    iVar3 = fn_00154ac8(0x1b4);
    if ((iVar3 != 0) || (iVar3 = fn_00147e6c(pcVar2,&DAT_002de898,3), iVar3 == 0)) {
      uVar4 = fn_0022f584(DAT_00891d18,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      return 1;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = fn_0022f584(DAT_00891d1c,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
    uVar4 = fn_0022f584(DAT_00891d20,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
    uVar4 = 1;
  }
  return uVar4;
}



void fn_002da2b8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined1 auStack_220 [260];
  uint local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_dc [32];
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [68];
  
  fn_006f7a0c(DAT_008977e0);
  iVar2 = fn_006f637c();
  if (((iVar2 != 0) && (iVar2 = fn_002dbc18(), iVar2 == 0)) ||
     (iVar2 = fn_002d8370(0xffffffff), iVar2 != 0)) {
    uVar4 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar4);
    if (iVar2 != 9) {
      uVar3 = fn_006f7a0c(DAT_008977e0);
      iVar2 = fn_006f6434(uVar3,uVar4);
      if (iVar2 != 2) {
        fn_00101a50(auStack_220,0x100,L"rom:/data/Field/Crack/CrackPlaceTbl_%c.xbb",
                     *(undefined4 *)(param_1 + 0x40));
        uVar4 = fn_00118290();
        uVar4 = fn_0011c184(auStack_220,uVar4,0x80,5);
        *(undefined4 *)(param_1 + 0x48) = uVar4;
        uVar4 = fn_00145ac0();
        fn_00118624(auStack_70,uVar4);
        local_11c = fn_006edeb4(auStack_70);
        uVar7 = 0;
        uVar6 = 0;
        if (local_11c != 0) {
          uVar4 = 0;
          do {
            fn_00692eac(auStack_78);
            local_74 = fn_006edd88(auStack_70,uVar6);
            local_80 = uVar4;
            local_7c = uVar4;
            uVar3 = fn_006ede0c(auStack_70,uVar6);
            fn_0019bc50(&local_80,uVar3);
            uVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),&local_80);
            fn_00183718(&local_118,auStack_78,&DAT_002da524);
            uVar1 = local_118;
            local_228 = local_104;
            uStack_224 = local_100;
            uVar5 = 0;
            uStack_238 = local_114;
            uStack_234 = local_110;
            uStack_230 = local_10c;
            uStack_22c = local_108;
            uVar8 = uVar7;
            if (local_118 != 0) {
              do {
                fn_00176ec8(auStack_68,&uStack_238,uVar5);
                fn_0017821c(auStack_dc,auStack_68,0x44);
                local_8c = uVar4;
                local_88 = uVar4;
                iVar2 = fn_00102d28(auStack_dc,(char *)&DAT_002da528,&local_84,&local_88,&local_8c);
                uVar7 = uVar8;
                if (0 < iVar2) {
                  local_104 = 0xffffffff;
                  local_10c = 0xffffffff;
                  local_108 = 0xffffffff;
                  local_f0 = 0xffffffff;
                  local_114 = local_84;
                  local_fc = local_88;
                  uVar7 = uVar8 + 1;
                  local_f8 = local_8c;
                  local_ec = local_bc;
                  uStack_e8 = uStack_b8;
                  uStack_e4 = uStack_b4;
                  local_118 = uVar8;
                  local_110 = uVar4;
                  local_100 = uVar3;
                  local_f4 = uVar4;
                  fn_00788c1c(param_1 + 4,&local_118);
                }
                uVar5 = uVar5 + 1;
                uVar8 = uVar7;
              } while (uVar5 < uVar1);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_11c);
        }
        fn_005f5d3c(auStack_70);
      }
    }
  }
  return;
}



void fn_002d8f08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_008977e0;
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x3f) = 1;
    break;
  case 2:
    iVar1 = fn_006f75ac(DAT_008977e0);
    iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
    if (iVar1 == 0) {
      iVar1 = fn_002dbe28();
      if (((iVar1 != 0) && (*(char *)(param_1 + 0x3e) == '\0')) &&
         (iVar1 = fn_00154ac8(0x22), iVar1 != 0)) {
        uVar4 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar4,0,0,1,0);
        uVar4 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d92b4);
        uVar3 = fn_006f75ac(DAT_008977e0);
        fn_0038fee8(uVar3,uVar4);
        uVar4 = fn_0016ba34(DAT_00897800,DAT_00898224,(char *)&DAT_002d92cc,0);
        uVar3 = fn_006f75ac(DAT_008977e0);
        fn_0016b4ec(uVar3,uVar4);
        uVar4 = 3;
        goto LAB_002d9458;
      }
      fn_00698fb8(DAT_008977e0,0xffffffff);
      *(undefined4 *)(param_1 + 0x18) = 5;
      uVar4 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar4,0);
      if (*(char *)(param_1 + 0x3f) != '\0') goto LAB_002d906c;
    }
    break;
  case 3:
    iVar1 = fn_006f75ac(DAT_008977e0);
    iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
    if (iVar1 == 0) {
      fn_00698fb8(DAT_008977e0,0xffffffff);
      *(undefined4 *)(param_1 + 0x18) = 5;
      uVar4 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar4,0);
      if (*(char *)(param_1 + 0x3f) == '\0') {
        return;
      }
LAB_002d906c:
      fn_001c7e38(*(undefined4 *)(param_1 + 0x5c));
      *(undefined1 *)(param_1 + 0x3f) = 0;
      return;
    }
    break;
  case 4:
    if (*(char *)(DAT_008977e0 + 0x170) == -1) {
      iVar1 = fn_002dbc64();
      if (iVar1 != 0) {
        fn_00698fb8(DAT_008977e0,1);
        uVar4 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar4,0,0,1,0);
        uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d92e4);
        fn_0038fee8(uVar4,uVar3);
        uVar4 = 2;
        goto LAB_002d9458;
      }
      *(undefined4 *)(param_1 + 0x18) = 5;
    }
    break;
  case 5:
    iVar1 = fn_006cc1e4(*(undefined4 *)(DAT_008977e0 + 0x50));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 9;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 1) {
LAB_002d9190:
      if ((**(int **)(DAT_008977e0 + 0x40) == 0) &&
         ((iVar1 = fn_002dbc64(), iVar1 == 0 && (iVar1 = fn_002dbdb4(), iVar1 == 0)))) {
        fn_006f7508(DAT_008977e0);
        iVar1 = fn_00366efc();
        if (iVar1 == 0) {
LAB_002d91fc:
          *(undefined1 *)(param_1 + 0x3d) = 1;
        }
      }
    }
    else if (iVar1 == 2) {
      iVar1 = fn_002dbb4c();
      if (iVar1 != 0) goto LAB_002d91fc;
    }
    else if ((iVar1 != 3) && (iVar1 == 4)) goto LAB_002d9190;
    if (*(char *)(param_1 + 0x3d) == '\0') {
      if (*(char *)(param_1 + 0x73) != '\0') {
        iVar1 = fn_006f75ac(DAT_008977e0);
        iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
        if (iVar1 == 0) {
          uVar4 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d92fc);
          fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar4);
          *(undefined1 *)(param_1 + 0x73) = 0;
          return;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 7;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      piVar2 = (int *)fn_006f72e0(DAT_008977e0);
      iVar1 = (**(code **)(*piVar2 + 0x3c))();
      if (iVar1 != 0) {
        piVar2 = (int *)fn_006f72e0(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x002d9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x38))();
        return;
      }
    }
    break;
  case 6:
    iVar1 = fn_006f75ac(DAT_008977e0);
    iVar1 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
    if (iVar1 == 0) {
LAB_002d9460:
      *(undefined4 *)(param_1 + 0x18) = 8;
      return;
    }
    break;
  case 7:
    fn_00698fb8(DAT_008977e0,1);
    iVar1 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 < 0x1f) {
      return;
    }
    piVar2 = (int *)fn_006f72e0(DAT_008977e0);
    iVar1 = (**(code **)(*piVar2 + 0x50))();
    if (iVar1 != 0) {
      return;
    }
    fn_006f7a84(DAT_008977e0);
    fn_001ea9c0();
    fn_006f7a84(DAT_008977e0);
    fn_001dd0a0();
    iVar1 = fn_002dbe28();
    if ((iVar1 != 0) || (iVar1 = fn_002dbdb4(), iVar1 != 0)) goto LAB_002d9460;
    uVar4 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar4,0,0,1,0);
    iVar1 = fn_002dbc64();
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x71) != '\0') goto LAB_002d9410;
      uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d9518);
      fn_0038fee8(uVar4,uVar3);
    }
    else if (*(char *)(param_1 + 0x71) == '\0') {
      uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),(char *)&DAT_002d94e4);
      fn_0038fee8(uVar4,uVar3);
    }
    else {
LAB_002d9410:
      uVar3 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0x14),
                           (char *)&DAT_002d94f8);
      fn_0038fee8(uVar4,uVar3);
    }
    uVar4 = 6;
LAB_002d9458:
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    return;
  case 8:
    if (**(int **)(DAT_008977e0 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
      fn_006979b0(iVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),iVar1,
                   param_4);
    }
    else {
      fn_002a6ed8((*(int **)(DAT_008977e0 + 0x40))[4],1);
      fn_00698fb8(DAT_008977e0,0xffffffff);
    }
    uVar4 = 10;
    goto LAB_002d9458;
  }
  return;
}


