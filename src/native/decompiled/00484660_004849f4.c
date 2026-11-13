#include "00484660_004849f4.h"



void fn_004849f4(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  piVar5 = (int *)param_1[0x5f];
  if (piVar5 != (int *)0x0) {
    param_3 = -1;
    param_4 = (uint *)(piVar5 + 1);
  }
  *param_1 = &PTR_FUN_00853958;
  if (piVar5 != (int *)0x0) {
    do {
      uVar2 = *param_4 + param_3;
      bVar9 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar9);
    *param_4 = uVar2;
    bVar9 = uVar2 == 0;
    if (bVar9) {
      uVar2 = (uint)*(byte *)(piVar5 + 2);
    }
    if (bVar9 && uVar2 == 0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  piVar5 = (int *)param_1[0x60];
  if (piVar5 != (int *)0x0) {
    piVar3 = piVar5 + 1;
    do {
      iVar7 = *piVar3 + -1;
      bVar9 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar9);
    *piVar3 = iVar7;
    if (iVar7 == 0) {
      piVar3 = (int *)(uint)*(byte *)(piVar5 + 2);
    }
    if (iVar7 == 0 && piVar3 == (int *)0x0) {
      *(undefined1 *)(piVar5 + 2) = 1;
      (**(code **)(*piVar5 + 4))(piVar5);
    }
  }
  iVar7 = fn_00786480(param_1 + 100);
  iVar7 = fn_00456728(iVar7 + -0x78);
  iVar7 = fn_00456728(iVar7 + -0x60);
  piVar3 = (int *)(iVar7 + -0x1c);
  piVar5 = *(int **)(iVar7 + -0xc);
  if (piVar5 != (int *)0x0) {
    piVar8 = (int *)*piVar5;
    while (piVar1 = piVar8, piVar1 != piVar5) {
      piVar8 = *(int **)(iVar7 + -0xc);
      if (piVar1 != *(int **)(iVar7 + -0xc)) {
        piVar8 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar8;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(iVar7 + -8) = *(int *)(iVar7 + -8) + -1;
        (**(code **)piVar1[2])(piVar1 + 2);
        *piVar1 = *(undefined4 *)(iVar7 + -0x18);
        *(int **)(iVar7 + -0x18) = piVar1;
      }
    }
    puVar4 = *(undefined4 **)(iVar7 + -0xc);
    *puVar4 = *(undefined4 *)(iVar7 + -0x18);
    *(undefined4 **)(iVar7 + -0x18) = puVar4;
    piVar5 = (int *)*piVar3;
    while (piVar5 != (int *)0x0) {
      *piVar3 = *piVar5;
      if (piVar5[2] != 0) {
        pcVar6 = *(code **)(piVar5[2] + -8);
        if (pcVar6 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar6)();
        }
      }
      if (piVar5 != (int *)0x0) {
        if ((code *)piVar5[-2] == (code *)0x0) {
          fn_0030233c(piVar5 + -2);
        }
        else {
          (*(code *)piVar5[-2])();
        }
      }
      piVar5 = (int *)*piVar3;
    }
    *(undefined4 *)(iVar7 + -0x18) = 0;
    *(undefined4 *)(iVar7 + -0x14) = 0;
    *(undefined4 *)(iVar7 + -0x10) = 0;
  }
  iVar7 = fn_0047a24c(iVar7 + -0x50);
  *(undefined **)(iVar7 + -0x68) = &DAT_00853740;
  *(undefined4 *)(iVar7 + -100) = 0;
  return;
}



int fn_00484660(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined *local_48;
  code *local_44;
  undefined4 uStack_40;
  wchar16 *local_3c;
  undefined1 auStack_38 [20];
  
  puVar3 = (undefined4 *)fn_00479cd8(param_1,param_2,auStack_38);
  *puVar3 = &PTR_FUN_00853958;
  piVar8 = (int *)(param_3 + 8);
  puVar3[0x1c] = L"JobConnectEndPoint";
  puVar3[0x1a] = &DAT_0085354c;
  puVar3[0x1b] = piVar8;
  iVar4 = (**(code **)(*(int *)(param_3 + 8) + 0x34))(piVar8);
  uVar2 = 0;
  if (iVar4 != 0) {
    if ((*(short *)(param_3 + 0x1c) == 4) &&
       (iVar4 = (**(code **)(*piVar8 + 0x30))(piVar8,8), iVar4 != 0)) {
      (**(code **)(*piVar8 + 0x14))(piVar8,8);
      *(undefined2 *)(param_3 + 0x1c) = 8;
    }
    uVar2 = 1;
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
  }
  *(undefined1 *)(puVar3 + 0x1d) = uVar2;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = &DAT_80010001;
  puVar3[0x20] = &DAT_007dba44;
  puVar3[0x21] = 0x6a;
  puVar3[0x22] = param_3;
  puVar3[0x24] = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = (int)((ulonglong)param_7 >> 0x20);
  piVar7 = puVar3 + 0x27;
  *piVar7 = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  piVar8 = (int *)fn_0015ece0(0xc);
  uVar9 = (undefined4)param_7;
  iVar4 = fn_0015ece0(0x18);
  piVar8[2] = iVar4;
  *piVar8 = *piVar7;
  piVar8[1] = 1;
  *piVar7 = (int)piVar8;
  iVar4 = piVar8[2];
  puVar3[0x29] = iVar4;
  puVar3[0x2a] = iVar4 + 0x18;
  puVar3[0x2b] = iVar4;
  puVar3[0x29] = iVar4 + 0x18;
  *(int *)iVar4 = iVar4;
  *(undefined4 *)(puVar3[0x2b] + 4) = puVar3[0x2b];
  puVar3[0x2d] = 0;
  iVar4 = fn_004565fc(puVar3 + 0x2e);
  iVar4 = fn_004565fc(iVar4 + 0x60);
  *(undefined4 *)(iVar4 + 0x60) = param_4;
  *(int *)(iVar4 + 100) = (int)param_5;
  *(int *)(iVar4 + 0x68) = (int)((ulonglong)param_5 >> 0x20);
  *(undefined4 *)(iVar4 + 0x6c) = uVar9;
  *(undefined4 *)(iVar4 + 0x70) = 0;
  *(undefined4 *)(iVar4 + 0x74) = 0;
  iVar4 = fn_004b4b60(iVar4 + 0x78,param_6);
  *(undefined1 *)(iVar4 + 0x18) = 0;
  *(undefined2 *)(iVar4 + 0x1a) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar4 + 0x10);
  *(undefined1 *)(iVar4 + 0x20) = param_8;
  *(undefined1 *)(iVar4 + 0x21) = 0;
  *(undefined4 *)(iVar4 + 0x24) = 0;
  *(undefined4 *)(iVar4 + 0x28) = 0;
  *(undefined1 *)(iVar4 + 0x2c) = 0;
  *(undefined4 *)(iVar4 + -0x130) = 0x4000;
  *(undefined4 *)(iVar4 + -300) = 0;
  if (*(int *)(iVar4 + -0x14) != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + -0x14) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = *piVar8 + 1;
  }
  if (*(int *)(iVar4 + -0x10) != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + -0x10) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = *piVar8 + 1;
  }
  *(undefined4 *)(iVar4 + -0x114) = 0x10001;
  *(undefined **)(iVar4 + -0x110) = &DAT_007dba44;
  *(undefined4 *)(iVar4 + -0x10c) = 0x71;
  if (*(char *)(*(int *)(iVar4 + -0x108) + 0x74) != '\0') {
    local_44 = fn_00483590;
    uStack_40 = 0;
    local_3c = L"";
    local_48 = &DAT_00853500;
    fn_00786bd8(iVar4 + -0xf4,&local_48);
  }
  iVar5 = *(int *)(iVar4 + -0x108);
  if ((*(char *)(iVar5 + 0x75) != '\0') &&
     ((uVar6 = *(uint *)(iVar5 + 0x30),
      (((uVar6 & 0xff) != 0 || (uVar6 >> 8 & 0xff) != 0) || (uVar6 >> 0x10 & 0xff) != 0) ||
      uVar6 >> 0x18 != 0 || (*(char *)(iVar5 + 0x74) == '\0')))) {
    local_44 = fn_00483dc0;
    uStack_40 = 0;
    local_3c = L"";
    local_48 = &DAT_00853500;
    fn_00786bd8(iVar4 + -0xf4,&local_48);
  }
  if (*(int *)(iVar4 + 0x14) == 0) {
    fn_0013d0fc(&local_48);
    *(undefined **)(iVar4 + -0x150) = local_48;
    *(code **)(iVar4 + -0x14c) = local_44;
    *(wchar16 **)(iVar4 + -0x138) = L"";
    *(code **)(iVar4 + -0x140) = fn_004834e8;
    *(undefined4 *)(iVar4 + -0x13c) = 0;
  }
  else {
    fn_0013d0fc(&local_48);
    *(undefined **)(iVar4 + -0x150) = local_48;
    *(code **)(iVar4 + -0x14c) = local_44;
    *(wchar16 **)(iVar4 + -0x138) = L"";
    *(code **)(iVar4 + -0x140) = fn_004844dc;
    *(undefined4 *)(iVar4 + -0x13c) = 0;
  }
  return iVar4 + -400;
}


