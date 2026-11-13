#include "001da65c_001db0d0.h"



void fn_001db0d0(void)

{
  fn_001db0dc();
  return;
}



void fn_001db0c4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001db0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf4))();
  return;
}



void fn_001db0c0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001db0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf4))();
  return;
}



void fn_001db0b0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [56];
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  param_1[0xb] = *param_2;
  param_1[0xc] = iVar2;
  param_1[0xd] = iVar3;
  if ((param_1[0x56] != 0) && ((char)param_1[0x57] != '\0')) {
    (**(code **)(*param_1 + 0x118))(param_1,auStack_58);
    (**(code **)(*param_1 + 0x11c))(param_1);
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1[0x56] + uVar4 * 8 + 4);
      if (-1 < iVar2) {
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239fc4(uVar1,uVar4 & 0xff,iVar2,auStack_58);
        (**(code **)(*param_1 + 0x120))(param_1);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239ffc(uVar1,uVar4 & 0xff,iVar2,param_1 + 8);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_0023a030(uVar1,uVar4 & 0xff,iVar2,(int)*(char *)((int)param_1 + 0x15d));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
  }
  return;
}



void fn_001db010(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001daf7c(void)

{
  return;
}



void fn_001daaf8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [60];
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  param_1[8] = *param_2;
  param_1[9] = iVar2;
  param_1[10] = iVar3;
  if (*(char *)(param_1[0x59] + 0xf8) != -1) {
    fn_006a9eb4(param_1,param_1 + 8);
  }
  (**(code **)(*param_1 + 0x108))(param_1);
  if ((param_1[0x56] != 0) && ((char)param_1[0x57] != '\0')) {
    (**(code **)(*param_1 + 0x118))(param_1,auStack_58);
    (**(code **)(*param_1 + 0x11c))(param_1);
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1[0x56] + uVar4 * 8 + 4);
      if (-1 < iVar2) {
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239fc4(uVar1,uVar4 & 0xff,iVar2,auStack_58);
        (**(code **)(*param_1 + 0x120))(param_1);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239ffc(uVar1,uVar4 & 0xff,iVar2,param_1 + 8);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_0023a030(uVar1,uVar4 & 0xff,iVar2,(int)*(char *)((int)param_1 + 0x15d));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
  }
  return;
}



void fn_001daac0(int param_1)

{
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0xe8),0);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  return;
}



void fn_001da9e0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  float in_s0;
  float fVar3;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  local_2c = *param_4;
  local_24 = param_4[2];
  local_28 = (float)param_4[1] + 30.0;
  uVar1 = fn_006f7388(DAT_008977e0);
  uVar2 = fn_0023b858(uVar1,param_5,&local_2c,&local_2c,param_3);
  if (uVar2 == 0) {
    fVar3 = (float)param_4[1];
    uVar1 = param_4[2];
    *param_2 = *param_4;
    param_2[1] = fVar3 + in_s0;
    param_2[2] = uVar1;
    return;
  }
  if ((uVar2 & 8) != 0) {
    local_28 = local_28 - *(float *)(param_1 + 0x10c);
  }
  *param_2 = local_2c;
  param_2[1] = local_28 + in_s0;
  param_2[2] = local_24;
  return;
}



void fn_001da8fc(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  float in_s0;
  float fVar3;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  local_2c = *param_4;
  local_24 = param_4[2];
  local_28 = (float)param_4[1] + 30.0;
  uVar1 = fn_006f7388(DAT_008977e0);
  uVar2 = fn_0023b858(uVar1,param_5,&local_2c,&local_2c,param_3);
  if (uVar2 == 0) {
    fVar3 = (float)param_4[1];
    uVar1 = param_4[2];
    *param_2 = *param_4;
    param_2[1] = fVar3 + in_s0;
    param_2[2] = uVar1;
    return;
  }
  if ((uVar2 & 8) != 0) {
    local_28 = local_28 - *(float *)(param_1 + 0x10c);
  }
  *param_2 = local_2c;
  param_2[1] = local_28 + in_s0;
  param_2[2] = local_24;
  return;
}



uint fn_001da77c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  
  iVar1 = fn_006f7a70(DAT_008977e0);
  fn_006a9eb4(param_1,param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x164);
  if ((*(byte *)(param_1 + 0x114) & 4) != 0) {
    iVar6 = 0;
    iVar7 = *(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24) >> 2;
    if (0 < iVar7) {
      do {
        uVar2 = *(uint *)(iVar1 + 0x24);
        uVar5 = *(uint *)(uVar2 + iVar6 * 4);
        if (uVar5 != 0 && uVar5 != param_1) {
          uVar2 = (uint)*(byte *)(uVar5 + 0x58);
        }
        if ((uVar5 != 0 && uVar5 != param_1) && uVar2 != 0) {
          bVar9 = *(char *)(uVar5 + 0x15c) != '\0';
          iVar3 = 0;
          if (bVar9) {
            iVar3 = *(int *)(uVar5 + 0x158);
          }
          if ((!bVar9 || iVar3 == 0) &&
             (iVar3 = fn_0065fd34(uVar8,*(undefined4 *)(uVar5 + 0x164),0), iVar3 != 0)) {
            return uVar5;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar7);
    }
  }
  if ((*(byte *)(param_1 + 0x114) & 2) != 0) {
    piVar4 = (int *)fn_006f7508(DAT_008977e0);
    iVar1 = (**(code **)(*piVar4 + 0x70))();
    iVar7 = 0;
    if (0 < iVar1) {
      do {
        piVar4 = (int *)fn_006f7508(DAT_008977e0);
        uVar5 = (**(code **)(*piVar4 + 0x74))(piVar4,iVar7);
        uVar2 = uVar5;
        if (uVar5 != 0 && uVar5 != param_1) {
          uVar2 = (uint)*(byte *)(uVar5 + 0x58);
        }
        if (((uVar5 != 0 && uVar5 != param_1) && uVar2 != 0) &&
           (iVar6 = fn_0065fd34(uVar8,*(undefined4 *)(uVar5 + 0x164),0), iVar6 != 0)) {
          return uVar5;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  if ((((*(byte *)(param_1 + 0x114) & 1) == 0) ||
      (uVar2 = fn_006f7a84(DAT_008977e0), *(char *)(uVar2 + 0x58) == '\0')) ||
     (iVar1 = fn_0065fd34(uVar8,*(undefined4 *)(uVar2 + 0x164),0), iVar1 == 0)) {
    return 0;
  }
  return uVar2;
}



void fn_001da73c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = fn_0017fde4();
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4();
  fn_0017fc28(uVar1,1);
  return;
}



void fn_001da698(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x4e) & 0x3f) >> 5 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xdc))(param_1);
    if (param_1[0x3e] < 0x3f800000) {
      if (iVar1 != 0) {
LAB_001da704:
                    /* WARNING: Could not recover jumptable at 0x001da718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x10c))(param_1,0);
        return;
      }
    }
    else {
      iVar2 = fn_0037bdbc(param_2,param_1,1);
      if (iVar1 == 0) {
        if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x001da738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x10c))(param_1,1);
          return;
        }
      }
      else if (iVar2 == 0) goto LAB_001da704;
    }
  }
  return;
}



void fn_001da65c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar1 = fn_0017fde4();
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4();
  fn_0017fc28(uVar1,1);
  return;
}


