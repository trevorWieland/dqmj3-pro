#include "00500884_00501970.h"



ulonglong fn_00501970(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_r5;
  
  iVar1 = fn_006d9250(DAT_008bf4e0);
  if (iVar1 == -0x275eb708) {
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
    return CONCAT44(fn_00501dd4,param_4) & 0xffffffff0000ff00;
  }
  if (*(char *)((int)param_1 + 0x81) == '\0') {
    *(undefined1 *)((int)param_1 + 0x82) = 0;
    param_1[9] = (int)fn_00501e60;
    param_1[10] = 0;
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationSuccess";
    return CONCAT44(0xd8a148f8,unaff_r5) & 0xffffffff0000ff00;
  }
  uVar3 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar5 = *(uint *)(DAT_008bf49c + 0x30);
  uVar4 = *(uint *)(DAT_008bf49c + 0x34);
  if (uVar4 <= uVar2 && (uint)(uVar3 <= uVar5) <= uVar4 - uVar2) {
    return CONCAT44(uVar5 - uVar3,uVar4 - (uVar2 + (uVar3 > uVar5))) & 0xffffffff0000ff00 | 5;
  }
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 == 0) {
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationFailure";
    param_1[9] = (int)fn_00501dd4;
    param_1[10] = 0;
  }
  return CONCAT44(unaff_r5,unaff_r5) & 0xffffff000000ff00;
}



uint fn_00501874(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  
  fn_004f5f68(*(undefined4 *)(DAT_008bf4e0 + 0x4c),(int)*(char *)((int)param_1 + 0x83));
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  iVar1 = DAT_008bf4e0;
  *(undefined1 *)(DAT_008bf4e0 + 0x60) = 1;
  fn_004f5004(*(undefined4 *)(iVar1 + 0x4c));
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,0);
  if (iVar1 == 0) {
    param_1[9] = (int)fn_00501e60;
    param_1[10] = 0;
    param_1[0xb] = (int)"ProcessHostMigrationJob::HostMigrationSuccess";
  }
  else {
    param_1[0xb] = (int)"ProcessHostMigrationJob::WaitUpdateSessionHost";
    param_1[9] = (int)fn_005020ac;
    param_1[10] = 0;
  }
  return unaff_r5 & 0xff00;
}



void fn_005014b0(int param_1)

{
  undefined4 *puVar1;
  
  DAT_008ee0be = (undefined2)*(undefined4 *)(param_1 + 0x68);
  puVar1 = (undefined4 *)fn_004f0ce8();
  DAT_008ee0c0 = fn_0011c134(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),*puVar1
                              ,puVar1[1]);
  if (DAT_008ee0c0 == 0) {
    DAT_008ee0c0 = -1;
  }
  DAT_008ee0c4 = *(undefined1 *)(param_1 + 0x6c);
  DAT_008ee0c5 = *(undefined1 *)(param_1 + 0x6d);
  DAT_008ee151 = *(undefined1 *)(param_1 + 0x6e);
  return;
}



void fn_00501438(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006d92e4(DAT_008bf4e0);
  if (iVar1 != 0) {
    fn_00505a0c(DAT_008bf4e0,param_2);
    iVar1 = fn_0050b080(DAT_008bf4cc,param_2);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x20) = 6;
      *(undefined1 *)(iVar1 + 0x14) = 0xfd;
    }
    if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
      *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
    }
  }
  return;
}



void fn_00501400(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 < *(ushort *)(DAT_008bf4e0 + 0x5e)) {
    if (param_3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + param_2 + 0x9c) = uVar1;
  }
  return;
}



void fn_005013e8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x82) = param_2;
  *(undefined1 *)(param_1 + 0x81) = 0;
  return;
}



void fn_00501398(int param_1)

{
  *(undefined1 *)(param_1 + 0x6f) = 0;
  fn_0011a604(param_1 + 0x72);
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0xfd;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0xfd;
  *(undefined1 *)(param_1 + 0x70) = 0xfd;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}



undefined4 fn_005010ac(int *param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  ulonglong uVar7;
  int local_48;
  int local_44;
  int *piStack_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar7 = (ulonglong)param_5;
  if (((*(char *)((int)param_1 + 0x6f) == '\0') &&
      (piStack_34 = param_1, local_30 = param_2, iStack_2c = param_3, iStack_28 = param_4,
      iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 0xc)), iVar1 == 0)) &&
     (*(char *)(*(int *)(DAT_008bf4e0 + 0x1c) + 0x4c) == '\0')) {
    iVar1 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 8));
    if ((iVar1 != 0) && (iVar1 = fn_005059c0(DAT_008bf4e0), iVar1 < 3)) {
      if (*(int *)(DAT_008bf4e0 + 0xa0) != 0) {
        local_48 = CONCAT22(((unsigned int)(local_48) >> 16) & 0xffff,0xfd13);
        local_44 = 0;
        (**(code **)**(undefined4 **)(DAT_008bf4e0 + 0xa0))
                  (*(undefined4 **)(DAT_008bf4e0 + 0xa0),&local_48);
      }
      fn_004f3498(*(undefined4 *)(DAT_008bf4e0 + 8),0xd8a148e1);
      (**(code **)(**(int **)(DAT_008bf4e0 + 8) + 8))(*(int **)(DAT_008bf4e0 + 8),1);
      fn_004feb10(*(undefined4 *)(DAT_008bf4e0 + 0x14));
      (**(code **)(**(int **)(DAT_008bf4e0 + 0x14) + 8))(*(int **)(DAT_008bf4e0 + 0x14),1);
      return 0;
    }
    iVar1 = DAT_008bf4cc;
    if (*(byte *)(DAT_008bf4e0 + 99) < 0xc) {
      for (puVar5 = (uint *)(DAT_008bf4cc + 0x3c); iVar3 = (int)uVar7,
          puVar5 != (uint *)(iVar1 + *(int *)(iVar1 + 0x38) * 4 + 0x3c); puVar5 = puVar5 + 1) {
        uVar4 = *(uint *)(iVar1 + 0xa4);
        uVar2 = *puVar5;
        bVar6 = uVar2 != uVar4;
        if (bVar6) {
          uVar4 = (uint)*(byte *)(uVar2 + 0x20);
        }
        if ((bVar6 && uVar4 != 5) ||
           (iVar3 = fn_006d92e4(DAT_008bf4e0,*(undefined1 *)(uVar2 + 0x14)), iVar3 == 0)) {
          iVar3 = fn_006d92e4(DAT_008bf4e0,*(undefined1 *)(*puVar5 + 0x14));
          if (iVar3 != 0) {
            fn_00505a0c(DAT_008bf4e0,*(undefined1 *)(*puVar5 + 0x14));
            if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
              *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
            }
          }
          *(undefined1 *)(*puVar5 + 0x20) = 6;
        }
      }
      fn_0011a604((int)param_1 + 0x72);
      *(undefined1 *)((int)param_1 + 0x7e) = 0;
      *(undefined1 *)((int)param_1 + 0x7f) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0xfd;
      *(undefined1 *)((int)param_1 + 0x81) = 0;
      *(undefined1 *)((int)param_1 + 0x82) = 0;
      *(undefined1 *)((int)param_1 + 0x71) = 0xfd;
      *(undefined1 *)(param_1 + 0x1c) = 0xfd;
      if (param_3 == 0) {
        param_1[0x25] = 0;
        param_1[0x26] = 0;
      }
      else {
        fn_001694e4((int)param_1 + 0x85,param_3,*(undefined2 *)(DAT_008bf4e0 + 0x5e));
        param_1[0x25] = param_4;
        param_1[0x26] = iVar3;
      }
      (**(code **)(*param_1 + 8))(param_1,1);
      iVar1 = (**(code **)(*param_1 + 0x44))(param_1,local_30,*(undefined2 *)(DAT_008bf4e0 + 0x5e));
      if (iVar1 == 0) {
        return 0;
      }
      if ((*(int *)(DAT_008bf4d4 + 100) != 0) && (*(byte *)(DAT_008bf4e0 + 0x62) < 0xc)) {
        fn_005118f4();
      }
      local_48 = 0;
      local_44 = 0;
      fn_004f01f4(&local_48);
      param_1[0x16] = local_48;
      param_1[0x17] = local_44;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *(char *)(param_1 + 0x1b) = (char)*(undefined2 *)(DAT_008bf4e0 + 0x5c);
      *(undefined1 *)((int)param_1 + 0x6d) = 0xff;
      param_1[0x1a] = param_1[0x1a] + 1;
      *(undefined1 *)((int)param_1 + 0x6e) = 0;
      *(undefined1 *)((int)param_1 + 0x6f) = 1;
      return 1;
    }
  }
  return 0;
}



undefined4 fn_00500fb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(DAT_008bf4e8 + 8) + 0x18))();
  if (iVar1 == 3) {
    uVar2 = 0xd8a14825;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,1);
    iVar1 = fn_006d9588(DAT_008bf4e8);
    if (iVar1 == 0) {
      param_1[9] = (int)fn_005008f8;
      param_1[10] = 0;
      param_1[0xb] = (int)"SessionStatusCheckJob::CheckSessionStatus";
    }
    else {
      param_1[9] = (int)&LAB_00500b2c;
      param_1[10] = 0;
      param_1[0xb] = (int)"SessionStatusCheckJob::CheckSessionStatus4JointSession";
    }
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_005008f8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint unaff_r6;
  undefined8 uVar4;
  
  uVar4 = (**(code **)(**(int **)(DAT_008bf4e8 + 8) + 0x18))();
  if (1 < (uint)uVar4) {
    *(char *)(DAT_008bf4e8 + 0x72) = (char)uVar4;
    return (uint)((ulonglong)uVar4 >> 0x20) & 0xff00 | 1;
  }
  if (*(int *)(DAT_008bf4d4 + 0x38) < 0) {
    *(undefined1 *)(DAT_008bf4e8 + 0x72) = 3;
    return 1;
  }
  if ((*(char *)(DAT_008bf4e8 + 0x71) == '\x02') &&
     (iVar1 = fn_006d9250(DAT_008bf4e0), iVar1 == -0x275eb708)) {
    uVar2 = fn_006d920c(DAT_008bf4e0);
    switch(uVar2) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      *(undefined1 *)(DAT_008bf4e8 + 0x72) = 2;
    }
    return param_1 & 0xff00 | 1;
  }
  if (DAT_008bf4e5 != '\0') {
    piVar3 = *(int **)(DAT_008bf4e8 + (uint)*(byte *)(DAT_008bf4e8 + 0xb5) * 4 + 0xb8);
    iVar1 = fn_005075e8();
    if (iVar1 != 0) {
      *(undefined1 *)(DAT_008bf4e8 + 0x100) = 0;
      iVar1 = fn_006d9384(DAT_008bf4e8);
      if (iVar1 != 0) {
        (**(code **)(*piVar3 + 0x78))
                  (piVar3,param_1 + 0x40,
                   *(undefined4 *)(DAT_008bf4e8 + (uint)*(byte *)(DAT_008bf4e8 + 0xb5) * 4 + 0xc4));
        *(undefined1 *)(param_1 + 0x54) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x54) != '\0') &&
       (iVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
    iVar1 = fn_00507bc4(0);
    if (iVar1 == 0) {
      (**(code **)(*piVar3 + 0xa0))(piVar3);
    }
  }
  return unaff_r6 & 0xff00 | 5;
}



void fn_00500884(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  *param_1 = &DAT_00856f04;
  do {
    iVar2 = param_1[uVar1 + 0x17];
    if (iVar2 != 0) {
      fn_00656b0c(iVar2);
      fn_00656b7c(iVar2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  param_1[0x1a] = &DAT_00856c94;
  fn_004ede4c(param_1);
  fn_004ecfd0();
  return;
}


