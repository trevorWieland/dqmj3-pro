#include "00734b4c_00741850.h"



undefined4 fn_00741850(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint local_68;
  int *local_64;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  if (*piVar1 != 0x8000200 && *piVar1 != 0x8000100) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00741be8);
    return uVar2;
  }
  piVar3 = (int *)fn_00173d4c(param_1,0xffffffff);
  iVar6 = *piVar3;
  bVar13 = iVar6 == 0xa000020 || iVar6 == 0x8004000;
  if (iVar6 != 0xa000020 && iVar6 != 0x8004000) {
    bVar13 = iVar6 == 0xa008000;
  }
  if (!bVar13) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00741c04);
    return uVar2;
  }
  local_4c = (int *)fn_00233b7c(piVar3[1]);
  puVar7 = (uint *)0x8010000;
  local_50 = 0x8010000;
  if (local_4c != (int *)0x0) {
    local_4c[1] = local_4c[1] + 1;
    local_44 = (int *)0x0;
    local_48 = 0x1000001;
    if (*piVar1 == 0x8000100) {
      iVar6 = piVar1[1];
      iVar12 = *(int *)(iVar6 + 0x14);
      piVar3 = *(int **)(iVar6 + 0x24);
      piVar1 = (int *)fn_002fece8(0x40);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = 0;
        puVar7 = &local_58;
        *piVar1 = (int)&DAT_008516d0;
        piVar1[2] = 0;
        piVar1[6] = 0x1000001;
        piVar1[7] = 0;
        piVar1[8] = 0x1000001;
        piVar1[9] = 0;
        piVar1[10] = 0;
        piVar1[0xb] = 0;
        piVar1[0xc] = 0;
        piVar1[0xd] = 0;
        piVar1[0xe] = 0;
        piVar1[0xf] = 0;
        local_58 = 0x8002000;
        local_54 = piVar3;
        if (piVar3 == (int *)0x0) goto code_r0x00741e8c;
        piVar3[1] = piVar3[1] + 1;
        fn_0019e864(piVar1 + 8,puVar7);
        if (((local_58 & 0x8000000) != 0) &&
           (iVar8 = local_54[1], local_54[1] = iVar8 + -1, iVar8 + -1 == 0)) {
          (**(code **)(*local_54 + 8))();
        }
        piVar1[3] = 0;
        piVar1[4] = 0;
        piVar1[5] = iVar12;
        fn_0019e8c4(iVar12 + 0x44,piVar1);
      }
      fn_0019e864(piVar1 + 6,iVar6 + 0x18);
      local_54 = (int *)0x0;
      local_58 = 0x1000001;
      fn_0019d320(piVar1 + 10,*(undefined4 *)(iVar6 + 0x2c),&local_58);
      if (((local_58 & 0x8000000) != 0) &&
         (iVar12 = local_54[1], local_54[1] = iVar12 + -1, iVar12 + -1 == 0)) {
        (**(code **)(*local_54 + 8))();
      }
      uVar4 = 0;
      uVar10 = 0;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        do {
          puVar7 = (uint *)(piVar1[10] + uVar4 * 8);
          if (puVar7 != (uint *)0x0) {
            puVar9 = (uint *)(*(int *)(iVar6 + 0x28) + uVar4 * 8);
            uVar11 = *puVar9;
            *puVar7 = uVar11;
            uVar10 = puVar9[1];
            puVar7[1] = uVar10;
            if ((uVar11 & 0x8000000) != 0) {
              *(int *)(uVar10 + 4) = *(int *)(uVar10 + 4) + 1;
            }
          }
          uVar10 = *(uint *)(iVar6 + 0x2c);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar10);
      }
      piVar1[0xb] = uVar10;
      local_64 = (int *)0x0;
      local_68 = 0x1000001;
      fn_0019d320(piVar1 + 0xd,*(undefined4 *)(iVar6 + 0x38),&local_68);
      if (((local_68 & 0x8000000) != 0) &&
         (iVar12 = local_64[1], local_64[1] = iVar12 + -1, iVar12 + -1 == 0)) {
        (**(code **)(*local_64 + 8))();
      }
      uVar10 = 0;
      if (*(int *)(iVar6 + 0x38) != 0) {
        do {
          puVar7 = (uint *)(piVar1[0xd] + uVar10 * 8);
          if (puVar7 != (uint *)0x0) {
            puVar9 = (uint *)(*(int *)(iVar6 + 0x34) + uVar10 * 8);
            uVar11 = *puVar9;
            *puVar7 = uVar11;
            uVar4 = puVar9[1];
            puVar7[1] = uVar4;
            if ((uVar11 & 0x8000000) != 0) {
              *(int *)(uVar4 + 4) = *(int *)(uVar4 + 4) + 1;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar6 + 0x38));
      }
      piVar1[0xe] = *(int *)(iVar6 + 0x38);
      fn_0019e864(piVar1 + 6,&local_50);
      puVar7 = &local_38;
      local_38 = 0x8000100;
      local_34 = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar1[1] + 1;
        fn_0019e864(&local_48);
        if (((local_38 & 0x8000000) != 0) &&
           (iVar6 = local_34[1], local_34[1] = iVar6 + -1, iVar6 + -1 == 0)) {
          (**(code **)(*local_34 + 8))();
        }
LAB_00741ea0:
        fn_0017ff68(param_1);
        fn_00173d1c(param_1,&local_48);
        if (((local_48 & 0x8000000) != 0) &&
           (iVar6 = local_44[1], local_44[1] = iVar6 + -1, iVar6 + -1 == 0)) {
          (**(code **)(*local_44 + 8))();
        }
        if (((local_50 & 0x8000000) != 0) &&
           (iVar6 = local_4c[1], local_4c[1] = iVar6 + -1, iVar6 + -1 == 0)) {
          (**(code **)(*local_4c + 8))();
        }
        return 0;
      }
    }
    else {
      iVar6 = piVar1[1];
      iVar12 = *(int *)(iVar6 + 0x14);
      iVar8 = *(int *)(iVar6 + 0x3c);
      piVar1 = (int *)fn_002fece8(0x48);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = 0;
        *piVar1 = (int)&DAT_0081e540;
        piVar1[2] = 0;
        piVar1[7] = 0;
        piVar1[8] = 0;
        piVar1[9] = 0;
        piVar1[10] = 0;
        piVar1[0xb] = 0;
        piVar1[0xc] = 0;
        piVar1[0xd] = 0x1000001;
        piVar1[0xe] = 0;
        piVar1[0x10] = 0x1000001;
        piVar1[0x11] = 0;
        piVar1[3] = 0;
        piVar1[0xf] = iVar8;
        piVar1[5] = iVar12;
        piVar1[4] = 0;
        fn_0019e8c4(iVar12 + 0x44);
      }
      fn_0019e864(piVar1 + 0xd,iVar6 + 0x34);
      fn_0019e864(piVar1 + 0x10,iVar6 + 0x40);
      local_54 = (int *)0x0;
      local_58 = 0x1000001;
      fn_0019d320(piVar1 + 10,*(undefined4 *)(iVar6 + 0x2c),&local_58);
      if (((local_58 & 0x8000000) != 0) &&
         (iVar12 = local_54[1], local_54[1] = iVar12 + -1, iVar12 + -1 == 0)) {
        (**(code **)(*local_54 + 8))();
      }
      uVar10 = 0;
      if (*(int *)(iVar6 + 0x2c) != 0) {
        do {
          puVar7 = (uint *)(piVar1[10] + uVar10 * 8);
          if (puVar7 != (uint *)0x0) {
            puVar9 = (uint *)(*(int *)(iVar6 + 0x28) + uVar10 * 8);
            uVar4 = *puVar9;
            *puVar7 = uVar4;
            uVar11 = puVar9[1];
            puVar7[1] = uVar11;
            if ((uVar4 & 0x8000000) != 0) {
              *(int *)(uVar11 + 4) = *(int *)(uVar11 + 4) + 1;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar6 + 0x2c));
      }
      piVar1[0xb] = *(int *)(iVar6 + 0x2c);
      uVar10 = *(uint *)(iVar6 + 0x20);
      if ((uint)piVar1[9] < uVar10) {
        uVar4 = uVar10;
        if (uVar10 == 0) {
          uVar4 = 4;
        }
        iVar12 = fn_0018388c(piVar1[7],piVar1[9] << 2,uVar4 << 2);
        piVar1[7] = iVar12;
        piVar1[9] = uVar4;
      }
      uVar4 = uVar10;
      if ((uint)piVar1[8] < uVar10) {
        do {
          puVar5 = (undefined4 *)(piVar1[7] + piVar1[8] * 4);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
          }
          iVar12 = piVar1[8];
          piVar1[8] = iVar12 + 1U;
        } while (iVar12 + 1U < uVar10);
      }
      else {
        for (; uVar4 < (uint)piVar1[8]; uVar4 = uVar4 + 1) {
        }
        piVar1[8] = uVar10;
      }
      uVar10 = 0;
      if (*(int *)(iVar6 + 0x20) != 0) {
        do {
          puVar5 = (undefined4 *)(piVar1[7] + uVar10 * 4);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x1c) + uVar10 * 4);
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar6 + 0x20));
      }
      piVar1[8] = *(int *)(iVar6 + 0x20);
      piVar1[6] = *(int *)(iVar6 + 0x18);
      fn_0019e864(piVar1 + 0xd,&local_50);
      puVar7 = &local_40;
      local_40 = 0x8000200;
      local_3c = piVar1;
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar1[1] + 1;
        fn_0019e864(&local_48,puVar7);
        if (((local_40 & 0x8000000) != 0) &&
           (iVar6 = local_3c[1], local_3c[1] = iVar6 + -1, iVar6 + -1 == 0)) {
          (**(code **)(*local_3c + 8))();
        }
        goto LAB_00741ea0;
      }
    }
  }
code_r0x00741e8c:
                    /* WARNING: Subroutine does not return */
  fn_00146590(0,puVar7);
}



void fn_00740ee8(char *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *local_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  undefined *local_28;
  undefined1 *local_24;
  
  if ((param_1 == (char *)0x0 || param_2 == 0) || param_3 == 0) {
    fn_001b8438(1,0xfffffe6d,(char *)&DAT_007d5f13);
    return;
  }
  if (*param_1 != '\0') {
    fn_001b8438(1,0xfffffe6e,(char *)&DAT_007d5f13);
    return;
  }
  uVar2 = fn_002febd8(param_2);
  if (0x3f < uVar2) {
    fn_001b8438(1,0xfffffe6b,(char *)&DAT_007d5f13);
    return;
  }
  *(int *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  fn_002fec40(param_1 + 0x28,param_2);
  uVar2 = (uint)(DAT_008d1898 != 0);
  iVar4 = 1;
  do {
    if ((&DAT_008d1898)[iVar4] != 0) {
      uVar2 = uVar2 + 1;
    }
    piVar1 = &DAT_008d189c + iVar4;
    iVar4 = iVar4 + 2;
    if (*piVar1 != 0) {
      uVar2 = uVar2 + 1;
    }
  } while (iVar4 < 0x1f);
  if ((int)uVar2 < 0x1f) {
    iVar5 = 0;
    iVar4 = iVar5;
    do {
      if ((&DAT_008d1898)[iVar5] != 0) {
        iVar4 = iVar5 + 1;
      }
      if ((&DAT_008d189c)[iVar5] != 0) {
        iVar4 = iVar5 + 2;
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < 0x1e);
    puVar3 = (undefined4 *)fn_00741220(8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 1;
    }
    (&DAT_008d1898)[iVar4] = (int)puVar3;
    if ((&DAT_008d1898)[iVar4] != 0) {
      uStack_30 = 4;
      local_2c = &LAB_0074a170;
      local_28 = &DAT_0074a284;
      local_24 = &LAB_0074a24c;
      local_34 = param_1;
      iVar4 = fn_0044fb14((&DAT_008d1898)[iVar4],&uStack_30,fn_00603a10,&local_34,0x500,0x10,
                           0xfffffffe);
      if (iVar4 < 0) {
        fn_0015e294();
      }
      goto LAB_0074109c;
    }
  }
  param_1[4] = 'j';
  param_1[5] = -2;
  param_1[6] = -1;
  param_1[7] = -1;
LAB_0074109c:
  *param_1 = '\x01';
  fn_001b8438(1,0,(char *)&DAT_007d5f13);
  return;
}



void fn_00734b4c(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar2 = DAT_008e3104;
  iVar1 = DAT_008bf790;
  iVar3 = DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  *(int *)(DAT_008e3104 + 0xc) = iVar3;
  if (param_3 == 0) {
    if (*(int *)(iVar2 + 0x14) != iVar3) {
      fn_001467fc();
    }
    if (*(int *)(iVar2 + 0x14) == *(int *)(iVar2 + 0xc)) {
      puVar4 = (undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) * 0x1c);
      *puVar4 = 1;
      *(uint *)(puVar4 + 8) = param_2;
      *(undefined4 *)(puVar4 + 4) = param_1;
      *(uint *)(puVar4 + 0xc) = *(uint *)(puVar4 + 0xc) | 2;
      fn_00150284();
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
      if (((DAT_008e3108 == iVar2) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
        DAT_008e3079 = '\x01';
        fn_0016720c();
      }
      fn_00150294();
      return;
    }
  }
  else {
    fn_0017821c(iVar1,param_1,param_2);
    DAT_008bf790 = DAT_008bf790 + (param_2 & 0xfffffffc);
  }
  return;
}


