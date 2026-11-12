#include "0066f670_00675a7c.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_00675a7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(DAT_00898840 + 0x48) = param_3;
  fn_0066e458(DAT_00898840,param_2,0);
  *(undefined4 *)(DAT_00898840 + 0x38) = param_4;
  *(undefined4 *)(*(int *)(param_1 + 0x98) + 100) = param_5;
  fn_0066de74(param_1,2);
  return;
}



void fn_006739cc(void)

{
  fn_0066eb80(DAT_00898840,2);
  fn_0066f080();
  return;
}



void fn_006718fc(int *param_1,undefined4 param_2)

{
  fn_00301a9c(param_1 + 0x3a,param_2,0x100);
                    /* WARNING: Could not recover jumptable at 0x00671924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,5);
  return;
}



void fn_006718ec(void)

{
  fn_0066d0c8(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x14));
  return;
}



void fn_00671860(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  param_1[0x29] = iVar3;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = iVar5;
  param_1[0x2c] = iVar6;
  param_1[0x2d] = iVar7;
  iVar1 = param_2[9];
  param_1[0x2e] = param_2[8];
  param_1[0x2f] = iVar1;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0x30] = *param_2;
  param_1[0x31] = iVar1;
  param_1[0x32] = iVar2;
  param_1[0x33] = iVar3;
  param_1[0x34] = iVar4;
  param_1[0x35] = iVar5;
  param_1[0x36] = iVar6;
  param_1[0x37] = iVar7;
  param_1[0x39] = (int)(char *)&DAT_007ce9d0;
  iVar1 = fn_002febd8();
  param_1[0x38] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x006718ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,3);
  return;
}



void fn_00671838(int *param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  param_1[0x29] = iVar3;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = iVar5;
  param_1[0x2c] = iVar6;
  param_1[0x2d] = iVar7;
  iVar1 = param_2[9];
  param_1[0x2e] = param_2[8];
  param_1[0x2f] = iVar1;
  *(undefined1 *)(param_1 + 0x7f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0067185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,4);
  return;
}



void fn_00671810(int *param_1,int *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar4 = param_2[4];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  param_1[0x26] = *param_2;
  param_1[0x27] = iVar1;
  param_1[0x28] = iVar2;
  param_1[0x29] = iVar3;
  param_1[0x2a] = iVar4;
  param_1[0x2b] = iVar5;
  param_1[0x2c] = iVar6;
  param_1[0x2d] = iVar7;
  iVar1 = param_2[9];
  param_1[0x2e] = param_2[8];
  param_1[0x2f] = iVar1;
  *(undefined1 *)(param_1 + 0x7f) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00671834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0066f670(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  int local_ac;
  int local_a8 [2];
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_68 [8];
  int local_60 [4];
  undefined1 auStack_50 [8];
  int local_48;
  char local_24;
  char local_22;
  
  iVar3 = fn_0052c6ec();
  if (iVar3 != 0) {
    fn_0066f258(param_1);
    uVar4 = *(uint *)(param_1 + 0x70);
    svc_0x24();
    if ((int)uVar4 < 0) {
      fn_0015e294();
    }
    if ((uVar4 & 0x3ff) != 0x3fe) {
      local_b0 = 0xe7e3ffff;
      iVar3 = fn_0052cc74(local_68,1,0);
      while (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x340);
        iVar6 = 0;
        *(undefined1 *)(param_1 + 0x345) = 1;
        if (0 < iVar3) {
          do {
            if (*(int *)(param_1 + iVar6 * 0x50 + 0xc4) == local_60[0]) {
              if (iVar6 != -1) {
                if (local_68[0] == '\x03') {
                  local_b8 = 0xe7e3ffff;
                  local_b8 = fn_0052c9ec(auStack_50,&local_ac,1);
                  if ((local_b8 & 0x80000000) == 0) {
                    cVar1 = '\0';
                    if (local_22 != '\0') {
                      cVar1 = local_24;
                    }
                    if ((local_22 != '\0' && cVar1 != '\0') &&
                       (local_48 == *(int *)(param_1 + 0x88))) {
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    iVar3 = fn_0052cab4(&local_b8);
                    *(undefined4 *)(param_1 + 0x78) = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 0;
                    *(int *)(param_1 + 0x74) = iVar3;
                    *(uint *)(param_1 + 0x78) = (uint)(iVar3 != 0);
                    uVar2 = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 1;
                  }
                  *(undefined1 *)(param_1 + iVar6 * 0x50 + 0xc0) = uVar2;
                }
                else {
                  if (local_68[0] != '\x04') {
                    if (local_68[0] != '\x05') {
                      if (local_68[0] == '\a') {
                        *(undefined1 *)(param_1 + iVar6 * 0x50 + 0xc0) = 0;
                      }
                      goto LAB_0066f9f0;
                    }
                    iVar3 = param_1 + iVar6 * 0x50;
                    local_b8 = 0;
                    local_b4 = fn_0052cbf0(iVar3 + 200,&local_ac,1);
                    if ((local_b4 & 0x80000000) == 0) goto LAB_0066f9f0;
                    *(undefined1 *)(iVar3 + 0xc0) = 0;
                    iVar3 = fn_0052cab4(&local_b4);
                    *(undefined4 *)(param_1 + 0x78) = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 0;
                    *(int *)(param_1 + 0x74) = iVar3;
                    uVar5 = 0;
                    if (iVar3 == 0) goto LAB_0066f998;
                    goto LAB_0066f940;
                  }
                  local_b0 = fn_0052c8f4(&local_98,local_60,1);
                  if ((local_b0 & 0x80000000) != 0) {
                    iVar3 = fn_0052cab4(&local_b0);
                    *(undefined4 *)(param_1 + 0x78) = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 0;
                    *(int *)(param_1 + 0x74) = iVar3;
                    *(uint *)(param_1 + 0x78) = (uint)(iVar3 != 0);
                    *(undefined1 *)(param_1 + 0x7c) = 1;
                  }
                  iVar3 = param_1 + iVar6 * 0x50;
                  *(undefined4 *)(iVar3 + 0xe0) = local_98;
                  *(undefined4 *)(iVar3 + 0xe4) = uStack_94;
                  *(undefined4 *)(iVar3 + 0xe8) = uStack_90;
                  *(undefined4 *)(iVar3 + 0xec) = uStack_8c;
                  *(undefined4 *)(iVar3 + 0xf0) = uStack_88;
                  *(undefined4 *)(iVar3 + 0xf4) = uStack_84;
                  *(undefined4 *)(iVar3 + 0xf8) = uStack_80;
                  *(uint *)(iVar3 + 0xfc) = local_7c;
                  *(undefined4 *)(iVar3 + 0x100) = local_78;
                  *(undefined4 *)(iVar3 + 0x104) = uStack_74;
                  *(undefined4 *)(iVar3 + 0x108) = uStack_70;
                  *(undefined4 *)(iVar3 + 0x10c) = uStack_6c;
                  local_b4 = 0xe7e3ffff;
                  local_a8[0] = local_60[0];
                  local_b4 = fn_0052c9ec(auStack_50,local_a8,1);
                  if ((local_b4 & 0x80000000) == 0) {
                    cVar1 = '\0';
                    if (local_22 != '\0') {
                      cVar1 = local_24;
                    }
                    if ((local_22 != '\0' && cVar1 != '\0') &&
                       (local_48 == *(int *)(param_1 + 0x88))) {
                      uVar2 = 1;
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    iVar6 = fn_0052cab4(&local_b4);
                    *(undefined4 *)(param_1 + 0x78) = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 0;
                    *(int *)(param_1 + 0x74) = iVar6;
                    *(uint *)(param_1 + 0x78) = (uint)(iVar6 != 0);
                    uVar2 = 0;
                    *(undefined1 *)(param_1 + 0x7c) = 1;
                  }
                  *(undefined1 *)(iVar3 + 0xc0) = uVar2;
                }
                goto LAB_0066f9f0;
              }
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        if ((local_68[0] == '\x03' || local_68[0] == '\x04') &&
           (piVar7 = (int *)(param_1 + 0x340), iVar3 < 8)) {
          local_b4 = 0xe7e3ffff;
          local_b4 = fn_0052c9ec(local_a8,&local_ac,1);
          if ((local_b4 & 0x80000000) == 0) {
            bVar8 = (local_7c >> 0x10 & 0xff) != 0;
            uVar4 = 0;
            if (bVar8) {
              uVar4 = local_7c & 0xff;
            }
            if (((bVar8 && uVar4 != 0) && (local_a0 == *(int *)(param_1 + 0x88))) &&
               (iVar3 = fn_0066f120(param_1,*piVar7,local_60[0]), iVar3 != 0)) {
              *piVar7 = *piVar7 + 1;
            }
          }
          else {
            iVar3 = fn_0052cab4(&local_b4);
            *(undefined4 *)(param_1 + 0x78) = 0;
            *(undefined1 *)(param_1 + 0x7c) = 0;
            *(int *)(param_1 + 0x74) = iVar3;
            uVar5 = 0;
            if (iVar3 != 0) {
LAB_0066f940:
              uVar5 = 1;
            }
LAB_0066f998:
            *(undefined4 *)(param_1 + 0x78) = uVar5;
            *(undefined1 *)(param_1 + 0x7c) = 1;
          }
        }
LAB_0066f9f0:
        iVar3 = fn_0052cc74(local_68,1,0);
      }
      svc_0x19();
      if (*(int *)(param_1 + 0x70) < 0) {
        fn_0015e294();
      }
      local_b0 = fn_0052d004(param_1 + 0x70);
      if ((local_b0 & 0x80000000) != 0) {
        iVar3 = fn_0052cab4(&local_b0);
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(undefined1 *)(param_1 + 0x7c) = 0;
        *(int *)(param_1 + 0x74) = iVar3;
        *(uint *)(param_1 + 0x78) = (uint)(iVar3 != 0);
        *(undefined1 *)(param_1 + 0x7c) = 1;
      }
    }
  }
  return;
}


