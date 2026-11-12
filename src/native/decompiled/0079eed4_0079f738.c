#include "0079eed4_0079f738.h"



void fn_0079f738(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2;
    iVar9 = iVar1 + 2;
    if (param_3 <= iVar9) break;
    puVar7 = (uint *)(param_1 + iVar9 * 0x10);
    uVar4 = *puVar7;
    if ((uVar4 != 0) && ((uVar8 = puVar7[-4], uVar8 == 0 || (uVar4 != 0 && uVar4 < uVar8)))) {
      iVar9 = iVar1 + 1;
    }
    puVar5 = (undefined4 *)(param_1 + iVar9 * 0x10);
    uVar10 = puVar5[3];
    uVar11 = puVar5[1];
    uVar13 = puVar5[2];
    puVar6 = (undefined4 *)(param_1 + iVar2 * 0x10);
    *puVar6 = *puVar5;
    puVar6[3] = uVar10;
    puVar6[1] = uVar11;
    puVar6[2] = uVar13;
    iVar2 = iVar9;
  }
  if (iVar9 == param_3) {
    iVar9 = param_1 + iVar9 * 0x10;
    puVar5 = (undefined4 *)(param_1 + iVar2 * 0x10);
    uVar10 = *(undefined4 *)(iVar9 + -0xc);
    uVar11 = *(undefined4 *)(iVar9 + -8);
    uVar13 = *(undefined4 *)(iVar9 + -4);
    *puVar5 = *(undefined4 *)(iVar9 + -0x10);
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar13;
    iVar2 = iVar1 + 1;
  }
  while (iVar1 = (iVar2 + -1) / 2, param_2 < iVar2) {
    puVar7 = (uint *)(param_1 + iVar1 * 0x10);
    uVar4 = *puVar7;
    if ((uVar4 == 0) || ((param_4 != 0 && (uVar4 == 0 || param_4 <= uVar4)))) break;
    uVar8 = puVar7[1];
    puVar3 = (uint *)(param_1 + iVar2 * 0x10);
    uVar12 = puVar7[2];
    uVar14 = puVar7[3];
    *puVar3 = uVar4;
    puVar3[1] = uVar8;
    puVar3[2] = uVar12;
    puVar3[3] = uVar14;
    iVar2 = iVar1;
  }
  puVar7 = (uint *)(param_1 + iVar2 * 0x10);
  *puVar7 = param_4;
  puVar7[1] = param_5;
  puVar7[2] = param_6;
  puVar7[3] = param_7;
  return;
}



void fn_0079f5cc(int param_1,int param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 uStack00000000;
  uint local_ab0 [676];
  
  iVar2 = param_2;
  while( true ) {
    iVar6 = iVar2 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    puVar3 = (uint *)(param_1 + iVar5 * 0xa88);
    uVar1 = *puVar3;
    if ((uVar1 != 0) && ((uVar4 = puVar3[-0x2a2], uVar4 == 0 || (uVar1 != 0 && uVar1 < uVar4)))) {
      iVar5 = iVar6 + 1;
    }
    fn_0017821c(param_1 + iVar2 * 0xa88,param_1 + iVar5 * 0xa88,0xa88);
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    fn_0017821c(param_1 + iVar2 * 0xa88,param_1 + iVar5 * 0xa88 + -0xa88,0xa88);
    iVar2 = iVar6 + 1;
  }
  fn_0017821c(local_ab0,&param_5,0xa88);
  while (iVar6 = (iVar2 + -1) / 2, param_2 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar6 * 0xa88);
    uVar1 = *puVar3;
    if ((uVar1 == 0) || ((local_ab0[0] != 0 && (uVar1 == 0 || local_ab0[0] <= uVar1)))) break;
    fn_0017821c(param_1 + iVar2 * 0xa88,puVar3,0xa88);
    iVar2 = iVar6;
  }
  fn_0017821c(param_1 + iVar2 * 0xa88,local_ab0,0xa88);
  return;
}



void fn_0079f4a4(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2;
    iVar9 = iVar1 + 2;
    if (param_3 <= iVar9) break;
    puVar7 = (uint *)(param_1 + iVar9 * 0x10);
    uVar4 = *puVar7;
    if ((uVar4 != 0) && ((uVar8 = puVar7[-4], uVar8 == 0 || (uVar4 != 0 && uVar4 < uVar8)))) {
      iVar9 = iVar1 + 1;
    }
    puVar5 = (undefined4 *)(param_1 + iVar9 * 0x10);
    uVar10 = puVar5[3];
    uVar11 = puVar5[1];
    uVar13 = puVar5[2];
    puVar6 = (undefined4 *)(param_1 + iVar2 * 0x10);
    *puVar6 = *puVar5;
    puVar6[3] = uVar10;
    puVar6[1] = uVar11;
    puVar6[2] = uVar13;
    iVar2 = iVar9;
  }
  if (iVar9 == param_3) {
    iVar9 = param_1 + iVar9 * 0x10;
    puVar5 = (undefined4 *)(param_1 + iVar2 * 0x10);
    uVar10 = *(undefined4 *)(iVar9 + -0xc);
    uVar11 = *(undefined4 *)(iVar9 + -8);
    uVar13 = *(undefined4 *)(iVar9 + -4);
    *puVar5 = *(undefined4 *)(iVar9 + -0x10);
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar13;
    iVar2 = iVar1 + 1;
  }
  while (iVar1 = (iVar2 + -1) / 2, param_2 < iVar2) {
    puVar7 = (uint *)(param_1 + iVar1 * 0x10);
    uVar4 = *puVar7;
    if ((uVar4 == 0) || ((param_4 != 0 && (uVar4 == 0 || param_4 <= uVar4)))) break;
    uVar8 = puVar7[1];
    puVar3 = (uint *)(param_1 + iVar2 * 0x10);
    uVar12 = puVar7[2];
    uVar14 = puVar7[3];
    *puVar3 = uVar4;
    puVar3[1] = uVar8;
    puVar3[2] = uVar12;
    puVar3[3] = uVar14;
    iVar2 = iVar1;
  }
  puVar7 = (uint *)(param_1 + iVar2 * 0x10);
  *puVar7 = param_4;
  puVar7[1] = param_5;
  puVar7[2] = param_6;
  puVar7[3] = param_7;
  return;
}



void fn_0079f360(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_120 [62];
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  iVar2 = param_2;
  while( true ) {
    iVar6 = iVar2 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    puVar3 = (uint *)(param_1 + iVar5 * 0xf0);
    uVar1 = *puVar3;
    if ((uVar1 != 0) && ((uVar4 = puVar3[-0x3c], uVar4 == 0 || (uVar1 != 0 && uVar1 < uVar4)))) {
      iVar5 = iVar6 + 1;
    }
    fn_0017821c(param_1 + iVar2 * 0xf0,param_1 + iVar5 * 0xf0,0xf0);
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    fn_0017821c(param_1 + iVar2 * 0xf0,param_1 + iVar5 * 0xf0 + -0xf0,0xf0);
    iVar2 = iVar6 + 1;
  }
  fn_0017821c(local_120,&uStack_4,0xf0);
  while (iVar6 = (iVar2 + -1) / 2, param_2 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar6 * 0xf0);
    uVar1 = *puVar3;
    if ((uVar1 == 0) || ((local_120[0] != 0 && (uVar1 == 0 || local_120[0] <= uVar1)))) break;
    fn_0017821c(param_1 + iVar2 * 0xf0,puVar3,0xf0);
    iVar2 = iVar6;
  }
  fn_0017821c(param_1 + iVar2 * 0xf0,local_120,0xf0);
  return;
}



int * fn_0079f020(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    uVar3 = *(uint *)(iVar4 + 8);
    *(undefined4 *)(iVar4 + 8) = 0;
    uVar2 = *(uint *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0xc) = 0;
    iVar5 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0x10) = 0;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      do {
        uVar1 = uVar1 + 0x34;
      } while (uVar1 != uVar2);
    }
    fn_001008c4(uVar3,(int)(iVar5 - uVar3) / 0x34,0);
    uVar2 = *(uint *)(iVar4 + 8);
    uVar1 = uVar2;
    if (*(uint *)(iVar4 + 0xc) < uVar2) {
      do {
        uVar1 = uVar1 + 0x34;
      } while (uVar1 != *(uint *)(iVar4 + 0xc));
    }
    fn_001008c4(uVar2,(int)(*(int *)(iVar4 + 0x10) - uVar2) / 0x34,0);
    fn_002feef8(iVar4);
  }
  return param_1;
}



int * fn_0079effc(int *param_1)

{
  if (*param_1 != 0) {
    fn_0065c6cc();
    fn_002feef8();
  }
  return param_1;
}



int * fn_0079efa0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_0012b6ec(2,iVar1 + 4);
    fn_002feef8(iVar1);
  }
  return param_1;
}



undefined4 * fn_0079eed4(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[1] + 4))();
    }
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 4))();
    }
    fn_002feef8(piVar1);
  }
  return param_1;
}


