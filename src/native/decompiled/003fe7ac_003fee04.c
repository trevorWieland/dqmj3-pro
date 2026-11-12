#include "003fe7ac_003fee04.h"



void fn_003fee04(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00836d18;
  fn_00100414(param_1 + 0x3a,&LAB_0059e0e0,8,2);
  iVar1 = fn_0059e2ac(param_1 + 0x33);
  fn_002c8f50(iVar1 + -0xcc);
  fn_002feef8();
  return;
}



int fn_003fedc0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_003e5bc0();
  *puVar1 = &PTR_FUN_00836d18;
  iVar2 = fn_0059e280(puVar1 + 0x33);
  iVar2 = fn_00101a1c(iVar2 + 0x1c,&LAB_0059e0cc,8,2);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return iVar2 + -0xe8;
}



void fn_003fed14(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 200) + 1;
  *(int *)(param_1 + 200) = iVar1;
  iVar2 = DAT_00897804;
  if (iVar1 < 0x29) {
    iVar2 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    fn_003e5ab8(param_1,(*(int *)(param_1 + 0xc4) / 0x28) * *(int *)(param_1 + 200) + iVar2);
    return;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  iVar2 = fn_006b64b0(*(undefined4 *)(iVar2 + 8));
  fn_0025bd60(*(undefined4 *)(DAT_00897804 + 8),*(int *)(param_1 + 0xc4) + iVar2);
  fn_003e5b40(param_1);
  fn_003e5550(param_1);
  fn_006899f4(param_1,0x8d,0);
  return;
}



void fn_003fed10(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_003fecfc(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003fec4c(int param_1)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar1 = fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),
                       (int)*(short *)(*(int *)(param_1 + 0xb0) + 8));
  fn_0018a618(&local_48,0x20,0x1f,&DAT_003fecf4,uVar1);
  fn_0059e074(param_1 + 0xcc,0,1,&local_48);
  return;
}



undefined4 fn_003fe7ac(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int **ppiVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  int *local_a8;
  int *local_a4;
  int *piStack_a0;
  wchar16 *local_9c;
  char *pcStack_98;
  int local_94;
  undefined4 local_90;
  int local_88;
  undefined4 *local_80;
  undefined1 auStack_74 [4];
  undefined1 local_70;
  undefined1 local_6f;
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
  
  if (0 < param_1[0x3e]) {
    param_1[0x3e] = param_1[0x3e] + -1;
  }
  iVar1 = param_1[0x2f];
  if (7 < iVar1) {
    iVar1 = 7;
  }
  param_1[0x3f] = iVar1;
  if (0 < param_1[0x3e]) {
    param_1[0x3f] = param_1[0x3f] + -1;
  }
  fn_002c8d7c(param_1);
  fn_002c330c(&local_9c);
  local_9c = L"rom:/data/Layout/common/shop_02.arc";
  pcStack_98 = "shop_02.bflyt";
  local_88 = param_1[0x2f];
  local_94 = param_1[0x3f];
  local_90 = (**(code **)(*param_1 + 0x144))(param_1);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x138))(param_1);
  piVar3 = (int *)fn_00100b58();
  puVar11 = &DAT_008f9ce8;
  if (piVar3 == (int *)0x0) {
    piVar3 = local_80 + -3;
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      if ((local_80 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_80 + -3,local_80[-2] + 8,0);
      }
      local_80 = &DAT_008f9cf4;
      goto LAB_003fea5c;
    }
    local_80[-1] = 0;
    puVar2 = local_80;
  }
  else {
    uVar9 = local_80[-3] + 1;
    bVar13 = local_80[-3] != -1;
    bVar12 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar13 = (int *)local_80[-2] <= piVar3;
      bVar12 = piVar3 == (int *)local_80[-2];
    }
    if (bVar13 && !bVar12) {
LAB_003fe8ac:
      uVar9 = local_80[-1];
      local_a4 = (int *)(uVar9 + (uVar9 >> 1) + (uVar9 >> 3));
      if (local_a4 < (int *)(uVar9 + 0x80)) {
        local_a4 = (int *)(uVar9 + 0x80);
      }
      ppiVar7 = &piStack_a0;
      if (piVar3 <= local_a4) {
        ppiVar7 = &local_a4;
      }
      piStack_a0 = piVar3;
      piVar10 = *ppiVar7;
      if ((int *)0xfffffff1 < piVar10) {
        local_a8 = (int *)0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,piVar10);
      }
      if (piVar10 < piVar3) {
        local_a8 = piVar10;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,piVar3);
      }
      if (piVar10 != (int *)0x0) {
        puVar11 = (undefined4 *)fn_00100fc6((int)(piVar10 + 2) * 2,0);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
        }
        puVar11[2] = piVar3;
        puVar8 = (undefined2 *)((int)puVar11 + (int)piVar3 * 2 + 0xc);
        *puVar11 = 0;
        puVar11[1] = piVar10;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      fn_00301a9c(puVar11 + 3,puVar2,(int)piVar3 << 1);
      if (local_80 != &DAT_008f9cf4) {
        piVar3 = local_80 + -3;
        iVar1 = *piVar3;
        if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_80 + -3,local_80[-2] + 8,0);
        }
      }
      local_80 = puVar11 + 3;
      goto LAB_003fea5c;
    }
    if (puVar2 != (undefined4 *)0x0) {
      bVar12 = puVar2 <= local_80;
      if (local_80 <= puVar2) {
        bVar12 = (undefined4 *)((int)local_80 + local_80[-1] * 2) <= puVar2;
      }
      if (!bVar12) goto LAB_003fe8ac;
    }
    fn_001006ac(local_80,puVar2,piVar3);
    local_80[-1] = piVar3;
    puVar2 = (undefined4 *)((int)local_80 + (int)piVar3 * 2);
  }
  *(undefined2 *)puVar2 = 0;
LAB_003fea5c:
  local_70 = param_1[0x3f] < param_1[0x2f];
  local_6f = 0;
  fn_002c29a0(param_1,&local_9c);
  local_a8 = (int *)0xffffffff;
  fn_0031f8fc(param_1[0x1d],0,0);
  iVar1 = param_1[0x1d];
  *(undefined1 *)(iVar1 + 0x81) = 0;
  fn_0031f3f4(iVar1,0);
  iVar1 = fn_001588d4(auStack_74);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  uVar4 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar5 = fn_001828f0(uVar4,(char *)&DAT_003febbc);
  iVar1 = param_1[0x12];
  uVar6 = (**(code **)(*param_1 + 8))(param_1);
  local_a8 = (int *)param_1[0x3e];
  local_a4 = param_1 + 0x3a;
  piStack_a0 = (int *)0x2;
  fn_0059d948(param_1 + 0x33,uVar6,iVar1,uVar4);
  fn_0059e040(param_1 + 0x33,uVar5,param_1[0x3e]);
  fn_0023097c(&local_a8,(int)*(short *)(param_1[0x2c] + 8),0);
  fn_0059e074(param_1 + 0x33,0,0,local_a8);
  fn_001588d4(&local_a8);
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_a8 = (int *)fn_002298d8(*(undefined4 *)(DAT_00897804 + 0x14),
                                 (int)*(short *)(param_1[0x2c] + 8));
  fn_0018a618(&local_68,0x20,0x1f,&DAT_003fecf4);
  fn_0059e074(param_1 + 0x33,0,1,&local_68);
  return 1;
}


