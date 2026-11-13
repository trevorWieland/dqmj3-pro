#include "00688ea0_0068a55c.h"



void fn_0068a55c(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  if ((1 < *(byte *)(param_1 + 0xa1)) && (*(byte *)(param_1 + 0xa1) == 2)) {
    iVar3 = 0;
    do {
      fn_0042223c(param_1 + iVar3 * 0x20 + 0x21);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
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



void fn_00689bd0(int param_1)

{
  fn_001f749c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_006898b8(int param_1)

{
  fn_001f7414(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_0068974c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),param_2,1,param_3,1,1,0,0,param_4);
  fn_001f749c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0x48,0);
  return;
}



void fn_00688fd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_008981b0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = DAT_008981b0;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_00688ea0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  float in_s0;
  float in_s1;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  
  iVar1 = fn_00100b58(param_3);
  if (iVar1 != 0) {
    iVar1 = fn_00100b58(param_3);
    fn_00190d78(param_2,param_3,iVar1 + 1);
    fVar4 = 1.0;
    psVar3 = (short *)param_2[0x29];
    fVar5 = fVar4;
    if (param_2 != (int *)0x0) {
      fn_00191580(auStack_68);
      (**(code **)(*param_2 + 0x70))(param_2,auStack_68);
      fVar4 = 3.4028235e+38;
      local_38 = 0x7f7fffff;
      iVar1 = 0;
      for (psVar2 = psVar3; *psVar2 != 0; psVar2 = psVar2 + 1) {
        iVar1 = iVar1 + 1;
      }
      fn_001915c8(auStack_68,psVar3,iVar1);
      fn_001915c4(auStack_68);
    }
    if (fVar4 < in_s0) {
      fVar4 = in_s0;
    }
    fVar4 = fVar4 + in_s1;
    if (((int)fVar4 & 1U) != 0) {
      fVar4 = fVar4 + fVar5;
      param_2[7] = (int)((float)param_2[7] + fVar5);
      *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 0x10;
    }
    *(float *)(param_1 + 0x3c) = fVar4;
    *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xef | 0x10;
    param_2[0xf] = (int)fVar4;
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 0x10;
  }
  return;
}


