#include "00253bfc_00265604.h"



void fn_00265604(int param_1,int param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4) == 0) {
    return;
  }
  fn_00145ac0();
  return;
}



void fn_00264afc(undefined4 param_1)

{
  fn_00264f50(param_1,0x81,L"rom:/data/Race/Obj/o_rac_22.bch",0,0);
  return;
}



void fn_0026483c(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_90 [132];
  
  iVar1 = 0x7d;
  do {
    if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_00264874;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x81);
  iVar1 = -1;
LAB_00264874:
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Obj/o_rac_%02d.bch",(&DAT_007c9898)[param_2]);
  fn_00264f50(param_1,iVar1,auStack_90,0,0);
  return;
}



void fn_00264684(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_90 [132];
  
  iVar1 = 0x79;
  do {
    if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_002646bc;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x7d);
  iVar1 = -1;
LAB_002646bc:
  fn_00101a50(auStack_90,0x80,L"rom:/data/Race/Obj/o_rac_%02d.bch",(&DAT_007c9894)[param_2]);
  fn_00264f50(param_1,iVar1,auStack_90,0,0);
  return;
}



void fn_002644ec(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0x108) == 0) {
    fn_00264f50(param_1,0x42,L"rom:/data/Model/Mii_Body.bch",0,0);
  }
  return;
}



void fn_0025b504(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  bVar1 = *(byte *)(iVar2 + 0x261);
  if (bVar1 != 0) {
    if (param_2 < (int)(uint)bVar1) {
      *(byte *)(iVar2 + 0x261) = bVar1 - (char)param_2;
    }
    else {
      *(undefined1 *)(iVar2 + 0x261) = 0;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x262) = 0;
    }
  }
  return;
}



uint fn_00256cf4(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_250 [260];
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined1 auStack_140 [260];
  uint local_3c;
  uint local_38 [2];
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  fn_0020deb4(auStack_250,param_2,param_3,0,0,0);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == *(int *)(param_1 + 0x18)) {
    fn_0078a498();
  }
  else {
    *(int *)(param_1 + 0x14) = iVar4 + 0x104;
    if (iVar4 != 0) {
      fn_0017821c(iVar4,auStack_250,0x104);
    }
  }
  fn_00301f50(auStack_140,0x104);
  uVar1 = fn_00100fc6(0x2080,0);
  iVar4 = 3;
  uVar6 = uVar1;
  do {
    if (uVar6 != 0) {
      fn_0017821c(uVar6,auStack_140,0x104);
    }
    iVar4 = iVar4 + -1;
    uVar6 = uVar6 + 0x104;
  } while (iVar4 != 0);
  uVar7 = uVar1 + 0x30c;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  fn_0078a708(&local_14c,8);
  fn_0020deb4(uVar1,local_2c,local_28,1,(int)*(short *)(*(int *)(param_1 + 0x10) + 0x2c),0);
  fn_0020deb4(uVar1 + 0x104,local_2c,local_28,2,(int)*(short *)(*(int *)(param_1 + 0x10) + 0x2c),
               (int)*(short *)(uVar1 + 0x2c));
  iVar4 = fn_00210198(auStack_250,local_2c,local_28);
  uVar6 = local_148;
  if (iVar4 != 0) {
    if (local_148 == local_144) {
      fn_0078a498(&local_14c);
    }
    else {
      uVar2 = local_148 + 0x104;
      bVar9 = local_148 != 0;
      local_148 = uVar2;
      if (bVar9) {
        fn_0017821c(uVar6,auStack_250,0x104);
      }
    }
  }
  iVar4 = fn_0020fcf4(auStack_250,local_2c,local_28);
  uVar6 = local_148;
  if (iVar4 != 0) {
    if (local_148 == local_144) {
      fn_0078a498(&local_14c);
    }
    else {
      uVar2 = local_148 + 0x104;
      bVar9 = local_148 != 0;
      local_148 = uVar2;
      if (bVar9) {
        fn_0017821c(uVar6,auStack_250,0x104);
      }
    }
  }
  if (((uint)((int)(local_148 - local_14c) / 0x104) < 2) &&
     (iVar4 = fn_00210378(auStack_250,local_2c,local_28), uVar6 = local_148, iVar4 != 0)) {
    if (local_148 == local_144) {
      fn_0078a498(&local_14c);
    }
    else {
      uVar2 = local_148 + 0x104;
      bVar9 = local_148 != 0;
      local_148 = uVar2;
      if (bVar9) {
        fn_0017821c(uVar6,auStack_250,0x104);
      }
    }
  }
  uVar2 = 0;
  uVar6 = (int)(local_148 - local_14c) / 0x104;
  local_3c = 2 - uVar6;
  local_38[0] = (int)(uVar7 - uVar1) / 0x104;
  puVar3 = local_38;
  if (2 - uVar6 <= local_38[0]) {
    puVar3 = &local_3c;
  }
  uVar8 = *puVar3;
  if (uVar8 != 0) {
    do {
      iVar4 = *(int *)(param_1 + 0x14);
      iVar5 = uVar1 + uVar2 * 0x104;
      if (iVar4 == *(int *)(param_1 + 0x18)) {
        fn_0078a498(param_1 + 0x10,iVar4,iVar5);
      }
      else {
        *(int *)(param_1 + 0x14) = iVar4 + 0x104;
        if (iVar4 != 0) {
          fn_0017821c(iVar4,iVar5,0x104);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar8);
  }
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar5 = *(int *)(param_1 + 0x14);
      iVar4 = local_14c + uVar2 * 0x104;
      if (iVar5 == *(int *)(param_1 + 0x18)) {
        fn_0078a498(param_1 + 0x10,iVar5,iVar4);
      }
      else {
        *(int *)(param_1 + 0x14) = iVar5 + 0x104;
        if (iVar5 != 0) {
          fn_0017821c(iVar5,iVar4,0x104);
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar6);
  }
  uVar6 = local_14c;
  if (local_148 < local_14c) {
    do {
      uVar6 = uVar6 + 0x104;
    } while (uVar6 != local_148);
  }
  fn_001008c4(local_14c,(int)(local_144 - local_14c) / 0x104,0);
  uVar6 = uVar1;
  if (uVar7 < uVar1) {
    do {
      uVar6 = uVar6 + 0x104;
    } while (uVar6 != uVar7);
  }
  fn_001008c4(uVar1,0x20,0);
  fn_00210394(auStack_250,local_2c,local_28);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == *(int *)(param_1 + 0x18)) {
    fn_0078a498();
  }
  else {
    *(int *)(param_1 + 0x14) = iVar4 + 0x104;
    if (iVar4 != 0) {
      fn_0017821c(iVar4,auStack_250,0x104);
    }
  }
  fn_00210394(auStack_250,local_28,local_2c);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == *(int *)(param_1 + 0x18)) {
    fn_0078a498();
  }
  else {
    *(int *)(param_1 + 0x14) = iVar4 + 0x104;
    if (iVar4 != 0) {
      fn_0017821c(iVar4,auStack_250,0x104);
    }
  }
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar4 = iVar5 >> 0x1f;
  if (iVar5 / 0x104 + iVar4 != iVar4) {
    do {
      if ((*(short *)(*(int *)(param_1 + 0x10) + uVar6 * 0x104 + 0x2c) != 0) &&
         (uVar1 = uVar6 + 1,
         uVar1 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104))) {
        do {
          if ((*(short *)(*(int *)(param_1 + 0x10) + uVar1 * 0x104 + 0x2c) != 0) &&
             (iVar4 = fn_006b5a7c(param_1,*(int *)(param_1 + 0x10) + uVar6 * 0x104), iVar4 != 0)) {
            *(undefined2 *)(*(int *)(param_1 + 0x10) + uVar1 * 0x104 + 0x2c) = 0;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104));
  }
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar4 = iVar5 >> 0x1f;
  if (iVar5 / 0x104 + iVar4 != iVar4) {
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      iVar5 = iVar4 + uVar6 * 0x104;
      if (*(short *)(iVar5 + 0x2c) == 0) {
        uVar1 = uVar6;
        do {
          uVar1 = uVar1 + 1;
          if ((uint)((*(int *)(param_1 + 0x14) - iVar4) / 0x104) <= uVar1) goto LAB_00257334;
        } while (*(short *)(iVar4 + uVar1 * 0x104 + 0x2c) == 0);
        fn_0017821c(iVar5,iVar4 + uVar1 * 0x104,0x104);
        *(undefined2 *)(*(int *)(param_1 + 0x10) + uVar1 * 0x104 + 0x2c) = 0;
      }
LAB_00257334:
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104));
  }
  uVar6 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x104;
  uVar1 = 0;
  if (uVar6 != 0) {
    do {
      if (*(short *)(*(int *)(param_1 + 0x10) + uVar1 * 0x104 + 0x2c) == 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar6);
  }
  return uVar6;
}



void fn_00255cd0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



void fn_002544d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_88 [128];
  
  uVar1 = fn_00242bd4(param_2);
  fn_00101a50(auStack_88,0x80,L"patch:/data/Mask/%s.bch",uVar1);
  fn_0016b874(param_1,10,0,auStack_88,3,0);
  return;
}



void fn_00253bfc(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_98 [128];
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  uVar1 = fn_00242bd4(param_3);
  fn_001782b8(&local_18,uVar1,4);
  fn_00101a50(auStack_98,0x80,L"patch:/data/Motion/%s.bch",&local_18);
  fn_0016b874(param_1,1,(int)*param_2,auStack_98,1,0);
  return;
}


