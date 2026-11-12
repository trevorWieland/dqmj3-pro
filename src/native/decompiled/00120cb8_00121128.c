#include "00120cb8_00121128.h"



int fn_00121128(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_3);
  *puVar1 = &DAT_0081d380;
  puVar1[8] = 0;
  iVar2 = fn_0014a674(puVar1 + 9,0);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (param_2 == 0) {
    iVar7 = 400;
  }
  else {
    iVar7 = 0x140;
  }
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_001438fc(iVar3,iVar7,0xf0);
  }
  piVar6 = *(int **)(iVar2 + -4);
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(iVar2 + -4) = piVar4;
  }
  uVar5 = fn_00117984();
  iVar3 = fn_0011a41c();
  fn_0012a208(uVar5,*(undefined1 *)(iVar3 + 2),&local_18,&local_14);
  *(int *)(iVar2 + 0x1c) = iVar7 * local_18;
  *(int *)(iVar2 + 0x20) = local_14 * 0xf0;
  return iVar2 + -0x24;
}



void fn_00121118(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 4),param_2,0xc88);
  return;
}



void fn_001210e8(int param_1)

{
  fn_001007b8(param_1,param_1 + 0x28);
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_0014720c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



void fn_00121084(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = fn_00156024(param_1,(char *)&DAT_0012f1f8);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



void fn_00121054(int param_1)

{
  fn_001007b8(param_1,param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_0014720c(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



void fn_00120fd8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x2fc) != 0) {
    fn_0012275c();
    if (*(int *)(iVar1 + 0x2fc) != 0) {
      fn_0012291c();
      fn_002feef8();
      *(undefined4 *)(iVar1 + 0x2fc) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x300) != 0) {
    fn_0012206c();
    if (*(int *)(iVar1 + 0x300) != 0) {
      fn_0012219c();
      fn_002feef8();
      *(undefined4 *)(iVar1 + 0x300) = 0;
    }
  }
  iVar1 = fn_00129004();
  fn_001007b8(iVar1,iVar1 + 0x18,param_3,param_4,unaff_r4,in_lr);
  if (*(int *)(iVar1 + 0x14) != 0) {
    fn_0014720c(*(undefined4 *)(iVar1 + 4));
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void fn_00120f74(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = fn_00156024(param_1,(char *)&DAT_0012f1f8);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = fn_00156024(param_1,(char *)&DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



void fn_00120f20(int *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1[4] - param_1[3] >> 2 != 0) {
    do {
      (**(code **)(*param_1 + 0xc))(param_1,uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[4] - param_1[3] >> 2));
  }
  return;
}



uint * fn_00120ec8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 0xc,0);
  return param_1;
}



undefined4 * fn_00120ea0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_00120cc4(param_1);
  return param_1;
}



void fn_00120cc4(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  if (uVar7 != uVar8) {
    uVar1 = uVar7;
    if (uVar8 <= uVar7) {
      do {
        uVar1 = uVar1 + 0xc;
      } while (uVar1 != uVar8);
    }
    uVar8 = uVar8 + ((int)(uVar8 - uVar7) / 0xc) * -0xc;
    param_1[1] = uVar8;
  }
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar9 = param_1[2];
  param_1[2] = 0;
  uVar7 = uVar1;
  if (uVar8 <= uVar1) {
    for (; uVar7 != uVar8; uVar7 = uVar7 + 0xc) {
    }
  }
  fn_001008c4(uVar1,(int)(uVar9 - uVar1) / 0xc,0);
  local_20 = 0x10;
  if ((uint)((int)(param_1[2] - *param_1) / 0xc) < 0x10) {
    uVar8 = (int)(param_1[1] - *param_1) / 0xc;
    local_1c[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_1c[0] < uVar8 + 0x20) {
      local_1c[0] = uVar8 + 0x20;
    }
    puVar2 = local_1c;
    if (local_1c[0] < 0x11) {
      puVar2 = &local_20;
    }
    uVar8 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar8 * 0xc,0);
    puVar6 = (undefined4 *)param_1[1];
    puVar4 = puVar3;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar6; puVar5 = puVar5 + 3) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
      }
      puVar4 = puVar4 + 3;
    }
    uVar1 = *param_1;
    uVar7 = uVar1;
    if (param_1[1] < uVar1) {
      do {
        uVar7 = uVar7 + 0xc;
      } while (uVar7 != param_1[1]);
    }
    fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 0xc,0);
    uVar7 = *param_1;
    *param_1 = (uint)puVar3;
    param_1[1] = (uint)(puVar3 + ((int)(param_1[1] - uVar7) / 0xc) * 3);
    param_1[2] = (uint)(puVar3 + uVar8 * 3);
  }
  return;
}



void fn_00120cb8(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uStack_20;
  uint auStack_1c [2];
  
  iVar1 = *param_1;
  puVar2 = (uint *)(iVar1 + 0xd0);
  uVar9 = *puVar2;
  uVar10 = *(uint *)(iVar1 + 0xd4);
  if (uVar9 != uVar10) {
    uVar3 = uVar9;
    if (uVar10 <= uVar9) {
      do {
        uVar3 = uVar3 + 0xc;
      } while (uVar3 != uVar10);
    }
    uVar10 = uVar10 + ((int)(uVar10 - uVar9) / 0xc) * -0xc;
    *(uint *)(iVar1 + 0xd4) = uVar10;
  }
  uVar3 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(iVar1 + 0xd4) = 0;
  iVar11 = *(int *)(iVar1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xd8) = 0;
  uVar9 = uVar3;
  if (uVar10 <= uVar3) {
    for (; uVar9 != uVar10; uVar9 = uVar9 + 0xc) {
    }
  }
  fn_001008c4(uVar3,(int)(iVar11 - uVar3) / 0xc,0);
  uStack_20 = 0x10;
  if ((uint)((int)(*(int *)(iVar1 + 0xd8) - *puVar2) / 0xc) < 0x10) {
    uVar10 = (int)(*(int *)(iVar1 + 0xd4) - *puVar2) / 0xc;
    auStack_1c[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (auStack_1c[0] < uVar10 + 0x20) {
      auStack_1c[0] = uVar10 + 0x20;
    }
    puVar4 = auStack_1c;
    if (auStack_1c[0] < 0x11) {
      puVar4 = &uStack_20;
    }
    uVar10 = *puVar4;
    puVar5 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
    puVar8 = *(undefined4 **)(iVar1 + 0xd4);
    puVar6 = puVar5;
    for (puVar7 = (undefined4 *)*puVar2; puVar7 != puVar8; puVar7 = puVar7 + 3) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6[2] = puVar7[2];
      }
      puVar6 = puVar6 + 3;
    }
    uVar3 = *puVar2;
    uVar9 = uVar3;
    if (*(uint *)(iVar1 + 0xd4) < uVar3) {
      do {
        uVar9 = uVar9 + 0xc;
      } while (uVar9 != *(uint *)(iVar1 + 0xd4));
    }
    fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0xd8) - uVar3) / 0xc,0);
    uVar9 = *puVar2;
    *puVar2 = (uint)puVar5;
    *(undefined4 **)(iVar1 + 0xd4) = puVar5 + ((int)(*(int *)(iVar1 + 0xd4) - uVar9) / 0xc) * 3;
    *(undefined4 **)(iVar1 + 0xd8) = puVar5 + uVar10 * 3;
  }
  return;
}


