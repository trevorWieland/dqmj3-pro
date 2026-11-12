#include "00519904_00551360a.h"



/* WARNING: Removing unreachable block (ram,0x005297a8) */
/* WARNING: Removing unreachable block (ram,0x005297c0) */
/* WARNING: Removing unreachable block (ram,0x005297cc) */
/* WARNING: Removing unreachable block (ram,0x005297d4) */
/* WARNING: Removing unreachable block (ram,0x005297dc) */
/* WARNING: Removing unreachable block (ram,0x005297e4) */
/* WARNING: Removing unreachable block (ram,0x005297f4) */
/* WARNING: Removing unreachable block (ram,0x00529884) */
/* WARNING: Removing unreachable block (ram,0x00529814) */
/* WARNING: Removing unreachable block (ram,0x00529824) */

int fn_00529654(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  int *piVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int local_3c [2];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  if ((0x1e00 < param_4) || (0x200 < param_8)) {
    return -0x271f8c14;
  }
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_00170704(&DAT_008ec0e0);
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
    iVar2 = fn_0052ab7c(local_3c,local_34,uStack_30,uStack_2c,param_4,param_5,param_6,param_7,
                         param_8);
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
  }
  return iVar2;
}



void fn_00519904(void)

{
  if (DAT_008c0690 != (undefined4 *)0x0) {
    fn_00519b1c();
    if (DAT_008c0690 != (undefined4 *)0x0) {
      *DAT_008c0690 = &DAT_00857260;
      fn_004ecfd0();
    }
    DAT_008c0690 = (undefined4 *)0x0;
  }
  return;
}


