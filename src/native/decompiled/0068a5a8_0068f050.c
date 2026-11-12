#include "0068a5a8_0068f050.h"



void fn_0068f050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  
  if (param_6 == 0) {
    pcVar2 = (char *)&DAT_0068f0d8;
  }
  else {
    pcVar2 = (char *)&DAT_0068f0cc;
  }
  iVar1 = fn_0068ef00(param_1,pcVar2,param_2,param_3,param_4,param_5);
  if ((param_6 != 0) && (iVar1 == 0)) {
    fn_0068ef00(param_1,(char *)&DAT_0068f0d8,param_2,param_3,param_4,param_5);
  }
  return;
}



void fn_0068c6b8(int *param_1)

{
  fn_00145ac0(*(undefined4 *)(*param_1 + 0x2cc));
  return;
}



void fn_0068c604(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  *puVar1 = &DAT_008511c0;
  *(undefined1 *)((int)puVar1 + 0x53) = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  return;
}



void fn_0068c570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
  return;
}



void fn_0068b21c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  uVar1 = fn_0023051c(param_2);
  fn_0010313a(&local_38,uVar1);
  local_20 = 0;
  local_1c = 0;
  if (param_3 != 0 && param_2 != 0) {
    fn_0023040c(&local_20,4,param_3);
    fn_00103156(&local_38,&local_20,0xc);
  }
  fn_00190d50(param_1,&local_38);
  return;
}



void fn_0068b1e4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x5d) != '\0') {
    uVar1 = fn_0022f5d8();
    fn_00190d50(*(undefined4 *)(param_1 + 0x44),uVar1);
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uVar2 = fn_0023051c(param_2);
  fn_0010313a(&uStack_38,uVar2);
  uStack_20 = 0;
  uStack_1c = 0;
  if (param_3 != 0 && param_2 != 0) {
    fn_0023040c(&uStack_20,4,param_3);
    fn_00103156(&uStack_38,&uStack_20,0xc);
  }
  fn_00190d50(uVar1,&uStack_38);
  return;
}



void fn_0068b010(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x30;
  }
  else {
    uVar1 = 0x31;
  }
  uVar1 = fn_00231ca0(uVar1,0);
  fn_00190d50(param_1,uVar1);
  return;
}



undefined4 fn_0068af9c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = fn_00231ca0(0x31,0);
    iVar2 = fn_00101d80(*(undefined4 *)(param_1 + 0xa4),uVar1);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



void fn_0068a5a8(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  switch((char)param_1[3]) {
  case '\0':
    if ((*(char *)((int)param_1 + 0x52) == '\0') &&
       (iVar3 = (**(code **)(*param_1 + 0xec))(param_1), iVar3 == 0)) goto switchD_0068a5c0_caseD_4;
    *(undefined1 *)((int)param_1 + 0xe) = 1;
    param_1[4] = param_1[4] + 1;
    iVar3 = param_1[3];
    *(char *)((int)param_1 + 0xd) = (char)iVar3;
    *(undefined1 *)(param_1 + 3) = 1;
    if ((char)iVar3 == '\x01') {
      param_1[5] = param_1[5] + 1;
    }
    else {
      param_1[5] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x52) = 0;
    break;
  case '\x01':
    break;
  case '\x02':
    goto switchD_0068a5c0_caseD_2;
  case '\x03':
    goto switchD_0068a5c0_caseD_3;
  default:
    goto switchD_0068a5c0_caseD_4;
  case '\x05':
    goto switchD_0068a5c0_caseD_5;
  case '\x06':
    goto switchD_0068a5c0_caseD_6;
  }
  if ((char)param_1[7] == '\0') goto switchD_0068a5c0_caseD_4;
  fn_0028c0d0(*(undefined4 *)(param_1[1] + 0x18),param_1[0x15]);
  if (*(char *)(*(int *)(param_1[1] + 0x18) + 0x45) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined1 *)((int)param_1 + 0xe) = 2;
  param_1[4] = param_1[4] + 1;
  iVar3 = param_1[3];
  *(char *)((int)param_1 + 0xd) = (char)iVar3;
  *(undefined1 *)(param_1 + 3) = 2;
  if ((char)iVar3 == '\x02') {
    param_1[5] = param_1[5] + 1;
  }
  else {
    param_1[5] = 0;
  }
switchD_0068a5c0_caseD_2:
  fn_0028fad0(param_1[0x12]);
  if ((char)param_1[0x13] == '\0') {
    if (*(char *)((int)param_1 + 0x4e) == '\0') goto LAB_0068a6fc;
LAB_0068a710:
    if ((char)param_1[0x13] == '\0') {
      iVar3 = (**(code **)(*param_1 + 0xf4))(param_1);
      *(char *)(param_1 + 0x13) = (char)iVar3;
      if (iVar3 != 0) goto LAB_0068a6ec;
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
LAB_0068a6fc:
      bVar2 = fn_0028c2e8(param_1[0x18],param_1[0x15]);
      *(byte *)((int)param_1 + 0x4e) = bVar2 ^ 1;
      goto LAB_0068a710;
    }
LAB_0068a6ec:
    *(undefined1 *)((int)param_1 + 0x4f) = 1;
  }
  if (*(char *)((int)param_1 + 0x4f) == '\0') {
    (**(code **)(*param_1 + 0x104))(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 3;
    param_1[4] = param_1[4] + 1;
    iVar3 = param_1[3];
    *(char *)((int)param_1 + 0xd) = (char)iVar3;
    *(undefined1 *)(param_1 + 3) = 3;
    if ((char)iVar3 == '\x03') {
      param_1[5] = param_1[5] + 1;
    }
    else {
      param_1[5] = 0;
    }
switchD_0068a5c0_caseD_3:
    if (*(char *)((int)param_1 + 0x1d) == '\0') {
      (**(code **)(*(int *)param_1[0x11] + 0x18))();
      (**(code **)(*param_1 + 0x104))(param_1);
      if (*(char *)((int)param_1 + 0x1d) != '\0') {
        fn_0028c0e0(*(undefined4 *)(param_1[1] + 0x18),param_1[0x15]);
        *(undefined1 *)((int)param_1 + 0xe) = 5;
        param_1[4] = param_1[4] + 1;
        *(char *)((int)param_1 + 0xd) = (char)param_1[3];
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)((int)param_1 + 0xe);
        if (*(char *)((int)param_1 + 0xd) == '\x05') {
          param_1[5] = param_1[5] + 1;
        }
        else {
          param_1[5] = 0;
        }
        if (*(char *)(*(int *)(param_1[1] + 0x18) + 0x45) != '\0') {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
      fn_0028fad0(param_1[0x12]);
    }
    else {
      fn_0028c0e0(*(undefined4 *)(param_1[1] + 0x18),param_1[0x15]);
      *(undefined1 *)((int)param_1 + 0xe) = 5;
      param_1[4] = param_1[4] + 1;
      *(char *)((int)param_1 + 0xd) = (char)param_1[3];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)((int)param_1 + 0xe);
      if (*(char *)((int)param_1 + 0xd) == '\x05') {
        param_1[5] = param_1[5] + 1;
      }
      else {
        param_1[5] = 0;
      }
      if (*(char *)(*(int *)(param_1[1] + 0x18) + 0x45) != '\0') {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_0028fad0(param_1[0x12]);
switchD_0068a5c0_caseD_5:
      if (param_1[0x18] == 0) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        bVar2 = fn_0028c2e8(param_1[0x18],param_1[0x15]);
        *(byte *)(param_1 + 0x14) = bVar2 ^ 1;
      }
      iVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
      *(char *)((int)param_1 + 0x4d) = (char)iVar3;
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = (char)param_1[0x14];
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        *(undefined1 *)((int)param_1 + 0x51) = 1;
      }
      if (*(char *)((int)param_1 + 0x51) == '\0') {
        (**(code **)(*param_1 + 0x104))(param_1);
        fn_0028fad0(param_1[0x12]);
      }
      else {
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        *(undefined1 *)((int)param_1 + 0xe) = 6;
        param_1[4] = param_1[4] + 1;
        iVar3 = param_1[3];
        *(char *)((int)param_1 + 0xd) = (char)iVar3;
        *(undefined1 *)(param_1 + 3) = 6;
        if ((char)iVar3 == '\x06') {
          param_1[5] = param_1[5] + 1;
        }
        else {
          param_1[5] = 0;
        }
        fn_0028fad0(param_1[0x12]);
switchD_0068a5c0_caseD_6:
        if (*(char *)((int)param_1 + 0x53) == '\0') {
          (**(code **)(*param_1 + 0xf0))(param_1);
        }
        else {
          *(undefined1 *)((int)param_1 + 0x53) = 1;
        }
        *(undefined1 *)((int)param_1 + 0xe) = 7;
        param_1[4] = param_1[4] + 1;
        iVar3 = param_1[3];
        *(char *)((int)param_1 + 0xd) = (char)iVar3;
        *(undefined1 *)(param_1 + 3) = 7;
        if ((char)iVar3 == '\a') {
          param_1[5] = param_1[5] + 1;
        }
        else {
          param_1[5] = 0;
        }
      }
    }
  }
switchD_0068a5c0_caseD_4:
  iVar3 = param_1[3];
  param_1[4] = param_1[4] + 1;
  *(char *)((int)param_1 + 0xd) = (char)iVar3;
  *(char *)(param_1 + 3) = *(char *)((int)param_1 + 0xe);
  if ((char)iVar3 == *(char *)((int)param_1 + 0xe)) {
    param_1[5] = param_1[5] + 1;
  }
  else {
    param_1[5] = 0;
  }
  return;
}


