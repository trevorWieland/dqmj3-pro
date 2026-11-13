#include "003425a4_00342f20a.h"



undefined4 fn_00342884(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  wchar16 *pwStack_8c;
  char *pcStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 *local_70;
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_50 [32];
  uint local_30;
  uint auStack_2c [2];
  
  fn_00362e84();
  fn_00397774(&pwStack_8c);
  local_78 = 2;
  local_84 = 2;
  uStack_80 = 0;
  pwStack_8c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_88 = (char *)&DAT_00342c38;
  puVar1 = (undefined4 *)fn_0036307c(param_1);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_70 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_00342adc;
    }
    local_70[-1] = 0;
    puVar1 = local_70;
  }
  else {
    uVar8 = local_70[-3] + 1;
    bVar11 = local_70[-3] != -1;
    bVar10 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar11 = (uint)local_70[-2] <= uVar2;
      bVar10 = uVar2 == local_70[-2];
    }
    if (bVar11 && !bVar10) {
LAB_0034292c:
      uVar8 = local_70[-1];
      local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_30 < uVar8 + 0x80) {
        local_30 = uVar8 + 0x80;
      }
      puVar5 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar5 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar8 = *puVar5;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar8);
      }
      if (uVar8 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar8;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar3 = local_70 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar9 + 3;
      goto LAB_00342adc;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_70;
      if (local_70 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_0034292c;
    }
    fn_001006ac(local_70,puVar1,uVar2);
    local_70[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_70 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_00342adc:
  local_60 = 0;
  local_58 = 1;
  local_54 = 1;
  local_5f = 0;
  fn_00397618(param_1,&pwStack_8c);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar7 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar7 + 0x81) = 0;
  fn_0031f3f4(iVar7,0);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar7 = fn_001588d4(auStack_64);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  fn_001588d4(iVar7 + -4);
  fn_00362f9c(param_1);
  fn_0036308c(param_1,0);
  fn_00342c7c(param_1);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe4);
  iVar7 = fn_00660e0c((int)*(short *)(param_1 + 0xf8));
  if (iVar7 != 0) {
    if (**(int **)(DAT_008977e0 + 0x40) == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = 3;
    }
    iVar4 = fn_00661040((int)*(short *)(param_1 + 0xf8));
    if (((iVar4 == 1) && (iVar4 = fn_00661070((int)*(short *)(param_1 + 0xf8)), iVar4 == 0)) &&
       (*(int *)(*(int *)(param_1 + 0xec) + 0x10) != iVar7)) {
      *(int *)(*(int *)(param_1 + 0xec) + 0xc) = iVar7;
      fn_00689930(param_1,0x2c,0);
    }
    else {
      fn_00689efc(param_1,0x2c,0);
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00342c7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = 0;
  local_18 = param_4;
  do {
    uVar1 = fn_0022f584((&DAT_00891db8)[iVar2],0);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = fn_00660e0c((int)*(short *)(param_1 + 0xf8));
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xf8);
    if ((iVar2 == 0x42 || iVar2 == 0x44) || iVar2 == 0x46) {
      iVar2 = fn_006b63fc(*(undefined4 *)(DAT_00897804 + 8));
      if (iVar2 == 0) {
LAB_00342d14:
        local_18 = _DAT_00891d94;
        fn_002c37e0(param_1,0,&local_18);
        goto LAB_00342d84;
      }
    }
    else {
      if (iVar2 == 0x45) {
        iVar2 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
      }
      else {
        if (iVar2 == 0x40) goto LAB_00342d14;
        iVar2 = fn_002dd084(*(undefined4 *)(param_1 + 0xf4),(int)(short)iVar2);
      }
      if (iVar2 != 0) goto LAB_00342d14;
    }
  }
  local_18 = _DAT_00891d9c;
  fn_002c37e0(param_1,0,&local_18);
LAB_00342d84:
  iVar2 = fn_00660e44((int)*(short *)(param_1 + 0xf8));
  if (iVar2 == 0) {
    local_18 = _DAT_00891d94;
    fn_002c37e0(param_1,1,&local_18);
    return;
  }
  local_18 = _DAT_00891d9c;
  fn_002c37e0(param_1,1,&local_18);
  return;
}



undefined1 fn_003425a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (iVar2 == 0x40) {
    uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_00342810);
    fn_006976c0(DAT_008977e0,uVar1);
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    fn_003af0fc(*(undefined4 *)(param_1 + 0xf0));
    fn_0068ab44(param_1,0x100094b);
    return 1;
  }
  if ((iVar2 == 0x42 || iVar2 == 0x44) || iVar2 == 0x46) {
    iVar2 = fn_006b63fc(*(undefined4 *)(DAT_00897804 + 8));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0xf8);
      if (iVar2 == 0x42) {
        fn_0022f584((char *)&DAT_00342818,0);
      }
      else if (iVar2 == 0x44) {
        fn_0022f584((char *)&DAT_00342834,0);
      }
      else if (iVar2 == 0x46) {
        fn_0022f584((char *)&DAT_00342858,0);
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else {
    if (iVar2 != 0x45) {
      return 0;
    }
    iVar2 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
    if (iVar2 != 0) {
      fn_003f8108(local_3c);
      uStack_5c = uStack_38;
      uStack_58 = uStack_34;
      uStack_54 = uStack_30;
      uStack_50 = uStack_2c;
      uStack_4c = uStack_28;
      uStack_48 = uStack_24;
      uStack_44 = uStack_20;
      local_40 = local_1c;
      uStack_5e = ((*(unsigned int *)((unsigned char *)local_3c + 2)) & 0xffff);
      local_60 = (ushort)local_3c[0];
      fn_003f820c(*(undefined4 *)(param_1 + 0x100),&local_60,0xd7);
      fn_00689878(param_1,0x73);
      fn_0068ab44(param_1,0x100094b);
      return 1;
    }
  }
  fn_0068ab44(param_1,0x100094d);
  return 1;
}


