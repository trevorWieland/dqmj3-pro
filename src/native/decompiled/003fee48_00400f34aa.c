#include "003fee48_00400f34aa.h"



undefined1 * fn_003ff638(int *param_1)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [2];
  undefined2 auStack_2e [15];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  fn_0020bbc4(auStack_10,param_1[0x3b]);
  fn_006c02d4(auStack_c,auStack_30,7);
  fn_0018a618(&local_48,0xc,0xb,&LAB_003ff6d4,auStack_2e[*(int *)(param_1[0x39] + 0x14) * 2]);
  (**(code **)(*param_1 + 0x13c))(param_1,2,1,&local_48);
  return auStack_10;
}



void fn_003fee88(int param_1)

{
  undefined4 uVar1;
  short asStack_38 [14];
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  fn_0020bbc4(auStack_18,*(undefined4 *)(param_1 + 0xec));
  fn_006c02d4(auStack_14,asStack_38,7);
  fn_003ff4f8(param_1);
  fn_00231074(&local_1c,*(undefined4 *)(param_1 + 0xec),0);
  fn_0015b0dc(local_1c);
  fn_00231d50((int)asStack_38[*(int *)(*(int *)(param_1 + 0xe4) + 0x14) * 2]);
  fn_0015b0dc();
  fn_00660d60((int)*(short *)(*(int *)(param_1 + 0xe4) + 0x10));
  fn_00231d50();
  fn_0015b0dc();
  uVar1 = fn_0022f584((char *)&DAT_003fef9c,0);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
  fn_00689bd0(param_1,0x48,0,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined1 * fn_003ff4f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  fn_002999ac(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xec));
  uVar1 = fn_0024e350(*(undefined4 *)(param_1 + 0xec));
  fn_0020bbc4(auStack_20,*(undefined4 *)(param_1 + 0xec));
  uVar2 = fn_00660d60((int)*(short *)(*(int *)(param_1 + 0xe4) + 0x10));
  fn_0020b914(auStack_20,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14),uVar2);
  fn_00289ec0(*(undefined4 *)(DAT_00897804 + 0x24),uVar2,0);
  iVar3 = fn_006bf5bc(auStack_1c);
  iVar4 = fn_006c0028(auStack_1c);
  if (iVar4 < iVar3) {
    *(undefined2 *)(*(int *)(param_1 + 0xec) + 0x22) =
         *(undefined2 *)(*(int *)(param_1 + 0xec) + 0x1e);
  }
  iVar3 = fn_006bf5c8(auStack_1c);
  iVar4 = fn_006c0114(auStack_1c);
  if (iVar4 < iVar3) {
    *(undefined2 *)(*(int *)(param_1 + 0xec) + 0x24) =
         *(undefined2 *)(*(int *)(param_1 + 0xec) + 0x20);
  }
  fn_0024f108(*(undefined4 *)(param_1 + 0xec),uVar1);
  fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(*(int *)(param_1 + 0xe4) + 0x10)
               ,1);
  fn_00299c10(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xec));
  return auStack_20;
}



void fn_003fee48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00836d18;
  fn_00100414(param_1 + 0x3a,&LAB_0059e0e0,8,2);
  iVar1 = fn_0059e2ac(param_1 + 0x33);
  fn_002c8f50(iVar1 + -0xcc);
  return;
}


