#include "006aa348_006b2dec.h"



void fn_006b2dec(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = fn_00235c5c(*(undefined4 *)(*param_1 + 8));
  iVar2 = fn_00235c74(*(undefined4 *)(*param_1 + 8));
  fn_00102908(&local_30,0x20,(char *)&DAT_006b2e64,iVar1 + 1,iVar2 + 1);
  fn_0022f750(&local_30);
  return;
}



undefined4 fn_006b24d0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined1 *)(param_1 + 0x238)) {
  default:
    return 0;
  case 1:
    uVar1 = fn_00230008((char *)&DAT_006b2558);
    return uVar1;
  case 2:
    uVar1 = fn_00230008((char *)&DAT_006b2574);
    return uVar1;
  case 3:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b2590);
    return uVar1;
  case 4:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b25a8);
    return uVar1;
  case 5:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b25c8);
    return uVar1;
  case 6:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b25e8);
    return uVar1;
  case 7:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b2608);
    return uVar1;
  case 8:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b2620);
    return uVar1;
  case 9:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b263c);
    return uVar1;
  case 10:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b2674);
    return uVar1;
  case 0xb:
    uVar1 = fn_006b2354(param_1,(char *)&DAT_006b2690);
    return uVar1;
  }
}



void fn_006ae8b8(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_190 [2];
  uint local_188;
  int local_180;
  undefined4 local_178;
  uint local_174;
  int local_170;
  uint local_16c;
  uint local_168;
  uint local_e0;
  undefined4 local_d8;
  uint local_d0 [2];
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  uint uStack_b8;
  uint local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint local_70 [8];
  uint local_50 [11];
  
  if (param_1[0x1a] != 0) {
    uVar2 = fn_0015fa88(param_1[2]);
    local_d0[0] = fn_0015fa88(param_1[0x16]);
    uVar3 = local_d0[0];
    if (param_1[1] != 0 && uVar2 < local_d0[0]) {
      uVar3 = uVar2;
    }
    local_70[4] = *(undefined4 *)(param_2 + 0x3c);
    local_70[5] = *(undefined4 *)(param_2 + 0x40);
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[6] = *(undefined4 *)(param_2 + 0x44);
    local_50[0] = *(uint *)(param_2 + 0x48);
    local_70[0] = 0;
    local_50[1] = *(undefined4 *)(param_2 + 0x4c);
    if (param_1[1] == 0) {
      local_c4 = 0;
    }
    else {
      local_c4 = uVar2 - (uVar3 & 0xfffffff0);
    }
    iVar4 = 0;
    iVar6 = 0;
    local_70[1] = 0;
    do {
      if (param_1[iVar6 * 5 + 7] != -1) {
        if (*param_1 == 0x1402) {
          if (param_1[iVar6 * 5 + 6] == 2) {
            iVar7 = 6;
          }
          else {
            iVar7 = 10;
          }
        }
        else if (param_1[iVar6 * 5 + 6] == 2) {
          iVar7 = 7;
        }
        else {
          iVar7 = 0xb;
        }
        iVar8 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3;
        uVar2 = (iVar4 % 8) * 4;
        local_70[iVar8 + 2] = local_70[iVar8 + 2] | iVar7 << (uVar2 & 0xff);
        local_50[iVar8] = local_50[iVar8] | local_70[iVar6 + 4] << (uVar2 & 0xff);
        uVar2 = iVar4 << (uVar2 & 0xff);
        iVar4 = iVar4 + 1;
        local_70[iVar8] = uVar2 | local_70[iVar8];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (iVar4 != 0) {
      local_70[1] = local_70[1] | iVar4 << 0x1c | param_1[5] << 0x10;
    }
    iVar7 = 0;
    iVar6 = iVar4;
    do {
      if (param_1[iVar7 * 5 + 7] == -1) {
        local_70[3] = local_70[3] | 1 << (iVar6 + 0x10U & 0xff);
        iVar8 = iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1d);
        iVar9 = iVar6 % 8;
        iVar6 = iVar6 + 1;
        local_50[iVar8 >> 3] = local_50[iVar8 >> 3] | local_70[iVar7 + 4] << (iVar9 * 4 & 0xffU);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    uVar2 = *(uint *)(param_2 + 0x38);
    if (0 < (int)(uVar2 - 3)) {
      if (((uVar2 ^ 0xfffffffd) & 1) != 0) {
        uVar10 = iVar6 + 0x10;
        iVar6 = iVar6 + 1;
        local_70[3] = local_70[3] | 1 << (uVar10 & 0xff);
      }
      for (iVar7 = (int)(uVar2 - 3) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        local_70[3] = local_70[3] | 1 << (iVar6 + 0x10U & 0xff) | 1 << (iVar6 + 0x11U & 0xff);
        iVar6 = iVar6 + 2;
      }
    }
    local_70[3] = local_70[3] | uVar2 * 0x10000000 + 0xf0000000;
    fn_0017821c(local_190,&DAT_007e1788,0xc0);
    local_190[0] = uVar2 - 1 & 0xf | 0xa0000000;
    local_180 = (uVar3 >> 4) << 1;
    local_188 = *(int *)(param_2 + 0x38) - 1U & 0xf;
    local_178 = local_70[2];
    local_174 = local_70[3];
    local_170 = local_c4;
    local_16c = local_70[0];
    local_168 = local_70[1];
    local_e0 = local_50[0];
    local_d8 = local_50[1];
    fn_00734b4c(local_190,0xc0,1);
    iVar6 = 0;
    do {
      if (param_1[iVar6 * 5 + 7] == -1) {
        uVar2 = fn_001b85a0();
        uVar10 = fn_001b85a0();
        uVar5 = fn_001b85a0();
        iVar7 = fn_001b85a0();
        uStack_b8 = iVar7 << 8 | uVar5 >> 0x10;
        local_b4 = uVar5 << 0x10 | uVar10 >> 8;
        local_bc = 0x803f0232;
        local_b0 = uVar2 | uVar10 << 0x18;
        uStack_ac = 0;
        local_c0 = iVar4;
        fn_00734b4c(&local_c0,0x18,1);
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    iVar4 = 0;
    if (0 < param_1[0x1a]) {
      iVar6 = local_d0[0] - (uVar3 & 0xfffffff0);
      do {
        iVar7 = param_1[0x19];
        sVar1 = (short)param_1[iVar4 * 2 + 0x1b];
        if (sVar1 == 5) {
          iVar8 = 1;
        }
        else if (sVar1 == 6) {
          iVar8 = 2;
        }
        else {
          iVar8 = 3;
        }
        fn_0017821c(local_d0,&DAT_007e1728,0x60);
        if (sVar1 == 4) {
          local_d0[0] = 0x100;
        }
        else {
          local_d0[0] = 0;
        }
        local_c0 = iVar8 << 8;
        if ((short)param_1[iVar4 * 2 + 0x1b] == 4) {
          local_c8 = 0x100;
        }
        else {
          local_c8 = 0;
        }
        if (iVar7 == 0x1403) {
          local_b0 = 0x80000000;
        }
        else {
          local_b0 = 0;
        }
        local_b0 = (uint)*(ushort *)(param_1 + iVar4 * 2 + 0x1c) + iVar6 | local_b0;
        local_a8 = (uint)*(ushort *)((int)param_1 + iVar4 * 8 + 0x6e);
        fn_00734b4c(local_d0,0x60,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[0x1a]);
    }
  }
  return;
}



void fn_006adbb4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006adb80(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_006ac270(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_003035b0(param_2,&DAT_0086160c);
  if (((iVar1 == 0) || (iVar1 = fn_003035b0(param_2,&DAT_008615f4), iVar1 == 0)) ||
     (iVar1 = fn_003035b0(param_2,&DAT_008615fc), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_006abff4(int param_1)

{
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  fn_006c2968();
  return;
}



void fn_006abd24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_006bb23c(*(undefined4 *)(param_1 + 0xe80));
  iVar2 = fn_006abf40(param_1,uVar1);
  if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_006aae9c(void)

{
  fn_00154ac8(0x21);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006aa348(void)

{
  fn_00154ac8(0x21);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


