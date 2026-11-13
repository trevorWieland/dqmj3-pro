#include "005c21b0_005c438cb.h"



void fn_005c438c(int *param_1)

{
  char cVar1;
  int iVar2;
  
  fn_002c4304();
  cVar1 = (char)param_1[0x2f];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = fn_00154ac8(0x1e0);
      if (iVar2 == 0) {
        fn_00144834(0x1e1);
      }
      fn_006899f4(param_1,0,1);
      fn_00689d04(param_1,0);
      fn_00689878(param_1,0);
LAB_005c4474:
      *(undefined1 *)(param_1 + 0x2f) = 3;
      return;
    }
    if (cVar1 == '\x02') {
      if (*(char *)(param_1[0x17] + 0x31) == '\x03') {
        if (param_1[0x2e] == 0) {
          (**(code **)(*param_1 + 0x110))(param_1);
                    /* WARNING: Subroutine does not return */
          fn_006ba250(param_1);
        }
        iVar2 = fn_00689b18(param_1);
        *(undefined1 *)(iVar2 + 0x45) = 1;
        fn_006899f4(param_1,param_1[0x2e],1);
        goto LAB_005c4474;
      }
      if (*(char *)(param_1[0x17] + 0x31) == '\x02') {
        fn_00689824(param_1,1);
        *(undefined1 *)(param_1 + 0x2f) = 0;
      }
    }
  }
  return;
}



void fn_005c4358(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c44cc(iVar1,param_1);
  return;
}



void fn_005c42b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00154ac8(0x1de);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = 3;
  }
  if (param_2 < iVar1) {
    uVar2 = fn_0022f584((&DAT_00898f2c)[param_2],0);
    uVar3 = fn_0016ba34(DAT_00897800,DAT_00898230,*(undefined4 *)(&DAT_00898f38 + param_2 * 4),0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



void fn_005c4284(int param_1)

{
  fn_002c3d68();
  fn_006083b8(*(undefined4 *)(param_1 + 0xb0));
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  return;
}



void fn_005c3e84(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_4);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = param_3;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_005c3bf0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005c3c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if (param_2 == 0) {
    if ((char)param_1[0x2d] == '\0') {
      uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageChallengeBattle",0);
      (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
      param_1[0x2e] = 0;
      fn_00689824(param_1,0);
      *(undefined1 *)(param_1 + 0x2f) = 2;
      return;
    }
    uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageChallengeBattleLimit",0);
                    /* WARNING: Could not recover jumptable at 0x005c3ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,0,3);
    return;
  }
  if (param_2 == 1) {
    uVar2 = fn_0022f584((char *)&DAT_005c3e1c,0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
    param_1[0x2e] = 0xd5;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x2f) = 2;
    return;
  }
  if (param_2 == 2) {
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3b3);
    if (iVar1 < 1) {
      uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageCollaboBattleNoTicket",0);
                    /* WARNING: Could not recover jumptable at 0x005c3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x138))(param_1,uVar2,0,3);
      return;
    }
    uVar2 = fn_0022f584((char *)&DAT_005c3d80,0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
    param_1[0x2e] = 0;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x2f) = 2;
  }
  return;
}



void fn_005c3bd0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005c3c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if (param_2 == 0) {
    if ((char)param_1[0x2d] == '\0') {
      uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageChallengeBattle",0);
      (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
      param_1[0x2e] = 0;
      fn_00689824(param_1,0);
      *(undefined1 *)(param_1 + 0x2f) = 2;
      return;
    }
    uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageChallengeBattleLimit",0);
                    /* WARNING: Could not recover jumptable at 0x005c3ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,0,3);
    return;
  }
  if (param_2 == 1) {
    uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageBattle",0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
    param_1[0x2e] = 0xd5;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x2f) = 2;
    return;
  }
  if (param_2 == 2) {
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3b3);
    if (iVar1 < 1) {
      uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageCollaboBattleNoTicket",0);
                    /* WARNING: Could not recover jumptable at 0x005c3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x138))(param_1,uVar2,0,3);
      return;
    }
    uVar2 = fn_0022f584("MenuMessageVirtualColosseumMessageCollaboBattle",0);
    (**(code **)(*param_1 + 0x138))(param_1,uVar2,1,3);
    param_1[0x2e] = 0;
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x2f) = 2;
  }
  return;
}



undefined4 * fn_005c3b58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_0084a4b8;
  puVar1[0x39] = &DAT_008591b0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  return puVar1;
}


