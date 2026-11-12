#include "002593fc_00259b30.h"



void fn_00259b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_00698fb8(DAT_008977e0,1,param_3,param_4,param_4);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar1 = fn_006c76e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    fn_003b66d4(*(undefined4 *)(param_1 + 0x2c),0x1e);
    *(code **)(param_1 + 0x1c) = fn_00259bfc;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_00259a80(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x30) = 0x1e;
    fn_00682cc4(*(undefined4 *)(DAT_008977e0 + 0x3c));
    iVar1 = fn_006f7a0c(DAT_008977e0);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x30) + 0x24);
    (**(code **)(*piVar2 + 0x30))(piVar2,0);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined1 *)(param_1 + 0x30));
    (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  iVar1 = fn_006c76e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(code **)(param_1 + 0x1c) = fn_00259e58;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_00259a50(int param_1)

{
  fn_00698fb8(DAT_008977e0,1);
  fn_003b674c(*(undefined4 *)(param_1 + 0x2c),0x80ea);
  return;
}



void fn_002598e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  
  iVar1 = fn_006a9938(param_2);
  if (iVar1 != 0) {
    if (param_3 == 0xc || param_3 == 0xd) {
      in_s0 = *(float *)(param_1 + 4) + in_s0;
    }
    else {
      if (param_3 != 0xe) {
        return;
      }
      in_s0 = *(float *)(param_1 + 4) + in_s1;
    }
    *(float *)(param_1 + 4) = in_s0;
  }
  return;
}



undefined4 fn_0025988c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_0020bbc4(auStack_10);
    uVar2 = fn_006bfe90(auStack_c);
  }
  return uVar2;
}



undefined4 fn_00259878(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_0020bbc4(auStack_10);
    uVar2 = fn_006bfe90(auStack_c);
  }
  return uVar2;
}



void fn_0025977c(undefined4 *param_1,undefined1 *param_2,int *param_3,uint param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte local_88 [4];
  undefined4 local_84 [20];
  undefined4 *puStack_34;
  undefined1 *local_30;
  int *local_2c;
  uint uStack_28;
  
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  fn_0017821c(local_88,&DAT_007bde44,0x50);
  uVar3 = 0;
  while (local_88[uVar3 * 0x14] != param_4) {
    uVar3 = uVar3 + 1;
    if (3 < uVar3) {
      return;
    }
  }
  if (param_8 != 0) {
    *param_1 = local_84[uVar3 * 5];
  }
  iVar1 = fn_006a99b0(local_2c);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*local_2c + 0x50))(local_2c);
    if (iVar1 == 4 || param_7 == 0) {
      *param_1 = local_84[uVar3 * 5 + 1];
      if (param_9 != 0) {
        *local_30 = 3;
        return;
      }
    }
    else {
      if (param_6 == 0 && param_5 == 0) {
        uVar2 = local_84[uVar3 * 5 + 2];
      }
      else {
        uVar2 = local_84[uVar3 * 5 + 3];
      }
      *param_1 = uVar2;
    }
  }
  return;
}



void fn_00259728(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    if (param_2 == 0) {
      fn_0023e640(*(int **)(DAT_008977e0 + 0x2c),*param_1,1);
    }
    else {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    }
    *param_1 = -1;
  }
  return;
}



void fn_0025968c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((&DAT_007bde94)[uVar2 * 2] != param_2) {
    uVar2 = uVar2 + 1;
    if (8 < uVar2) {
      return;
    }
  }
  param_6 = (&DAT_007bde98)[uVar2 * 2] + param_6;
  if ((param_4 == 0) && (iVar1 = fn_00191284(param_1,param_6), iVar1 != 0)) {
    return;
  }
  if (param_5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00259710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,param_6);
    return;
  }
  fn_0018d060(param_1,param_6,param_3);
  return;
}



int * fn_002593fc(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint *puVar15;
  
  iVar10 = 0;
  piVar12 = *(int **)(DAT_008977e0 + 0x2c);
  uVar1 = param_1[1] - *param_1;
  iVar8 = (int)uVar1 >> 2;
  if (0 < iVar8) {
    do {
      uVar14 = *(undefined4 *)(*param_1 + iVar10 * 4);
      iVar2 = fn_006b4cd0(piVar12,uVar14);
      uVar1 = 0;
      if (iVar2 != 0) {
        (**(code **)(*piVar12 + 0xc))(piVar12,uVar14);
        uVar1 = *param_1;
        *(undefined4 *)(uVar1 + iVar10 * 4) = 0xffffffff;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar8);
  }
  puVar7 = (uint *)*param_1;
  puVar9 = (uint *)param_1[1];
  while( true ) {
    if (puVar7 != puVar9) {
      uVar1 = *puVar7;
    }
    if (puVar7 == puVar9 || uVar1 == 0xffffffff) break;
    puVar7 = puVar7 + 1;
  }
  if (puVar7 != puVar9) {
    puVar13 = puVar7 + 1;
    if (puVar13 < puVar9) {
      iVar8 = (int)puVar9 - (int)puVar13;
      if (0 < iVar8) {
        puVar9 = puVar7;
        if (iVar8 * 0x20000000 < 0) {
          uVar1 = *puVar13;
          puVar13 = puVar7 + 2;
          if (uVar1 != 0xffffffff) {
            puVar9 = puVar7 + 1;
            *puVar7 = uVar1;
          }
        }
        puVar7 = puVar9;
        for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar9 = puVar7;
          if (*puVar13 != 0xffffffff) {
            puVar9 = puVar7 + 1;
            *puVar7 = *puVar13;
          }
          puVar15 = puVar13 + 1;
          puVar13 = puVar13 + 2;
          puVar7 = puVar9;
          if (*puVar15 != 0xffffffff) {
            puVar7 = puVar9 + 1;
            *puVar9 = *puVar15;
          }
        }
      }
    }
    else {
      while (puVar13 != puVar9) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        if (uVar1 != 0xffffffff) {
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
        }
      }
    }
  }
  puVar9 = (uint *)param_1[1];
  puVar13 = (uint *)param_1[1];
  if ((uint *)*param_1 != puVar9) {
    puVar15 = puVar13;
    puVar4 = puVar7;
    if (puVar13 < puVar9) {
      uVar1 = (int)puVar9 - (int)puVar13;
      if (0 < (int)uVar1) {
        puVar9 = puVar7 + -1;
        puVar15 = puVar13 + -1;
        if ((int)(uVar1 * 0x20000000) < 0) {
          *puVar7 = *puVar13;
          puVar9 = puVar7;
          puVar15 = puVar13;
        }
        for (iVar8 = (int)uVar1 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar9[1] = puVar15[1];
          puVar15 = puVar15 + 2;
          puVar9 = puVar9 + 2;
          *puVar9 = *puVar15;
        }
        puVar4 = (uint *)((uVar1 & 0xfffffffc) + (int)puVar7);
      }
    }
    else {
      for (; puVar15 != puVar9; puVar15 = puVar15 + 1) {
        *puVar4 = *puVar15;
        puVar4 = puVar4 + 1;
      }
    }
    puVar9 = (uint *)param_1[1];
    if (puVar9 < puVar4) {
      do {
        puVar4 = puVar4 + 1;
      } while (puVar4 != puVar9);
    }
    param_1[1] = (int)puVar9 - ((int)puVar13 - (int)puVar7 & 0xfffffffcU);
  }
  puVar11 = (undefined4 *)*param_1;
  if (2 < (uint)((int)(param_1[1] - (int)puVar11) >> 2)) {
    (**(code **)(*piVar12 + 0xc))(piVar12,*puVar11);
    puVar5 = (undefined4 *)param_1[1];
    if ((undefined4 *)*param_1 != puVar5) {
      puVar3 = puVar11 + 1;
      if (puVar5 != puVar3) {
        if (puVar5 < puVar3) {
          for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
            *puVar11 = *puVar3;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          iVar8 = (int)puVar5 - (int)puVar3;
          if (0 < iVar8) {
            puVar5 = puVar11;
            puVar6 = puVar11 + -1;
            if (iVar8 * 0x20000000 < 0) {
              *puVar11 = *puVar3;
              puVar5 = puVar3;
              puVar6 = puVar11;
            }
            for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
              puVar6[1] = puVar5[1];
              puVar5 = puVar5 + 2;
              puVar6 = puVar6 + 2;
              *puVar6 = *puVar5;
            }
          }
        }
      }
      param_1[1] = param_1[1] - 4;
    }
  }
  return piVar12;
}


