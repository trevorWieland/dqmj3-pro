#include "002c45d8_002d01a4.h"



void fn_002d01a4(int param_1,int *param_2)

{
  int iVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  undefined4 uVar3;
  float in_s2;
  float fVar4;
  float local_20;
  float local_1c;
  float fStack_18;
  
  fVar4 = 0.033333335;
  if (*(char *)(param_1 + 0xc) != '\0') {
    in_s2 = (float)param_2[3];
    iVar1 = param_2[4];
    *(int *)(param_1 + 0x10) = param_2[2];
    *(float *)(param_1 + 0x14) = in_s2;
    *(int *)(param_1 + 0x18) = iVar1;
    in_s0 = (in_s2 - *(float *)(*(int *)(param_1 + 4) + 0xc)) * 0.033333335 + 6.0;
    *(float *)(param_1 + 0x20) = in_s0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    fn_006f7df8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3)
    ;
    local_20 = *(float *)(param_1 + 0x10) + (in_s0 - *(float *)(param_1 + 0x10)) * fVar2 * fVar4;
    fVar4 = *(float *)(param_1 + 0x18) + (in_s2 - *(float *)(param_1 + 0x18)) * fVar2 * fVar4;
    local_1c = (float)param_2[3] + *(float *)(param_1 + 0x20);
    fStack_18 = fVar4;
    (**(code **)(*param_2 + 0x1c))(param_2,&local_20);
  }
  else {
    fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3)
    ;
    local_20 = *(float *)(param_1 + 0x10) +
               (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x10)) * fVar4 * 0.033333335;
    fVar4 = *(float *)(param_1 + 0x18) +
            (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x18)) * fVar4 * 0.033333335;
    local_1c = (float)param_2[3] + *(float *)(param_1 + 0x20);
    fStack_18 = fVar4;
    (**(code **)(*param_2 + 0x1c))(param_2,&local_20);
  }
  uVar3 = 0x3ecccccd;
  fVar2 = *(float *)(param_1 + 0x20) - 0.4;
  *(float *)(param_1 + 0x20) = fVar2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar1 = fn_006f8444(*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    fn_006f7df8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    *(float *)(param_1 + 0x28) = fVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(float *)(param_1 + 0x30) = fVar4;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (*(int *)(param_1 + 0x1c) < 0x1e) {
    return;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    fn_006a08dc(*(undefined4 *)(param_1 + 4),param_2);
    return;
  }
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = fn_002cfa2c();
  }
  fn_002cfa60(param_2,uVar3);
  return;
}



undefined4 fn_002c67e4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  wchar16 *local_78;
  char *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  int local_68;
  undefined1 local_64;
  undefined1 local_61;
  uint local_5c;
  uint local_58;
  int local_54;
  undefined1 local_4e;
  uint local_48;
  uint uStack_44;
  int local_40;
  undefined1 local_3c;
  undefined1 local_3a;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_24;
  undefined1 local_1b;
  
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_00894eb0) goto LAB_002c6830;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_002c6830:
  *(undefined4 **)(param_1 + 0x108) = puVar9;
  if ((puVar9[0x22] == 0x1b) && (*(char *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x60) != '\0')
     ) {
    *(undefined1 *)(param_1 + 0x118) = 1;
    fn_001f825c();
  }
  fn_00430b08(&local_78);
  local_74 = "ride_mon_select.bflyt";
  local_78 = L"rom:/data/Layout/menu/colosseum_reception/lower/ride_mon_select.arc";
  local_30 = 4;
  uStack_2c = 0;
  *local_70 = *(undefined4 *)(*(int *)(param_1 + 0x108) + 8);
  local_61 = 0;
  local_64 = 1;
  local_4e = 0;
  local_3a = 1;
  local_3c = 1;
  local_1b = 0;
  fn_0042fa70(param_1,&local_78);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  (**(code **)**(undefined4 **)(param_1 + 0x9c))(*(undefined4 **)(param_1 + 0x9c),0);
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  uVar3 = fn_00172c98(uVar2,(char *)&DAT_002c6c20);
  iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_002b20c0(iVar4,*(undefined4 *)(param_1 + 4),uVar3,1,
                                 *(undefined4 *)(param_1 + 0x48),1,0);
  }
  piVar8 = *(int **)(param_1 + 0xf0);
  if (piVar8 != piVar5) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0xf0) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0xf0) + 0x10))();
  fn_002b20a4(*(undefined4 *)(param_1 + 0xf0),0);
  uVar3 = fn_00172c98(uVar2,(char *)&DAT_002c6c30);
  iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)fn_002b20c0(iVar4,*(undefined4 *)(param_1 + 4),uVar3,1,
                                 *(undefined4 *)(param_1 + 0x48),1,0);
  }
  piVar8 = *(int **)(param_1 + 0xf4);
  if (piVar8 != piVar5) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    *(int **)(param_1 + 0xf4) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0xf4) + 0x10))();
  fn_002b20a4(*(undefined4 *)(param_1 + 0xf4),0);
  iVar4 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_001caa80(iVar4,*(undefined4 *)(param_1 + 4),1);
  }
  piVar8 = *(int **)(param_1 + 0x100);
  if (piVar8 != piVar5) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0x100) = piVar5;
  }
  *(int *)(*(int *)(param_1 + 0x100) + 8) = param_1;
  (**(code **)(**(int **)(param_1 + 0x100) + 0x24))(*(int **)(param_1 + 0x100),2,1);
  *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x45) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x44) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10) = 0x100094e;
  fn_001c9d44(*(undefined4 *)(param_1 + 0x100),0,*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x1c));
  fn_001c9d44(*(undefined4 *)(param_1 + 0x100),1,*(undefined4 *)(*(int *)(param_1 + 0xf4) + 0x1c),0
              );
  *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x46) = 0;
  fn_00245330(param_1,*(undefined4 *)(param_1 + 0x100));
  uVar3 = fn_00172c98(uVar2,&DAT_002c6c40);
  iVar4 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_00243834(iVar4,*(undefined4 *)(param_1 + 4),uVar3,1,
                                 *(undefined4 *)(param_1 + 0x48));
  }
  piVar8 = *(int **)(param_1 + 0xf8);
  if (piVar8 != piVar5) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0xf8) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0xf8) + 0x10))();
  uVar3 = fn_00231cb8((&DAT_007c7254)[*(int *)(param_1 + 0x10c)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xf8),uVar3);
  uVar2 = fn_00172c98(uVar2,(char *)&DAT_002c6c50);
  iVar4 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_0031fee0(iVar4,*(undefined4 *)(param_1 + 4),uVar2,1,
                                 *(undefined4 *)(param_1 + 0x48));
  }
  piVar8 = *(int **)(param_1 + 0xfc);
  if (piVar8 != piVar5) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(param_1 + 0xfc) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))();
  fn_0031f8fc(*(undefined4 *)(param_1 + 0xfc),0,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0xfc);
  *(undefined1 *)(iVar4 + 0x81) = 1;
  fn_0031f3f4(iVar4,0);
  iVar4 = *(int *)(param_1 + 0xfc);
  *(undefined1 *)(iVar4 + 0x83) = 0;
  fn_0031f954(iVar4,0);
  if ('\0' < *(char *)(*(int *)(param_1 + 0x108) + 0x78)) {
    fn_002c6674(param_1);
  }
  iVar4 = 0;
  do {
    iVar6 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),iVar4);
    iVar4 = iVar4 + 1;
    if (iVar6 != 0) {
      *(undefined1 *)(iVar6 + 0x41) = 1;
    }
  } while (iVar4 < 0xc);
  iVar4 = *(int *)(*(int *)(param_1 + 0x9c) + 0x28);
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x41) = 1;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x41) = 1;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x80);
  puVar9 = (undefined4 *)fn_001f74d8(param_1,uVar2);
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_008951dc) goto LAB_002c6d38;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_002c6d38:
  *(undefined4 **)(param_1 + 0x104) = puVar9;
  fn_00689930(param_1,uVar2,0);
  fn_002c6500(param_1);
  if (local_24 != &DAT_008f9cf4) {
    piVar5 = local_24 + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  uVar7 = local_48;
  if (uStack_44 < local_48) {
    do {
      uVar7 = uVar7 + 4;
    } while (uVar7 != uStack_44);
  }
  fn_001008c4(local_48,(int)(local_40 - local_48) >> 2,0);
  uVar7 = local_5c;
  if (local_58 < local_5c) {
    do {
      uVar7 = uVar7 + 4;
    } while (uVar7 != local_58);
  }
  fn_001008c4(local_5c,(int)(local_54 - local_5c) >> 2,0);
  puVar9 = local_70;
  if (local_6c <= local_70) {
    for (; puVar9 != local_6c; puVar9 = puVar9 + 1) {
    }
  }
  fn_001008c4(local_70,local_68 - (int)local_70 >> 2,0);
  return 1;
}



void fn_002c5fc8(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar3 = fn_006c5114(*(undefined4 *)(param_1 + 0xb0),
                       param_2 + *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) * 10);
  iVar7 = *(int *)(iVar3 + 8);
  cVar2 = *(char *)(iVar3 + 5);
  sVar1 = (short)iVar7;
  if (cVar2 == '\0') {
    uVar4 = fn_00230f5c((int)sVar1);
  }
  else {
    uVar4 = fn_00230ed4();
  }
  if (iVar7 == 0x270e || iVar7 == 9999) {
    piVar5 = (int *)fn_006f72e0(DAT_008977e0);
    if (cVar2 == '\0') {
      uVar6 = fn_00231388((int)sVar1);
    }
    else {
      uVar6 = fn_00230730();
    }
    (**(code **)(*piVar5 + 0x90))(piVar5,uVar6,uVar4,1);
    piVar5 = (int *)fn_006f72e0(DAT_008977e0);
    (**(code **)(*piVar5 + 0xa4))(piVar5,*(int *)(iVar3 + 8) == 9999);
  }
  else {
    piVar5 = (int *)fn_006f72e0(DAT_008977e0);
    if (cVar2 == '\0') {
      uVar6 = fn_00231388((int)sVar1);
    }
    else {
      uVar6 = fn_00230730();
    }
    (**(code **)(*piVar5 + 0x90))(piVar5,uVar6,uVar4,0);
  }
  if ((*(char *)(param_1 + 0xb8) == '\0') && (*(char *)(param_1 + 0xc1) != '\0')) {
    uVar4 = fn_0023070c((char *)&DAT_002c6174);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0xb8) = 4;
  }
  return;
}



void fn_002c45d8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_00172c98(param_2,&DAT_002c4688);
  if (iVar1 != 0) {
    iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_00243834(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                   (int)*(char *)(param_3 + 0x2f));
    }
    piVar4 = *(int **)(param_1 + 0xa4);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0xa4) = piVar3;
    }
    (**(code **)(**(int **)(param_1 + 0xa4) + 0x10))();
    if (*(char *)(param_3 + 0x2f) != '\0') {
      fn_00243550(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_3 + 0x24));
      return;
    }
  }
  return;
}


