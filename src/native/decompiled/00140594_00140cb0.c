#include "00140594_00140cb0.h"



undefined4
fn_00140aa4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_48 [2];
  char local_40;
  undefined1 auStack_34 [16];
  
  uVar1 = fn_00156794(param_1[1]);
  if (((param_4 & 4) != 0) && (iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5,0), iVar2 == 0)) {
    return 0;
  }
  if ((param_4 & 8) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
    if (iVar2 == 0) {
      puVar3 = (uint *)fn_001665c8(param_1[1],param_2);
      uVar4 = 0;
      if (*puVar3 != 0) {
        do {
          if ((param_4 & 8) != 0) {
            uVar1 = fn_00156794(param_1[1],puVar3[uVar4 + 1]);
            iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5,1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
      }
    }
    else {
      fn_00140594(auStack_34,iVar2);
      puVar3 = (uint *)fn_0014580c(auStack_34);
      if (puVar3 == (uint *)0x0) {
        return 0;
      }
      uVar4 = 0;
      if (*puVar3 != 0) {
        do {
          if (*puVar3 <= uVar4) {
            return 0;
          }
          if (puVar3 + uVar4 * 2 + 1 == (uint *)0x0) {
            return 0;
          }
          uVar5 = puVar3[uVar4 * 2 + 1];
          uVar6 = puVar3[uVar4 * 2 + 2];
          local_40 = '\0';
          local_48[0] = 0xffffffff;
          iVar2 = fn_00156328(param_1[1],uVar5,local_48);
          if (iVar2 == 0) {
            return 0;
          }
          if (local_40 == '\0') {
            if ((param_4 & 8) != 0) {
              uVar1 = fn_00156794(param_1[1],uVar5);
              iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5,1);
              goto joined_r0x00140c14;
            }
          }
          else {
            iVar2 = fn_001522f0(param_1,uVar5,uVar6,param_3,param_5);
joined_r0x00140c14:
            if (iVar2 == 0) {
              return 0;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar3);
      }
    }
  }
  return 1;
}



void fn_0014096c(int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_48;
  uint local_44;
  char local_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  local_40 = '\0';
  local_48 = 0xffffffff;
  iVar2 = fn_00156328(param_1[1],param_2,&local_48);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = local_40;
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_48);
    fn_00162118(auStack_38,uVar3,0);
    iVar2 = fn_00156714(auStack_38);
    if (iVar2 == 0) {
      iVar2 = fn_00176ac0(uVar3);
      iVar4 = (**(code **)(*param_3 + 8))(param_3,iVar2 + local_44 * 4 + 4);
      if (iVar4 != 0) {
        fn_00301a9c(iVar4,uVar3,iVar2);
        *(undefined4 *)(iVar4 + iVar2) = 0x54415743;
        fn_00162118(auStack_28,iVar4,1);
        fn_001620c8(auStack_28);
        uVar5 = 0;
        if (local_44 != 0) {
          do {
            uVar3 = fn_001566bc(auStack_38,uVar5);
            fn_0015252c(auStack_28,uVar5,uVar3);
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_44);
        }
        (**(code **)(*param_1 + 8))(param_1,local_48,iVar4);
      }
    }
  }
  return;
}



undefined4
fn_00140718(int *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,int param_6
            )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 auStack_30 [12];
  
  uVar1 = fn_00156794(param_1[1]);
  if ((param_4 & 2) != 0) {
    local_48 = 0;
    iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_4 & 8) != 0) {
    iVar2 = (**(code **)(*param_1 + 0x10))(param_1,uVar1);
    if (iVar2 == 0) {
      if (param_6 == -1) {
        param_6 = param_2;
      }
      puVar4 = (uint *)fn_001665c8(param_1[1],param_6);
      uVar5 = 0;
      if (*puVar4 != 0) {
        do {
          if ((param_4 & 8) != 0) {
            uVar1 = fn_00156794(param_1[1],puVar4[uVar5 + 1]);
            local_48 = 1;
            iVar2 = fn_00140cb0(param_1,uVar1,param_3,param_5);
            if (iVar2 == 0) {
              return 0;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar4);
      }
    }
    else {
      local_40 = 0;
      local_44 = 0;
      local_3f = 0;
      iVar3 = fn_0014570c(param_1[1],param_2,&local_48);
      uVar5 = local_48;
      if (iVar3 == 0) {
        return 0;
      }
      fn_00140dd8(auStack_30,iVar2);
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      iVar2 = fn_0014594c(auStack_30,&local_48,uVar5,0);
      uVar1 = local_44;
      uVar5 = local_48;
      if (iVar2 == 0) {
        return 0;
      }
      local_44 = param_5;
      local_48 = param_4;
      iVar2 = fn_001408ac(param_1,uVar5,uVar1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4
fn_001408ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c [2];
  char local_24;
  
  local_2c[0] = 0xffffffff;
  local_24 = '\0';
  iVar1 = fn_00156328(*(undefined4 *)(param_1 + 4),param_2,local_2c);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_24 == '\0') {
    if ((param_5 & 8) == 0) {
      return 1;
    }
    uVar2 = fn_00156794(*(undefined4 *)(param_1 + 4),param_2);
    iVar1 = fn_00140cb0(param_1,uVar2,param_4,param_6,1);
  }
  else {
    iVar1 = fn_001522f0(param_1,param_2,param_3,param_4,param_6);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



uint fn_00140cb0(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int local_30 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (uVar1 != 0) {
    return uVar1;
  }
  local_30[0] = -1;
  local_30[1] = 0xffffffff;
  local_30[2] = 0;
  iVar2 = fn_00156380(param_1[1],param_2,local_30);
  if (iVar2 != 0) {
    unaff_r4 = local_30[0];
  }
  if ((iVar2 == 0 || unaff_r4 == 0) || unaff_r4 == -1) {
    return 0;
  }
  uVar1 = (**(code **)(*param_3 + 8))(param_3,unaff_r4);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar3 = fn_0015e284();
    iVar2 = fn_0015e218();
    if ((uVar1 < uVar3) || (iVar2 + uVar3 < uVar1 + unaff_r4)) {
      uVar1 = 0;
      goto LAB_00140da0;
    }
  }
  iVar2 = fn_00161ecc(param_1,param_2,uVar1,unaff_r4,0,param_4);
  if (iVar2 != unaff_r4) {
    return 0;
  }
  fn_0017cad4(uVar1,unaff_r4);
LAB_00140da0:
  if (uVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,uVar1);
  return uVar1;
}



int fn_00140688(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00151974();
  *puVar1 = &DAT_008581ec;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x47] = &DAT_0085238c;
  puVar1[0x47] = &DAT_0085238c;
  puVar1[0x4d] = 0xe7e3ffff;
  iVar2 = fn_00152560(puVar1 + 0x4f);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *(undefined1 *)(iVar2 + 0x55) = param_2;
  fn_0013c500();
  return iVar2 + -0x13c;
}



int * fn_001405f8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == 0x50524743) && (param_2[2] - 0x1000000U < 0x10001)) {
    iVar1 = fn_00156a60(param_2);
    iVar2 = fn_001569f8(param_2);
    iVar3 = fn_00156acc(param_2);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      *param_1 = iVar1 + 8;
      param_1[1] = iVar2 + 8;
      if (iVar3 != 0) {
        param_1[2] = iVar3 + 8;
      }
    }
  }
  return param_1;
}



int * fn_00140594(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x4b4e4243)) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    iVar1 = fn_00176cfc();
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return param_1;
}


