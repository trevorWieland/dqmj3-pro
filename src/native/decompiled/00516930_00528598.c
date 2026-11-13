#include "00516930_00528598.h"



/* WARNING: Removing unreachable block (ram,0x005286d8) */
/* WARNING: Removing unreachable block (ram,0x005286f0) */
/* WARNING: Removing unreachable block (ram,0x005286fc) */
/* WARNING: Removing unreachable block (ram,0x00528704) */
/* WARNING: Removing unreachable block (ram,0x0052870c) */
/* WARNING: Removing unreachable block (ram,0x00528714) */
/* WARNING: Removing unreachable block (ram,0x00528724) */
/* WARNING: Removing unreachable block (ram,0x005287b4) */
/* WARNING: Removing unreachable block (ram,0x00528744) */
/* WARNING: Removing unreachable block (ram,0x00528754) */

int fn_00528598(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 local_28;
  
  if (param_6 == (undefined1 *)0x0) {
    param_6 = auStack_40;
    param_7 = 0;
  }
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
    local_48[0] = unaff_r6[2];
    iVar2 = fn_0052a96c(local_48,local_34,uStack_30,uStack_2c,local_28,param_5,param_6,param_7);
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



void fn_00527f40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_008c035c != 0) {
    fn_00528b60(DAT_008c035c,param_1,param_2,param_3,param_4);
  }
  return;
}



void fn_0051cc74(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = &DAT_008572f8;
  iVar1 = fn_0014f590(param_1 + 1);
  *(undefined1 *)(iVar1 + 0x10) = 0xfd;
  puVar2 = (undefined4 *)fn_0013d4ec();
  uVar4 = *puVar2;
  *(undefined4 *)(iVar1 + 0x18) = puVar2[1];
  *(undefined4 *)(iVar1 + 0x14) = uVar4;
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  iVar3 = fn_004ecfe0(0x68);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00517f28();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  iVar3 = fn_004ecfe0(0x60);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0051c328();
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar4;
  iVar1 = fn_00515764(iVar1 + 0x34);
  *(undefined1 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 1;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 0;
  *(undefined1 *)(iVar1 + 0x31) = 0;
  return;
}



undefined1 * fn_0051c3e8(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_00509460(iVar1);
    if (iVar1 == 0) {
      puVar2 = &DAT_e0a14827;
    }
    else if (DAT_008c0680 == (undefined4 *)0x0) {
      DAT_008c0680 = (undefined4 *)fn_004ecfe0(0x44);
      if (DAT_008c0680 != (undefined4 *)0x0) {
        *DAT_008c0680 = 0;
        DAT_008c0680[1] = 0;
        DAT_008c0680[2] = 0;
        DAT_008c0680[3] = 0;
        DAT_008c0680[4] = 0;
        DAT_008c0680[5] = 0;
        DAT_008c0680[6] = 0;
        DAT_008c0680[7] = 0;
        DAT_008c0680[8] = 0;
        DAT_008c0680[9] = 0;
        DAT_008c0680[10] = 0;
        DAT_008c0680[0xb] = 0;
        DAT_008c0680[0xc] = 0;
        DAT_008c0680[0xd] = 0;
        DAT_008c0680[0xe] = 0;
        DAT_008c0680[0xf] = 0;
        DAT_008c0680[0x10] = 0;
      }
      puVar2 = (undefined1 *)0x0;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



undefined1 * fn_005186f8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_008bf4d4;
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    iVar5 = DAT_008bf4d4 + 0x10;
    if (*(char *)(DAT_008bf4d4 + 0x28) == '\0') {
      iVar4 = fn_0050c68c(iVar5,0x1c);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar3 = fn_0050e3ec();
      }
      uVar3 = fn_0050c920(iVar5,uVar3,0x1000000);
    }
    else {
      uVar3 = 0;
    }
    *param_1 = uVar3;
    if (*(char *)(iVar1 + 0x28) == '\0') {
      iVar5 = fn_0050c68c(iVar1 + 0x10,0x18);
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = fn_0051a110();
      }
      uVar3 = fn_0050c920(iVar1 + 0x10,uVar3,0x1000001);
    }
    else {
      uVar3 = 0;
    }
    param_1[1] = uVar3;
    if (*(char *)(iVar1 + 0x28) == '\0') {
      iVar5 = fn_0050c68c(iVar1 + 0x10,0x20);
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = fn_0050905c();
      }
      iVar5 = fn_0050c920(iVar1 + 0x10,uVar3,0x6000000);
    }
    else {
      iVar5 = 0;
    }
    param_1[2] = iVar5;
    if (iVar5 != 0) {
      uVar3 = fn_0050c6d8(iVar1 + 0x10,iVar5,0x600);
      fn_00508398(uVar3,param_2);
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



undefined1 *
fn_00516930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)
           fn_005095c4(param_1,param_2,param_3,
                        (*(uint *)(DAT_008c0634 + 4) & 0xfffffffc) - *(int *)(DAT_008c0634 + 8),
                        param_6);
  if (-1 < (int)puVar1) {
    *(undefined4 *)(param_1 + 0x148) = param_4;
    if (param_5 - 0x100000U < 0x3ff00000) {
      fn_004ed810(param_1 + 0x14c,param_5);
    }
    else {
      fn_004ed714(param_1 + 0x14c);
    }
    *(undefined1 *)(param_1 + 0x13d) = 0xfd;
    *(undefined4 *)(param_1 + 0x140) = 0;
    iVar2 = fn_006db768(DAT_008c06a0,param_1 + 0x144);
    if (iVar2 < 0) {
      puVar1 = &DAT_e0a14827;
    }
    else {
      fn_00517020(param_1 + 0xc,*(undefined1 *)(param_1 + 0x13d),*(undefined4 *)(param_1 + 0x144));
      puVar1 = (undefined1 *)0x0;
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
  }
  return puVar1;
}


