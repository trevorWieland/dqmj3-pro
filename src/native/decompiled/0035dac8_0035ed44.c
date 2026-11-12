#include "0035dac8_0035ed44.h"



int * fn_0035ed44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_006b7a48(uVar1,param_2);
  if (iVar2 == -1) {
    iVar2 = fn_002783f4(uVar1,param_2);
  }
  iVar3 = fn_00145b00(0x188,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_0033f248(iVar3,param_2,param_3);
  }
  (**(code **)(*piVar4 + 0xa0))(piVar4,iVar2);
  uVar1 = fn_006f751c(DAT_008977e0);
  fn_003403dc(uVar1,param_2,1);
  uVar1 = fn_006f7a70(DAT_008977e0);
  iVar2 = fn_002fe5f0(uVar1,piVar4);
  piVar4[0x5d] = iVar2;
  return piVar4;
}



void fn_0035e474(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00279ae4(uVar1,iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == -1) {
    return;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  fn_00279ae4(uVar1,iVar2);
  return;
}



void fn_0035e164(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint local_60;
  uint local_5c [5];
  int local_48;
  int local_44;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar9 = *(int *)(param_1 + 0x20);
  iVar11 = *(int *)(param_1 + 0x1c);
  iVar8 = iVar11;
  if (iVar11 != iVar9) {
    do {
      fn_0035dac8(iVar8);
      iVar8 = iVar8 + 0x28;
    } while (iVar8 != iVar9);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar9 - iVar11) / 0x28) * -0x28;
  }
  iVar11 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar8 = fn_006f7a0c(DAT_008977e0);
  piVar1 = (int *)(**(code **)(**(int **)(iVar8 + 0x50) + 0x38))();
  iVar8 = 0x2e8ba2e9;
  local_48 = 0;
  local_44 = 0;
  iVar9 = piVar1[1] - *piVar1;
  local_40 = 0;
  iVar9 = (int)(short)(((short)(iVar9 / 0x2c) + (short)(iVar9 >> 0x1f)) -
                      (short)((longlong)iVar9 * 0x2e8ba2e9 >> 0x3f));
  if (0 < iVar9) {
    do {
      piVar7 = (int *)(*piVar1 + iVar11 * 0x2c);
      iVar8 = *piVar7;
      fn_0035eb50(param_1,&local_48,iVar8,piVar7 + 1,piVar7[10]);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar9);
  }
  iVar9 = local_44 - local_48;
  uVar12 = (uint)(short)(((short)(iVar9 / 0x28) + (short)(iVar9 >> 0x1f)) -
                        (short)((longlong)iVar9 * 0x66666667 >> 0x3f));
  uVar2 = fn_006c8a2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  if ((int)uVar12 < (int)uVar2) {
    uVar2 = uVar12;
  }
  else {
  }
  puVar5 = local_5c;
  if (0x1f < uVar2) {
    puVar5 = &local_60;
  }
  local_60 = uVar2;
  local_5c[0] = 0x20;
  uVar10 = *puVar5;
  piVar7 = (int *)fn_00100fc6(uVar10 << 2,0);
  piVar1 = piVar7;
  for (uVar6 = local_60; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (piVar1 != (int *)0x0) {
      *piVar1 = -1;
    }
    piVar1 = piVar1 + 1;
  }
  iVar9 = 0;
  piVar1 = piVar7 + local_60;
  if (0 < (int)uVar2) {
    do {
      while (iVar11 = local_30, piVar7[iVar9] == -1) {
        iVar11 = fn_00163868(uVar12);
        piVar4 = piVar7;
        while( true ) {
          if (piVar4 != piVar1) {
            iVar8 = *piVar4;
          }
          if (piVar4 == piVar1 || iVar8 == iVar11) break;
          piVar4 = piVar4 + 1;
        }
        if (piVar4 == piVar1) {
          piVar7[iVar9] = iVar11;
        }
      }
      iVar8 = local_48 + piVar7[iVar9] * 0x28;
      if (local_30 == local_2c) {
        fn_0078e7a8(&local_34,local_30);
      }
      else {
        iVar3 = local_30 + 0x28;
        bVar13 = local_30 != 0;
        local_30 = iVar3;
        if (bVar13) {
          fn_0035d9ac(iVar11,iVar8);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)uVar2);
  }
  fn_003d58cc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),&local_34);
  piVar4 = piVar7;
  if (piVar1 < piVar7) {
    do {
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar1);
  }
  fn_001008c4(piVar7,(int)(uVar10 * 4) >> 2,0);
  iVar9 = local_44;
  for (iVar8 = local_48; iVar8 != iVar9; iVar8 = iVar8 + 0x28) {
    fn_0035dac8(iVar8);
  }
  fn_001008c4(local_48,(local_40 - local_48) / 0x28,0);
  iVar9 = local_30;
  for (iVar8 = local_34; iVar8 != iVar9; iVar8 = iVar8 + 0x28) {
    fn_0035dac8(iVar8);
  }
  fn_001008c4(local_34,(local_2c - local_34) / 0x28,0);
  return;
}



void fn_0035eb50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 int param_5)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  int local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  float local_50;
  int local_4c;
  int local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [20];
  
  iVar2 = fn_00101c78(param_3,&local_44,10);
  if (-1 < iVar2) {
    iVar2 = iVar2 + param_5 * 0x10000;
    iVar8 = 10;
    uVar1 = fn_00101c78(local_44 + 1,&local_44);
    fVar9 = 1.0;
    uVar3 = fn_002febd8(local_44);
    if (3 < uVar3) {
      iVar8 = 10;
      uVar3 = fn_00101c78(local_44 + 1,&local_44);
      if (uVar3 < 1000) {
        fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
        fVar9 = fVar9 * 0.01;
      }
    }
    piVar7 = (int *)*param_2;
    while( true ) {
      if (piVar7 != (int *)param_2[1]) {
        iVar8 = *piVar7;
      }
      if (piVar7 == (int *)param_2[1] || iVar8 == iVar2) break;
      piVar7 = piVar7 + 10;
    }
    local_3c = *param_4;
    uStack_38 = param_4[1];
    uStack_34 = param_4[2];
    local_40[0] = uVar1;
    if ((int *)param_2[1] != piVar7) {
      fn_00772a50(&local_70,piVar7 + 1,local_40);
      return;
    }
    local_54 = 0;
    local_53 = SUB41((int *)param_2[1],0);
    local_6c = (undefined4 *)0x0;
    local_5c = (undefined1 *)0x0;
    local_58 = 0;
    local_60 = (undefined1 *)0x0;
    local_64 = (undefined1 *)0x0;
    local_68 = 0;
    puVar4 = (undefined4 *)fn_00100fc6(0xc,0);
    uVar5 = fn_00100fc6(0x400,0);
    puVar4[2] = uVar5;
    *puVar4 = local_6c;
    puVar4[1] = 0x20;
    local_5c = (undefined1 *)puVar4[2];
    local_60 = local_5c + 0x400;
    local_64 = local_5c + 0x20;
    *(undefined4 *)(local_5c + 8) = 0;
    *(undefined4 *)(local_5c + 0xc) = 0;
    *local_5c = 0;
    *(undefined4 *)(local_5c + 4) = 0;
    *(undefined1 **)(local_5c + 8) = local_5c;
    *(undefined1 **)(local_5c + 0xc) = local_5c;
    local_70 = iVar2;
    local_6c = puVar4;
    local_50 = fVar9;
    fn_00772a50(auStack_30,&local_6c,local_40);
    local_4c = param_5;
    puVar4 = (undefined4 *)param_2[1];
    if (puVar4 == (undefined4 *)param_2[2]) {
      fn_0078e7a8(param_2,puVar4,&local_70);
    }
    else {
      puVar6 = param_2;
      if (puVar4 != (undefined4 *)0x0) {
        puVar6 = puVar4;
      }
      param_2[1] = puVar4 + 10;
      if (puVar4 != (undefined4 *)0x0) {
        fn_0035d9ac(puVar6);
      }
    }
    fn_0035dac8(&local_70);
  }
  return;
}



int fn_0035dac8(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  piVar3 = (int *)(param_1 + 4);
  local_14 = *(int *)(param_1 + 0x14);
  if (local_14 != 0) {
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_00772324(auStack_10,piVar3,&local_18,&local_14);
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1;
    piVar2 = (int *)*piVar3;
    while (piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*piVar3;
    }
  }
  return param_1;
}


