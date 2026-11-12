#include "0060fa68_00610598.h"



bool fn_00610598(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab5c(param_3);
  return iVar1 <= iVar2;
}



bool fn_0061048c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006a7ab8();
  if (param_1 != 0xaa) {
    if (param_1 < 0xab) {
      switch(param_1) {
      case 0xa0:
      case 0xa7:
switchD_006104b4_caseD_a0:
        uVar3 = 0;
        goto LAB_00610524;
      case 0xa1:
      case 0xa8:
switchD_006104b4_caseD_a1:
        uVar3 = 1;
        goto LAB_00610524;
      case 0xa2:
      case 0xa9:
switchD_006104b4_caseD_a2:
        uVar3 = 2;
        goto LAB_00610524;
      case 0xa3:
        goto switchD_006104b4_caseD_a3;
      case 0xa4:
switchD_006104b4_caseD_a4:
        uVar3 = 4;
        goto LAB_00610524;
      case 0xa5:
switchD_006104b4_caseD_a5:
        uVar3 = 5;
        goto LAB_00610524;
      case 0xa6:
        uVar3 = 6;
        goto LAB_00610524;
      default:
        goto switchD_006104b4_default;
      }
    }
    if (param_1 != 0xce) {
      if (param_1 < 0xcf) {
        if (param_1 == 0xcb) goto switchD_006104b4_caseD_a0;
        if (param_1 < 0xcc) {
          if (param_1 == 0xab) goto switchD_006104b4_caseD_a4;
          if (param_1 == 0xac) goto switchD_006104b4_caseD_a5;
        }
        else {
          if (param_1 == 0xcc) goto switchD_006104b4_caseD_a1;
          if (param_1 == 0xcd) goto switchD_006104b4_caseD_a2;
        }
      }
      else {
        if (param_1 == 0xcf) goto switchD_006104b4_caseD_a4;
        if (param_1 == 0xd0) goto switchD_006104b4_caseD_a5;
        if (param_1 == 0xe1 || param_1 == 0xe2) {
          uVar3 = 9;
          goto LAB_00610524;
        }
      }
switchD_006104b4_default:
      uVar3 = 0xffffffff;
      goto LAB_00610524;
    }
  }
switchD_006104b4_caseD_a3:
  uVar3 = 3;
LAB_00610524:
  iVar2 = fn_006cac04(param_3,uVar3);
  return iVar1 <= iVar2;
}



void fn_00610428(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_007bf944;
  param_1[0x5d] = &DAT_007bfa8c;
  fn_00288ab8(param_1 + 0x5d);
  iVar1 = fn_002893f4(param_1 + 0x5d);
  fn_006941e4(iVar1 + -0x174);
  fn_002feef8();
  return;
}



void fn_006103f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00693ef4();
  uVar1 = fn_006b2b44(*(undefined4 *)(DAT_00897804 + 0x14),param_2,0);
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  return;
}



undefined4 fn_00610154(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_1c;
  float fStack_18;
  float fStack_14;
  
  fn_006f7a48(DAT_008977e0);
  iVar1 = fn_006a7dc8();
  if (((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0xc4))(param_1,param_2), iVar1 != 0)) &&
     (*(char *)(param_2 + 0xdc) == '\0')) {
    piVar2 = (int *)fn_006f7a84(DAT_008977e0);
    (**(code **)(*piVar2 + 0x44))(piVar2,0,4);
    if (*(char *)((int)param_1 + 0x179) == '\0') {
      uVar3 = fn_0016ba34(DAT_00897800,DAT_00891870,s_HideSearch_008c6781,0);
      uVar4 = fn_006f75ac(DAT_008977e0);
      fn_0038fee8(uVar4,uVar3);
      uVar3 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar3,0,0,1,0);
      return 1;
    }
    if (*(char *)((int)param_1 + 0x179) == '\x02') {
      fn_00698fb8(DAT_008977e0,1);
      iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        fn_006f7a5c(DAT_008977e0);
        fn_006a9388();
        fStack_14 = in_s2 * 0.9;
        local_1c = in_s0 * 0.9;
        fStack_18 = in_s1 * 0.9;
        piVar2 = (int *)fn_00288d30(iVar1,param_1,&local_1c);
      }
      piVar5 = (int *)param_1[0x5f];
      if (piVar5 != piVar2) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        param_1[0x5f] = (int)piVar2;
      }
      fn_00289204(param_1[0x5f],1);
      (**(code **)(param_1[0x5d] + 0x14))(param_1 + 0x5d);
      param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return 0;
}



void fn_0060fccc(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  fn_001db0c4();
  if ((int *)param_1[0x5f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f] + 8))();
  }
  switch(*(undefined1 *)((int)param_1 + 0x179)) {
  case 0:
    iVar5 = *(int *)(DAT_008977e0 + 0x40);
    iVar2 = fn_006f6fc4(iVar5);
    if ((iVar2 == 0) || (iVar2 = fn_006c89fc(*(undefined4 *)(iVar5 + 4)), iVar2 != 3)) {
      iVar2 = fn_006b2b80(*(undefined4 *)(DAT_00897804 + 0x14),param_1[0x60]);
    }
    else {
      uVar3 = fn_006f72a0(DAT_008977e0);
      uVar3 = fn_002fc4b4(uVar3,param_1[0x4f]);
      iVar2 = fn_002a67d0(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),uVar3);
    }
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0060fe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[0x5d] + 8))(param_1 + 0x5d);
      return;
    }
    (**(code **)(*param_1 + 0xe0))(param_1,1);
    *(undefined1 *)((int)param_1 + 0x179) = 2;
    break;
  case 1:
    if (param_1[0x3e] == 0x3f800000) {
      *(undefined1 *)((int)param_1 + 0x179) = 2;
    }
    return;
  case 3:
    iVar2 = (**(code **)(param_1[0x5d] + 0x1c))(param_1 + 0x5d);
    if (iVar2 != 0) {
      fn_00289204(param_1[0x5f],0);
      (**(code **)(param_1[0x5d] + 0x18))(param_1 + 0x5d);
      (**(code **)(*param_1 + 0x130))(param_1);
      uVar1 = 4;
LAB_0060feac:
      *(undefined1 *)((int)param_1 + 0x179) = uVar1;
      return;
    }
    break;
  case 4:
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar2 != 0) {
      if ((int *)param_1[0x5f] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x5f] + 4))();
        param_1[0x5f] = 0;
      }
      uVar1 = 8;
      goto LAB_0060feac;
    }
    break;
  case 5:
    iVar2 = fn_006f75ac(DAT_008977e0);
    iVar2 = fn_001759d0(*(undefined4 *)(iVar2 + 8));
    if (iVar2 == 0) {
      iVar5 = *(int *)(DAT_008977e0 + 0x40);
      iVar2 = fn_006f6fc4(iVar5);
      if ((iVar2 != 0) && (iVar2 = fn_006c89fc(*(undefined4 *)(iVar5 + 4)), iVar2 == 3))
      goto LAB_006100c8;
      (**(code **)(*param_1 + 0x138))(param_1);
      iVar2 = fn_006f7154(param_1);
      if (iVar2 == 0) {
        uVar1 = 6;
      }
      else {
        uVar1 = 7;
      }
      goto LAB_0060feac;
    }
    break;
  case 6:
    uVar3 = fn_006f7a70(DAT_008977e0);
    fn_002ff3b4(uVar3,param_1[0x4f]);
    fn_00698fb8(DAT_008977e0,0xffffffff);
    (**(code **)(param_1[0x5d] + 0x10))(param_1 + 0x5d);
    if ((short)param_1[0x5c] == 4) {
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),0xb,0);
      return;
    }
    break;
  case 7:
    iVar2 = fn_006f7134(param_1);
    if (iVar2 != 0) {
LAB_006100c8:
      *(undefined1 *)((int)param_1 + 0x179) = 6;
      return;
    }
    break;
  case 8:
    fVar6 = 0.0;
    (**(code **)(*param_1 + 0xd8))();
    if ((float)param_1[0x3e] == fVar6) {
      if ((short)param_1[0x5c] == 4) {
        fn_002284d0();
      }
      iVar5 = *(int *)(DAT_008977e0 + 0x40);
      iVar2 = fn_006f6fc4(iVar5);
      if ((iVar2 == 0) || (iVar2 = fn_006c89fc(*(undefined4 *)(iVar5 + 4)), iVar2 != 3)) {
        fn_0022fd70((int)*(short *)((int)param_1 + 0x16a),(int)(short)param_1[0x5b],1);
        fn_0015b0dc();
        uVar3 = fn_0016ba34(DAT_00897800,DAT_00891870,s_Small_Get_008c6777,0);
        uVar4 = fn_006f75ac(DAT_008977e0);
        fn_0038fee8(uVar4,uVar3);
        uVar3 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar3,0,0,1,0);
      }
      else {
        fn_00318bf4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),1);
        fn_002a68b4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10));
        uVar3 = fn_006f72a0(DAT_008977e0);
        fn_002fc3c4(uVar3,param_1[0x4f]);
      }
      (**(code **)(param_1[0x5d] + 0x20))(param_1 + 0x5d);
      *(undefined1 *)((int)param_1 + 0x179) = 5;
      return;
    }
  }
  return;
}



undefined4 fn_0060fb5c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_001d99a0(param_1,param_2,0);
  uVar3 = fn_006f7a9c(DAT_008977e0);
  iVar4 = fn_00279bbc(uVar3,param_2 + 1);
  if (iVar4 != 0) {
    fn_001d962c(param_1,param_2 + 1,param_2 + 2,param_2 + 3,1);
  }
  fn_006a9e9c(param_1,&DAT_008c8f68);
  param_1[0x43] = 0;
  iVar1 = DAT_008c8f70;
  iVar4 = DAT_008c8f6c;
  param_1[0x3b] = DAT_008c8f68;
  param_1[0x3c] = iVar4;
  param_1[0x3d] = iVar1;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
  (**(code **)(*param_1 + 0xd8))(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  fn_006f7a70(DAT_008977e0);
  iVar4 = fn_002ff310(4);
  param_1[0x4f] = iVar4;
  fn_00121838(DAT_00897800,DAT_00891870,1);
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x002298c4) */
/* WARNING: Removing unreachable block (ram,0x002a6820) */

void fn_0060fa68(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  fn_001da0b0();
  iVar2 = fn_006a9948(param_1);
  if (iVar2 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x174) + 0xc))(param_1 + 0x174);
  *(undefined1 *)(param_1 + 0x179) = 1;
  iVar5 = *(int *)(DAT_008977e0 + 0x40);
  iVar2 = fn_006f6fc4(iVar5);
  if ((iVar2 != 0) && (iVar2 = fn_006c89fc(*(undefined4 *)(iVar5 + 4)), iVar2 == 3)) {
    uVar3 = fn_006f72a0(DAT_008977e0);
    uVar4 = fn_002fc4b4(uVar3,*(undefined4 *)(param_1 + 0x13c));
    iVar2 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 0x10);
    if ((-1 < (int)uVar4) && (uVar4 < 0x20)) {
      *(uint *)(iVar2 + 0x10) = 1 << (uVar4 & 0xff) | *(uint *)(iVar2 + 0x10);
    }
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x180);
  if ((int)uVar4 < 0) {
    return;
  }
  if (uVar4 < 0x60) {
    pbVar1 = (byte *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) +
                     ((int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3) + 0x898);
    *pbVar1 = *pbVar1 | (byte)(1 << ((int)uVar4 % 8 & 0xffU));
    return;
  }
  return;
}


