#include "005280a4_0052cec0.h"



void fn_0052cec0(void)

{
  int iVar1;
  bool bVar2;
  
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c == 0;
  iVar1 = fn_001707b4(&DAT_008e3304);
  if ((bVar2) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    return;
  }
  fn_0052d7ac(iVar1);
  return;
}



undefined4 fn_0052c9ec(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 auStack_658 [400];
  
  fn_00170704(&DAT_008e3304);
  bVar5 = DAT_0089a64c == 0;
  fn_001707b4(&DAT_008e3304);
  if ((bVar5) && (iVar1 = fn_0052cb1c(), iVar1 == 0)) {
    uVar2 = 0xd8a0c7f8;
  }
  else if (param_2 == 0) {
    uVar2 = 0xe0e0c7f6;
  }
  else if (param_3 < 0x65) {
    uVar3 = 0;
    if (param_3 != 0) {
      do {
        auStack_658[uVar3 * 4] = *(undefined4 *)(param_2 + uVar3 * 4);
        uVar4 = uVar3 + 1;
        auStack_658[uVar3 * 4 + 2] = 0;
        auStack_658[uVar3 * 4 + 3] = 0;
        uVar3 = uVar4;
      } while (uVar4 < param_3);
    }
    uVar2 = fn_0052c8f4(param_1,auStack_658,param_3);
  }
  else {
    uVar2 = 0xe0e0c7e9;
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x005281d8) */
/* WARNING: Removing unreachable block (ram,0x005281f0) */
/* WARNING: Removing unreachable block (ram,0x005281fc) */
/* WARNING: Removing unreachable block (ram,0x00528204) */
/* WARNING: Removing unreachable block (ram,0x0052820c) */
/* WARNING: Removing unreachable block (ram,0x00528214) */
/* WARNING: Removing unreachable block (ram,0x00528224) */
/* WARNING: Removing unreachable block (ram,0x005282b4) */
/* WARNING: Removing unreachable block (ram,0x00528244) */
/* WARNING: Removing unreachable block (ram,0x00528254) */

int fn_005280a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10)

{
  int *piVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int local_3c [2];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_00170704();
  if ((DAT_008ec111 == '\0') || (DAT_008ec112 != '\0')) {
    iVar2 = -0x375f8c08;
    fn_001707b4(&DAT_008ec0e0);
  }
  else if ((DAT_008ec0d8 == (int *)0x0) && (iVar2 = fn_0019f340(&DAT_008ec0d0), iVar2 < 0)) {
    fn_001707b4(&DAT_008ec0e0);
  }
  else {
    unaff_r6 = DAT_008ec0d8;
    if (DAT_008ec0d8 != (int *)0x0) {
      if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
        DAT_008ec0d8 = (int *)0x0;
      }
      else {
        iVar2 = *DAT_008ec0d8;
        piVar3 = DAT_008ec0d8 + 1;
        DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
        *(int *)*piVar3 = iVar2;
        *(int *)(*unaff_r6 + 4) = unaff_r6[1];
      }
      unaff_r6[1] = 0;
      *unaff_r6 = 0;
    }
    piVar3 = DAT_008ec0d4;
    DAT_008ec0fc = DAT_008ec0fc + -1;
    if (DAT_008ec0d4 == (int *)0x0) {
      unaff_r6[1] = (int)unaff_r6;
      *unaff_r6 = (int)unaff_r6;
      DAT_008ec0d4 = unaff_r6;
    }
    else {
      unaff_r6[1] = (int)DAT_008ec0d4;
      *(int **)(*piVar3 + 4) = unaff_r6;
      *unaff_r6 = *piVar3;
      *piVar3 = (int)unaff_r6;
    }
    iVar2 = 0;
    DAT_008ec0f4 = DAT_008ec0f4 + 1;
    fn_001707b4(&DAT_008ec0e0);
  }
  if (-1 < iVar2) {
    local_3c[0] = unaff_r6[2];
    iVar2 = fn_0052a838(local_3c,local_34,uStack_30,uStack_2c,local_28,param_5,param_6,param_7,
                         param_8,param_9,param_10);
    if (-1 < iVar2) {
      if (unaff_r6 != (int *)0x0) {
        fn_00170704();
        if (DAT_008ec111 == '\0') {
          fn_001707b4(&DAT_008ec0e0);
        }
        else {
          if ((int *)*unaff_r6 == unaff_r6) {
            DAT_008ec0d4 = (int *)0x0;
          }
          else {
            if (DAT_008ec0d4 == unaff_r6) {
              DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
            }
            *(int *)unaff_r6[1] = *unaff_r6;
            *(int *)(*unaff_r6 + 4) = unaff_r6[1];
          }
          unaff_r6[1] = 0;
          *unaff_r6 = 0;
          piVar1 = DAT_008ec0dc;
          piVar3 = DAT_008ec0d8;
          DAT_008ec0f4 = DAT_008ec0f4 + -1;
          if (unaff_r6[2] == 0) {
            if (DAT_008ec0dc == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0dc = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0dc;
              *(int **)(*piVar1 + 4) = unaff_r6;
              *unaff_r6 = *piVar1;
              *piVar1 = (int)unaff_r6;
            }
            DAT_008ec0f8 = DAT_008ec0f8 + 1;
          }
          else {
            if (DAT_008ec0d8 == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0d8 = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0d8;
              *(int **)(*piVar3 + 4) = unaff_r6;
              *unaff_r6 = *piVar3;
              *piVar3 = (int)unaff_r6;
            }
            DAT_008ec0fc = DAT_008ec0fc + 1;
          }
          fn_0015dfc0(&DAT_008ec0ec);
          fn_001707b4(&DAT_008ec0e0);
        }
      }
      return 0;
    }
    if (unaff_r6 != (int *)0x0) {
      fn_00170704(&DAT_008ec0e0);
      if (DAT_008ec111 == '\0') {
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        if ((int *)*unaff_r6 == unaff_r6) {
          DAT_008ec0d4 = (int *)0x0;
        }
        else {
          if (DAT_008ec0d4 == unaff_r6) {
            DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
          }
          *(int *)unaff_r6[1] = *unaff_r6;
          *(int *)(*unaff_r6 + 4) = unaff_r6[1];
        }
        unaff_r6[1] = 0;
        *unaff_r6 = 0;
        piVar1 = DAT_008ec0dc;
        piVar3 = DAT_008ec0d8;
        DAT_008ec0f4 = DAT_008ec0f4 + -1;
        if (unaff_r6[2] == 0) {
          if (DAT_008ec0dc == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0dc = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar1 + 4) = unaff_r6;
            *unaff_r6 = *piVar1;
            *piVar1 = (int)unaff_r6;
          }
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        }
        else {
          if (DAT_008ec0d8 == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0d8 = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0d8;
            *(int **)(*piVar3 + 4) = unaff_r6;
            *unaff_r6 = *piVar3;
            *piVar3 = (int)unaff_r6;
          }
          DAT_008ec0fc = DAT_008ec0fc + 1;
        }
        fn_0015dfc0(&DAT_008ec0ec);
        fn_001707b4(&DAT_008ec0e0);
      }
    }
  }
  return iVar2;
}


