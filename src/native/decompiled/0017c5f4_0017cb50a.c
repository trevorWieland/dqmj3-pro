#include "0017c5f4_0017cb50a.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined4 fn_0017ca60(void)

{
  return DAT_008c33ac;
}



int fn_0017c8a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0017c5f4(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort local_c0;
  undefined1 *local_bc;
  int local_b4;
  undefined *local_b0;
  undefined1 local_ab [3];
  ushort local_a8;
  undefined1 *local_a4;
  byte local_a0 [5];
  undefined1 auStack_9b [67];
  undefined4 local_58;
  undefined *local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 auStack_48 [4];
  uint local_44;
  undefined *local_40;
  uint local_3c;
  undefined4 local_34;
  uint *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_4f = ((unsigned int)(DAT_008eeffc) >> 8) & 0xff;
  local_50 = 2;
  local_4c = (undefined2)param_4;
  local_4e = (undefined2)param_3;
  local_54 = &DAT_008525d0;
  local_40 = &DAT_008525c0;
  local_c0 = 0;
  local_bc = (undefined1 *)0x0;
  local_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar4 = fn_00189c10(6,0x45);
  uVar2 = DAT_008c07cc;
  uVar1 = DAT_008c07c8;
  if (-1 < iVar4) {
    local_3c = 0x11;
    local_58 = 0;
    (**(code **)(local_54 + 4))(&local_54,local_a0,&local_58,0x45);
    fn_0017ca80(&local_44,0);
    fn_0017c3e4(&local_44);
    iVar5 = 0;
    do {
      iVar4 = fn_0017c84c(local_a0,local_58);
      uVar3 = local_44;
      if (iVar4 < 0) {
        if (local_44 != 0) {
          svc_0x23();
          local_44 = 0;
        }
        goto LAB_0017c7ec;
      }
      svc_0x24();
      if (-((int)local_44 >> 0x1f) != 0) {
        fn_0015e294(local_44,-((int)local_44 >> 0x1f),uVar1,uVar2);
      }
      if ((uVar3 & 0x3ff) != 0x3fe) {
        fn_0017c8dc(local_a0,0x45,&local_b4,auStack_48,1);
        if ((local_b4 == 0) || (local_a0[0] != local_3c)) {
          iVar4 = -0x377ef011;
        }
        else {
          local_b0 = local_40;
          fn_00176fb0(local_ab,local_a0);
          local_bc = auStack_9b;
          local_c0 = local_a8;
          local_a4 = local_bc;
        }
        break;
      }
      iVar4 = -0x377ef3ef;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    fn_0017c164();
    fn_00170688();
    DAT_008c07e8 = 0;
    if (local_44 != 0) {
      svc_0x23();
      local_44 = 0;
    }
LAB_0017c7ec:
    if (iVar4 < 0) {
      *local_30 = 0;
    }
    else {
      fn_00301a9c(local_34,local_bc,local_c0);
      *local_30 = (uint)local_c0;
    }
  }
  return iVar4;
}



uint fn_0017c8dc(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4,int param_5
                 )

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  uVar3 = 0xf9610c02;
  if (*(char *)(DAT_008c3c44 + 8) != '\x04') {
    uVar3 = 0;
  }
  if (-1 < (int)uVar3) {
    if (*(char *)(DAT_008c3c44 + 0xe) == '\0') {
      uVar3 = 0xc8a10c01;
    }
    else {
      uVar3 = 0;
    }
    if (-1 < (int)uVar3) {
      uVar2 = 0xc8a10c0d;
      if (*(char *)(DAT_008c3c44 + 8) == '\x01') {
        uVar3 = uVar2;
      }
      else {
        uVar3 = 0;
      }
      if (-1 < (int)uVar3) {
        uVar4 = param_1;
        puVar5 = param_3;
        piVar6 = param_4;
        iVar1 = fn_00189ac4(&DAT_008f32d0);
        if ((iVar1 - DAT_008c3c40 < 1) ||
           (iVar1 = fn_00189a70(&DAT_008f32d0,DAT_008c3c3c), iVar1 == 0)) {
          if (*(char *)(DAT_008c3c44 + 8) == '\x02') {
            uVar2 = 0;
          }
          if (-1 < (int)uVar2) {
            uVar2 = 0xc8810fef;
          }
          return uVar2;
        }
        uVar3 = fn_00189b34(&DAT_008f32d0,DAT_008c3c3c,param_1,param_2,param_3,uVar4,param_2,puVar5
                             ,piVar6);
        if (-1 < (int)uVar3) {
          DAT_008c3c3c = fn_00189b14(&DAT_008f32d0,DAT_008c3c3c,1);
          DAT_008c3c40 = DAT_008c3c40 + 1;
          if (param_5 != 0) {
            uVar3 = fn_00189d3c();
            if ((int)uVar3 < 0) {
              if (((int)uVar3 < 0) && (uVar3 >> 0x1b != 0x19 && uVar3 != 0xf9610c02)) {
                fn_0015e590(uVar3,0x17ca04);
              }
            }
            else {
              DAT_008c3c40 = 0;
            }
          }
          iVar1 = fn_00189ac4(&DAT_008f32d0);
          *param_4 = iVar1 - DAT_008c3c40;
        }
      }
    }
  }
  return uVar3;
}



uint fn_0017c84c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_2 < 0xfd) {
    uVar1 = fn_00189dcc();
  }
  else {
    uVar1 = fn_00189cb8();
  }
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    bVar3 = uVar2 != 0xfffffff9;
    if (bVar3) {
      uVar2 = 0xf9610c02;
    }
    if (bVar3 && uVar1 != uVar2) {
      fn_0015e590(uVar1,0x17c894);
    }
  }
  return uVar1;
}


