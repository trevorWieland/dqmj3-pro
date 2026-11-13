#include "0050ffd8_005162c8.h"



undefined4 fn_005162c8(int *param_1,uint param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined *local_48 [4];
  undefined4 local_38;
  int *piStack_34;
  uint uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  if (param_2 != 0) {
    local_38 = DAT_008bf4cc;
    piVar5 = (int *)param_1[1];
    uVar4 = piVar5[1];
    piStack_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    if (param_5 != 0) {
      uVar4 = piVar5[2];
    }
    do {
      if (uVar4 == piVar5[2]) {
        iVar2 = fn_006566c4(param_2,param_1[0x3f]);
        uVar6 = param_2;
        if (-1 < iVar2) {
          uVar6 = (1 << (iVar2 + 1U & 0xff)) - 1U & param_2;
        }
        param_2 = param_2 & ~uVar6;
        iVar2 = fn_00656680(uVar6);
        fn_0014f590(local_48);
        if (iVar2 == 1) {
          uVar1 = fn_00656680((-uVar6 & uVar6) - 1);
          iVar2 = fn_006d9ef0(local_38,local_48);
          if (iVar2 < 0) {
            local_48[0] = &DAT_00856c94;
            goto LAB_005163e0;
          }
        }
        else {
          uVar1 = 0xfd;
          fn_004ed714(local_48);
        }
        iVar2 = (**(code **)(*param_1 + 0x20))(param_1,uVar1,uVar6,local_48,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        local_48[0] = &DAT_00856c94;
        if (*(int *)*piVar5 <= (int)uVar4) {
          uVar4 = 0;
        }
LAB_005163b0:
        uVar3 = fn_0050a26c(param_1,iVar2,local_2c);
        fn_00516e0c(param_1 + 3,iVar2,uVar3,uVar6,0,0);
      }
      else {
        if (uVar4 < *(uint *)*piVar5) {
          iVar2 = ((uint *)*piVar5)[1] + uVar4 * 0x5ec;
        }
        else {
          iVar2 = 0;
        }
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar5 <= (int)uVar4) {
          uVar4 = 0;
        }
        if ((((*(char *)(iVar2 + 0x5d5) == '\0') && (*(uint *)(iVar2 + 0x5b8) <= local_28)) &&
            (uVar6 = *(uint *)(iVar2 + 0x5c0), uVar6 != 0)) && ((uVar6 & ~param_2) == 0)) {
          param_2 = param_2 & ~uVar6;
          goto LAB_005163b0;
        }
      }
LAB_005163e0:
    } while (param_2 != 0);
  }
  return 1;
}



undefined4 fn_00516180(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *local_30 [5];
  
  if (param_4 == 0) {
    piVar1 = (int *)param_1[1];
    uVar4 = piVar1[1];
    if (uVar4 != piVar1[2]) {
      do {
        if (uVar4 < *(uint *)*piVar1) {
          iVar3 = ((uint *)*piVar1)[1] + uVar4 * 0x5ec;
        }
        else {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 0x5d5) == '\0') {
          bVar5 = *(uint *)(iVar3 + 0x5b8) == param_3;
          if (*(uint *)(iVar3 + 0x5b8) <= param_3) {
            bVar5 = *(char *)(iVar3 + 0x5bc) == -2;
          }
          if (bVar5) {
            if (iVar3 != 0) goto LAB_00516264;
            break;
          }
        }
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar1 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar1[2]);
    }
  }
  fn_004ed7b8(local_30,DAT_008c06a0 + 0xac);
  iVar3 = (**(code **)(*param_1 + 0x20))(param_1,0xfe,0,local_30,param_4);
  local_30[0] = &DAT_00856c94;
  if (iVar3 == 0) {
    return 0;
  }
LAB_00516264:
  uVar2 = fn_0050a26c(param_1,iVar3,param_2);
  fn_00516e0c(param_1 + 3,iVar3,uVar2,0,0,0);
  return 1;
}



undefined4 fn_0051603c(int *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *local_30 [4];
  
  if (param_2 == 0) {
    return 1;
  }
  if (param_5 == 0) {
    piVar1 = (int *)param_1[1];
    uVar4 = piVar1[1];
    if (uVar4 != piVar1[2]) {
      do {
        if (uVar4 < *(uint *)*piVar1) {
          iVar3 = ((uint *)*piVar1)[1] + uVar4 * 0x5ec;
        }
        else {
          iVar3 = 0;
        }
        if (*(char *)(iVar3 + 0x5d5) == '\0') {
          bVar5 = *(uint *)(iVar3 + 0x5b8) == param_4;
          if (*(uint *)(iVar3 + 0x5b8) <= param_4) {
            bVar5 = *(char *)(iVar3 + 0x5bc) == -1;
          }
          if (bVar5) {
            if (iVar3 != 0) goto LAB_00516140;
            break;
          }
        }
        uVar4 = uVar4 + 1;
        if (*(int *)*piVar1 <= (int)uVar4) {
          uVar4 = 0;
        }
      } while (uVar4 != piVar1[2]);
    }
  }
  uVar2 = fn_0014f590(local_30);
  iVar3 = (**(code **)(*param_1 + 0x20))(param_1,0xff,param_2,uVar2,param_5);
  local_30[0] = &DAT_00856c94;
  if (iVar3 == 0) {
    return 0;
  }
LAB_00516140:
  uVar2 = fn_0050a26c(param_1,iVar3,param_3);
  fn_00516e0c(param_1 + 3,iVar3,uVar2,param_2,0,0);
  return 1;
}



void fn_00515598(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005155a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



uint fn_005152a8(int param_1)

{
  int *piVar1;
  uint unaff_r6;
  
  (**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + 0x30) + 0x18))();
  fn_0051ba28(DAT_008c06a0,*(undefined4 *)(param_1 + 0x4c));
  fn_005191c0(DAT_008c0674,*(undefined4 *)(param_1 + 0x4c));
  piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x2c);
  if (piVar1 + -0x40000 < (int *)0x3ff00000) {
    fn_0050faac(piVar1);
    (**(code **)(*piVar1 + 8))(piVar1,0);
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x4c) + 0x34);
  if (piVar1 + -0x40000 < (int *)0x3ff00000) {
    fn_0051c11c(piVar1);
    (**(code **)(*piVar1 + 8))(piVar1,0);
  }
  fn_0051ca8c(*(undefined4 *)(param_1 + 0x4c));
  fn_0050b66c(DAT_008bf4cc,*(undefined4 *)(param_1 + 0x4c));
  return unaff_r6 & 0xff00 | 1;
}



void fn_00514dc4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_008bf4d0;
  if (DAT_008bf4d0 != (undefined4 *)0x0) {
    piVar1 = DAT_008bf4d0 + 4;
    *DAT_008bf4d0 = &DAT_0085716c;
    if (*piVar1 != 0) {
      fn_0050eee8();
      if (puVar2[4] != 0) {
        fn_00518698();
        fn_004ecfd0();
      }
    }
    if (puVar2[3] != 0) {
      fn_00514c1c();
      if (puVar2[3] != 0) {
        fn_00514c74();
        fn_004ecfd0();
      }
    }
    if ((int *)puVar2[2] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[2] + 4))();
      puVar2[2] = 0;
    }
    if ((int *)puVar2[1] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[1] + 4))();
      puVar2[1] = 0;
    }
    fn_004ecfd0(puVar2);
    DAT_008bf4d0 = (undefined4 *)0x0;
  }
  return;
}



void fn_0051332c(void)

{
  int *piVar1;
  
  piVar1 = DAT_008c06a8;
  if ((DAT_008c06a8 + -0x40000 < (int *)0x3ff00000) && (DAT_008c06a8 != (int *)0x0)) {
    if (*DAT_008c06a8 != 0) {
      fn_004ecfd0(*DAT_008c06a8);
      *piVar1 = 0;
    }
    fn_004ecfd0(piVar1);
    DAT_008c06a8 = (int *)0x0;
  }
  return;
}



undefined1 * fn_0050ffd8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = *(int *)(param_1 + 0x28);
  bVar9 = iVar1 == 0;
  if (bVar9) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (bVar9 && iVar1 == 0) {
    uVar3 = fn_004ed2e8(iVar1);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      uVar4 = fn_004ed2e8();
      iVar1 = fn_00656e14(param_2 * 0x118,uVar4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        uVar8 = 0;
        if (param_2 != 0) {
          do {
            if (iVar1 + uVar8 * 0x118 != 0) {
              iVar5 = fn_0014f590();
              *(undefined4 *)(iVar5 + 0x10) = 0;
              iVar5 = fn_00101a1c(iVar5 + 0x14,&LAB_005107ac,0x10);
              uVar7 = 0;
              do {
                iVar6 = iVar5 + -0x14 + uVar7 * 0x10;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(iVar6 + 0x14) = 0;
                *(undefined4 *)(iVar6 + 0x18) = 0;
                *(undefined4 *)(iVar6 + 0x1c) = 0;
                *(undefined4 *)(iVar6 + 0x20) = 0;
              } while (uVar7 < 0x10);
              *(undefined4 *)(iVar5 + 0x100) = 0;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < param_2);
        }
      }
      *(int *)(param_1 + 0x2c) = iVar1;
      fn_006568fc(param_1 + 0x20,param_2,uVar3,4);
    }
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      uVar4 = fn_004ed2e8();
      iVar1 = fn_00656e14(param_3 * 0x18,uVar4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        uVar8 = 0;
        if (param_3 != 0) {
          do {
            if (iVar1 + uVar8 * 0x18 != 0) {
              iVar5 = fn_0014f590();
              *(undefined4 *)(iVar5 + 0x10) = 0;
              *(undefined2 *)(iVar5 + 0x14) = 0;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < param_3);
        }
      }
      *(int *)(param_1 + 0x10) = iVar1;
      fn_006568fc(param_1 + 4,param_3,uVar3,4);
    }
    fn_004f01f4(param_1 + 0x40);
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14821;
  }
  return puVar2;
}


