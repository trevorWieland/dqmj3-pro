#include "00391ca0_0039a450.h"



void fn_0039a450(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if ((short)param_1[0x27] != iVar1 || param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar1);
    if (iVar2 == 0) {
      uVar3 = fn_0022f584((char *)&DAT_0039a43c,0);
      fn_00385b60(param_1,uVar3);
      fn_00385b74(param_1,&DAT_00895340);
    }
    else {
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
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      (**(code **)(*param_1 + 0x124))(param_1,&local_58,0x20,iVar1);
      fn_00385b60(param_1,&local_58);
      fn_00385b74(param_1,&DAT_00895338);
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if ((short)param_1[0x27] != iVar1 || param_2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar1);
    if (iVar2 == 0) {
      uVar3 = fn_0022f584((char *)&DAT_0039a43c,0);
      fn_00190d50(param_1[0x28],uVar3);
      local_58 = DAT_00895340;
      fn_00688d44(param_1[0x28],&local_58);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x128))(param_1,iVar1);
      fn_00190d50(param_1[0x28],uVar3);
      local_58 = DAT_00895338;
      fn_00688d44(param_1[0x28],&local_58);
    }
  }
  fn_0039aeb0(param_1,param_2);
  uVar3 = (**(code **)(*param_1 + 0x140))(param_1);
  fn_0039ac50(param_1,uVar3,param_2);
  iVar1 = (**(code **)(*param_1 + 0x144))(param_1);
  iVar2 = param_1[0x44];
  bVar5 = *(byte *)(iVar2 + 0x44) & 0xfe;
  if (iVar1 == 0) {
    *(byte *)(iVar2 + 0x44) = bVar5;
  }
  else {
    *(byte *)(iVar2 + 0x44) = bVar5 | 1;
    iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
    if ((short)param_1[0x27] != iVar1 || param_2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x120))(param_1,iVar1);
      iVar4 = param_1[0x45];
      bVar5 = *(byte *)(iVar4 + 0x44) & 0xfe;
      if (iVar2 != 0) {
        *(byte *)(iVar4 + 0x44) = bVar5 | 1;
        iVar2 = fn_0020cda0(iVar1);
        if (iVar2 == 0) {
          uVar3 = fn_0022f750((char *)&DAT_0039a73c);
          fn_00190d50(param_1[0x45],uVar3);
          return;
        }
        uVar3 = (**(code **)(*param_1 + 0x13c))(param_1,iVar1);
        fn_00688c04(param_1[0x45],uVar3,0);
        return;
      }
      *(byte *)(iVar4 + 0x44) = bVar5;
    }
  }
  return;
}



void fn_00399d10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar5 = iVar1 * iVar2 + param_2;
  if (((int)uVar5 < 0) ||
     ((uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8) >> 4) <= uVar5)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8) + uVar5 * 0x10;
  }
  uVar3 = fn_0016a82c((int)*(short *)(iVar1 + 4));
  uVar4 = fn_0022ee7c((int)*(short *)(iVar1 + 4));
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_00399a04(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008939cc) goto LAB_00399a50;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00399a50:
  param_1[0x2c] = (int)puVar6;
  puVar6 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00893a00) goto LAB_00399a94;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_00399a94:
  param_1[0x2d] = (int)puVar6;
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
  fn_002c330c(&local_50);
  local_50 = DAT_00893a7c;
  local_4c = DAT_00893a80;
  uVar3 = fn_0022f750((char *)&DAT_00399c98);
  fn_00147974(&local_34,uVar3);
  local_48 = 10;
  local_44 = *(undefined4 *)(param_1[0x2c] + 8);
  local_40 = *(undefined4 *)(param_1[0x2c] + 0xc);
  local_21 = 1;
  local_38 = 0x42c00000;
  local_22 = 1;
  uStack_3c = uVar2;
  uVar2 = fn_0022f584((char *)&DAT_00399cb0,0);
  fn_00147974(&local_30,uVar2);
  local_20 = 0;
  local_1e = 1;
  local_1d = 0;
  fn_002c29a0(param_1,&local_50);
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_00689efc(param_1,0x41,0);
  if (local_28 != &DAT_008f9cf4) {
    piVar4 = local_28 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar4 = local_2c + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar4 = local_30 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar4 = local_34 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



int fn_00398180(void)

{
  int iVar1;
  
  iVar1 = fn_002c330c();
  *(undefined4 *)(iVar1 + 0x34) = 0;
  iVar1 = fn_00101a1c(iVar1 + 0x38,&LAB_0059e0cc,8,2);
  *(undefined4 **)(iVar1 + 0x14) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x18) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x1c) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x20) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x24) = &DAT_008f9cf4;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  *(undefined1 *)(iVar1 + 0x29) = 0;
  return iVar1 + -0x38;
}



void fn_00397b18(void)

{
  int iVar1;
  
  iVar1 = fn_002c330c();
  *(undefined4 **)(iVar1 + 0x38) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x3c) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x40) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x44) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 0x48) = &DAT_008f9cf4;
  *(undefined1 *)(iVar1 + 0x4c) = 0;
  return;
}



int fn_00397774(void)

{
  int iVar1;
  
  iVar1 = fn_002c330c();
  iVar1 = fn_00101a1c(iVar1 + 0x3c,&LAB_0059e0cc,8,4);
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined1 *)(iVar1 + -4) = 0;
  *(undefined1 *)(iVar1 + -3) = 0;
  return iVar1 + -0x3c;
}



void fn_00396c1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    uVar2 = fn_0022eefc((int)(short)*(undefined4 *)(&DAT_007c6dc4 + param_2 * 4),0);
    uVar3 = fn_0022f584((&PTR_s_MenuMessageDiscUseTitle_008941e8)[param_2],0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar2);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



void fn_00391ca0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,9);
  *puVar1 = &DAT_0082b16c;
  return;
}


