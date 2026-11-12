#include "00522030_005227f8.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_005227f8(int *param_1,undefined4 param_2,int param_3,undefined1 *param_4,undefined1 param_5,
                undefined4 *param_6,undefined1 *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00200082;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined1 *)(iVar2 + 0x88) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(uint *)(iVar2 + 0x8c) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_4 = *(undefined1 *)(iVar2 + 0x88);
    *param_6 = *(undefined4 *)(iVar2 + 0x8c);
    *param_7 = *(undefined1 *)(iVar2 + 0x90);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005227b4(int *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2e0040;
  *(undefined1 *)(iVar2 + 0x84) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005226e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1e0042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



uint fn_005222ac(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_44;
  uint *local_40;
  int *local_3c;
  int local_38;
  uint local_34;
  uint *local_30;
  int *piStack_2c;
  undefined4 local_28;
  int local_24 [2];
  
  if (param_2 == 0 || param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar6 = param_1 + 0x10;
    if (iVar6 == 0) {
      uVar1 = fn_005236dc(0xe);
    }
    else {
      uVar1 = fn_00523544(&local_38);
      if (*(char *)(param_1 + 8) == '\0') {
        if ((int)uVar1 < 0) {
          uVar1 = fn_00522ff8(&local_3c);
          if (-1 < (int)uVar1) {
            uVar1 = fn_0052433c(local_3c,*(undefined4 *)(param_1 + 0xc),3,iVar6,4);
          }
        }
        else {
          uVar1 = fn_00522c48(local_38,*(undefined4 *)(param_1 + 0xc),3,iVar6,4);
        }
      }
      else if (-1 < (int)(uVar1 & 0x80000000)) {
        local_3c = (int *)0x4;
        local_44 = 3;
        local_40 = (uint *)iVar6;
        uVar1 = fn_00522eac(local_38,uVar1 & 0x80000000,*(undefined4 *)(param_1 + 0x18),
                             *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
      }
    }
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar5 = uVar2 + param_3;
  iVar3 = *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar2,param_3);
  iVar6 = (int)uVar1 >> 0x1f;
  iVar4 = iVar6 - (iVar3 + (uint)(uVar1 < uVar5));
  if (iVar4 < 0 != (SBORROW4(iVar6,iVar3) != SBORROW4(iVar6 - iVar3,(uint)(uVar1 < uVar5)))) {
    param_3 = uVar1 - uVar2;
  }
  local_24[0] = 0;
  uVar1 = fn_00523544(&local_28,uVar2,iVar4,uVar1 - uVar5);
  piStack_2c = local_24;
  if (*(char *)(param_1 + 8) == '\0') {
    local_34 = 0;
    if ((int)(uVar1 & 0x80000000) < 0) {
      iVar6 = fn_00522ff8(&local_38);
      if (iVar6 < 0) {
        return 0xfffffffd;
      }
      local_44 = param_3;
      local_40 = &local_34;
      local_3c = piStack_2c;
      iVar6 = fn_00523ddc(local_38,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x24),param_2);
    }
    else {
      local_44 = param_3;
      local_40 = &local_34;
      local_3c = piStack_2c;
      iVar6 = fn_00522720(local_28,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x24),param_2);
    }
    if (iVar6 < 0) {
      return 0xfffffffe;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) == 0) {
      *(int *)(param_1 + 0x14) = local_24[0];
      iVar6 = local_24[0];
    }
    if (iVar6 == local_24[0]) {
      uVar1 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar1 + local_34;
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar1,local_34);
      return local_34;
    }
  }
  else {
    local_44 = 0;
    if ((int)(uVar1 & 0x80000000) < 0) {
      return 0xfffffffd;
    }
    local_30 = &local_44;
    local_40 = *(uint **)(param_1 + 0x20);
    local_3c = *(int **)(param_1 + 0x24);
    local_38 = param_2;
    local_34 = param_3;
    iVar6 = fn_00522d28(local_28,local_3c,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
    if (iVar6 < 0) {
      return 0xfffffffe;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) == 0) {
      *(int *)(param_1 + 0x14) = local_24[0];
      iVar6 = local_24[0];
    }
    if (iVar6 == local_24[0]) {
      uVar1 = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = uVar1 + local_44;
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)CARRY4(uVar1,local_44);
      return local_44;
    }
  }
  return 0xfffffffc;
}



int fn_00522720(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,undefined4 *param_7,undefined4 *param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x280102;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_6;
  *(uint *)(iVar2 + 0x94) = param_6 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_7 = *(undefined4 *)(iVar2 + 0x88);
    *param_8 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_00522220(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = fn_00523544(&local_c);
  if (*(char *)(param_1 + 8) == '\0') {
    if (-1 < (int)uVar1) {
      fn_00522784(local_c,*(undefined4 *)(param_1 + 0xc));
      return;
    }
    iVar2 = fn_00522ff8(&local_10);
    if (-1 < iVar2) {
      fn_00523e40(local_10,*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  else if (-1 < (int)(uVar1 & 0x80000000)) {
    local_10 = *(undefined4 *)(param_1 + 0xc);
    fn_00522df0(local_c,uVar1 & 0x80000000,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
  }
  return;
}



int fn_00522784(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x260040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



uint fn_005220fc(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint local_50;
  uint *puStack_4c;
  uint local_48;
  uint uStack_44;
  undefined4 local_40 [6];
  uint local_28;
  uint uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = fn_005236dc(0x11);
    return uVar1;
  }
  local_28 = 0;
  uStack_24 = 0;
  uVar1 = fn_00523544(local_40);
  if (*(char *)(param_1 + 8) == '\0') {
    if ((int)(uVar1 & 0x80000000) < 0) {
      uVar1 = fn_00522ff8(&local_50);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = fn_00524390(local_50,*(undefined4 *)(param_1 + 0xc),&local_28);
    }
    else {
      uVar1 = fn_00522c9c(local_40[0],*(undefined4 *)(param_1 + 0xc),&local_28);
    }
  }
  else {
    if ((int)(uVar1 & 0x80000000) < 0) {
      return uVar1;
    }
    local_50 = *(uint *)(param_1 + 0xc);
    puStack_4c = &local_28;
    uVar1 = fn_00522f08(local_40[0],puStack_4c,*(undefined4 *)(param_1 + 0x18),
                         *(undefined4 *)(param_1 + 0x1c));
  }
  if (-1 < (int)uVar1) {
    local_48 = local_28 >> 10 & 0x3f;
    puStack_4c = (uint *)(local_28 >> 0x10 & 0x3f);
    local_50 = local_28 >> 0x16;
    uStack_44 = local_28 & 0x3ff;
    fn_001142a8(&local_20,uStack_24 >> 10,uStack_24 >> 6 & 0xf,uStack_24 & 0x3f);
    *param_2 = local_20;
    param_2[1] = uStack_1c;
  }
  return uVar1;
}



void fn_00522030(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_3 == 0) {
    fn_005236dc(0xe);
    return;
  }
  uVar1 = fn_00523544(&local_18);
  if (*(char *)(param_1 + 8) == '\0') {
    if (-1 < (int)uVar1) {
      fn_00522c48(local_18,*(undefined4 *)(param_1 + 0xc),param_2,param_3,param_4);
      return;
    }
    iVar2 = fn_00522ff8(&local_24);
    if (-1 < iVar2) {
      fn_0052433c(local_24,*(undefined4 *)(param_1 + 0xc),param_2,param_3,param_4);
      return;
    }
  }
  else if (-1 < (int)(uVar1 & 0x80000000)) {
    local_24 = param_2;
    local_20 = param_3;
    local_1c = param_4;
    fn_00522eac(local_18,uVar1 & 0x80000000,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


