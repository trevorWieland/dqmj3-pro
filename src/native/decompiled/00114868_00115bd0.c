#include "00114868_00115bd0.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_00115bd0(undefined1 param_1)

{
  DAT_0089a56e = param_1;
  return;
}



void fn_00115bc0(undefined1 param_1)

{
  DAT_0089a56d = param_1;
  return;
}



void fn_001159ec(undefined4 param_1,undefined4 param_2)

{
  DAT_008bfafc = param_1;
  DAT_008bfb00 = param_2;
  return;
}



int fn_001152bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  int iVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54 [5];
  undefined4 local_40;
  undefined4 *puStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  iVar6 = 0;
  local_40 = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  iVar2 = fn_00114808();
  fn_00114818(0);
  if (iVar2 == 99) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = DAT_0089a54c;
    }
    return 0;
  }
  fn_00125784();
  fn_0011509c();
  if (iVar2 == 0x62) {
    fn_00114818(0);
  }
  else {
    fn_00115a18();
  }
  do {
    do {
      local_64 = local_30;
      local_68 = 0;
      local_60 = local_2c;
      cVar1 = '\x01';
      uVar3 = fn_0013ebcc(&local_58,local_54,local_30,local_2c,&local_5c,&local_68,param_7,param_8)
      ;
      uVar5 = 0xfbc00000;
      if ((uVar3 & 0x3ff) != 0x3ef) {
        cVar1 = '\x01';
        if ((-1 < (int)uVar3) && (DAT_0089a5cc != (code *)0x0)) {
          cVar1 = (*DAT_0089a5cc)(DAT_0089a60c,local_58,local_54[0],local_64,local_60,local_5c,
                                  local_68);
          uVar5 = extraout_r1;
        }
        if (param_4 != (undefined4 *)0x0) {
          uVar5 = local_5c;
        }
        local_40 = local_58;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = uVar5;
        }
        iVar6 = local_54[0];
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_68;
        }
      }
    } while (cVar1 == '\0');
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_40;
    }
    if ((int)uVar3 < 0) goto LAB_00115430;
  } while ((((iVar6 != 1 && iVar6 != 0xb) && (iVar6 != 10 && iVar6 != 0xc)) &&
           (iVar6 != 0xd && iVar6 != 0xf)) &&
          ((iVar6 != 0xe && iVar6 != 0x11 && ((iVar6 != 0x12 && iVar6 != 0x40) && iVar6 != 0x41))));
  fn_00115fd8();
LAB_00115430:
  if ((uVar3 & 0x3ff) == 0x3ef) {
    return -1;
  }
  iVar4 = fn_001147b8(0xfbc00000);
  if (((iVar4 == 0) && (iVar2 != 3)) && (iVar6 != 0xc && iVar6 != 1)) {
    fn_001150b0(1);
    iVar4 = fn_001159c4();
    if (iVar4 < 0) {
      fn_00123b08(iVar4,0x1154c8);
    }
  }
  if (iVar6 == 0xe) {
    iVar6 = 6;
LAB_00115540:
    fn_00125644(1);
    iVar4 = fn_001147b8();
    if ((iVar4 == 0) && (iVar2 == 0xe || iVar2 == 5)) {
      fn_00125d4c(1);
    }
    if ((((iVar6 != 1 && iVar6 != 2) && (iVar6 != 3 && iVar6 != 4)) && (iVar6 != 5 && iVar6 != 6))
       && ((iVar6 != 9 && iVar6 != 0x40) && iVar6 != 0x41)) goto LAB_00115618;
  }
  else {
    if (0xd < iVar6) {
      if (iVar6 == 0x12) {
        iVar6 = 10;
      }
      else if (iVar6 < 0x12) {
        if (iVar6 == 0xf) {
          iVar6 = 7;
          fn_00114838(1);
          fn_00114d20(1);
        }
        else {
          if (iVar6 == 0x11) {
            iVar6 = 9;
            goto LAB_001155d0;
          }
LAB_0011553c:
          iVar6 = 1;
        }
      }
      else if (iVar6 != 0x40 && iVar6 != 0x41) goto LAB_0011553c;
      goto LAB_00115540;
    }
    if (iVar6 == 0xb) {
      iVar6 = 3;
      goto LAB_00115540;
    }
    if (iVar6 < 0xb) {
      if (iVar6 != 1) {
        if (iVar6 != 10) goto LAB_0011553c;
        iVar6 = 2;
      }
      goto LAB_00115540;
    }
    if (iVar6 == 0xc) {
      iVar6 = 4;
      fn_00114050();
      fn_00114d30();
    }
    else {
      if (iVar6 != 0xd) goto LAB_0011553c;
      iVar6 = 5;
      fn_00114050();
    }
  }
LAB_001155d0:
  uVar5 = 0;
  iVar4 = fn_001147b8();
  if (iVar4 == 0) {
    uVar5 = 0x10;
  }
  else if (iVar4 == 1) {
    uVar5 = 0x20;
  }
  else if (iVar4 == 2) {
    uVar5 = 0x40;
  }
  else if (iVar4 == 3) {
    uVar5 = 0x80;
  }
  fn_00115778(uVar5);
  fn_00115a18();
LAB_00115618:
  if (iVar6 == 7) {
    fn_00115288(1);
  }
  if ((iVar2 == 0xe || iVar2 == 4) || (iVar2 == 5 || iVar2 == 0x12)) {
    if ((iVar6 != 4 && iVar6 != 5) && (iVar6 != 10)) {
      fn_001150b0(1);
    }
    iVar2 = fn_001147b8();
    if ((iVar2 == 0) && (iVar6 != 7)) {
      fn_00114838(0);
      fn_00115778(1);
      fn_00115a18();
    }
  }
  return iVar6;
}



undefined4 fn_00114868(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24 [2];
  
  iVar1 = fn_00125844();
  iVar2 = fn_001251fc();
  if (iVar2 != 0) {
    if (DAT_0089a5b4 != (code *)0x0) {
      (*DAT_0089a5b4)(DAT_0089a5f4);
    }
    fn_0012520c();
  }
  iVar2 = fn_0010be8c();
  if (iVar2 != 0) {
    if (DAT_0089a5c0 == (code *)0x0) {
      return 1;
    }
    (*DAT_0089a5c0)(DAT_0089a600);
    return 1;
  }
  if ((iVar1 == 1) || (iVar1 == 2)) {
    iVar1 = fn_00125d3c();
    uVar3 = fn_00125844();
    fn_00125930();
    if (((DAT_0089a590 == (code *)0x0) ||
        (iVar2 = (*DAT_0089a590)(DAT_0089a5d0,iVar1,uVar3), iVar2 != 0)) &&
       ((iVar1 != 0 && (iVar1 = fn_00114828(), iVar1 == 0)))) {
      fn_00114838(uVar3);
      iVar1 = fn_00114828();
      if (iVar1 != 1) {
        fn_00114828();
      }
    }
    return 0;
  }
  iVar1 = fn_0012571c();
  if (iVar1 == 0) {
    iVar1 = fn_00125244();
    if (iVar1 != 0) {
      if (DAT_0089a5b8 != (code *)0x0) {
        (*DAT_0089a5b8)(DAT_0089a5f8);
      }
      fn_00125254();
      return 1;
    }
    local_3c = &local_30;
    uVar3 = 1;
    local_30 = 0;
    iVar1 = fn_00125ca0(&local_2c,local_24,&DAT_00889000,0x1000,&local_28);
    if (iVar1 < 0) {
      fn_00123b08(iVar1,0x114bc0);
    }
    iVar1 = local_30;
    if (local_24[0] == 2) {
      local_3c = (int *)0x0;
      if (local_28 < 0x20) {
        uVar3 = 0;
      }
      else {
        uVar3 = DAT_00889000;
      }
      if (DAT_0089a594 != (code *)0x0) {
        (*DAT_0089a594)(DAT_0089a5d4,uVar3,&local_3c);
      }
      fn_001256c8(1,local_2c,0);
      local_38 = DAT_0089a558;
      uStack_34 = DAT_0089a55c;
      fn_0013e6d4(local_2c,3,0,0,local_3c);
      uVar3 = 0;
    }
    else if (local_24[0] == 5) {
      fn_001256c8(1,local_2c,0);
      if (DAT_0089a598 != (code *)0x0) {
        (*DAT_0089a598)(DAT_0089a5d8,local_2c,&DAT_00889000,local_28,iVar1);
      }
      uVar3 = 0;
    }
    else if (local_24[0] == 8) {
      if (DAT_0089a59c != (code *)0x0) {
        (*DAT_0089a59c)(DAT_0089a5dc);
      }
      fn_00125644(0);
      uVar3 = 0;
    }
    else if (local_24[0] == 9) {
      fn_00125644(1);
      if (DAT_0089a5a0 != (code *)0x0) {
        (*DAT_0089a5a0)(DAT_0089a5e0);
      }
      uVar3 = 0;
    }
    if (local_30 == 0) {
      return uVar3;
    }
    svc_0x23();
    return uVar3;
  }
  iVar1 = fn_0012571c();
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      fn_00125220(4);
      if (((DAT_0089a5ac != (code *)0x0) && (iVar1 = fn_0010be8c(), iVar1 == 0)) &&
         (iVar1 = fn_0010bb8c(), iVar1 == 0)) {
        (*DAT_0089a5ac)(DAT_0089a5ec);
      }
      fn_00170704();
      for (iVar1 = DAT_0089a588; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (*(code **)(iVar1 + 8) != (code *)0x0) {
          (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0xc));
        }
      }
      fn_001707b4(&DAT_008e3224);
      fn_00125944();
      goto code_r0x00114b48;
    }
    if (iVar1 != 3) {
      if (((iVar1 == 4) && (DAT_0089a5a8 != (code *)0x0)) &&
         ((iVar1 = fn_0010be8c(), iVar1 == 0 && (iVar1 = fn_0010bb8c(), iVar1 == 0)))) {
        (*DAT_0089a5a8)(DAT_0089a5e8);
      }
      goto code_r0x00114b48;
    }
    fn_001239a0();
    if (((DAT_0089a5b0 != (code *)0x0) && (iVar1 = fn_0010be8c(), iVar1 == 0)) &&
       (iVar1 = fn_0010bb8c(), iVar1 == 0)) {
      (*DAT_0089a5b0)(DAT_0089a5f0);
    }
    uVar3 = 5;
LAB_00114b40:
    fn_00125220(uVar3);
    goto code_r0x00114b48;
  }
  iVar2 = fn_0010be8c();
  iVar1 = 0;
  if (iVar2 == 0) {
    iVar2 = fn_0010bb8c();
    if (iVar2 == 0) {
      if (DAT_0089a5a4 != (code *)0x0) {
        iVar1 = (*DAT_0089a5a4)(DAT_0089a5e4);
      }
      if ((DAT_0089a584 != '\0') || (iVar2 = fn_00125d3c(), iVar2 == 0)) goto LAB_001149f4;
      iVar1 = 0;
    }
LAB_00114a18:
    uVar3 = 3;
  }
  else {
LAB_001149f4:
    if (iVar1 == 0) goto LAB_00114a18;
    if (iVar1 != 1) {
      if (iVar1 != 2) goto code_r0x00114b48;
      uVar3 = 1;
      goto LAB_00114b40;
    }
    uVar3 = 2;
  }
  fn_00125220(uVar3);
  fn_00125818(iVar1);
code_r0x00114b48:
  fn_00125770();
  return 0;
}


