#include "001465e8_006f9544ba.h"



/* WARNING: Removing unreachable block (ram,0x0052bf24) */
/* WARNING: Removing unreachable block (ram,0x0052bfc8) */
/* WARNING: Removing unreachable block (ram,0x0052bf3c) */
/* WARNING: Removing unreachable block (ram,0x0052bf48) */
/* WARNING: Removing unreachable block (ram,0x0052bf50) */
/* WARNING: Removing unreachable block (ram,0x0052bf58) */
/* WARNING: Removing unreachable block (ram,0x0052bf60) */
/* WARNING: Removing unreachable block (ram,0x0052bf70) */
/* WARNING: Removing unreachable block (ram,0x0052bfec) */
/* WARNING: Removing unreachable block (ram,0x0052c040) */
/* WARNING: Removing unreachable block (ram,0x0052bffc) */
/* WARNING: Removing unreachable block (ram,0x0052c014) */
/* WARNING: Removing unreachable block (ram,0x0052bf90) */
/* WARNING: Removing unreachable block (ram,0x0052bfdc) */
/* WARNING: Removing unreachable block (ram,0x0052bfa0) */
/* WARNING: Removing unreachable block (ram,0x0052bfb8) */
/* WARNING: Removing unreachable block (ram,0x0052c020) */

int fn_0052bdb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *unaff_r11;
  int *piVar3;
  int local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  while( true ) {
    fn_00170704(&DAT_008ec0e0);
    if ((DAT_008ec111 == '\0') || (DAT_008ec112 != '\0')) {
      fn_001707b4(&DAT_008ec0e0);
      iVar2 = -0x375f8c08;
    }
    else if ((DAT_008ec0d8 == (int *)0x0) && (iVar2 = fn_0019f340(&DAT_008ec0d0), iVar2 < 0)) {
      fn_001707b4(&DAT_008ec0e0);
    }
    else {
      unaff_r11 = DAT_008ec0d8;
      if (DAT_008ec0d8 != (int *)0x0) {
        if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
          DAT_008ec0d8 = (int *)0x0;
        }
        else {
          iVar2 = *DAT_008ec0d8;
          piVar3 = DAT_008ec0d8 + 1;
          DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
          *(int *)*piVar3 = iVar2;
          *(int *)(*unaff_r11 + 4) = unaff_r11[1];
        }
        unaff_r11[1] = 0;
        *unaff_r11 = 0;
      }
      piVar3 = DAT_008ec0d4;
      DAT_008ec0fc = DAT_008ec0fc + -1;
      if (DAT_008ec0d4 == (int *)0x0) {
        unaff_r11[1] = (int)unaff_r11;
        *unaff_r11 = (int)unaff_r11;
        DAT_008ec0d4 = unaff_r11;
      }
      else {
        unaff_r11[1] = (int)DAT_008ec0d4;
        *(int **)(*piVar3 + 4) = unaff_r11;
        *unaff_r11 = *piVar3;
        *piVar3 = (int)unaff_r11;
      }
      iVar2 = 0;
      DAT_008ec0f4 = DAT_008ec0f4 + 1;
      fn_001707b4(&DAT_008ec0e0);
    }
    if ((-1 < iVar2) || (iVar2 * -0x400000 != -0x2000000)) break;
    fn_0015def0(&DAT_008ec0ec);
  }
  if (iVar2 < 0) {
    return iVar2;
  }
  local_38[0] = unaff_r11[2];
  iVar2 = fn_0052ae38(local_38,local_30,uStack_2c,uStack_28);
  if (iVar2 < 0) {
    if (unaff_r11 != (int *)0x0) {
      fn_00170704();
      if (DAT_008ec111 == '\0') {
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        if ((int *)*unaff_r11 == unaff_r11) {
          DAT_008ec0d4 = (int *)0x0;
        }
        else {
          if (DAT_008ec0d4 == unaff_r11) {
            DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
          }
          *(int *)unaff_r11[1] = *unaff_r11;
          *(int *)(*unaff_r11 + 4) = unaff_r11[1];
        }
        unaff_r11[1] = 0;
        *unaff_r11 = 0;
        piVar1 = DAT_008ec0dc;
        piVar3 = DAT_008ec0d8;
        DAT_008ec0f4 = DAT_008ec0f4 + -1;
        if (unaff_r11[2] == 0) {
          if (DAT_008ec0dc == (int *)0x0) {
            unaff_r11[1] = (int)unaff_r11;
            *unaff_r11 = (int)unaff_r11;
            DAT_008ec0dc = unaff_r11;
          }
          else {
            unaff_r11[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar1 + 4) = unaff_r11;
            *unaff_r11 = *piVar1;
            *piVar1 = (int)unaff_r11;
          }
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        }
        else {
          if (DAT_008ec0d8 == (int *)0x0) {
            unaff_r11[1] = (int)unaff_r11;
            *unaff_r11 = (int)unaff_r11;
            DAT_008ec0d8 = unaff_r11;
          }
          else {
            unaff_r11[1] = (int)DAT_008ec0d8;
            *(int **)(*piVar3 + 4) = unaff_r11;
            *unaff_r11 = *piVar3;
            *piVar3 = (int)unaff_r11;
          }
          DAT_008ec0fc = DAT_008ec0fc + 1;
        }
        fn_0015dfc0(&DAT_008ec0ec);
        fn_001707b4(&DAT_008ec0e0);
      }
    }
    return iVar2;
  }
  if (unaff_r11 != (int *)0x0) {
    fn_00170704(&DAT_008ec0e0);
    if (DAT_008ec111 == '\0') {
      fn_001707b4(&DAT_008ec0e0);
    }
    else {
      if ((int *)*unaff_r11 == unaff_r11) {
        DAT_008ec0d4 = (int *)0x0;
      }
      else {
        if (DAT_008ec0d4 == unaff_r11) {
          DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
        }
        *(int *)unaff_r11[1] = *unaff_r11;
        *(int *)(*unaff_r11 + 4) = unaff_r11[1];
      }
      unaff_r11[1] = 0;
      *unaff_r11 = 0;
      piVar1 = DAT_008ec0dc;
      piVar3 = DAT_008ec0d8;
      DAT_008ec0f4 = DAT_008ec0f4 + -1;
      if (unaff_r11[2] == 0) {
        if (DAT_008ec0dc == (int *)0x0) {
          unaff_r11[1] = (int)unaff_r11;
          *unaff_r11 = (int)unaff_r11;
          DAT_008ec0dc = unaff_r11;
        }
        else {
          unaff_r11[1] = (int)DAT_008ec0dc;
          *(int **)(*piVar1 + 4) = unaff_r11;
          *unaff_r11 = *piVar1;
          *piVar1 = (int)unaff_r11;
        }
        DAT_008ec0f8 = DAT_008ec0f8 + 1;
      }
      else {
        if (DAT_008ec0d8 == (int *)0x0) {
          unaff_r11[1] = (int)unaff_r11;
          *unaff_r11 = (int)unaff_r11;
          DAT_008ec0d8 = unaff_r11;
        }
        else {
          unaff_r11[1] = (int)DAT_008ec0d8;
          *(int **)(*piVar3 + 4) = unaff_r11;
          *unaff_r11 = *piVar3;
          *piVar3 = (int)unaff_r11;
        }
        DAT_008ec0fc = DAT_008ec0fc + 1;
      }
      fn_0015dfc0(&DAT_008ec0ec);
      fn_001707b4(&DAT_008ec0e0);
    }
  }
  return 0;
}


