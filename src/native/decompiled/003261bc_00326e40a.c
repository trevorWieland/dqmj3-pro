#include "003261bc_00326e40a.h"



void fn_003266f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18) = param_2;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0xf0) = 1;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18) = 0;
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xf0) = 2;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003266c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003267d8(iVar1,param_1);
  return;
}



void fn_00326640(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0039e364();
}



void fn_00326614(int param_1)

{
  fn_0039e35c();
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0xf0) = 2;
  return;
}



void fn_0032630c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00823720;
  uVar2 = param_1[0x38];
  uVar3 = param_1[0x39];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar3);
    }
    param_1[0x39] = uVar3 - (uVar3 - uVar2 & 0xfffffffe);
  }
  uVar3 = uVar2;
  if ((uint)param_1[0x39] < uVar2) {
    do {
      uVar3 = uVar3 + 2;
    } while (uVar3 != param_1[0x39]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x3a] - uVar2) >> 1,0);
  *param_1 = &PTR_LAB_00825f6c;
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  fn_002c8f50(param_1);
  return;
}



undefined4 * fn_003262c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0034d9e4();
  *puVar1 = &PTR_FUN_00823720;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return puVar1;
}



void fn_003261bc(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar3 = fn_006ba284();
  uVar6 = param_2 + iVar3 * 8;
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar1);
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xe0) + uVar6 * 2);
  iVar3 = fn_006cb910(param_1,(int)(short)uVar2);
  if (iVar3 == 0) {
    fn_00689efc(param_1,0x90,0);
    return;
  }
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00893a00) goto LAB_00326274;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00326274:
  puVar4[0x158] = 0;
  puVar4[0x159] = 0;
  puVar4[0x156] = 1;
  puVar4[0x157] = (uint)uVar2;
  fn_00689efc(param_1,0x41,0);
  return;
}


