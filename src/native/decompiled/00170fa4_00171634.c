#include "00170fa4_00171634.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


undefined4 * fn_00171634(void)

{
  int iVar1;
  
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  return &DAT_008f9e2c;
}



int fn_00171598(void)

{
  int iVar1;
  
  fn_00170704();
  iVar1 = DAT_008c0378;
  if (DAT_008c0374 < 2) {
    svc_0x23();
    if (-1 < DAT_008c0378) {
      DAT_008c0374 = DAT_008c0374 + -1;
    }
    if (DAT_008c0378 < 0) {
      fn_00146594();
    }
    if (-1 < iVar1) {
      DAT_008c0378 = 0;
    }
  }
  else {
    DAT_008c0374 = DAT_008c0374 + -1;
    iVar1 = 0x82067f0;
  }
  fn_001707b4(&DAT_008ec120);
  return iVar1;
}



void fn_00171538(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint in_s0;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  puVar2[1] = in_s0;
  *puVar2 = *puVar2 | 0x10000;
  fn_00193380();
  return;
}



void fn_001714f4(undefined4 param_1)

{
  fn_0017cee0(&DAT_008ef56c,param_1);
  return;
}



int fn_001714a0(int param_1)

{
  fn_0015e304();
  if (*(int *)(param_1 + 0x18) != 0) {
    svc_0x23();
    *(int *)(param_1 + 0x18) = 0;
  }
  fn_0015e304();
  if (*(int *)(param_1 + 0x10) != 0) {
    svc_0x23();
    *(int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}



uint fn_001713a8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  uVar1 = 0xe0e0abee;
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        fn_0014ddb8(param_1 + 0x48,0);
        fn_0014ddb8(param_1 + 0x40,0);
        local_28 = 4;
        local_18 = 0;
        local_24 = &LAB_0018399c;
        local_20 = &DAT_001775e4;
        local_1c = &LAB_001775d8;
        uVar1 = fn_0014e2f4(param_1 + 0x18,&local_28,fn_0017cf6c,&local_18,param_2 + param_3,
                             param_4,0,0);
        if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
          fn_0015e294(uVar1);
        }
        *(byte *)(param_1 + 0xe) = (byte)(uVar1 >> 0x1f) ^ 1;
      }
    }
    else {
      uVar1 = 0x820abf9;
    }
  }
  return uVar1;
}



void fn_00171380(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_001711b4();
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}



uint fn_0017125c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 *local_34;
  undefined *local_30;
  undefined1 *puStack_2c;
  undefined4 auStack_28 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    iVar2 = fn_0013e078();
    if ((iVar2 != 0) && (param_7 == 1)) {
      param_6 = 0x5109d500;
    }
    fn_0013c500(param_1 + 0xd);
    local_38 = 4;
    local_34 = &LAB_0018399c;
    local_30 = &DAT_001775e4;
    puStack_2c = &LAB_001775d8;
    auStack_28[0] = 0;
    uVar1 = fn_0014e2f4(param_1 + 4,&local_38,fn_00189e58,auStack_28,param_4 + param_5,param_6,
                         param_7,0);
    if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
      fn_0015e294(uVar1);
    }
    if ((int)uVar1 < 0) {
      param_1[0xf] = 0xffffffff;
    }
    else {
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      DAT_008f0b6c = param_7 == 0;
      param_1[9] = 0;
      param_1[10] = param_2;
      param_1[0xb] = param_3;
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 0xc) = (char)param_7;
    }
  }
  else {
    uVar1 = 0x820abf9;
  }
  return uVar1;
}



undefined4 * fn_001711b4(void)

{
  int iVar1;
  
  if (((DAT_008c33cc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c33cc), iVar1 != 0)) {
    DAT_008f0b70 = 0;
    DAT_008f0b74 = 0;
    DAT_008f0b80 = 0;
    DAT_008f0b84 = 1;
    DAT_008f0b88 = 0;
    DAT_008f0b8c = 1;
    DAT_008f0ba4 = 0;
    DAT_008f0ba8 = 0;
    DAT_008f0bac = 0xffffffff;
    DAT_008f0bb0 = 0;
    DAT_008f0bb4 = 0;
    DAT_008f0bb8 = 0;
    DAT_008f0bbc = 0;
    DAT_008f0b7c = 0;
    DAT_008f0b7e = 0;
    DAT_008f0b78 = 0;
    DAT_008f0ba0 = 0;
  }
  return &DAT_008f0b70;
}



undefined4 fn_001711a4(void)

{
  return DAT_008f08ec;
}



void fn_001710d8(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_48;
  undefined2 local_46;
  
  if ((char)param_1[3] != '\0') {
    if (*(byte *)((int)param_1 + 0xd) < 2) {
      if (*(byte *)((int)param_1 + 0xd) < 2) {
        iVar2 = 0;
        if (*param_1 != 0) {
          iVar2 = param_1[2];
        }
        if (*param_1 != 0 && iVar2 != 0) {
          local_46 = 0;
          local_48 = 1;
          cVar1 = *(char *)((int)param_1 + 0xd);
          uVar3 = fn_00189e28();
          fn_0018a090(uVar3,(int)cVar1,&local_48);
          *(undefined1 *)((int)param_1 + 0xe) = 0;
          if (*(char *)((int)param_1 + 0xe) == '\0') {
            *(undefined1 *)((int)param_1 + 0xf) = DAT_008f08d9;
          }
        }
      }
      cVar1 = *(char *)((int)param_1 + 0xd);
      uVar3 = fn_00189e28();
      fn_0017ce54(uVar3,1,(int)cVar1);
      *(undefined1 *)((int)param_1 + 0xd) = 0xff;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



void fn_001710c8(undefined4 param_1)

{
  fn_0017ce68(&DAT_008ef56c,param_1);
  return;
}



void fn_00170ffc(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_28;
  undefined2 local_26;
  
  if ((char)param_1[3] != '\0') {
    if (*(byte *)((int)param_1 + 0xd) < 2) {
      if (*(byte *)((int)param_1 + 0xd) < 2) {
        iVar2 = 0;
        if (*param_1 != 0) {
          iVar2 = param_1[2];
        }
        if (*param_1 != 0 && iVar2 != 0) {
          local_26 = 0;
          local_28 = 1;
          cVar1 = *(char *)((int)param_1 + 0xd);
          uVar3 = fn_00189e28();
          fn_00189ff4(uVar3,(int)cVar1,&local_28);
          *(undefined1 *)((int)param_1 + 0xe) = 0;
          if (*(char *)((int)param_1 + 0xe) == '\0') {
            *(undefined1 *)((int)param_1 + 0xf) = DAT_008f08d9;
          }
        }
      }
      cVar1 = *(char *)((int)param_1 + 0xd);
      uVar3 = fn_00189e28();
      fn_0017ce54(uVar3,0,(int)cVar1);
      *(undefined1 *)((int)param_1 + 0xd) = 0xff;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



int fn_00170fa4(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_2 + 4)) {
    bVar2 = iVar1 == 0;
    if (!bVar2) {
      iVar1 = iVar1 + -4;
      bVar2 = iVar1 == 0;
    }
    if (!bVar2) {
      if (*(code **)(iVar1 + -8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(iVar1 + -8))();
      }
    }
    fn_0015e6f0(param_1 + 4,*(undefined4 *)(param_2 + 4));
  }
  return param_1;
}


