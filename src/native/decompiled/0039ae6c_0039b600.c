#include "0039ae6c_0039b600.h"



void fn_0039b600(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_0039b5d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0022cfac();
  *puVar1 = &PTR_FUN_0082c6c8;
  return;
}



void fn_0039b5a8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x1c);
  uVar1 = fn_0068897c(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"tb_player_name");
  fn_00190d50(uVar1,uVar2);
  return;
}



void fn_0039b558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_0022cab4();
  fn_0031cab4(*(undefined4 *)(param_1 + 0x94),0);
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x20);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar4 = *(int *)(param_1 + 0x94);
  uVar1 = fn_0068897c(*(undefined4 *)(iVar4 + 8),(char *)&DAT_0031c310,uVar2,param_4,unaff_r4,unaff_r5,
                       unaff_r6,in_lr);
  fn_00190d50(uVar1,uVar3);
  uVar1 = fn_0068897c(*(undefined4 *)(iVar4 + 8),(char *)&DAT_0031c2e0);
  fn_00688c04(uVar1,uVar2,0);
  return;
}



void fn_0039b2ac(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_0082c578;
  uVar3 = param_1[0x41];
  param_1[0x41] = 0;
  uVar2 = param_1[0x42];
  param_1[0x42] = 0;
  iVar4 = param_1[0x43];
  param_1[0x43] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 2,0);
  uVar3 = param_1[0x3e];
  param_1[0x3e] = 0;
  uVar2 = param_1[0x3f];
  param_1[0x3f] = 0;
  iVar4 = param_1[0x40];
  param_1[0x40] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 2,0);
  uVar3 = param_1[0x3b];
  param_1[0x3b] = 0;
  uVar2 = param_1[0x3c];
  param_1[0x3c] = 0;
  iVar4 = param_1[0x3d];
  param_1[0x3d] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 2,0);
  uVar3 = param_1[0x38];
  param_1[0x38] = 0;
  uVar2 = param_1[0x39];
  param_1[0x39] = 0;
  iVar4 = param_1[0x3a];
  param_1[0x3a] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 2,0);
  uVar3 = param_1[0x35];
  param_1[0x35] = 0;
  uVar2 = param_1[0x36];
  param_1[0x36] = 0;
  iVar4 = param_1[0x37];
  param_1[0x37] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 2,0);
  fn_0022ccb4(param_1);
  uVar2 = param_1[0x41];
  uVar1 = uVar2;
  if ((uint)param_1[0x42] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[0x42]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x43] - uVar2) >> 2,0);
  uVar2 = param_1[0x3e];
  uVar1 = uVar2;
  if ((uint)param_1[0x3f] <= uVar2) {
    for (; uVar1 != param_1[0x3f]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x40] - uVar2) >> 2,0);
  uVar2 = param_1[0x3b];
  uVar1 = uVar2;
  if ((uint)param_1[0x3c] <= uVar2) {
    for (; uVar1 != param_1[0x3c]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x3d] - uVar2) >> 2,0);
  uVar2 = param_1[0x38];
  uVar1 = uVar2;
  if ((uint)param_1[0x39] <= uVar2) {
    for (; uVar1 != param_1[0x39]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x3a] - uVar2) >> 2,0);
  uVar2 = param_1[0x35];
  uVar1 = uVar2;
  if ((uint)param_1[0x36] <= uVar2) {
    for (; uVar1 != param_1[0x36]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x37] - uVar2) >> 2,0);
  fn_0022d114(param_1);
  return;
}



undefined4 * fn_0039b1e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_0082c578;
  *(undefined2 *)(puVar1 + 0x27) = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x1f] = 4;
  fn_0031ca98(puVar1,DAT_00895324,DAT_00895328,DAT_0089532c);
  return puVar1;
}



void fn_0039aeb0(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [2];
  
  iVar3 = (**(code **)(*param_1 + 0x11c))(param_1);
  if ((short)param_1[0x27] != iVar3 || param_2 != 0) {
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    (**(code **)(*param_1 + 0x130))(param_1,&local_74,iVar3);
    iVar4 = (int)(local_70 - local_74) >> 1;
    bVar9 = iVar4 == 8;
    iVar6 = 8;
    iVar2 = iVar4 + -8;
    if (8 >= iVar4) {
      bVar9 = iVar4 == 0;
      iVar6 = iVar4;
      iVar2 = iVar4;
    }
    if (bVar9 || iVar2 < 0 != (8 < iVar4 && SBORROW4(iVar4,8))) {
      *(byte *)(param_1[0x29] + 0x44) = *(byte *)(param_1[0x29] + 0x44) & 0xfe | 1;
      uVar5 = (**(code **)(*param_1 + 0x138))(param_1);
      fn_00190d50(param_1[0x29],uVar5);
      local_78 = DAT_00895338;
      fn_00688d44(param_1[0x29],&local_78);
      iVar6 = iVar6 + 1;
      iVar4 = iVar6;
    }
    else {
      uVar8 = 0;
      do {
        *(byte *)(param_1[uVar8 + 0x29] + 0x44) = *(byte *)(param_1[uVar8 + 0x29] + 0x44) & 0xfe | 1
        ;
        uVar1 = (int)(local_70 - local_74) >> 1;
        if (uVar1 <= uVar8) {
          local_78 = uVar1;
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar8);
        }
        iVar4 = (**(code **)(*param_1 + 0x134))(param_1,iVar3,(int)*(short *)(local_74 + uVar8 * 2))
        ;
        if (iVar4 == 0) {
          uVar5 = fn_0022f584((char *)&DAT_0039b1c4,0);
          fn_00190d50(param_1[uVar8 + 0x29],uVar5);
          local_78 = DAT_00895340;
          iVar4 = param_1[uVar8 + 0x29];
          puVar7 = &local_78;
        }
        else {
          local_60 = 0;
          local_5c = 0;
          local_4c = 0;
          local_48 = 0;
          local_38 = 0;
          local_34 = 0;
          local_68 = 0;
          local_64 = 0;
          local_58 = 0;
          local_54 = 0;
          local_50 = 0;
          local_44 = 0;
          local_40 = 0;
          uVar1 = (int)(local_70 - local_74) >> 1;
          local_3c = 0;
          local_30 = 0;
          local_2c = 0;
          if (uVar1 <= uVar8) {
            local_78 = uVar1;
            fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar8);
          }
          (**(code **)(*param_1 + 300))
                    (param_1,&local_68,0x20,(int)*(short *)(local_74 + uVar8 * 2));
          fn_00190d50(param_1[uVar8 + 0x29],&local_68);
          local_28[0] = DAT_00895338;
          iVar4 = param_1[uVar8 + 0x29];
          puVar7 = local_28;
        }
        fn_00688d44(iVar4,puVar7);
        uVar8 = uVar8 + 1;
        iVar4 = iVar6;
      } while ((int)uVar8 < iVar6);
    }
    for (; iVar6 < 8; iVar6 = iVar6 + 1) {
      *(byte *)(param_1[iVar6 + 0x29] + 0x44) = *(byte *)(param_1[iVar6 + 0x29] + 0x44) & 0xfe;
    }
    *(byte *)(param_1[0x31] + 0x44) =
         8U < (uint)((int)(local_70 - local_74) >> 1) | *(byte *)(param_1[0x31] + 0x44) & 0xfe;
    iVar3 = param_1[0x32];
    fVar10 = (float)VectorSignedToFloat(iVar4 + (uint)(8 < (uint)((int)(local_70 - local_74) >> 1)),
                                        (byte)(in_fpscr >> 0x16) & 3);
    *(float *)(iVar3 + 0x20) = fVar10 * -18.0 - 10.0;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    uVar8 = local_74;
    if (local_70 < local_74) {
      do {
        uVar8 = uVar8 + 2;
      } while (uVar8 != local_70);
    }
    fn_001008c4(local_74,(int)(local_6c - local_74) >> 1,0);
  }
  return;
}



void fn_0039ae6c(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    fn_0039a450(param_1,0);
    iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
    if ((short)param_1[0x27] != iVar1) {
      *(short *)(param_1 + 0x27) = (short)iVar1;
    }
  }
  return;
}


