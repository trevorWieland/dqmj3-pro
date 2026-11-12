#include "00542c9c_005434d4b.h"



void fn_005434d4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,param_2);
  }
  return;
}



void fn_00543198(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float local_38;
  float local_34;
  float local_30;
  
  uVar6 = ~param_1[0x22] & 1;
  bVar9 = uVar6 == 0;
  uVar1 = param_1[0xe];
  if (bVar9) {
    uVar6 = 2;
  }
  else {
    uVar1 = uVar1 & 0xfffffffd;
    param_1[0xe] = uVar1;
  }
  if (bVar9 && (uVar6 & ~uVar1) == 0) {
    if ((int *)param_1[3] == (int *)0x0) {
      uVar12 = 0x3f800000;
      if ((DAT_008c6308 & 1) == 0) {
        iVar4 = fn_00303afc(&DAT_008c6308);
        if (iVar4 != 0) {
          uVar5 = fn_00171688();
          fn_001781f0(&DAT_008f9ea8,uVar5);
          DAT_008f9ee4 = 0x7e1;
          DAT_008f9ed8 = uVar12;
          DAT_008f9edc = uVar12;
          DAT_008f9ee0 = uVar12;
        }
      }
      puVar2 = &DAT_008f9ea8;
      if ((DAT_008c6308 & 1) == 0) {
        iVar4 = fn_00303afc(&DAT_008c6308);
        if (iVar4 != 0) {
          uVar5 = fn_00171688();
          fn_001781f0(&DAT_008f9ea8,uVar5);
          DAT_008f9ee4 = 0x7e1;
          DAT_008f9ed8 = uVar12;
          DAT_008f9edc = uVar12;
          DAT_008f9ee0 = uVar12;
        }
      }
      puVar3 = &DAT_008f9ea8;
    }
    else {
      puVar2 = (undefined *)(**(code **)(*(int *)param_1[3] + 0x18))();
      puVar3 = (undefined *)(**(code **)(*(int *)param_1[3] + 0x1c))();
    }
    fn_006dc8c8(param_2,param_1 + 0x2f,&local_38,param_1 + 0x13,puVar2,puVar3);
    fVar10 = 1.0000001e-06;
    if ((int)(local_38 * local_38 + local_34 * local_34 + local_30 * local_30) < 0x358637be) {
      fVar11 = -1.0000001e-06;
      if (local_38 < 0.0) {
        local_38 = fVar11;
      }
      else {
        local_38 = fVar10;
      }
      bVar9 = local_30 < 0.0;
      if (local_34 < 0.0) {
        local_34 = fVar11;
      }
      else {
        local_34 = fVar10;
      }
      local_30 = fVar10;
      if (bVar9) {
        local_30 = fVar11;
      }
    }
    param_1[0x3b] = (int)local_38;
    param_1[0x3c] = (int)local_34;
    param_1[0x3d] = (int)local_30;
    fn_001ad150(param_1 + 0x23,param_1 + 0x2f,param_1 + 0x1f);
    uVar1 = param_1[0x3e];
    uVar6 = uVar1 & 0xfffff81f;
    param_1[0x3e] = uVar6;
    if ((~uVar6 & 8) != 0) {
      uVar1 = uVar1 & 0xfffff81f;
      param_1[0x3e] = uVar1;
      fVar11 = (float)param_1[0x3b];
      fVar10 = (float)param_1[0x3c];
      bVar9 = fVar11 == fVar10;
      if (bVar9) {
        fVar10 = (float)param_1[0x3d];
      }
      if ((bVar9 && (bVar9 && fVar11 == fVar10)) &&
         (param_1[0x3e] = uVar1 | 0x400, (float)param_1[0x3b] == 1.0)) {
        param_1[0x3e] = uVar1 | 0x600;
      }
    }
    *(undefined1 *)(param_1 + 0x4b) = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  param_1[0x22] = param_1[0x22] & 0xfffff7ff;
  puVar8 = *(undefined4 **)(param_1[0x4c] + 0xc);
  for (puVar7 = *(undefined4 **)(param_1[0x4c] + 8); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    (*(code *)**(undefined4 **)*puVar7)((undefined4 *)*puVar7,param_1,param_3);
  }
  return;
}



undefined4 fn_00543048(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  puVar3 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar3 == (undefined4 *)0x0) {
LAB_0054318c:
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = param_2;
      puVar3[2] = 0;
      puVar3[1] = param_2;
      puVar3[3] = 0;
      puVar3[4] = 0x40000000;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x13c);
    if (uVar4 != 0) {
      puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))();
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (**(code **)(*param_2 + 8))(param_2,uVar4 << 2,4);
        if (iVar2 == 0) {
          (**(code **)(*param_2 + 0xc))(param_2,puVar1);
        }
        else {
          *puVar1 = param_2;
          puVar1[2] = iVar2;
          puVar1[1] = param_2;
          puVar1[3] = iVar2;
          puVar1[4] = uVar4;
          puVar1[4] = uVar4 & 0x3fffffff;
          puVar3 = puVar1;
        }
      }
      *(undefined4 **)(param_1 + 0x130) = puVar3;
      goto LAB_00543134;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_0054318c;
    *puVar3 = param_2;
    puVar3[2] = 0;
    puVar3[1] = param_2;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[4] = 0;
  }
  *(undefined4 **)(param_1 + 0x130) = puVar3;
LAB_00543134:
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = 0x80000000;
  }
  return uVar5;
}


