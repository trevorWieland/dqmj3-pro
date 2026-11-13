#include "00194464_00194d10.h"



void fn_00194d10(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (((DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e3c = 0;
    DAT_008f9e40 = 0;
    DAT_008f9e44 = 0;
    DAT_008f9e48 = 0;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e50 = 0;
    DAT_008f9e54 = 0;
    DAT_008f9e58 = 0;
    DAT_008f9e5c = 0;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e64 = 0;
  }
  fn_001781f0(param_1 + 0x48,&DAT_008f9e38);
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



void fn_00194c7c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = fn_0019bbb0(param_2);
  param_1[0xd] = iVar1;
  param_1[0xc] = param_4;
  uVar3 = 0;
  if (iVar1 != 0) {
    do {
      iVar1 = fn_001a213c(param_2);
      uVar2 = fn_0019fb30(param_3,iVar1 + uVar3 * 0x24);
      *(undefined4 *)(param_1[0xc] + uVar3 * 4) = uVar2;
      (**(code **)(*param_1 + 0x2c))(param_1,uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[0xd]);
  }
                    /* WARNING: Could not recover jumptable at 0x00194d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_5);
  return;
}



void fn_00194c04(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_0019bbb0(param_2);
  if (param_4 < uVar1) {
    iVar2 = fn_001a213c(param_2);
    iVar2 = fn_0019fb30(param_3,iVar2 + param_4 * 0x24);
    (**(code **)(*param_1 + 0x2c))(param_1,iVar2);
    param_1[0xc] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00194c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_5);
    return;
  }
  return;
}



void fn_00194b70(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_1[1];
  uVar1 = ((int)puVar5 - *param_1 & 0xfffffffcU) + 8;
  if (((uVar1 & 0xf) != 0) && (uVar1 = 4 - ((uVar1 & 0xf) >> 2), 0 < (int)uVar1)) {
    puVar2 = puVar5 + -1;
    if ((uVar1 & 1) != 0) {
      *puVar5 = 0;
      puVar2 = puVar5;
    }
    for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
    }
    puVar5 = puVar5 + uVar1;
  }
  iVar3 = fn_00189790(puVar5,1);
  param_1[1] = iVar3;
  iVar4 = *param_1;
  param_2[1] = iVar3 - iVar4 >> 2;
  *param_2 = iVar4;
  *param_1 = param_1[1];
  return;
}



/* WARNING: Removing unreachable block (ram,0x00194820) */
/* WARNING: Removing unreachable block (ram,0x00194838) */
/* WARNING: Removing unreachable block (ram,0x00194844) */
/* WARNING: Removing unreachable block (ram,0x0019484c) */
/* WARNING: Removing unreachable block (ram,0x00194854) */
/* WARNING: Removing unreachable block (ram,0x0019485c) */
/* WARNING: Removing unreachable block (ram,0x0019486c) */
/* WARNING: Removing unreachable block (ram,0x001948fc) */
/* WARNING: Removing unreachable block (ram,0x0019488c) */
/* WARNING: Removing unreachable block (ram,0x0019489c) */

int fn_001946e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int *piVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
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
    local_38 = unaff_r6[2];
    iVar2 = fn_0019f448(&local_38,local_34,uStack_30,uStack_2c,param_4,param_5);
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



void fn_00194464(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  piVar3 = (int *)(param_1 + 0x1b04);
  iVar6 = 0;
  iVar8 = param_1 + *piVar3 * 0x1a88;
  uVar4 = (uint)*(short *)(iVar8 + 0x18);
  if ((int)uVar4 < 1) {
    iVar8 = 0;
  }
  else {
    uVar4 = uVar4 & 1;
    if (uVar4 == 1) {
      *(int *)(param_1 + *piVar3 * 0x68 + 0x1a9c) = iVar8 + 0x191c;
    }
    uVar9 = (uint)(uVar4 == 1);
    if ((int)uVar4 < (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18)) {
      do {
        uVar4 = uVar4 + 2;
        *(uint *)(param_1 + *piVar3 * 0x68 + uVar9 * 4 + 0x1a9c) =
             param_1 + *piVar3 * 0x1a88 + uVar9 * 0x10 + 0x191c;
        *(uint *)(param_1 + *piVar3 * 0x68 + (uVar9 + 1) * 4 + 0x1a9c) =
             param_1 + *piVar3 * 0x1a88 + (uVar9 + 1) * 0x10 + 0x191c;
        uVar9 = uVar9 + 2;
      } while ((int)uVar4 < (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18));
    }
    iVar8 = 0;
    iVar6 = (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x18);
    if (iVar6 != 0) {
      iVar8 = param_1 + *piVar3 * 0x68 + 0x1a9c;
    }
  }
  iVar5 = iVar6 + 1;
  *(undefined4 *)(param_1 + *piVar3 * 0x68 + iVar6 * 4 + 0x1a9c) = 0;
  iVar7 = (int)*(short *)(param_1 + *piVar3 * 0x1a88 + 0x1a);
  iVar6 = iVar5;
  if (0 < iVar7) {
    iVar10 = 0;
    do {
      iVar7 = iVar7 + -1;
      iVar1 = iVar10 * 0x100;
      iVar2 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 1;
      *(int *)(param_1 + *piVar3 * 0x68 + iVar2 + 0x1a9c) =
           param_1 + *piVar3 * 0x1a88 + iVar1 + 0x11c;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  if (iVar6 != iVar5) {
    iVar7 = param_1 + *piVar3 * 0x68 + iVar5 * 4 + 0x1a9c;
  }
  *(int *)(param_1 + *piVar3 * 0x10 + 4) = param_1 + *piVar3 * 0x1a88 + 0x1c;
  *(int *)(param_1 + *piVar3 * 0x10 + 8) = iVar7;
  *(undefined2 *)(param_1 + *piVar3 * 0x10 + 0xc) =
       *(undefined2 *)(param_1 + *piVar3 * 0x1a88 + 0x14);
  *(undefined2 *)(param_1 + *piVar3 * 0x10 + 0xe) =
       *(undefined2 *)(param_1 + *piVar3 * 0x1a88 + 0x16);
  *(int *)(param_1 + *piVar3 * 0x10 + 0x10) = iVar8;
  return;
}


