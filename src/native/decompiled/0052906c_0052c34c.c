#include "0052906c_0052c34c.h"



undefined4 fn_0052c34c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  if (DAT_0089a7b0 == '\0') {
    uVar2 = 0xc8a073f8;
  }
  else {
    fn_00529c18(DAT_0089a7b0);
    fn_0052a1e8();
    (**(code **)*DAT_008c035c)();
    puVar1 = DAT_008c035c;
    fn_00170704(&DAT_008e3730);
    fn_0015e5c0(&DAT_008e36d8,puVar1);
    fn_001707b4(&DAT_008e3730);
    DAT_008c035c = (undefined4 *)0x0;
    DAT_008e3740 = 0;
    DAT_008e3745 = (undefined1)((uint)extraout_r1 >> 8);
    DAT_008e3744 = (undefined1)extraout_r1;
    DAT_008e3746 = (undefined1)((uint)extraout_r1 >> 0x10);
    DAT_008e3738 = 0xffffffff;
    fn_0014e6e4();
    if (DAT_0089a7b4 != 0) {
      (**(code **)(*DAT_0089a7b8 + 4))();
      DAT_0089a7b4 = 0;
      DAT_0089a7b8 = (int *)0x0;
    }
    uVar2 = 0;
    DAT_0089a7b0 = '\0';
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x005291ac) */
/* WARNING: Removing unreachable block (ram,0x005291c4) */
/* WARNING: Removing unreachable block (ram,0x005291d0) */
/* WARNING: Removing unreachable block (ram,0x005291d8) */
/* WARNING: Removing unreachable block (ram,0x005291e0) */
/* WARNING: Removing unreachable block (ram,0x005291e8) */
/* WARNING: Removing unreachable block (ram,0x005291f8) */
/* WARNING: Removing unreachable block (ram,0x00529288) */
/* WARNING: Removing unreachable block (ram,0x00529218) */
/* WARNING: Removing unreachable block (ram,0x00529228) */

int fn_0052906c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 *param_6,undefined4 param_7)

{
  int *piVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int local_48 [2];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_6 == (undefined1 *)0x0) {
    param_6 = auStack_40;
    param_7 = 0;
  }
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
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
    local_48[0] = unaff_r6[2];
    iVar2 = fn_0052aad8(local_48,local_34,uStack_30,uStack_2c,&uStack_28,param_5,param_6,param_7);
    if (-1 < iVar2) {
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


