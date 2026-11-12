#include "0051c178_00523448.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_00523448(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 4);
  if (uVar2 != 0xaa) {
    if (uVar2 < 0xaa) {
      if (uVar2 != 0x1a) {
        if (uVar2 < 0x1a) {
          if (4 < uVar2 - 0x15) goto LAB_00523474;
        }
        else if (uVar2 != 0x23) {
          if (uVar2 < 0x23) {
            if (uVar2 != 0x1b && uVar2 != 0x1c) {
LAB_00523474:
              uVar1 = 0x1f;
              goto LAB_00523508;
            }
          }
          else if (uVar2 != 0x50 && uVar2 != 0x7d) goto LAB_00523474;
        }
      }
    }
    else if (uVar2 != 0xe1) {
      if (uVar2 < 0xe1) {
        if (uVar2 != 0xde) {
          if (uVar2 < 0xde) {
            if (uVar2 != 0xd7 && uVar2 != 0xdd) goto LAB_00523474;
          }
          else if (uVar2 != 0xdf && uVar2 != 0xe0) goto LAB_00523474;
        }
      }
      else if ((uVar2 != 0xe2 && uVar2 != 0xe3) && (uVar2 != 0xe4 && uVar2 != 0xff))
      goto LAB_00523474;
    }
  }
  if (*(byte *)(param_1 + 6) < 4) {
    if ((*(byte *)(param_1 + 5) == 0) || (1 < *(byte *)(param_1 + 5))) {
      uVar1 = 0x26;
    }
    else {
      if (*(uint *)(param_1 + 8) < 0x10000) {
        return;
      }
      uVar1 = 0x20;
    }
  }
  else {
    uVar1 = 0x28;
  }
LAB_00523508:
  fn_005236dc(uVar1);
  return;
}



void fn_00522ff8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (DAT_008eef94 == '\0') {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = &DAT_008eefa4;
  }
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    fn_005236dc(0x2b);
  }
  return;
}



void fn_00522550(undefined4 *param_1)

{
  *param_1 = &DAT_0085744c;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xa010;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



int fn_0052023c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [2];
  
  fn_00170704(&DAT_008ec46c);
  if (DAT_008c0382 != '\0') {
    fn_001707b4(&DAT_008ec46c);
    return -0x1f9eec07;
  }
  fn_001707d4(&DAT_008ec538,param_2,param_3,0,3);
  iVar1 = fn_0013db70();
  iVar4 = -0x379eec0d;
  if (-1 < iVar1) {
    iVar1 = fn_0051e5e4(&DAT_008c038c,(char *)&DAT_007e434b);
    if (-1 < iVar1) {
      iVar1 = fn_0051e5e4(&DAT_008c0388,(char *)&DAT_007e434b);
      if (-1 < iVar1) {
        local_6c = 0;
        fn_001237bc();
        if (param_4 == (undefined4 *)0x0) {
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          fn_00453c5c(&local_40);
          local_60 = local_40;
          uStack_5c = local_3c;
          uStack_58 = local_38;
          uStack_54 = local_34;
          uStack_50 = local_30;
          uStack_4c = local_2c;
        }
        else {
          local_60 = *param_4;
          uStack_5c = param_4[1];
          uStack_58 = param_4[2];
          uStack_54 = param_4[3];
          uStack_50 = param_4[4];
          uStack_4c = param_4[5];
        }
        local_68 = fn_00453e0c();
        fn_0013c674();
        local_28[0] = DAT_008c038c;
        iVar4 = fn_00520984(local_28,&local_6c,DAT_008ec54c,param_3,&local_68,0x400);
        if (-1 < iVar4) {
          *param_1 = local_6c;
          DAT_008c0382 = '\x01';
          DAT_008c0384 = 0;
          iVar1 = 8;
          puVar3 = (undefined1 *)0x8ec474;
          puVar2 = (undefined4 *)0x8ec470;
          DAT_008c0390 = param_1;
          do {
            puVar3[0xc] = 0;
            puVar2[3] = 0;
            puVar3 = puVar3 + 0x18;
            *puVar3 = 0;
            iVar1 = iVar1 + -1;
            puVar2 = puVar2 + 6;
            *puVar2 = 0;
          } while (iVar1 != 0);
          goto LAB_005203cc;
        }
        if (DAT_008c0388 != 0) {
          svc_0x23();
          DAT_008c0388 = 0;
        }
      }
      if (DAT_008c038c != 0) {
        svc_0x23();
        DAT_008c038c = 0;
      }
    }
    fn_0015e228(&DAT_008ec538);
    fn_00171598();
  }
LAB_005203cc:
  fn_001707b4(&DAT_008ec46c);
  return iVar4;
}



void fn_0051fce4(void)

{
  fn_0051fd04();
  return;
}



void fn_0051f438(void)

{
  fn_0051f2f8();
  return;
}



void fn_0051f2c4(undefined4 param_1)

{
  undefined1 auStack_18 [24];
  
  if (DAT_008c0382 == '\0') {
    return;
  }
  fn_00520478(param_1,auStack_18);
  return;
}



void fn_0051efd8(void)

{
  fn_0051ee60();
  return;
}



void fn_0051da64(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_30;
  int local_2c;
  
  iVar1 = DAT_008c0678;
  iVar4 = DAT_008bf4cc;
  if ((DAT_008c0678 - 0x100000U < 0x3ff00000) && (DAT_008bf4cc - 0x100000U < 0x3ff00000)) {
    uVar11 = 0xffff;
    uVar8 = 0;
    local_30 = 0;
    local_2c = 0;
    uVar9 = uVar11;
    for (piVar7 = (int *)(DAT_008bf4cc + 0x3c); uVar6 = DAT_008c06a0,
        piVar7 != (int *)(iVar4 + *(int *)(iVar4 + 0x38) * 4 + 0x3c); piVar7 = piVar7 + 1) {
      if (*(char *)(*piVar7 + 0x20) == '\x05') {
        iVar10 = *piVar7 + 4;
        iVar2 = fn_006d6e30(iVar10);
        if ((iVar2 != 0) && (uVar3 = fn_0050fca4(iVar1,iVar10), uVar3 != 0)) {
          if (uVar3 < uVar9) {
            local_30 = *piVar7;
            uVar9 = uVar3;
          }
          if (uVar8 < uVar3) {
            local_2c = *piVar7;
            uVar8 = uVar3;
          }
        }
      }
    }
    iVar4 = fn_006db878(DAT_008c06a0,local_30);
    if ((uVar9 < 0xffff) && (iVar4 != 0)) {
      uVar5 = fn_004ed478();
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (param_2 == 0) {
      if (0xfffe < uVar9) {
        uVar9 = uVar11;
      }
      DAT_008ee06a = (undefined2)uVar9;
      DAT_008ee06c = uVar5;
    }
    else {
      if (0xfffe < uVar9) {
        uVar9 = uVar11;
      }
      DAT_008ed94c = (undefined2)uVar9;
      DAT_008ed950 = uVar5;
    }
    iVar4 = fn_006db878(uVar6,local_2c);
    if (uVar8 == 0 || iVar4 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = fn_004ed478();
    }
    if (param_2 == 0) {
      if (uVar8 == 0) {
        uVar8 = uVar11;
      }
      DAT_008ee070 = (short)uVar8;
      DAT_008ee074 = uVar6;
      return;
    }
    if (uVar8 == 0) {
      uVar8 = uVar11;
    }
    DAT_008ed954 = (undefined2)uVar8;
    DAT_008ed958 = uVar6;
  }
  return;
}



undefined4 fn_0051c178(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined1 auStack_68 [88];
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[0x14] = (int)param_2;
  (**(code **)*param_2)(param_2,*(code **)*param_2,0x80000000,0);
  fn_004ed0e4(param_1[0x15],0);
  cVar1 = *(char *)(param_1[0x14] + 0x20);
  if ((cVar1 == '\x03') && (param_4 == 0)) {
    uVar8 = *(undefined4 *)(param_1[0x14] + 0x2c);
    fn_00124e48(auStack_68);
    iVar3 = fn_006db908(DAT_008c06a0,param_1[0x14],auStack_68);
    if ((-1 < iVar3) &&
       (iVar3 = fn_0050fb58(uVar8,param_1[0x15],param_1[0x14],auStack_68,1,param_3), -1 < iVar3)) {
      fn_004efcf4(uVar8,0);
    }
    fn_0051811c(auStack_68);
  }
  else if (cVar1 == '\x03' || param_4 == 0) {
    return 0;
  }
  param_1[0x12] = param_3;
  *(undefined1 *)(param_1[0x14] + 0x20) = 4;
  iVar3 = DAT_008bf49c;
  uVar7 = param_1[0x12];
  puVar9 = (uint *)(DAT_008bf49c + 0x30);
  puVar4 = (uint *)fn_004f0ce8();
  lVar2 = (ulonglong)uVar7 * (ulonglong)*puVar4;
  uVar5 = (uint)lVar2;
  uVar6 = *puVar9;
  param_1[0x11] =
       *puVar4 * ((int)uVar7 >> 0x1f) + puVar4[1] * uVar7 + (int)((ulonglong)lVar2 >> 0x20) +
       *(int *)(iVar3 + 0x34) + (uint)CARRY4(uVar5,uVar6);
  param_1[0x10] = uVar5 + uVar6;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  (**(code **)(*param_1 + 8))(param_1,1);
  param_1[9] = (int)&LAB_0051c0b0;
  param_1[10] = 0;
  param_1[0xb] = (int)"ProcessConnectionRequestJob::ConnectToRequesterStation";
  return 1;
}


