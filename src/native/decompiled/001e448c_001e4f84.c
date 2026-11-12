#include "001e448c_001e4f84.h"



void fn_001e4f84(void)

{
  fn_006b63c4(*(undefined4 *)(DAT_00897804 + 8));
  fn_0025b600(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_001e4a64(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float in_s0;
  float fVar5;
  float fVar6;
  float in_s1;
  float in_s2;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float local_a4;
  float local_a0;
  float local_9c;
  char local_98 [4];
  float local_94;
  float local_90;
  float local_88;
  undefined1 auStack_80 [48];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float local_3c;
  undefined4 local_38 [8];
  
  fVar5 = in_s0;
  iVar2 = fn_006f7a20(DAT_008977e0);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 300))(param_1);
  fVar7 = 0.0;
  if (iVar2 == 0) {
    if (*(char *)((int)param_1 + 0x399) == '\0') goto LAB_001e4b10;
    *(undefined1 *)((int)param_1 + 0x399) = 0;
    fn_0023eee0(param_1[100]);
    if (*(char *)((int)param_1 + 0x399) == '\0') goto LAB_001e4b10;
  }
  else if (*(char *)((int)param_1 + 0x399) == '\0') {
    if (fVar5 == 0.0 && (fVar5 == 0.0 && in_s1 == 0.0)) goto LAB_001e4b10;
    *(undefined1 *)((int)param_1 + 0x399) = 1;
  }
  in_s0 = 60.0;
  *(undefined4 *)(param_1[100] + 0x2c) = 0x42700000;
LAB_001e4b10:
  fn_006f7a48(DAT_008977e0);
  fn_006a7e74();
  if ((in_s0 != fVar7) && (iVar2 = (**(code **)(*param_1 + 0x134))(param_1), iVar2 != 0)) {
    fVar5 = in_s0 * 3.0;
    fn_0017fe34();
    param_1[0xc] = (int)(fVar5 + (float)param_1[0xc]);
  }
  local_a4 = fVar7;
  local_a0 = fVar7;
  local_9c = fVar7;
  fn_001ddfe4(param_1,&local_a4);
  if (*(char *)(param_1[100] + 0x3d) == '\0' && local_a4 == fVar7) {
    bVar1 = local_a0 == fVar7;
    fVar5 = local_a0;
    if (bVar1) {
      fVar5 = local_9c;
    }
    if (bVar1 && (bVar1 && fVar5 == fVar7)) {
      fn_006a8048(param_1);
      local_a4 = fVar5;
      local_a0 = in_s1;
      local_9c = in_s2;
    }
  }
  fn_0023f0f4(param_1[100],&local_a4);
  bVar1 = local_a4 == fVar7;
  fVar5 = local_a4;
  if (bVar1) {
    fVar5 = local_a0;
  }
  if ((!bVar1 || (!bVar1 || fVar5 != fVar7)) || local_9c != fVar7) {
    local_98[0] = '\0';
    uVar9 = CONCAT44(local_a4,local_a0);
    fVar5 = local_9c;
    local_94 = fVar7;
    iVar2 = fn_006f7a0c(DAT_008977e0);
    local_38[0] = *(undefined4 *)(iVar2 + 0x54);
    fn_006c6ecc(local_38,param_1,&local_a4,local_98);
    fVar8 = 1.0;
    if (local_98[0] != '\0') {
      local_a4 = local_a4 * local_94;
      local_a0 = local_a0 * local_94;
      local_9c = local_9c * local_94;
      *(undefined1 *)((int)param_1 + 0x399) = 0;
      fn_0023eee0(param_1[100]);
    }
    (**(code **)(*param_1 + 0x30))(param_1,&local_a4,1,0,0);
    if (local_98[0] != '\0') {
      fVar6 = fVar8 - local_94;
      if ((local_90 <= -1.1920929e-07) ||
         (local_44 = (float)((ulonglong)uVar9 >> 0x20) * fVar6, 1.1920929e-07 <= local_90)) {
        local_44 = fVar7;
      }
      if ((local_88 <= -1.1920929e-07) || (local_3c = fVar5 * fVar6, 1.1920929e-07 <= local_88)) {
        local_3c = fVar7;
      }
      fStack_40 = (float)param_1[9] + (float)uVar9 * fVar6;
      local_3c = (float)param_1[10] + local_3c;
      local_44 = (float)param_1[8] + local_44;
      (**(code **)(*param_1 + 0x10))(param_1,&local_44);
      uVar3 = fn_0017fde4(param_1[0x39]);
      uVar3 = fn_00191238(uVar3,(char *)&DAT_001e4ea4);
      uVar4 = fn_0017fde4(param_1[0x39]);
      uVar3 = fn_005ea5d8(uVar4,uVar3);
      fn_001781f0(auStack_80,uVar3);
      fn_0016947c(&local_50,auStack_80);
      local_4c = local_4c * (float)param_1[0xf];
      local_50 = fVar7;
      local_48 = fVar7;
      if (((DAT_008917d4 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008917d4), iVar2 != 0)) {
        DAT_008c8d70 = fVar7;
        DAT_008c8d74 = fVar7;
        DAT_008c8d78 = fVar8;
      }
      fn_006f9b80();
      uVar3 = *(undefined4 *)(DAT_008977e0 + 0x2c);
      if ((param_1[0xc0] < 0) || (iVar2 = fn_006b4cd0(uVar3), iVar2 != 0)) {
        iVar2 = fn_0023de00(uVar3,0x7551);
        param_1[0xc0] = iVar2;
      }
      if (-1 < param_1[0xc0]) {
        fn_001e2904(param_1[0xc1],param_1[0xc0],0xffffffff);
      }
    }
  }
  fn_001dd254(param_1);
  fn_001e49d4(param_1,&local_a4);
  fn_001e6248(param_1,&local_a4);
  fn_001dc46c(param_1,&local_a4);
  return;
}



void fn_001e49d4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1b1) == '\0') {
    uVar1 = fn_001e6740(param_1);
    if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
      iVar3 = fn_006a9938(param_1);
      if ((iVar3 != 0) || (iVar3 = fn_006a99b0(param_1), uVar2 = 0, iVar3 != 0)) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
    if ((uVar2 & ~uVar1) != 0) {
      uVar1 = fn_001e64fc(param_1,param_2);
    }
    if (uVar1 == 0) {
      fn_00259728(param_1 + 0x1e8,0);
      return;
    }
  }
  return;
}



void fn_001e49b0(int param_1)

{
  fn_0023f068(*(undefined4 *)(param_1 + 400));
  *(undefined4 *)(*(int *)(param_1 + 400) + 0x18) = 0x3ecccccd;
  return;
}



void fn_001e4914(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  if (*(int *)(param_1 + 0x414) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x414) = 0xffffffff;
  }
  uVar1 = fn_0016a9b0(uVar2,0x757b,uVar1,0);
  *(undefined4 *)(param_1 + 0x414) = uVar1;
  if (*(char *)(param_1 + 0x208) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
  }
  fn_001e2904(param_1,*(undefined4 *)(param_1 + 0x414),uVar1);
  return;
}



void fn_001e483c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x43c) != 0) {
    return;
  }
  fn_006f751c(DAT_008977e0);
  iVar1 = fn_00341920();
  *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(iVar1 + 0x40);
  fn_006f751c(DAT_008977e0);
  iVar1 = fn_00341920();
  *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(iVar1 + 0x48);
  fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x9c42);
  uVar2 = fn_006f751c(DAT_008977e0);
  fn_00340474(uVar2,1);
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0x3f800000;
  if (*(int *)(param_1 + 0x454) != 0) {
    *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + -1;
  }
  iVar1 = fn_006f751c(DAT_008977e0);
  fn_00342010(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(param_1 + 0x454));
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_001e45a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    iVar1 = fn_006a7f8c(param_1 + iVar2 * 0xc + 0x230);
    if (iVar1 != 0) {
      fn_001e11b0(param_1,(int)(char)iVar2);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return;
}



void fn_001e448c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x3c0) != '\0') {
    iVar7 = *(int *)(param_1 + 0x19c);
    if (param_2 == 0) {
      iVar1 = *(int *)(param_1 + 0x378);
      if (iVar1 == 0) {
        if (*(char *)(param_1 + 0x3ac) == '\0') {
          iVar1 = *(int *)(param_1 + 0x18c);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x3b4);
        }
      }
      param_2 = fn_0017fde4(iVar1);
    }
    piVar2 = *(int **)(iVar7 + 0x1c);
    piVar4 = *(int **)(iVar7 + 0x18);
    while( true ) {
      if (piVar4 != piVar2) {
        param_4 = *piVar4;
      }
      if (piVar4 == piVar2 || param_4 == param_2) break;
      piVar4 = piVar4 + 1;
    }
    if (piVar4 != piVar2) {
      piVar5 = piVar4 + 1;
      if (piVar5 < piVar2) {
        iVar1 = (int)piVar2 - (int)piVar5;
        if (0 < iVar1) {
          piVar2 = piVar4;
          if (iVar1 * 0x20000000 < 0) {
            iVar3 = *piVar5;
            piVar5 = piVar4 + 2;
            if (iVar3 != param_2) {
              piVar2 = piVar4 + 1;
              *piVar4 = iVar3;
            }
          }
          piVar4 = piVar2;
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            piVar2 = piVar4;
            if (*piVar5 != param_2) {
              piVar2 = piVar4 + 1;
              *piVar4 = *piVar5;
            }
            piVar6 = piVar5 + 1;
            piVar5 = piVar5 + 2;
            piVar4 = piVar2;
            if (*piVar6 != param_2) {
              piVar4 = piVar2 + 1;
              *piVar2 = *piVar6;
            }
          }
        }
      }
      else {
        while (piVar5 != piVar2) {
          iVar1 = *piVar5;
          piVar5 = piVar5 + 1;
          if (iVar1 != param_2) {
            *piVar4 = iVar1;
            piVar4 = piVar4 + 1;
          }
        }
      }
    }
    piVar2 = *(int **)(iVar7 + 0x1c);
    *(int **)(iVar7 + 0x1c) = piVar4;
    if (piVar2 != piVar4) {
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0x3c0) = 0;
  }
  return;
}


