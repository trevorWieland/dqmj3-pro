#include "002ae4f8_002afc68a.h"



void fn_002af244(void)

{
  fn_006f72b4(DAT_008977e0);
  fn_0021afb8();
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002ae9b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0x12;
  *(undefined1 *)((int)param_1 + 5) = 0;
  if ((char)param_1[6] != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  iVar1 = fn_006f7a30(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30)), iVar1 == 0)) {
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,0);
    fn_00698fb8(DAT_008977e0,0xffffffff);
    fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),10,0);
    if ((*(char *)((int)param_1 + 0x51) != '\0') &&
       (iVar1 = (**(code **)(*param_1 + 0x74))(param_1), iVar1 != 0)) {
      uVar2 = fn_006945fc(DAT_008977e0,(char *)&DAT_002aeae8);
      uVar3 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar3,0,1);
      uVar3 = fn_006f75ac(DAT_008977e0);
      fn_0038fee8(uVar3,uVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  if (param_1[2] != 0) {
    fn_0027615c();
  }
  uVar2 = fn_006f72b4(DAT_008977e0);
  fn_0021d7a0(uVar2,0);
  uVar2 = fn_006f72b4(DAT_008977e0);
  fn_0021c420(uVar2,0);
  return;
}



void fn_002ae77c(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch((char)param_1[0x20]) {
  case '\0':
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  case '\x01':
    uVar2 = fn_006f72b4();
    fn_0021bb28(uVar2,param_1[0x21],0,1);
    uVar1 = 2;
    break;
  case '\x02':
    iVar3 = fn_006f72b4();
    if (*(int *)(iVar3 + 0x138) == 4 || *(int *)(iVar3 + 0x138) == 1) {
      return;
    }
    iVar3 = param_1[0x22];
    param_1[0x22] = iVar3 + 1;
    if (iVar3 + 1 < 0x1e) {
      return;
    }
    param_1[0x22] = 0;
    uVar2 = fn_006f72b4(DAT_008977e0);
    fn_0021b6b4(uVar2,param_1[0x21],1);
    uVar1 = 3;
    break;
  case '\x03':
    iVar3 = fn_006f72b4();
    if (*(int *)(iVar3 + 0x138) == 4 || *(int *)(iVar3 + 0x138) == 1) {
      return;
    }
    fn_006f7a48(DAT_008977e0);
    iVar3 = fn_006a7d8c();
    if (iVar3 == 0) {
      return;
    }
    param_1[0x22] = 0;
    iVar3 = fn_00154ac8(0x1ad);
    if (iVar3 == 0) {
      uVar1 = 4;
    }
    else {
      uVar1 = 5;
    }
    break;
  case '\x04':
    fn_00696994(DAT_008977e0,0xd3,0);
    *(undefined1 *)(param_1 + 0x20) = 6;
    fn_00144834(0x1ad,1);
    return;
  case '\x05':
                    /* WARNING: Could not recover jumptable at 0x002ae8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa0))(param_1);
    return;
  default:
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}



void fn_002ae6e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_006f7a5c(DAT_008977e0);
    iVar2 = *(int *)(iVar1 + 0x20);
    iVar3 = *(int *)(iVar1 + 0x24);
    param_1[0xe] = *(int *)(iVar1 + 0x1c);
    param_1[0xf] = iVar2;
    param_1[0x10] = iVar3;
    iVar1 = fn_006f7a5c(DAT_008977e0);
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar3 = *(int *)(iVar1 + 0x18);
    param_1[0x11] = *(int *)(iVar1 + 0x10);
    param_1[0x12] = iVar2;
    param_1[0x13] = iVar3;
    fn_00697500(DAT_008977e0,3,fn_005fed94,1);
    (**(code **)(*(int *)param_1[0x15] + 0x5c))();
  }
                    /* WARNING: Could not recover jumptable at 0x002ae770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



void fn_002ae4f8(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float in_s1;
  float fVar10;
  float in_s2;
  float fVar11;
  float fVar12;
  undefined8 in_d9;
  undefined4 uVar14;
  undefined8 uVar13;
  float local_50;
  float fStack_4c;
  undefined1 auStack_44 [32];
  
  uVar14 = (undefined4)((ulonglong)in_d9 >> 0x20);
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  uVar13 = CONCAT44(uVar14,*(float *)(param_2 + 0x4c) * *(float *)(param_2 + 0x4c));
  iVar3 = fn_002fb61c();
  if (iVar3 == 0) {
    fVar8 = *(float *)(param_2 + 0x54);
  }
  else {
    piVar4 = (int *)fn_006f7508(DAT_008977e0);
    piVar4 = (int *)(**(code **)(*piVar4 + 0x94))();
    iVar3 = (**(code **)(*piVar4 + 0x24))(piVar4,2,0);
    fVar8 = *(float *)(iVar3 + 4);
  }
  fVar12 = fVar8 * fVar8;
  iVar3 = (**(code **)(*piVar2 + 0x70))(piVar2);
  if (0 < iVar3) {
    uVar13 = CONCAT44(0x40000000,(int)uVar13);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    do {
      iVar5 = (**(code **)(*piVar2 + 0x74))(piVar2,iVar7);
      cVar1 = '\0';
      if (iVar5 != 0) {
        cVar1 = *(char *)(iVar5 + 0x58);
      }
      fVar10 = in_s1;
      if ((iVar5 != 0 && cVar1 != '\0') && ((*(byte *)(iVar5 + 0x138) & 0x40) == 0)) {
        fn_006a99dc(iVar5);
        fVar11 = *(float *)(param_2 + 0x40) - fVar8;
        fVar10 = *(float *)(param_2 + 0x44) - in_s1;
        fVar9 = *(float *)(param_2 + 0x48) - in_s2;
        fVar11 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
        local_50 = fVar8;
        fStack_4c = in_s1;
        iVar6 = fn_002aad7c(iVar5);
        fVar8 = fVar9;
        fVar9 = fVar12;
        if (2 < iVar6) {
          fVar8 = *(float *)(iVar5 + 0x124) * *(float *)(iVar5 + 0x124);
          fVar9 = fVar8;
        }
        if (((float)uVar13 <= fVar11) && (fVar11 < fVar9)) {
          fVar8 = *(float *)(*(int *)(iVar5 + 0x100) + 0xc) + *(float *)(iVar5 + 0x11c);
          fVar10 = (float)((ulonglong)uVar13 >> 0x20);
          fn_001a4a80();
          if ((fVar8 <= fVar11) && (iVar6 = fn_005feebc(&local_50), iVar6 != 0)) {
            fVar8 = fVar11;
            fn_0018d444(auStack_44,&local_50,param_2);
            fVar10 = *(float *)(param_2 + 0x60);
            fn_002af684(param_1,&local_50,param_2 + 0x40,param_2 + 0x58);
            fn_002abf30(param_1,iVar5,auStack_44,1);
          }
        }
      }
      iVar7 = iVar7 + 1;
      in_s1 = fVar10;
    } while (iVar7 < iVar3);
  }
  return;
}


