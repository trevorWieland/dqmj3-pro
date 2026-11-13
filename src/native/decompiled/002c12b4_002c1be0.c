#include "002c12b4_002c1be0.h"



void fn_002c1be0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((0 < *param_2) && (iVar1 = fn_002c11d0(param_1,param_1[0x1a],0), iVar1 != 0)) {
    fn_002e3e30();
    fn_0066042c(iVar1,0);
  }
  iVar1 = *param_2;
  param_1[0x19] = iVar1;
  if (0 < iVar1) {
    iVar1 = fn_002c11d0(param_1,param_1[0x1a],0);
    iVar2 = fn_002c11d0(param_1,0);
    if (iVar2 != 0) {
      fn_0066042c(iVar2,1);
      if (iVar1 != 0) {
        fn_002bfbb4(param_1,param_2 + 2,iVar2,iVar1);
      }
      fn_002e3fac(iVar2,param_2[2]);
      if ((char)param_1[0x1f] == '\x01') {
        (**(code **)(*param_1 + 0x160))(param_1,param_2[2],param_1[0x19]);
      }
      else {
        (**(code **)(*param_1 + 0x15c))(param_1,param_2[2],1,param_1[0x19]);
      }
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x170))(param_1);
  fn_0025e31c(param_1[0x26],iVar1 != 0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



void fn_002c1a7c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_1c [2];
  
  *(undefined4 *)(param_1[0x2f] + 0x34) = 0x1f;
  *(undefined4 *)(param_1[0x2c] + 0x34) = 0x1f;
  local_1c[0] = 0;
  iVar1 = fn_002c11d0(param_1,5,local_1c);
  if (iVar1 != 0) {
    iVar2 = fn_002e3e9c(iVar1,0);
    iVar3 = fn_002e3e9c(iVar1,0,1);
    if (iVar2 == 0 || iVar3 == 0) {
      fn_002e3ef4(iVar1,0,2);
    }
    else {
      fn_002e3ef4(iVar1,0,2,iVar2);
      if (param_2 != 0) {
        (**(code **)(*param_1 + 0x15c))(param_1,2,1,5);
        (**(code **)(*param_1 + 0x110))(param_1,5,2,1,1);
        fn_001c9cf4(*(undefined4 *)(param_1[0x2f] + 0x10),0,2);
        piVar4 = (int *)fn_002c11d0(param_1,5,0);
        iVar1 = (**(code **)(*piVar4 + 0xc))(piVar4,2);
        *(undefined1 *)(iVar1 + 0x45) = 1;
      }
    }
  }
  puVar5 = (undefined4 *)fn_002c11d0(param_1,5,0);
  (**(code **)*puVar5)(puVar5,0);
  puVar5 = (undefined4 *)fn_002c11d0(param_1,4,0);
  (**(code **)*puVar5)(puVar5,0);
  return;
}



bool fn_002c18f8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int local_30 [2];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20 [2];
  
  if (*param_2 != 5) {
LAB_002c1a40:
    piVar3 = (int *)fn_002c11d0(param_1,*param_2,0);
    iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,param_2[2]);
    return *(char *)(iVar2 + 0x33) != '\0';
  }
  if (param_2[2] != 2) {
    uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
    fn_0020bbc4(auStack_38,uVar1);
    iVar2 = fn_006bfe90(auStack_34);
    if (iVar2 != 4) {
      local_20[0] = 0;
      uVar1 = fn_002c11d0(param_1,5,local_20);
      local_30[0] = fn_002e3e9c(uVar1,0);
      local_30[1] = fn_002e3e9c(uVar1,0,1);
      if ((local_30[param_2[2]] == 0) && (local_30[~param_2[2] & 1] != 0)) {
        uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0020bbc4(auStack_28,uVar1);
        iVar2 = fn_006bfe90(auStack_24);
        iVar4 = *(int *)(&DAT_007c6b00 + iVar2 * 4);
        iVar2 = fn_006bfe90(auStack_34);
        if (4 < *(int *)(&DAT_007c6b00 + iVar2 * 4) + iVar4) {
          return false;
        }
      }
      goto LAB_002c1a40;
    }
  }
  return false;
}



undefined4 fn_002c1604(int param_1,undefined4 param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int iVar6;
  int iVar7;
  int iVar8;
  
  (**(code **)(*param_3 + 0xc))
            (param_3,*(undefined4 *)(param_5 + 8),*(code **)(*param_3 + 0xc),param_4,param_1,param_2
             ,param_3);
  iVar1 = fn_002e3e9c(param_2,param_4[1],param_4[2]);
  param_4[3] = iVar1;
  iVar1 = param_3[2] - param_3[1] >> 2;
  if ((char)param_3[9] == '\0') {
    fn_0036ef48(*(undefined4 *)(param_1 + 0x8c));
    uVar2 = fn_002c151c(param_1,1,param_4[2],param_2);
    uVar5 = fn_002c151c(param_1,0,*(undefined4 *)(param_5 + 8),param_3);
    if (*(int *)(param_1 + 0x68) == *param_4) {
      fn_0036ef10(*(undefined4 *)(param_1 + 0x8c),uVar2,uVar5);
    }
    else {
      fn_0036ef2c(*(undefined4 *)(param_1 + 0x8c),uVar5,uVar2);
    }
    fn_00300f74(*(undefined4 *)(param_5 + 8),param_3[8]);
    iVar1 = 0;
    do {
      fn_0036fb68(*(undefined4 *)(param_1 + 0x8c),iVar1);
      fn_002e3ef4(param_2,0,iVar1);
      fn_0036ee88(*(undefined4 *)(param_1 + 0x8c),iVar1);
      fn_002e3ef4(param_3,0,param_3[8] * iVar1 + extraout_r1_00);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  else {
    fn_0036ef48(*(undefined4 *)(param_1 + 0x8c));
    fn_002bfea4(param_1,1,param_2);
    if (*(int *)(param_5 + 0xc) != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      fn_0036ee94(*(undefined4 *)(param_1 + 0x8c),uVar2,0);
    }
    if (*(int *)(param_1 + 0x68) == 4) {
      fn_0036ef2c(*(undefined4 *)(param_1 + 0x8c),0,param_4[2]);
    }
    else {
      fn_0036ef10(*(undefined4 *)(param_1 + 0x8c),param_4[2],0);
    }
    fn_002e3ef4(param_3,*(undefined4 *)(param_5 + 4),*(undefined4 *)(param_5 + 8),param_4[3]);
    iVar6 = 0;
    do {
      fn_0036fb68(*(undefined4 *)(param_1 + 0x8c),iVar6);
      fn_002e3ef4(param_2,0,iVar6);
      piVar3 = (int *)fn_0036ee88(*(undefined4 *)(param_1 + 0x8c),iVar6);
      if (((piVar3 != (int *)0x0) && (*piVar3 != param_4[3])) && (iVar7 = 0, 0 < iVar1)) {
        do {
          iVar8 = param_3[8];
          iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
          uVar2 = fn_00300f74(iVar7,iVar8 * iVar4);
          iVar8 = param_3[8];
          iVar4 = (**(code **)(*param_3 + 0x14))(param_3);
          fn_00300f74(iVar7,iVar8 * iVar4);
          iVar4 = fn_002e3e9c(param_3,uVar2,extraout_r1);
          if (iVar4 == 0) {
            fn_002e3ef4(param_3,uVar2,extraout_r1,*piVar3);
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  return 1;
}



void fn_002c14e4(int *param_1)

{
  *(undefined1 *)(param_1 + 0x1f) = 1;
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Could not recover jumptable at 0x002c1518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002c13ac) */
/* WARNING: Removing unreachable block (ram,0x002c145c) */

undefined4 fn_002c12b4(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_2 + 0x24);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_3 + 0x24);
  }
  if (bVar7 && cVar1 == '\0') {
    fn_0036ef48(*(undefined4 *)(param_1 + 0x8c));
    uVar3 = *param_4;
    uVar5 = param_4[2];
    bVar7 = uVar3 == *param_5;
    if (bVar7) {
      uVar3 = 1;
    }
    if (!bVar7) {
      uVar3 = 0;
    }
    if (((int)uVar5 % 2 == (int)param_5[2] % 2 & uVar3) == 0) {
      uVar2 = fn_002c151c(param_1,1,uVar5,param_2);
      uVar4 = fn_002c151c(param_1,0,param_5[2],param_3);
      fn_0036ef10(*(undefined4 *)(param_1 + 0x8c),uVar2,uVar4);
      fn_00300f74(param_4[2],*(undefined4 *)(param_2 + 0x20));
      iVar6 = 0;
      do {
        fn_0036fb68(*(undefined4 *)(param_1 + 0x8c),iVar6);
        fn_002e3ef4(param_2,0,*(int *)(param_2 + 0x20) * iVar6 + extraout_r1_00);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      fn_00300f74(param_5[2],*(undefined4 *)(param_3 + 0x20));
      iVar6 = 0;
      do {
        fn_0036ee88(*(undefined4 *)(param_1 + 0x8c),iVar6);
        fn_002e3ef4(param_3,0,*(int *)(param_3 + 0x20) * iVar6 + extraout_r1_01);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    else {
      uVar2 = fn_002c151c(param_1,1,uVar5,param_2);
      uVar4 = fn_002c151c(param_1,1,param_5[2],param_3);
      fn_0036fbf0(*(undefined4 *)(param_1 + 0x8c),uVar2,uVar4);
      fn_00300f74(param_4[2],*(undefined4 *)(param_2 + 0x20));
      iVar6 = 0;
      do {
        fn_0036fb68(*(undefined4 *)(param_1 + 0x8c),iVar6);
        fn_002e3ef4(param_2,0,*(int *)(param_2 + 0x20) * iVar6 + extraout_r1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_002c151c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  uint local_30;
  uint uStack_2c;
  int local_28;
  
  fn_00300f74(param_3,*(undefined4 *)(param_4 + 0x20));
  fn_0079e0cc(&local_30,param_4 + 4);
  iVar3 = 0;
  do {
    if (*(int *)(local_30 + (*(int *)(param_4 + 0x20) * iVar3 + extraout_r1) * 4) != 0) {
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      if (param_2 == 0) {
        fn_0036ee94(*(undefined4 *)(param_1 + 0x8c),uVar1,iVar3);
      }
      else {
        fn_0036fb74();
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  uVar1 = fn_00300f74(param_3,*(undefined4 *)(param_4 + 0x20));
  uVar2 = local_30;
  if (uStack_2c < local_30) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != uStack_2c);
  }
  fn_001008c4(local_30,(int)(local_28 - local_30) >> 2,0);
  return uVar1;
}


