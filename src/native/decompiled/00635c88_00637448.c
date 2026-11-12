#include "00635c88_00637448.h"



int fn_00637448(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = fn_00691af0(param_1,0);
  iVar3 = fn_00691af0(param_1,1);
  sVar2 = fn_00176dc0(param_3 + param_2 * 0x418 + -0x4080);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  iVar4 = fn_00169f1c((int)sVar2 * (int)sVar1 + iVar3 + -1,iVar3);
  sVar1 = fn_00300f74(iVar4 * iVar3,iVar3);
  return (int)sVar1;
}



void fn_006372dc(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fn_00301f50(param_3,0x185ef8);
  fn_0017821c(param_3 + 0x180388,param_2,0x5b34);
  fn_00656128(param_1 + 4);
  *(undefined1 *)(param_3 + 0x180394) = 0;
  switch(*(undefined1 *)(param_2 + 0xb)) {
  case 1:
    iVar3 = 0x10;
    iVar4 = 0;
    do {
      psVar1 = (short *)(param_2 + iVar3 * 0x418 + -0x4080);
      if ((0 < *psVar1) && (iVar2 = fn_006f44fc(psVar1,0x83), iVar2 != 0)) {
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < 0x14);
    iVar3 = fn_00655488(iVar4 * 0x1e + 0x28,100);
    if (iVar3 != 0) goto switchD_00637334_caseD_3;
    break;
  case 2:
    iVar3 = 0x14;
    iVar4 = 0;
    do {
      psVar1 = (short *)(param_2 + iVar3 * 0x418 + -0x4080);
      if ((0 < *psVar1) && (iVar2 = fn_006f44fc(psVar1,0x83), iVar2 != 0)) {
        iVar4 = (int)(char)((char)iVar4 + '\x01');
      }
      iVar3 = (int)(char)((char)iVar3 + '\x01');
    } while (iVar3 < 0x18);
    iVar3 = fn_00655488(iVar4 * 0x1e + 0x19,100);
    if (iVar3 != 0) goto switchD_00637334_caseD_4;
    break;
  case 3:
switchD_00637334_caseD_3:
    *(undefined1 *)(param_3 + 0x180394) = 1;
    return;
  case 4:
switchD_00637334_caseD_4:
    *(undefined1 *)(param_3 + 0x180394) = 2;
    return;
  }
  return;
}



undefined8 fn_0063725c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  fn_00301f50(param_3,0x185ef8,param_3,param_4,param_4);
  fn_0017821c(param_3 + 0x180388,param_2,0x5b34);
  fn_00656128(param_1 + 4);
  if (*(char *)(param_2 + 0xc) == '\0') {
    fn_0062a760(param_1,param_3 + 0x180388,param_3,2,0);
  }
  return CONCAT44(param_3,param_1);
}



void fn_0063713c(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char local_28 [12];
  
  pcVar4 = local_28;
  pcVar5 = (char *)(param_2 + 0x180388);
  cVar1 = *(char *)(param_2 + 0x180388) + '\x01';
  iVar3 = fn_006f4810();
  if ((((iVar3 != 0) && (iVar3 = fn_006f4830(param_2 + 0x180470), 0 < iVar3)) && (iVar3 <= cVar1))
     && (*(undefined1 *)(param_2 + 0x180384) = 3,
        *(int *)(param_2 + 0x180398) == *(int *)(param_2 + 0x18039c))) {
    if (*(char *)(param_2 + 0x180470) == '\x03') {
      fn_00654c30(pcVar5,10);
    }
    else if (*(char *)(param_2 + 0x180470) == '\b') {
      bVar2 = fn_0063a5a4();
      if ((~bVar2 & 1) == *(byte *)(param_2 + 0x180483)) {
        *(int *)(param_2 + 0x18039c) = *(int *)(param_2 + 0x18039c) + 10;
      }
      else {
        fn_00654bf4(pcVar5,10);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x180390) = 0;
  if (*(char *)(param_2 + 0x180384) == '\0') {
    local_28[4] = 0;
    if (cVar1 < 0) {
      pcVar4 = local_28 + 4;
    }
    local_28[0] = cVar1;
    local_28[8] = 0x62;
    if ('b' < *pcVar4) {
      pcVar4 = local_28 + 8;
    }
    *pcVar5 = *pcVar4;
  }
  return;
}



undefined4 fn_006361ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  int local_28;
  
  local_2c = param_1;
  local_28 = param_2;
  iVar1 = fn_0062a6e8(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_48 = 0;
    local_3c = 0;
    local_40 = 0x1b1a1918;
    local_44 = 0x13121110;
    local_38 = 0x17161514;
    local_34 = 0x1f1e1d1c;
    iVar1 = fn_006f4d64(local_2c + 4,1);
    if (iVar1 != 0) {
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,2);
      local_44 = 0x1b1a1918;
      local_40 = 0x13121110;
    }
    iVar1 = fn_006f4d64(local_2c + 4,0);
    if (iVar1 != 0) {
      local_3c = CONCAT31(((unsigned int)(local_3c) >> 8) & 0xffffff,2);
      local_38 = 0x1f1e1d1c;
      local_34 = 0x17161514;
    }
    fn_0061d498(local_28 + 0x180388,&local_48);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00635fa0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_2690 [9856];
  
  iVar3 = param_2 + 0x180388;
  fn_0062b720(param_1,iVar3,local_2690);
  local_2690[0] = 0x14;
  switch(*(undefined1 *)(param_2 + 0x180389)) {
  default:
    goto switchD_00635fd8_caseD_0;
  case 9:
    iVar2 = 0x10;
    do {
      iVar4 = iVar3 + iVar2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar6 = bVar5 && cVar1 == '\0';
        if (bVar5 && cVar1 == '\0') {
          bVar6 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar6) {
          *(short *)(iVar4 + -0x4044) = *(short *)(iVar4 + -0x4044) + -100;
        }
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 0x18);
    break;
  case 10:
    iVar2 = 0x10;
    do {
      iVar4 = iVar3 + iVar2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar6 = bVar5 && cVar1 == '\0';
        if (bVar5 && cVar1 == '\0') {
          bVar6 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar6) {
          *(short *)(iVar4 + -0x4042) = *(short *)(iVar4 + -0x4042) + -100;
        }
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 0x18);
    break;
  case 0xb:
    iVar2 = 0x10;
    do {
      iVar4 = iVar3 + iVar2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar6 = bVar5 && cVar1 == '\0';
        if (bVar5 && cVar1 == '\0') {
          bVar6 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar6) {
          *(short *)(iVar4 + -0x4040) = *(short *)(iVar4 + -0x4040) + -100;
        }
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 0x18);
    break;
  case 0xc:
    iVar2 = 0x10;
    do {
      iVar4 = iVar3 + iVar2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar5 = cVar1 == '\0';
        if (bVar5) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        bVar6 = bVar5 && cVar1 == '\0';
        if (bVar5 && cVar1 == '\0') {
          bVar6 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar6) {
          *(short *)(iVar4 + -0x403e) = *(short *)(iVar4 + -0x403e) + -100;
        }
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 0x18);
  }
  fn_0062a720(param_1,param_2,local_2690);
switchD_00635fd8_caseD_0:
  return;
}



void fn_00635c88(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_7a24 [4];
  int local_7a20;
  undefined1 auStack_599c [12508];
  undefined1 local_28c0 [4];
  undefined1 local_28bc;
  undefined1 auStack_28b8 [9828];
  int local_254;
  char local_250;
  char local_24f;
  undefined1 local_24e;
  undefined2 local_24c;
  undefined2 local_238;
  undefined1 local_1df;
  undefined1 local_17e;
  undefined1 auStack_136 [25];
  char local_11d;
  undefined1 auStack_b0 [5];
  char local_ab;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  int local_74;
  undefined1 *local_70;
  undefined1 local_68 [68];
  
  local_74 = fn_0063a858(local_68,8,param_2);
  iVar4 = 0;
  if (0 < local_74) {
    local_70 = auStack_136;
    local_254 = param_2 + 0x180388;
    do {
      fn_00301f50(auStack_7a24,0x5164);
      uVar1 = local_68[iVar4 * 8];
      fn_006565b8(auStack_b0);
      local_7c = 7;
      local_7a = 0;
      local_79 = uVar1;
      local_78 = uVar1;
      fn_006564f4(auStack_b0,&local_7c,0,1,0);
      cVar2 = local_ab;
      iVar3 = (int)local_ab;
      fn_00301f50(&local_250,0x1a0);
      local_238 = 1;
      local_250 = cVar2;
      local_24f = cVar2;
      local_24e = 4;
      local_24c = 4;
      fn_006295f4(param_1,iVar3,param_2,2,local_70);
      if (local_11d == '\0') {
        iVar3 = local_254 + local_ab * 0x418;
        if ('\0' < *(char *)(iVar3 + -0x400c)) {
          *(char *)(iVar3 + -0x400c) = *(char *)(iVar3 + -0x400c) + -1;
          local_17e = 1;
          local_1df = 0xff;
        }
      }
      else {
        fn_001802bc(local_254 + iVar3 * 0x418 + -0x4080,0);
      }
      iVar3 = local_254;
      fn_0062abdc(param_1,local_254,&local_250,param_2);
      fn_00654c08(param_1,&local_250,iVar3);
      fn_0017821c(auStack_599c + local_7a20 * 0x1a0,&local_250,0x1a0);
      local_7a20 = local_7a20 + 1;
      fn_00626660(param_1,auStack_7a24,param_2);
      iVar3 = fn_0062285c(param_1,param_2);
      if (iVar3 == 0) {
        fn_006267fc(param_1,local_254,param_2,auStack_7a24);
      }
      fn_0062b720(param_1,local_254,local_28c0);
      local_28c0[0] = 5;
      iVar3 = 0;
      local_28bc = (undefined1)local_7a20;
      if (0 < local_7a20) {
        do {
          fn_0062936c(param_1,auStack_599c + iVar3 * 0x1a0,auStack_28b8 + iVar3 * 0xc4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_7a20);
      }
      fn_0062a720(param_1,param_2,local_28c0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_74);
  }
  return;
}


