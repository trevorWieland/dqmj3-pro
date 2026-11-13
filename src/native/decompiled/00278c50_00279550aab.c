#include "00278c50_00279550aab.h"



undefined4 fn_0027911c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x183;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1e3c) != 0) {
    uVar1 = 0xffffffff;
  }
  uVar2 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Pos/%s.xbb",uVar2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



void fn_00278ec8(int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar1 = (ushort)param_3;
  iVar8 = param_2;
  uVar7 = param_3;
  uVar9 = param_4;
  if (param_5 == 0) {
    uVar6 = param_3;
    if (param_6 != 0) {
      uVar6 = (uint)(short)(uVar1 | 0x8000);
    }
    iVar2 = fn_006b771c(param_2,0x61,0xba,uVar6);
    if (iVar2 == -1) goto LAB_00278f1c;
LAB_00278f74:
    piVar3 = (int *)(*(int *)(param_2 + 0x20) + iVar2 * 0x14);
    if (*piVar3 != 0) {
      piVar3[2] = piVar3[2] + 1;
    }
  }
  else {
LAB_00278f1c:
    iVar2 = 0x61;
    do {
      if (*(int *)(*(int *)(param_2 + 0x20) + iVar2 * 0x14) == 0) goto LAB_00278f48;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xbb);
    iVar2 = -1;
LAB_00278f48:
    fn_00278c50(param_2,iVar2,param_3,0,param_4,param_5,param_6,param_1,iVar8,uVar7,uVar9);
    if (iVar2 != -1) goto LAB_00278f74;
  }
  uVar6 = param_3 | 0x2000;
  if (param_6 != 0) {
    uVar6 = (uint)(short)(uVar1 | 0xa000);
  }
  iVar4 = fn_006b771c(param_2,0x61,0xba,uVar6);
  if (iVar4 == -1) {
    iVar4 = 0x61;
    do {
      if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_00279080;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xbb);
    iVar4 = -1;
LAB_00279080:
    iVar8 = fn_00278c50(param_2,iVar4,param_3,1,param_4,0,param_6,param_1,iVar8,uVar7,uVar9);
    if (iVar8 == -1) {
      iVar4 = -1;
    }
    if (iVar8 != -1 && iVar4 != -1) goto LAB_00278fc0;
  }
  else {
LAB_00278fc0:
    piVar3 = (int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14);
    if (*piVar3 != 0) {
      piVar3[2] = piVar3[2] + 1;
    }
  }
  iVar8 = -1;
  if (param_5 != 0) {
    uVar7 = param_3 | 0x4000;
    if (param_6 != 0) {
      uVar7 = (uint)(short)(uVar1 | 0xc000);
    }
    iVar8 = fn_006b771c(param_2,0x61,0xba,uVar7);
    if (iVar8 == -1) {
      iVar8 = 0x61;
      do {
        if (*(int *)(*(int *)(param_2 + 0x20) + iVar8 * 0x14) == 0) goto LAB_002790e4;
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0xbb);
      iVar8 = -1;
LAB_002790e4:
      iVar5 = fn_00278c50(param_2,iVar8,param_3,2,param_4,0,param_6);
      if (iVar5 == -1) {
        iVar8 = -1;
      }
      if (iVar5 == -1 || iVar8 == -1) goto LAB_001c6d28;
    }
    piVar3 = (int *)(*(int *)(param_2 + 0x20) + iVar8 * 0x14);
    if (*piVar3 != 0) {
      piVar3[2] = piVar3[2] + 1;
    }
  }
LAB_001c6d28:
  *param_1 = iVar2;
  param_1[1] = iVar4;
  param_1[2] = iVar8;
  return;
}


