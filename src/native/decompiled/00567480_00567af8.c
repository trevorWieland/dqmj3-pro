#include "00567480_00567af8.h"



void fn_00567af8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  int *piVar3;
  undefined4 unaff_r5;
  undefined8 uVar4;
  
  uVar1 = fn_006f7a84(DAT_008977e0);
  iVar2 = fn_001db768(param_1[5],uVar1);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00567b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],0,4);
    return;
  }
  uVar4 = CONCAT44(unaff_r5,unaff_r4);
  iVar2 = (**(code **)(*(int *)param_1[5] + 0x68))();
  if (iVar2 == 0) {
    piVar3 = (int *)param_1[5];
    iVar2 = fn_006f7a84(DAT_008977e0);
    (**(code **)(*piVar3 + 0x28))(piVar3,iVar2 + 0x20);
  }
  else if (param_1[3] == 4) {
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar2 != 0) {
      param_1[3] = 5;
      param_1[4] = 0;
    }
  }
  else if (param_1[3] == 5) {
    (**(code **)(*param_1 + 0x24))(param_1);
  }
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar2 == 0) {
    return;
  }
  (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],1,0x11,0,uVar4);
  if (*(char *)(param_1[1] + 4) == '\0') {
    *(undefined4 *)(param_1[1] + 0xc) = 1;
  }
  fn_002171d4(param_1[5],0,0x3c);
  return;
}



void fn_00567a30(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0083fe88;
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 3,0);
  fn_00395750(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005678c8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039571c(iVar1,param_1);
  puVar2[3] = 0;
  *puVar2 = &DAT_0083fe88;
  puVar2[4] = 0;
  puVar10 = puVar2 + 4;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined1 *)((int)puVar2 + 0x1d) = 0;
  *(undefined1 *)((int)puVar2 + 0x1e) = 0;
  local_20 = 8;
  if ((uint)((int)(puVar2[6] - puVar2[4]) >> 3) < 8) {
    uVar11 = (int)(puVar2[5] - puVar2[4]) >> 3;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 9) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
    puVar9 = (undefined4 *)puVar2[5];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 2) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        *puVar4 = *puVar8;
        puVar4[1] = uVar12;
      }
      puVar4 = puVar4 + 2;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[5] < uVar5) {
      do {
        uVar6 = uVar6 + 8;
      } while (uVar6 != puVar2[5]);
    }
    fn_001008c4(uVar5,(int)(puVar2[6] - uVar5) >> 3,0);
    uVar6 = *puVar10;
    puVar2[4] = puVar3;
    puVar2[5] = (puVar2[5] - uVar6 & 0xfffffff8) + (int)puVar3;
    puVar2[6] = puVar3 + uVar11 * 2;
  }
  return puVar2;
}



void fn_00567868(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar1 != uVar3) {
    uVar2 = uVar1;
    if (uVar3 <= uVar1) {
      do {
        uVar2 = uVar2 + 8;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar1 & 0xfffffff8);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}



void fn_00567670(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar11 = (uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)*puVar11;
  puVar12 = (uint *)(param_1 + 0x10);
  if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
    *puVar11 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      *puVar1 = *param_2;
      puVar1[1] = uVar10;
    }
    return;
  }
  uVar4 = (int)((int)puVar1 - *puVar12) >> 3;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x18) - *puVar12) >> 3)) {
    *puVar11 = (uint)(puVar1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-2];
      puVar1[1] = puVar1[-1];
    }
    puVar7 = puVar1 + -2;
    puVar8 = puVar1;
    if (puVar1 < puVar7) {
      iVar5 = (int)puVar7 - (int)puVar1;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar7 = puVar1 + -4;
          puVar8 = puVar1 + -2;
          *puVar8 = *puVar7;
          puVar1[-1] = puVar1[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar7[-1];
          puVar8[-2] = puVar7[-2];
          puVar8[-1] = uVar10;
          uVar10 = puVar7[-3];
          puVar8[-4] = puVar7[-4];
          puVar8[-3] = uVar10;
          puVar8 = puVar8 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar1 != puVar7) {
        uVar10 = puVar7[-1];
        puVar8[-2] = puVar7[-2];
        puVar8[-1] = uVar10;
        puVar8 = puVar8 + -2;
        puVar7 = puVar7 + -2;
      }
    }
    uVar10 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar10;
    return;
  }
  uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  uVar13 = uVar4 + 0x20;
  if (uVar4 + 0x20 <= uVar6) {
    uVar13 = uVar6;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
  puVar8 = puVar2;
  for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar10 = puVar7[1];
      *puVar8 = *puVar7;
      puVar8[1] = uVar10;
    }
    puVar8 = puVar8 + 2;
  }
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar12 & 0xfffffff8) + (int)puVar2);
  if (puVar7 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar10;
  }
  puVar8 = (undefined4 *)*puVar11;
  puVar7 = (undefined4 *)(((int)puVar1 - *puVar12 & 0xfffffff8) + (int)puVar2);
  for (; puVar1 != puVar8; puVar1 = puVar1 + 2) {
    puVar3 = puVar7 + 2;
    if (puVar3 != (undefined4 *)0x0) {
      uVar10 = puVar1[1];
      *puVar3 = *puVar1;
      puVar7[3] = uVar10;
    }
    puVar7 = puVar3;
  }
  uVar6 = *puVar12;
  uVar9 = *puVar11;
  uVar4 = uVar6;
  if (uVar9 < uVar6) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar9);
  }
  fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0x18) - uVar6) >> 3,0);
  *(undefined4 **)(param_1 + 0x18) = puVar2 + uVar13 * 2;
  *puVar11 = (uint)(puVar2 + ((int)(uVar9 - uVar6) >> 3) * 2 + 2);
  *puVar12 = (uint)puVar2;
  return;
}



void fn_005674fc(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fn_001db0c0();
  fn_005eeda8(*(undefined4 *)(param_1 + 0xe4));
  iVar1 = fn_003415b0();
  if (iVar1 == 0) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar4 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    if (fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3 < *(float *)(param_1 + 0x1a0)) {
      if (*(char *)(param_1 + 0x19c) == '\0') {
        iVar1 = fn_006f7a0c(DAT_008977e0);
        (**(code **)(**(int **)(iVar1 + 0x4c) + 0x18))();
        *(undefined1 *)(param_1 + 0x19c) = 1;
      }
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



void fn_005674ec(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x1a0) = in_s0 * in_s0;
  return;
}



void fn_005674b8(int *param_1)

{
  fn_001dbc6c(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x005674e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



void fn_00567480(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0083fc04;
  if ((int *)param_1[0x72] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x72] + 4))();
  }
  fn_001dc088(param_1);
  return;
}


