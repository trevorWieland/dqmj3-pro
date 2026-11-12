#include "003e63d8_003ec050.h"



void fn_003ec050(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003ec0ac;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003ec0ac:
  uVar3 = fn_0022eefc((int)*(short *)(&DAT_007c7a54 + param_2 * 8),0);
  uVar4 = fn_0022f750((&DAT_007c7a50)[param_2 * 2]);
  fn_00321118(puVar1,uVar4,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_003eb910(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar16 *pwStack_70;
  char *pcStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [28];
  
  fn_00397774(&pwStack_70);
  local_3c = 1;
  local_38 = 0;
  uVar1 = fn_0022f750((char *)&DAT_003ebab8);
  fn_00147974(auStack_30,uVar1);
  local_68 = 4;
  uStack_64 = 0;
  local_5c = 4;
  local_60 = 0;
  pwStack_70 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_6c = (char *)&DAT_003ebad8;
  uVar1 = fn_0022f750((char *)&DAT_003ebaec);
  fn_00147974(auStack_54,uVar1);
  fn_00147974(auStack_50,"");
  fn_00147974(auStack_4c,"");
  fn_00147974(auStack_48,"");
  local_44 = 1;
  local_43 = 0;
  local_42 = 0;
  local_41 = 0;
  fn_00397618(param_1,&pwStack_70);
  iVar4 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_007c7a34)[iVar4]);
    fn_0031b78c(param_1,iVar4,0,uVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xc1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895c20) goto LAB_003eba38;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003eba38:
  uVar1 = *(undefined4 *)(DAT_0089783c + 0x30);
  puVar2[2] = *(undefined4 *)(DAT_0089783c + 0x2c);
  puVar2[3] = uVar1;
  fn_00689930(param_1,0xc1,0);
  fn_00100414(auStack_34,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_48);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return 1;
}



undefined4 fn_003e73f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [32];
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008968f8) goto LAB_003e743c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003e743c:
  *(undefined4 **)(param_1 + 0xe4) = puVar4;
  fn_00397774(&local_78);
  local_78 = DAT_00896814;
  local_74 = DAT_00896818;
  uStack_70 = 2;
  local_6c = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 8);
  uVar2 = fn_0022f750((char *)&DAT_003e7518);
  fn_00147974(auStack_5c,uVar2);
  local_44 = 1;
  uVar2 = fn_0022f750((char *)&DAT_003e7524);
  fn_00147974(auStack_38,uVar2);
  fn_00689efc(param_1,0xf0,0);
  fn_00397618(param_1,&local_78);
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_50);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return 1;
}



void fn_003e6b34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



void fn_003e6494(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_0022f584((char *)&DAT_003e6530,0);
    fn_0068974c(param_1,uVar2,1);
    return;
  }
  iVar1 = fn_001f7424(param_1,0x48);
  if (iVar1 == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x003e6528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
    if (iVar1 == 3) {
      param_1[0x1e] = (int)fn_003e62bc;
      param_1[0x1f] = 0;
    }
  }
  return;
}



void fn_003e63d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_0022f584((char *)&DAT_003e6474,0);
    fn_0068974c(param_1,uVar2,1);
    return;
  }
  iVar1 = fn_001f7424(param_1,0x48);
  if (iVar1 == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x003e646c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,0,0);
      return;
    }
    if (iVar1 == 3) {
      param_1[0x1e] = (int)fn_003e6098;
      param_1[0x1f] = 0;
    }
  }
  return;
}


