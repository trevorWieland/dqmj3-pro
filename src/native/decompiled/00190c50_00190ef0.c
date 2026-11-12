#include "00190c50_00190ef0.h"



uint fn_00190ef0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *local_18;
  undefined1 auStack_14 [4];
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == *(int *)(param_2 + 4)) {
    uVar1 = 0;
  }
  else {
    if (iVar2 == 0) {
      local_18 = &DAT_00855a94;
      fn_0015e6f0(auStack_14,&DAT_00190fb0);
      uVar1 = fn_00190ef0(&local_18,param_2);
      fn_00170f54(&local_18);
      return uVar1;
    }
    if (*(int *)(param_2 + 4) == 0) {
      local_18 = &DAT_00855a94;
      fn_0015e6f0(auStack_14,&DAT_00190fb0);
      uVar1 = fn_00190ef0(param_1,&local_18);
      fn_00170f54(&local_18);
      return uVar1;
    }
    uVar1 = fn_00101d80(iVar2);
    uVar1 = uVar1 >> 0x1f;
  }
  return uVar1;
}



undefined4 fn_00190ee0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0xb;
  if (param_2 == 0) {
    iVar3 = 0xd;
  }
  iVar1 = fn_001a1fb8();
  puVar5 = (&PTR_s_pos_700_0088ff30)[iVar1 * 0x18 + iVar3];
  iVar3 = fn_003035b0(puVar5,&DAT_0019bb88);
  if (iVar3 != 0) {
    fn_00183718(&uStack_2c,*(undefined4 *)(param_1 + 8),&DAT_0019bb8c);
    uVar4 = 0;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    if (uStack_2c != 0) {
      do {
        uVar2 = fn_0018385c(&uStack_44,uVar4);
        iVar3 = fn_003035b0(uVar2,puVar5);
        if (iVar3 == 0) {
          uVar2 = fn_00183840(&uStack_44,uVar4);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uStack_2c);
    }
  }
  return 0;
}



undefined4 fn_00190ed0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 10;
  if (param_2 == 0) {
    iVar3 = 0xc;
  }
  iVar1 = fn_001a1fb8();
  puVar5 = (&PTR_s_pos_700_0088ff30)[iVar1 * 0x18 + iVar3];
  iVar3 = fn_003035b0(puVar5,&DAT_0019bb88);
  if (iVar3 != 0) {
    fn_00183718(&uStack_2c,*(undefined4 *)(param_1 + 8),&DAT_0019bb8c);
    uVar4 = 0;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    if (uStack_2c != 0) {
      do {
        uVar2 = fn_0018385c(&uStack_44,uVar4);
        iVar3 = fn_003035b0(uVar2,puVar5);
        if (iVar3 == 0) {
          uVar2 = fn_00183840(&uStack_44,uVar4);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uStack_2c);
    }
  }
  return 0;
}



undefined4 fn_00190ec0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0xe;
  if (param_2 == 0) {
    iVar3 = 0xf;
  }
  iVar1 = fn_001a1fb8();
  puVar5 = (&PTR_s_pos_700_0088ff30)[iVar1 * 0x18 + iVar3];
  iVar3 = fn_003035b0(puVar5,&DAT_0019bb88);
  if (iVar3 != 0) {
    fn_00183718(&uStack_2c,*(undefined4 *)(param_1 + 8),&DAT_0019bb8c);
    uVar4 = 0;
    uStack_44 = uStack_28;
    uStack_40 = uStack_24;
    uStack_3c = uStack_20;
    uStack_38 = uStack_1c;
    uStack_34 = uStack_18;
    uStack_30 = uStack_14;
    if (uStack_2c != 0) {
      do {
        uVar2 = fn_0018385c(&uStack_44,uVar4);
        iVar3 = fn_003035b0(uVar2,puVar5);
        if (iVar3 == 0) {
          uVar2 = fn_00183840(&uStack_44,uVar4);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uStack_2c);
    }
  }
  return 0;
}



undefined4 fn_00190eb0(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (param_2 ^ 1) * 4 + 8);
}



undefined4 fn_00190ea4(int param_1,uint param_2)

{
  return *(undefined4 *)(param_1 + (param_2 ^ 1) * 4);
}



undefined4 fn_00190e40(int param_1)

{
  if (param_1 != 9) {
    if (param_1 < 10) {
      if (6 < param_1 - 2U) {
        return 0;
      }
    }
    else if (param_1 != 0xd) {
      if (param_1 < 0xe) {
        if ((param_1 != 10 && param_1 != 0xb) && param_1 != 0xc) {
          return 0;
        }
      }
      else if ((param_1 != 0xe && param_1 != 0x1c) && param_1 != 0x20) {
        return 0;
      }
    }
  }
  return 1;
}



void fn_00190e00(int *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00190e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x54))(param_1);
  return;
}



void fn_00190d78(int *param_1,int param_2,undefined2 param_3)

{
  float fVar1;
  
  if (param_1 == (int *)0x0 || param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_3,0);
  fVar1 = (float)param_1[0xf];
  if (((int)fVar1 & 0x80000001U) == 1) {
    fVar1 = fVar1 + 1.0;
  }
  param_1[0xf] = (int)fVar1;
  param_1[0x10] = param_1[0x10];
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
                    /* WARNING: Could not recover jumptable at 0x00190df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0);
  return;
}



void fn_00190d50(int *param_1,int param_2)

{
  short sVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  float fVar2;
  
  sVar1 = fn_00100b58(param_2);
  if (param_1 == (int *)0x0 || param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x58))
            (param_1,sVar1 + 1,0,*(code **)(*param_1 + 0x58),unaff_r4,unaff_r5,unaff_r6,in_lr);
  fVar2 = (float)param_1[0xf];
  if (((int)fVar2 & 0x80000001U) == 1) {
    fVar2 = fVar2 + 1.0;
  }
  param_1[0xf] = (int)fVar2;
  param_1[0x10] = param_1[0x10];
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xef | 0x10;
                    /* WARNING: Could not recover jumptable at 0x00190df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0);
  return;
}



void fn_00190d10(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  fn_0019501c(*(int *)(iVar1 + 0x78) + param_4 * 0x20,param_2);
  *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
  return;
}



void fn_00190cdc(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 100))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00190d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return;
}



int fn_00190c50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    *(undefined1 *)(param_1 + 0x54) = 1;
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0019a308();
    }
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -1;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar2 = iVar1 * 8 + 0x34 + *(int *)(param_1 + 0x58);
  iVar1 = fn_002fece8(iVar2);
  if (iVar1 != 0) {
    fn_00192548(iVar1,uVar3,param_1,iVar2);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(int *)(iVar1 + 0x20) = (iVar2 - *(int *)(param_1 + 0x58)) + iVar1;
  }
  return iVar1;
}


