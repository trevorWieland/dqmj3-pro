#include "0040cea8_004133ecb.h"



void fn_004133ec(int *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  
  bVar2 = *(char *)((int)param_1 + 0xdd) + 1U & 3;
  *(byte *)((int)param_1 + 0xdd) = bVar2;
  fn_0022e468(param_1 + 0x38,bVar2);
  if (param_1[0x29] != 0) {
    uVar1 = fn_00231cb8((&DAT_007c6ddc)[*(byte *)((int)param_1 + 0xdd)]);
    fn_00243550(param_1[0x29],uVar1);
  }
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_004126e0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_10;
  
  local_10 = param_4;
  iVar4 = fn_006ba284();
  puVar5 = (undefined4 *)(param_2 + iVar4 * 8);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1);
  if (puVar1 <= puVar5) {
    local_10 = puVar1;
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,puVar5);
  }
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0xe0) + (int)puVar5 * 2);
  fn_0023097c(&local_10,iVar4,0);
  uVar2 = fn_0022ee7c(iVar4);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),local_10,uVar2);
  fn_00689bd0(param_1,0x49,0);
  if (local_10 != &DAT_008f9cf4) {
    piVar3 = local_10 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_00411c04(int param_1,short param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_10;
  
  local_10 = param_4;
  fn_0023097c(&local_10,(int)param_2,0);
  uVar1 = fn_0022ee7c((int)param_2);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),local_10,uVar1);
  fn_00689bd0(param_1,0x49,0);
  if (local_10 != &DAT_008f9cf4) {
    piVar2 = local_10 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_00411bf0(undefined4 param_1,int param_2)

{
  fn_0022f750(*(undefined4 *)(&DAT_00893e40 + param_2 * 4));
  return;
}



void fn_0041117c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1[0x2c] + 0x10) * 2;
  uVar2 = fn_00231cb8((&DAT_007c6a39)[iVar1]);
  fn_00243550(param_1[0x29],uVar2);
  fn_0022e4c4(param_1 + 0x30,(&DAT_007c6a38)[iVar1]);
                    /* WARNING: Could not recover jumptable at 0x004111c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_00410af4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x144))(param_1);
  uVar1 = fn_0016a82c();
  (**(code **)(*param_1 + 0x144))(param_1,param_2);
  uVar2 = fn_0022ee7c();
  fn_00321118(param_1[0x16],uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0040fe04(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_10 [8];
  
  if ((((param_2 != 0) || (*(char *)(param_1 + 0x30) != *(char *)(param_1 + 0x31))) ||
      (*(char *)(param_1 + 0x32) != *(char *)(param_1 + 0x33))) ||
     ((*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35) ||
      (*(char *)(param_1 + 0x36) != *(char *)(param_1 + 0x37))))) {
    iVar1 = fn_00154ac8(0x19);
    if (((iVar1 != 0) || (*(char *)(param_1 + 0x35) == '\0')) &&
       ((iVar1 = fn_00154ac8(0x463), iVar1 != 0 || (*(char *)(param_1 + 0x37) == '\0')))) {
      uVar3 = fn_00246858(*(undefined1 *)(param_1 + 0x33),(int)*(char *)(param_1 + 0x37));
      uVar4 = (uint)*(byte *)(param_1 + 0x31);
      if (uVar4 < uVar3) {
        fn_002309d8(auStack_10,4,uVar4,0);
      }
      else {
        fn_002309d8(auStack_10,4,uVar4,1);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x28),auStack_10);
      return;
    }
    uVar2 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x28),uVar2);
    uVar2 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x2c),uVar2);
    uVar2 = _DAT_0089369c;
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0xac) = _DAT_0089369c;
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0xac) = uVar2;
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
  }
  return;
}


