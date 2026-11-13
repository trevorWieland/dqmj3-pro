#include "003ec134_003ed3e8.h"



void fn_003ed3e8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_20;
  
  local_20 = 0;
  local_20 = fn_0066e3bc(DAT_00898840);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4);
  uVar2 = *(undefined4 *)(iVar6 + 8);
  fn_003dccfc(uVar2,&local_20,999);
  iVar3 = fn_00443e84(iVar6,999);
  if (iVar3 != 0) {
    bVar1 = true;
    iVar3 = 0;
    do {
      iVar4 = fn_006ce63c(iVar6,iVar3);
      if (iVar4 != 0) {
        piVar5 = (int *)fn_006cb1a0(uVar2,iVar3);
        bVar1 = (bool)(bVar1 & *piVar5 == *(int *)(param_1 + 8));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    if (bVar1) {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
  return;
}



void fn_003ed3ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066e3bc(DAT_00898840);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  fn_003dcc90(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4) + 8));
  return;
}



void fn_003ed358(int *param_1)

{
  int iVar1;
  
  if ((param_1[1] - 1U < 0x3e6) && (iVar1 = fn_0066e3bc(DAT_00898840), iVar1 != param_1[2])) {
                    /* WARNING: Could not recover jumptable at 0x003ed39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  return;
}



void fn_003ed28c(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0x14))();
  if ((iVar1 == 0) && (*(int *)(*(int *)(param_1 + 0x108) + 0x44) == 0)) {
    fn_00761018(param_1);
    fn_002d6808(DAT_00897830);
    return;
  }
  return;
}



undefined4 fn_003ed1e4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x118) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x118) == 1) {
    fn_00747f28(param_1,DAT_00898214,(char *)&DAT_003ed268,0,1,0,0);
    *(undefined4 *)(param_1 + 0x118) = 2;
    return 1;
  }
  return 0;
}



bool fn_003ed164(int param_1)

{
  int iVar1;
  bool bVar2;
  
  *(undefined1 *)(*(int *)(param_1 + 0xfc) + 0xe) = 0;
  fn_0066e620(DAT_00897850,0);
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c),1);
  iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
  bVar2 = iVar1 == 0;
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
    if (iVar1 == 1) {
      bVar2 = true;
      *(undefined4 *)(param_1 + 0xe4) = 1;
    }
  }
  return bVar2;
}



undefined4 fn_003ed118(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00760b2c();
  *(undefined1 *)(*(int *)(param_1 + 0xf4) + 8) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xfc) + 0xe) = 1;
  fn_0066e620(DAT_00897850);
  return uVar1;
}



void fn_003ecfe8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0xd4) {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008965d0) goto LAB_003ed09c;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003ed09c:
    fn_00178290(puVar1,(char *)&DAT_003ed0e8);
    puVar1[2] = 0xda;
    puVar1[0x14] = 0xde;
    puVar1[0x15] = 0xde;
    fn_005b3260(puVar1,(char *)&DAT_003ed0f8);
    fn_005b3224(puVar1,(char *)&DAT_003ed108);
    puVar1[0x26] = 3;
  }
  else if (param_2 == 0xd5) {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd5);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008963e0) goto LAB_003ed040;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003ed040:
    puVar1[2] = 0xdf;
    fn_00178290(puVar1,*(undefined4 *)(param_1 + 0xb4));
    return;
  }
  return;
}



void fn_003ecf3c(int param_1)

{
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),0,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),2,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),3,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),5,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),6,1);
  fn_005db474(*(undefined4 *)(param_1 + 0xf0),7,1);
  *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10) = DAT_00897830;
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x8ed) = 1;
  return;
}



void fn_003ecf08(int param_1)

{
  fn_0066e620(DAT_00897850,0);
  fn_0042f204(*(undefined4 *)(param_1 + 200),0);
  fn_00760954(param_1);
  return;
}



void fn_003ecd48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 < 1)) {
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x11);
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    if (0x60 < iVar1) {
      *(undefined1 *)(param_1 + 0x10) = 2;
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_00174b40(uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0);
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00174c34(uVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar4;
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if (iVar1 < 0) {
        iVar1 = fn_002a0178(*(undefined4 *)(param_1 + 0xc));
        if (iVar1 != 0) {
          **(undefined1 **)(param_1 + 8) = 1;
          fn_00182994(DAT_008977e4);
          fn_00149628();
          fn_00182994(DAT_008977e4);
          fn_0014951c();
          fn_0029e7e0((int)**(char **)(param_1 + 8),*(undefined4 *)(param_1 + 4));
          *(undefined4 *)(param_1 + 0x14) = 1;
          iVar1 = *(int *)(param_1 + 0xc) + 1;
          *(int *)(param_1 + 0xc) = iVar1;
          goto joined_r0x003eced0;
        }
      }
      else {
        iVar1 = fn_0029fabc();
        if (iVar1 != 0) {
          **(undefined1 **)(param_1 + 8) = 1;
          fn_00182994(DAT_008977e4);
          fn_00149628();
          fn_00182994(DAT_008977e4);
          fn_0014951c();
          fn_0029e7e0((int)**(char **)(param_1 + 8),*(undefined4 *)(param_1 + 4));
          *(undefined4 *)(param_1 + 0x14) = 1;
          iVar1 = *(int *)(param_1 + 0xc) + 1;
          *(int *)(param_1 + 0xc) = iVar1;
joined_r0x003eced0:
          if (iVar1 < 0x61) {
            *(undefined1 *)(param_1 + 0x11) = 0;
          }
          else {
            *(undefined1 *)(param_1 + 0x11) = 2;
          }
          *(undefined1 *)(param_1 + 0x10) = 1;
          return;
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar1;
  } while( true );
}



void fn_003ec134(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    return;
  }
  if (param_2 == 0) {
    if (0 < *(int *)(DAT_0089783c + 0x30)) {
      puVar3 = (undefined4 *)fn_001f74ec(param_1,0xb1);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar4 == &DAT_00895c98) goto LAB_003ec1e0;
          puVar4 = (undefined4 *)*puVar4;
        } while (puVar4 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)0x0;
LAB_003ec1e0:
      *(undefined1 *)((int)puVar3 + 0x15) = 1;
      fn_006899f4(param_1,0xba,0);
      fn_0068ab44(param_1,0x100094b);
      return;
    }
    uVar2 = 2;
  }
  else if (param_2 == 1) {
    iVar1 = 0;
    if (0 < *(int *)(DAT_0089783c + 0x38)) {
      do {
        if (*(char *)(*(int *)(DAT_0089783c + 0x34) + iVar1 * 0x128 + 0x123) != '\0') {
          *(undefined4 *)(param_1 + 0xbc) = 1;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(DAT_0089783c + 0x38));
    }
    uVar2 = 3;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = fn_006bec40(*(undefined4 *)(DAT_00897804 + 0x40));
    if (iVar1 == 0) {
      uVar2 = 5;
    }
    else {
      uVar2 = 4;
    }
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  return;
}


