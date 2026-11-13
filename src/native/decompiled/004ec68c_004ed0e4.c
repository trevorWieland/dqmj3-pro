#include "004ec68c_004ed0e4.h"



void fn_004ed0e4(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_c;
  
  local_c = param_2;
  if (param_2 < 0) {
    fn_004ed4f8(2,0,&local_c,param_4,param_1);
  }
  *(int *)(param_1 + 4) = local_c;
  *param_1 = 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(local_c,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}



void fn_004ed068(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0xd9214824;
  *param_1 = 4;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004ed08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(0xd9214824,*(undefined4 *)(param_1 + 0xc));
  return;
}



undefined4 fn_004ed050(undefined1 *param_1)

{
  *param_1 = 1;
  param_1[0x10] = 0;
  return 1;
}



void fn_004ecffc(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_008c0628;
  if (DAT_008c0628 != (int *)0x0) {
    iVar2 = *DAT_008c0628;
    if (iVar2 != 0) {
      fn_00656b0c(iVar2);
      fn_00656b7c(iVar2);
    }
    fn_004ecfd0(piVar1);
    DAT_008c0628 = (int *)0x0;
  }
  return;
}



void fn_004ecfd0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_00656b7c();
  return;
}



void fn_004ecfc0(void)

{
  int iVar1;
  
  iVar1 = fn_004f3a74();
  if (iVar1 == 0) {
    return;
  }
  fn_00656b7c();
  return;
}



void fn_004ecfb0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_00656b7c();
  return;
}



void fn_004eceec(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1[5];
  (**(code **)(*param_1 + 4))(param_1,&DAT_008c35f4,1);
  uVar2 = param_1[5] & 0x3f;
  uVar3 = 0x40 - uVar2;
  if (uVar3 < 8) {
    fn_00158f6c((int)param_1 + uVar2 + 0x18);
    (**(code **)(*param_1 + 0x14))(param_1);
    uVar2 = 0;
    uVar3 = 0x40;
  }
  else if (uVar3 < 9) goto LAB_004ecf70;
  fn_00158f6c((int)param_1 + uVar2 + 0x18,uVar3 - 8);
LAB_004ecf70:
  param_1[0x14] = iVar1 << 3;
  param_1[0x15] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  *param_2 = param_1[1];
  param_2[1] = param_1[2];
  param_2[2] = param_1[3];
  param_2[3] = param_1[4];
  return;
}



void fn_004ece20(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[5] & 0x3f;
  uVar2 = 0x40 - uVar1;
  param_1[5] = param_1[5] + param_3;
  if (param_3 < uVar2) {
    if (param_3 != 0) {
      fn_001694e4((int)param_1 + uVar1 + 0x18,param_2);
      return;
    }
  }
  else {
    fn_001694e4((int)param_1 + uVar1 + 0x18,param_2,uVar2);
    (**(code **)(*param_1 + 0x14))(param_1);
    param_2 = uVar2 + param_2;
    uVar1 = param_3 - uVar2 >> 6;
    if (uVar1 != 0) {
      do {
        fn_001694e4(param_1 + 6,param_2,0x40);
        param_2 = param_2 + 0x40;
        (**(code **)(*param_1 + 0x14))(param_1);
        uVar1 = uVar1 - 1;
      } while (0 < (int)uVar1);
    }
    if ((param_3 - uVar2 & 0x3f) != 0) {
      fn_001694e4(param_1 + 6,param_2);
      return;
    }
  }
  return;
}



void fn_004ecb08(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  piVar6 = (int *)(param_1 + 0x18);
  iVar10 = 0;
  piVar1 = &DAT_0080d3cc;
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = *(uint *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 0x10);
  piVar9 = piVar6;
  uVar11 = *(uint *)(param_1 + 0xc);
  do {
    uVar4 = uVar4 + (uVar5 & uVar11 | uVar7 & ~uVar5) + *piVar9 + *piVar1;
    uVar4 = uVar5 + (uVar4 >> 0x19 | uVar4 * 0x80);
    piVar2 = piVar1 + 3;
    piVar3 = piVar1 + 2;
    piVar8 = piVar9 + 3;
    iVar10 = iVar10 + 1;
    uVar7 = uVar7 + (uVar4 & uVar5 | uVar11 & ~uVar4) + piVar9[1] + piVar1[1];
    piVar1 = piVar1 + 4;
    uVar7 = uVar4 + (uVar7 >> 0x14 | uVar7 * 0x1000);
    uVar11 = uVar11 + (uVar7 & uVar4 | uVar5 & ~uVar7) + piVar9[2] + *piVar3;
    piVar9 = piVar9 + 4;
    uVar11 = uVar7 + (uVar11 >> 0xf | uVar11 * 0x20000);
    uVar5 = uVar5 + (uVar11 & uVar7 | uVar4 & ~uVar11) + *piVar8 + *piVar2;
    uVar5 = uVar11 + (uVar5 >> 10 | uVar5 * 0x400000);
  } while (iVar10 < 4);
  piVar9 = &DAT_0080d4cc;
  iVar10 = 0;
  do {
    piVar2 = piVar9 + 2;
    uVar4 = uVar4 + (uVar5 & uVar7 | uVar11 & ~uVar7) + piVar6[*piVar9] + *piVar1;
    uVar4 = uVar5 + (uVar4 >> 0x1b | uVar4 * 0x20);
    piVar8 = piVar9 + 3;
    uVar7 = uVar7 + (uVar4 & uVar11 | uVar5 & ~uVar11) + piVar6[piVar9[1]] + piVar1[1];
    uVar7 = uVar4 + (uVar7 >> 0x17 | uVar7 * 0x200);
    piVar3 = piVar1 + 3;
    piVar9 = piVar9 + 4;
    uVar11 = uVar11 + (uVar7 & uVar5 | uVar4 & ~uVar5) + piVar6[*piVar2] + piVar1[2];
    uVar11 = uVar7 + (uVar11 >> 0x12 | uVar11 * 0x4000);
    piVar1 = piVar1 + 4;
    uVar5 = uVar5 + (uVar11 & uVar4 | uVar7 & ~uVar4) + piVar6[*piVar8] + *piVar3;
    iVar10 = iVar10 + 1;
    uVar5 = uVar11 + (uVar5 >> 0xc | uVar5 * 0x100000);
  } while (iVar10 < 4);
  iVar10 = 0;
  do {
    piVar2 = piVar9 + 2;
    uVar4 = uVar4 + (uVar5 ^ uVar11 ^ uVar7) + piVar6[*piVar9] + *piVar1;
    uVar4 = uVar5 + (uVar4 >> 0x1c | uVar4 * 0x10);
    piVar8 = piVar9 + 3;
    uVar7 = uVar7 + (uVar4 ^ uVar5 ^ uVar11) + piVar6[piVar9[1]] + piVar1[1];
    piVar3 = piVar1 + 3;
    uVar7 = uVar4 + (uVar7 >> 0x15 | uVar7 * 0x800);
    piVar9 = piVar9 + 4;
    uVar11 = uVar11 + (uVar7 ^ uVar4 ^ uVar5) + piVar6[*piVar2] + piVar1[2];
    piVar1 = piVar1 + 4;
    uVar11 = uVar7 + (uVar11 >> 0x10 | uVar11 * 0x10000);
    uVar5 = uVar5 + (uVar11 ^ uVar7 ^ uVar4) + piVar6[*piVar8] + *piVar3;
    iVar10 = iVar10 + 1;
    uVar5 = uVar11 + (uVar5 >> 9 | uVar5 * 0x800000);
  } while (iVar10 < 4);
  iVar10 = 0;
  do {
    piVar2 = piVar9 + 2;
    uVar4 = *piVar1 + piVar6[*piVar9] + ((uVar5 | ~uVar7) ^ uVar11) + uVar4;
    uVar4 = (uVar4 >> 0x1a | uVar4 * 0x40) + uVar5;
    piVar8 = piVar9 + 3;
    uVar7 = uVar7 + ((uVar4 | ~uVar11) ^ uVar5) + piVar6[piVar9[1]] + piVar1[1];
    uVar7 = uVar4 + (uVar7 >> 0x16 | uVar7 * 0x400);
    piVar3 = piVar1 + 3;
    piVar9 = piVar9 + 4;
    uVar11 = piVar1[2] + piVar6[*piVar2] + uVar11 + ((uVar7 | ~uVar5) ^ uVar4);
    uVar11 = (uVar11 >> 0x11 | uVar11 * 0x8000) + uVar7;
    piVar1 = piVar1 + 4;
    uVar5 = uVar5 + ((~uVar4 | uVar11) ^ uVar7) + piVar6[*piVar8] + *piVar3;
    iVar10 = iVar10 + 1;
    uVar5 = uVar11 + (uVar5 >> 0xb | uVar5 * 0x200000);
  } while (iVar10 < 4);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + uVar7;
  *(uint *)(param_1 + 4) = uVar4 + *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 8) = uVar5 + *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar11 + *(uint *)(param_1 + 0xc);
  return;
}



void fn_004ecad8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



longlong fn_004ec68c(uint param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint extraout_r1;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *local_40;
  char *local_3c;
  
  uVar6 = DAT_008eda32;
  uVar5 = DAT_008eda31;
  uVar4 = DAT_008eda30;
  uVar3 = DAT_008ed8fd;
  uVar2 = DAT_008ed8fc;
  uVar1 = DAT_008ed8f0;
  uVar8 = param_1 - 0x100000;
  if ((uVar8 < 0x3ff00000) && (param_2 != 0)) {
    if ((param_1 & 3) == 0) {
      uVar8 = (uint)DAT_008bf488;
      if (uVar8 != 0) {
        if (DAT_008c0630 != 0) {
          uVar8 = 8;
        }
        return CONCAT44(uVar8,&DAT_e0a14821);
      }
      if (DAT_008bf48a == '\0') {
        uVar9 = DAT_008ed8f4;
        uVar10 = DAT_008ed8f8;
        uVar11 = DAT_008ed8ec;
        fn_004ef86c(&DAT_008ed8c4);
        fn_004efb04(&DAT_008edd78);
        DAT_008ed8ec = uVar11;
        DAT_008ed8f0 = uVar1;
        DAT_008ed8f4 = uVar9;
        DAT_008ed8f8 = uVar10;
        DAT_008ed8fc = uVar2;
        DAT_008ed8fd = uVar3;
        DAT_008eda30 = uVar4;
        DAT_008eda31 = uVar5;
        DAT_008eda32 = uVar6;
      }
      else {
        fn_004ef86c(&DAT_008ed8c4);
        fn_004efb04(&DAT_008edd78);
        DAT_008bf48a = '\0';
      }
      fn_004ed180(param_1,param_2);
      local_40 = &DAT_00859700;
      local_3c = "pia common heap";
      DAT_008ed8e4 = param_2;
      fn_004ed230(2,0,&local_40);
      DAT_008bf48c = fn_004effdc(&DAT_008e96b8);
      DAT_008c0630 = DAT_008bf48c;
      if (((DAT_008bf494 & 1) == 0) && (iVar7 = fn_00303afc(&DAT_008bf494), iVar7 != 0)) {
        DAT_008bf498 = &DAT_007deb64;
      }
      fn_0065673c(&DAT_008bf498);
      DAT_008bf488 = 1;
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar8 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar8 = 8;
  }
  return CONCAT44(uVar8,0xe0e14826);
}


