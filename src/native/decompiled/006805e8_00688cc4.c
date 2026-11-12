#include "006805e8_00688cc4.h"



void fn_00688cc4(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                            (*(int **)(param_1 + 0x10),param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00688d24;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00688d24:
  iVar3 = fn_00100b58(param_3);
  fn_00190d78(piVar1,param_3,iVar3 + 1);
  return;
}



void fn_00688c04(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
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
  
  if (param_1 == (int *)0x0) {
    return;
  }
  local_3c = 0;
  local_48 = 0;
  local_28 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  fn_0018a618(&local_48,0x20,0x1f,(&PTR_DAT_007ce734)[param_3],param_2);
  iVar1 = fn_00100b58(&local_48);
  (**(code **)(*param_1 + 0x58))(param_1,(iVar1 + 1U & 0x7fff) << 1,0);
  (**(code **)(*param_1 + 0x68))(param_1,&local_48,0);
  return;
}



void fn_006889d8(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10),param_2,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  return;
}



void fn_006887f0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



undefined4 fn_006828b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  
  fn_00522550(auStack_38);
  DAT_00897898 = fn_00521ecc(auStack_38,param_2);
  if (-1 < DAT_00897898) {
    DAT_00897898 = fn_00521f98(auStack_38,param_3);
    if (-1 < DAT_00897898) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00682778(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  
  *param_2 = 0;
  fn_00522550(auStack_38);
  DAT_00897898 = fn_00521ecc(auStack_38,param_3);
  if (-1 < DAT_00897898) {
    DAT_00897898 = fn_00521eec(auStack_38,param_2);
    if (-1 < DAT_00897898) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00682710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  DAT_00897898 = fn_00521370(&uStack_18);
  if (DAT_00897898 == 0xc8a0f842) {
    DAT_00897898 = fn_005215f8(param_2,param_3,0);
  }
  if ((DAT_00897898 & 0x80000000) == 0) {
    return 1;
  }
  return 0;
}



undefined4 fn_00682304(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = in_r3;
  DAT_00897898 = fn_00521370(auStack_8);
  if ((DAT_00897898 == 0xc8a0f842) || ((DAT_00897898 & 0x80000000) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_00682254(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_428 [4];
  ushort local_424;
  
  fn_00520e48(auStack_428);
  DAT_00897898 = fn_005212f0(auStack_428);
  if (((DAT_00897898 & 0x80000000) == 0) && (uVar1 = 0, local_424 != 0)) {
    do {
      if (param_2 == 0) {
        return 1;
      }
      uVar2 = fn_00520e30(auStack_428,uVar1);
      iVar3 = fn_003035b0(uVar2,param_2);
      if (iVar3 == 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_424);
  }
  return 0;
}



undefined4 fn_00681c0c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_30 [40];
  
  fn_00522550(auStack_30);
  DAT_00897898 = fn_00521ecc(auStack_30,param_2);
  if ((DAT_00897898 & 0x80000000) == 0) {
    DAT_00897898 = fn_00522220(auStack_30);
    if (-1 < (int)DAT_00897898) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006805e8(int *param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  int *local_60 [4];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [28];
  
  fn_00118ca8(auStack_40,0x3c);
  fn_00118ca8(auStack_38,0x3c);
  fn_00118ca8(auStack_48,0x3c);
  fn_00118ca8(auStack_50,0x3c);
  uVar13 = 0x49742400;
  while ((char)param_1[0x22] == '\0') {
    fn_0010d8dc(auStack_40);
    puVar8 = (undefined4 *)*param_1;
    fVar1 = (float)uVar13;
    piVar2 = (int *)0x0;
    while ((undefined4 *)param_1[1] != puVar8) {
      piVar3 = (int *)*puVar8;
      puVar8 = puVar8 + 1;
      if ((float)piVar3[5] + (float)piVar3[3] < fVar1) {
        fVar1 = (float)piVar3[5] + (float)piVar3[3];
        piVar2 = piVar3;
      }
    }
    fn_00118a68(auStack_40);
    fn_006eded4(auStack_40,0);
    if (piVar2 == (int *)0x0) goto LAB_006806fc;
    fn_0010d8dc(auStack_38);
    iVar11 = piVar2[1];
    uVar12 = 0;
    if (*(int *)(iVar11 + 0x80) - *(int *)(iVar11 + 0x7c) >> 3 != 0) {
      do {
        iVar4 = fn_00680e7c(param_1,*(undefined4 *)(*(int *)(iVar11 + 0x7c) + uVar12 * 8),piVar2);
        if (iVar4 != 0) goto LAB_006807dc;
        uVar12 = uVar12 + 1;
      } while (uVar12 < (uint)(*(int *)(iVar11 + 0x80) - *(int *)(iVar11 + 0x7c) >> 3));
    }
    iVar9 = param_1[0x2a];
    iVar4 = iVar9;
    if (*(int *)(iVar9 + 4) != 0) {
      iVar5 = *(int *)(iVar9 + 4);
      do {
        if (*(int *)(iVar5 + 0x10) < *(int *)(iVar11 + 0x78)) {
          iVar6 = *(int *)(iVar5 + 0xc);
        }
        else {
          iVar6 = *(int *)(iVar5 + 8);
          iVar4 = iVar5;
        }
        iVar5 = iVar6;
      } while (iVar6 != 0);
    }
    if ((iVar4 == iVar9) || (*(int *)(iVar11 + 0x78) < *(int *)(iVar4 + 0x10))) {
      iVar4 = iVar9;
    }
    if (iVar4 == param_1[0x2a]) {
LAB_006807d8:
      iVar4 = 0;
    }
    else {
      *(undefined1 *)(piVar2 + 6) = 1;
      iVar4 = fn_00680e7c(param_1,*(undefined4 *)(iVar4 + 0x14),piVar2);
      if (iVar4 == 0) goto LAB_006807d8;
    }
LAB_006807dc:
    fn_00118a68(auStack_38);
    fn_006eded4(auStack_38,0);
    if (iVar4 != 0) {
      fn_0010d8dc(auStack_48);
      fn_006813e4(param_1,iVar4);
      fn_00118a68(auStack_48);
      fn_006eded4(auStack_48,0);
      uVar12 = 0;
      if (param_1[4] - param_1[3] >> 2 != 0) {
        do {
          fn_002feef8(*(undefined4 *)(param_1[3] + uVar12 * 4));
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(param_1[4] - param_1[3] >> 2));
      }
      uVar12 = param_1[3];
      uVar10 = param_1[4];
      if (uVar12 != uVar10) {
        uVar7 = uVar12;
        if (uVar10 <= uVar12) {
          do {
            uVar7 = uVar7 + 4;
          } while (uVar7 != uVar10);
        }
        param_1[4] = uVar10 - (uVar10 - uVar12 & 0xfffffffc);
      }
      fn_00128dc4(auStack_50);
      fn_00128dc4(auStack_48);
      fn_00128dc4(auStack_38);
      fn_00128dc4(auStack_40);
      return 1;
    }
    fn_0010d8dc(auStack_50);
    iVar11 = fn_00680d80(param_1,piVar2);
    if (iVar11 != 0) {
      *piVar2 = param_1[0x1b];
      local_60[0] = piVar2;
      fn_00799c30(param_1 + 3,local_60);
      param_1[0x1b] = param_1[0x1b] + 1;
      *(undefined1 *)(param_1[0x1f] + *(int *)(piVar2[1] + 0x78)) = 1;
    }
    fn_00118a68(auStack_50);
    fn_006eded4(auStack_50,0);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
LAB_006806fc:
  fn_00128dc4(auStack_50);
  fn_00128dc4(auStack_48);
  fn_00128dc4(auStack_38);
  fn_00128dc4(auStack_40);
  return 0;
}


