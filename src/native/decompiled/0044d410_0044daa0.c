#include "0044d410_0044daa0.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_0044daa0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  
  uVar3 = param_2[2];
  if (uVar3 < 0x201) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    local_28 = fn_006ceaf4();
    fn_0044e1f8(&local_28,0,uVar1,uVar2,uVar4,uVar5,uVar3,0,param_3,param_4);
  }
  return;
}



undefined1 * fn_0044d9cc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 local_34 [2];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar6 = 0;
  if (param_3 != 0) {
    uVar6 = 0x12345678;
  }
  local_2c = DAT_0089a670;
  local_34[0] = 0xc;
  if (param_3 == 0) {
    uVar6 = 6;
  }
  puVar3 = (undefined1 *)fn_0044e2a4(&local_2c,&local_28,uVar6,2,param_2);
  uVar2 = uStack_24;
  uVar1 = local_28;
  uVar6 = DAT_0089a670;
  if (-1 < (int)puVar3) {
    uVar8 = fn_001587b0(&DAT_008e33ac);
    puVar5 = (undefined *)((ulonglong)uVar8 >> 0x20);
    puVar4 = (undefined4 *)uVar8;
    if (puVar4 == (undefined4 *)0x0) {
      puVar7 = &DAT_d8604659;
    }
    else {
      puVar5 = &DAT_0085251c;
      *puVar4 = &DAT_0085251c;
      puVar4[2] = uVar1;
      puVar4[3] = uVar2;
      puVar4[1] = uVar6;
      puVar7 = (undefined1 *)0x0;
    }
    *param_1 = puVar4;
    puVar3 = (undefined1 *)0x0;
    if ((int)puVar7 < 0) {
      local_34[0] = DAT_0089a670;
      fn_0044e304(local_34,puVar5,local_28,uStack_24);
      puVar3 = puVar7;
    }
  }
  return puVar3;
}



undefined1 *
fn_0044d810(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  uint in_r12;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_68 [2];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  int *local_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar5 = (int *)0x0;
  local_34 = param_1;
  puStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_0014d7ec();
  if (iVar1 != 0) {
    fn_00301f50(iVar1,0x130);
    piVar2 = (int *)fn_0014d8d4(iVar1);
    if (piVar2 != (int *)0x0) {
      local_68[0] = 0;
      local_40 = param_2[2] & 0xff | in_r12 & 0xffffff00;
      local_48 = *param_2;
      uStack_44 = param_2[1];
      local_5c = param_2[3];
      local_60 = 0;
      uStack_58 = 0;
      local_54 = 0;
      local_50 = 0;
      uStack_88 = DAT_0089a670;
      local_84 = param_4;
      local_80 = param_3;
      uStack_3c = param_3;
      puVar3 = (undefined1 *)
               fn_0013b294(&uStack_88,local_68,0,0x2345678a,2,&local_48,0x10,2,&local_60,0x14,1,0);
      iVar1 = local_68[0];
      if (-1 < (int)puVar3) {
        piVar4 = (int *)fn_001587b0(&DAT_008e33e8);
        if (piVar4 == (int *)0x0) {
          svc_0x23();
          puVar3 = &DAT_d8604659;
        }
        else {
          *piVar4 = (int)&DAT_008524d8;
          piVar4[1] = iVar1;
          puVar3 = (undefined1 *)
                   fn_0014d2ec(piVar2,piVar4,local_80,local_84,param_5,param_6,param_7);
          if ((int)puVar3 < 0) {
            (**(code **)(*piVar4 + 0x30))(piVar4);
          }
          else {
            puVar3 = (undefined1 *)0x0;
          }
        }
      }
      if ((int)puVar3 < 0) {
        (**(code **)(*piVar2 + 0x30))(piVar2);
      }
      else {
        puVar3 = (undefined1 *)0x0;
        piVar5 = piVar2;
      }
      goto LAB_0044d998;
    }
  }
  puVar3 = &DAT_d8604659;
LAB_0044d998:
  if (-1 < (int)puVar3) {
    *local_34 = (int)piVar5;
    puVar3 = (undefined1 *)0x0;
  }
  return puVar3;
}



void fn_0044d7bc(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0044d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



void fn_0044d750(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  short *psStack_1c;
  int local_18;
  
  piVar2 = (int *)fn_0017750c();
  if (piVar2 != (int *)0x0) {
    do {
      psStack_1c = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_1c;
    } while (sVar1 != 0x3a);
    local_20 = 4;
    iVar3 = fn_00100b58(psStack_1c);
    local_18 = (iVar3 + 1) * 2;
    (**(code **)(*piVar2 + 0x1c))(piVar2,&local_20);
  }
  return;
}



void fn_0044d6e4(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_20;
  short *psStack_1c;
  int local_18;
  
  piVar2 = (int *)fn_0017750c();
  if (piVar2 != (int *)0x0) {
    do {
      psStack_1c = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_1c;
    } while (sVar1 != 0x3a);
    local_20 = 4;
    iVar3 = fn_00100b58(psStack_1c);
    local_18 = (iVar3 + 1) * 2;
    (**(code **)(*piVar2 + 8))(piVar2,&local_20);
  }
  return;
}



undefined1 * fn_0044d410(int param_1,undefined4 *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  int iVar8;
  uint unaff_r4;
  int unaff_r5;
  uint unaff_r8;
  bool bVar9;
  int local_a0;
  uint local_7c;
  int local_78;
  ushort *local_74;
  undefined1 auStack_70 [4];
  uint local_6c;
  int iStack_68;
  uint uStack_64;
  int local_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  
  if (*param_3 == 4) {
    iVar2 = param_3[1];
  }
  else {
    iVar2 = 0;
  }
  puVar3 = (undefined1 *)fn_0077fe64(param_1 + 0x20,auStack_5c,auStack_50,&local_7c,0,iVar2);
  if (-1 < (int)puVar3) {
    uVar4 = local_7c ^ 0x75bcd15;
    iVar2 = local_78 * 2 >> 1;
    iVar8 = iVar2 + -1;
    if (0 < iVar8) {
      puVar7 = local_74 + -1;
      if (-1 < local_78 << 0x1f) {
        uVar4 = (uint)*local_74 ^ (uVar4 >> 5 | uVar4 << 0x1b);
        puVar7 = local_74;
      }
      uVar1 = puVar7[1];
      for (iVar8 = iVar8 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar4 = (uint)uVar1 ^ (uVar4 >> 5 | uVar4 << 0x1b);
        uVar1 = puVar7[3];
        uVar4 = (uint)puVar7[2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
        puVar7 = puVar7 + 2;
      }
    }
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      uVar4 = (uint)local_74[iVar2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
    }
    puVar3 = (undefined1 *)
             fn_0077fc60(param_1 + 0x48,auStack_34,auStack_70,&local_7c,uVar4,local_74,
                          local_78 << 1);
    if ((int)puVar3 < 0) {
      uVar4 = ((uint)puVar3 & 0x3fc00) >> 10;
      bVar9 = uVar4 == 0x11;
      if (bVar9) {
        uVar4 = (uint)puVar3 & 0x3ff;
      }
      if (bVar9 && uVar4 == 0x6f) {
        local_7c = local_7c ^ 0x75bcd15;
        iVar2 = local_78 * 2 >> 1;
        iVar8 = iVar2 + -1;
        if (0 < iVar8) {
          puVar7 = local_74 + -1;
          if (-1 < local_78 << 0x1f) {
            local_7c = (uint)*local_74 ^ (local_7c >> 5 | local_7c << 0x1b);
            puVar7 = local_74;
          }
          uVar1 = puVar7[1];
          for (iVar8 = iVar8 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar4 = (uint)uVar1 ^ (local_7c >> 5 | local_7c << 0x1b);
            uVar1 = puVar7[3];
            local_7c = (uint)puVar7[2] ^ (uVar4 >> 5 | uVar4 << 0x1b);
            puVar7 = puVar7 + 2;
          }
        }
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) {
          local_7c = (uint)local_74[iVar2] ^ (local_7c >> 5 | local_7c << 0x1b);
        }
        puVar3 = (undefined1 *)
                 fn_0077fa34(param_1 + 0x20,auStack_30,auStack_44,&local_7c,local_7c,local_74,
                              local_78 << 1);
        if ((int)puVar3 < 0) {
          uVar4 = ((uint)puVar3 & 0x3fc00) >> 10;
          bVar9 = uVar4 == 0x11;
          if (bVar9) {
            uVar4 = (uint)puVar3 & 0x3ff;
          }
          if (bVar9 && uVar4 == 0x6f) {
            puVar3 = (undefined1 *)0xc8804470;
          }
        }
        else {
          puVar3 = (undefined1 *)0xe0c04702;
        }
      }
    }
    if (-1 < (int)puVar3) {
      local_a0 = local_60;
      puVar3 = (undefined1 *)0x0;
      unaff_r4 = local_6c;
      unaff_r5 = iStack_68;
      unaff_r8 = uStack_64;
    }
  }
  if (-1 < (int)puVar3) {
    piVar5 = (int *)fn_001587b0(param_1 + 0xb8);
    if (piVar5 != (int *)0x0) {
      uVar4 = *(uint *)(param_1 + 0xb0);
      *piVar5 = (int)&DAT_00852444;
      piVar5[5] = unaff_r5 + local_a0 + (uint)CARRY4(unaff_r4,unaff_r8) +
                  (uint)CARRY4(unaff_r4 + unaff_r8,uVar4);
      piVar5[2] = uVar4 + unaff_r4;
      piVar5[1] = param_1;
      piVar5[3] = unaff_r5 + (uint)CARRY4(uVar4,unaff_r4);
      piVar5[4] = unaff_r4 + unaff_r8 + uVar4;
      piVar5[6] = *(int *)(param_1 + 4);
    }
    *param_2 = piVar5;
    if (piVar5 == (int *)0x0) {
      puVar3 = &DAT_d8604659;
    }
    else {
      puVar6 = (undefined1 *)(**(code **)(*piVar5 + 0x18))(piVar5,*(undefined4 *)(param_1 + 4));
      puVar3 = (undefined1 *)0x0;
      if ((int)puVar6 < 0) {
        (**(code **)(*(int *)*param_2 + 0x30))();
        *param_2 = 0;
        puVar3 = puVar6;
      }
    }
  }
  return puVar3;
}


