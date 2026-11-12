#include "0066178c_00661eb8b.h"



void fn_00661eb8(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  undefined4 unaff_r4;
  uint *puVar10;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint uVar11;
  
  fn_00240fe8(*(undefined4 *)(param_1 + 8),param_1);
  fn_00661ff4(param_1,param_1 + 0x18);
  fn_00661ff4(param_1,param_1 + 0x24);
  *(undefined4 *)(param_1 + 8) = param_2;
  fn_006622a0(param_1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x18,0);
  fn_006622a0(param_1,*(undefined4 *)(param_1 + 0xc),param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 8);
  puVar10 = (uint *)(iVar4 + 0x68);
  piVar9 = *(int **)(iVar4 + 0x6c);
  if (piVar9 != *(int **)(iVar4 + 0x70)) {
    *(int **)(iVar4 + 0x6c) = piVar9 + 1;
    if (piVar9 != (int *)0x0) {
      *piVar9 = param_1;
    }
    return;
  }
  uVar3 = (int)((int)piVar9 - *puVar10) >> 2;
  if ((uint)((int)((int)*(int **)(iVar4 + 0x70) - *puVar10) >> 2) <= uVar3) {
    uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar11 < uVar3 + 0x20) {
      uVar11 = uVar3 + 0x20;
    }
    piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
    piVar7 = piVar1;
    for (piVar6 = (int *)*puVar10; piVar6 != piVar9; piVar6 = piVar6 + 1) {
      if (piVar7 != (int *)0x0) {
        *piVar7 = *piVar6;
      }
      piVar7 = piVar7 + 1;
    }
    piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
    if (piVar6 != (int *)0x0) {
      *piVar6 = param_1;
    }
    piVar7 = *(int **)(iVar4 + 0x6c);
    piVar6 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
    for (; piVar9 != piVar7; piVar9 = piVar9 + 1) {
      piVar6 = piVar6 + 1;
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar9;
      }
    }
    uVar2 = *puVar10;
    uVar8 = *(uint *)(iVar4 + 0x6c);
    uVar3 = uVar2;
    if (uVar8 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar8);
    }
    fn_001008c4(uVar2,(int)(*(int *)(iVar4 + 0x70) - uVar2) >> 2,0,uVar2,unaff_r4,unaff_r5,unaff_r6
                );
    *(int **)(iVar4 + 0x70) = piVar1 + uVar11;
    *(int **)(iVar4 + 0x6c) = piVar1 + ((int)(uVar8 - uVar2) >> 2) + 1;
    *puVar10 = (uint)piVar1;
    return;
  }
  *(int **)(iVar4 + 0x6c) = piVar9 + 1;
  if (piVar9 != (int *)0x0) {
    *piVar9 = piVar9[-1];
  }
  piVar6 = piVar9 + -1;
  piVar7 = piVar9;
  if (piVar9 < piVar6) {
    if (0 < (int)piVar6 - (int)piVar9) {
      iVar4 = (int)piVar6 - (int)piVar9 >> 2;
      iVar5 = 0;
      do {
        iVar4 = iVar4 + -1;
        piVar9[iVar5 + -1] = piVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    while (piVar9 != piVar6) {
      piVar6 = piVar6 + -1;
      piVar7[-1] = *piVar6;
      piVar7 = piVar7 + -1;
    }
  }
  *piVar9 = param_1;
  return;
}



void fn_00661ea0(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  *(undefined1 *)(param_1 + 0x35) = param_5;
  *(undefined1 *)(param_1 + 0x36) = param_2;
  *(undefined1 *)(param_1 + 0x37) = param_4;
  return;
}



void fn_00661d1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_64 [56];
  uint local_2c;
  undefined4 local_24;
  
  *(undefined4 *)(param_1 + 0x30) = param_2;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = fn_00202b3c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    if (iVar3 == 0) {
      fn_001ade98(auStack_64,2,0,*(undefined2 *)(param_1 + 0x14),1);
    }
    else {
      fn_001ade98(auStack_64,0,0,*(undefined2 *)(param_1 + 0x14),1);
    }
  }
  else {
    fn_001ade98(auStack_64,5,*(int *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x14),1);
  }
  fn_006620b4(param_1,local_24,(char *)&DAT_0086c820,1);
  uVar1 = fn_001adedc((local_2c & 0x3fff) >> 10);
  fn_006620b4(param_1,uVar1,(char *)&DAT_0086c828,2);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x30));
  uVar1 = fn_00191238(uVar1,(char *)&DAT_0086c830);
  uVar4 = 0x3d99999a;
  puVar2 = (undefined4 *)fn_00145b00(0x1c,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &DAT_007ce960;
    puVar2[5] = uVar4;
    puVar2[6] = 0;
  }
  fn_0018cdf4(puVar2,*(undefined4 *)(param_1 + 0x1c));
  fn_0018cdf4(puVar2,*(undefined4 *)(param_1 + 0x28));
  uVar1 = fn_0017fde4(param_2);
  uVar1 = fn_0018d16c(uVar1,puVar2);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



void fn_00661d0c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_64 [56];
  uint uStack_2c;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  *(undefined4 *)(iVar1 + 0x30) = param_3;
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar4 = fn_00202b3c(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x14));
    if (iVar4 == 0) {
      fn_001ade98(auStack_64,2,0,*(undefined2 *)(iVar1 + 0x14),1);
    }
    else {
      fn_001ade98(auStack_64,0,0,*(undefined2 *)(iVar1 + 0x14),1);
    }
  }
  else {
    fn_001ade98(auStack_64,5,*(int *)(iVar1 + 0x10),*(undefined2 *)(iVar1 + 0x14),1);
  }
  fn_006620b4(iVar1,uStack_24,"mii_1c",1);
  uVar2 = fn_001adedc((uStack_2c & 0x3fff) >> 10);
  fn_006620b4(iVar1,uVar2,"mii_1d",2);
  uVar2 = fn_0017fde4(*(undefined4 *)(iVar1 + 0x30));
  uVar2 = fn_00191238(uVar2,"Mii_Head");
  uVar5 = 0x3d99999a;
  puVar3 = (undefined4 *)fn_00145b00(0x1c,&DAT_00812c8c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = uVar2;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = &DAT_007ce960;
    puVar3[5] = uVar5;
    puVar3[6] = 0;
  }
  fn_0018cdf4(puVar3,*(undefined4 *)(iVar1 + 0x1c));
  fn_0018cdf4(puVar3,*(undefined4 *)(iVar1 + 0x28));
  uVar2 = fn_0017fde4(param_3);
  uVar2 = fn_0018d16c(uVar2,puVar3);
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  return;
}



undefined4 fn_00661a0c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_54 [44];
  undefined1 auStack_28 [24];
  undefined2 local_10 [4];
  
  iVar1 = fn_001ade98(auStack_54,4,param_2,0,1);
  if ((iVar1 == 0) && (iVar1 = fn_001ae8fc(local_10,auStack_28), iVar1 == 1)) {
    fn_001ae224(param_1,0,local_10[0]);
    return 1;
  }
  return 0;
}



void fn_006619ec(undefined4 param_1,undefined4 param_2)

{
  fn_001ade98(param_1,5,param_2,0,1);
  return;
}


