#include "0012b604_0029fcf4.h"



void fn_0029fcf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  code *pcVar11;
  int iVar12;
  float in_s0;
  float in_s1;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar9 = (int)(char)param_2;
  uVar3 = fn_001659c0(uVar2,iVar9,(int)(char)param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar12 = (int)(short)param_3;
  iVar4 = fn_001550fc(uVar2,param_2,param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00155a74(uVar2,param_2,param_1,iVar12);
  uVar5 = fn_00182994(DAT_008977e4);
  iVar6 = fn_00174a74(uVar5,param_2,param_1);
  cVar1 = fn_0029dd20(param_2,param_1,param_3);
  uVar5 = fn_00182994(DAT_008977e4);
  iVar7 = fn_00175044(uVar5,iVar9,0);
  uVar5 = fn_00182994(DAT_008977e4);
  iVar9 = fn_00175044(uVar5,iVar9,1);
  switch(cVar1) {
  default:
    if (cVar1 == '\a') goto LAB_0029ff70;
    break;
  case '\x05':
    if (iVar7 == 0 && iVar9 == 0) {
      piVar8 = (int *)fn_00182994(DAT_008977e4);
      pcVar11 = *(code **)(*piVar8 + 0x14);
      pcVar10 = (char *)&DAT_0029f188;
LAB_0029fe34:
      (*pcVar11)(piVar8,pcVar10);
    }
    break;
  case '\x06':
    if (iVar7 == 0 && iVar9 == 0) {
      piVar8 = (int *)fn_00182994(DAT_008977e4);
      pcVar11 = *(code **)(*piVar8 + 0x14);
      pcVar10 = (char *)&DAT_0029f194;
      goto LAB_0029fe34;
    }
  }
  if (iVar6 != 0) {
    uVar5 = fn_00182994(DAT_008977e4);
    iVar7 = fn_0017591c(uVar5,param_2,param_1);
    if (iVar7 == 0) {
      uVar5 = fn_00182994(DAT_008977e4);
      iVar7 = fn_00155ac8(uVar5,param_2,param_1);
      if (iVar7 == 0) {
        uVar5 = fn_00182994(DAT_008977e4);
        iVar7 = fn_00154e38(uVar5,param_2,param_1,iVar12);
        if (iVar7 == 0) {
          uVar5 = fn_00182994(DAT_008977e4);
          iVar7 = fn_00154c7c(uVar5,param_2,param_1,iVar12);
          if (iVar7 != 0) {
            uVar5 = fn_00182994(DAT_008977e4);
            iVar7 = fn_00155348(uVar5,param_2,param_1);
            if (iVar7 != 0) goto LAB_0029ff70;
          }
          iVar7 = iVar4;
          if (iVar4 < 0) {
            iVar7 = -iVar4;
          }
          uVar5 = fn_00182994(DAT_008977e4);
          uVar5 = fn_00174bac(uVar5,uVar3 & 0xff);
          fn_0017a7fc(uVar5,param_4 % 4);
          uVar5 = fn_00182994(DAT_008977e4);
          fn_001755cc(uVar5,uVar3 & 0xff,cVar1,iVar7,uVar2,(int)in_s0,(int)in_s1);
        }
      }
    }
  }
LAB_0029ff70:
  fn_0029e580(param_1,param_2,iVar4,uVar3,iVar6);
  return;
}



int fn_00227ab4(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  int local_20;
  char local_1c [8];
  
  piVar1 = DAT_00897894;
  iVar4 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar2 = (**(code **)(*DAT_00897894 + 0x2c))(DAT_00897894,&local_28,8,0xffff);
  if (iVar2 != 0) {
    uVar5 = 0;
    local_1c[0] = '\0';
    if ((int)(local_24 - local_28) >> 2 != 0) {
      do {
        uVar3 = (**(code **)(*piVar1 + 0x38))(piVar1,local_1c,*(undefined4 *)(local_28 + uVar5 * 4))
        ;
        uVar5 = uVar5 + 1;
        if ((uVar3 & ~(int)local_1c[0]) != 0) {
          iVar4 = iVar4 + 1;
        }
      } while (uVar5 < (uint)((int)(local_24 - local_28) >> 2));
    }
  }
  uVar5 = local_28;
  if (local_24 < local_28) {
    do {
      uVar5 = uVar5 + 4;
    } while (uVar5 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  return iVar4;
}



undefined4 fn_001f6b28(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1[10] == 0) {
    (**(code **)(*(int *)param_1[9] + 0x18))();
    iVar1 = (**(code **)(*(int *)param_1[9] + 0x2c))();
    if (iVar1 == 0) {
      (**(code **)(*(int *)param_1[9] + 0x20))();
      param_1[10] = 1;
    }
  }
  else if (((param_1[10] == 1) && (DAT_00897808[5] == DAT_00897808[3])) &&
          (DAT_0089780c[5] == DAT_0089780c[3])) {
    uVar2 = 1;
  }
  fn_0023e6c8(param_1[1]);
  (**(code **)(*(int *)*param_1 + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return uVar2;
}



undefined4 fn_0012df6c(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined1 local_14 [8];
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_18);
  if ((iVar1 < 0) || (iVar1 = fn_00157f00(param_1,0xffffffff,local_14), iVar1 < 0)) {
    fn_001581d0(param_1,&DAT_00148920);
  }
  (**(code **)(*DAT_00898898 + 100))(DAT_00898898,local_18);
  return 0;
}



void fn_0012b604(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *in_r12;
  
  puVar1 = DAT_008e3104;
  if (DAT_008e3104 != (undefined4 *)0x0) {
    if (DAT_008e3104[1] != 0) {
      in_r12 = DAT_0089a524;
    }
    if (DAT_008e3104[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(0x10000,0x105,*DAT_008e3104);
    }
    if (DAT_0089a520 == (code *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_0089a520)(0x10000,0x105,*puVar1,param_1 + param_2 * 0x1c);
    }
    puVar1[2] = param_1;
    puVar1[3] = 0;
    puVar1[8] = 0;
    puVar1[4] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xd] = 0;
    puVar1[1] = iVar2;
    puVar1[0xc] = 0;
    puVar1[6] = iVar2 + param_1;
    puVar1[7] = param_2;
    fn_00301f50(iVar2 + param_1,param_2 * 0x1c);
    DAT_008bf790 = puVar1[1];
    DAT_008bf794 = DAT_008bf790 + puVar1[2];
  }
  return;
}


