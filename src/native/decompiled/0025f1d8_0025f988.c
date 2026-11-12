#include "0025f1d8_0025f988.h"



int fn_0025f988(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0xc);
  while( true ) {
    if (piVar2 == (int *)(param_1 + 0xc)) {
      return DAT_00898200;
    }
    iVar1 = fn_00188184(param_1,piVar2 + -4,param_2,0);
    if (iVar1 != 0) break;
    piVar2 = (int *)*piVar2;
  }
  return iVar1;
}



undefined4 fn_0025f930(int param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 == 1 || param_1 == 2) || (param_1 == 3 || param_1 == 4)) ||
      (param_1 == 5 || param_1 == 6)) || ((param_1 == 7 || param_1 == 8 || (param_1 == 0x175)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0025f3a0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_00363130();
}



void fn_0025f354(int param_1,int param_2)

{
  undefined4 uVar1;
  
  DAT_00896384 = param_2;
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    return;
  }
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0025f3f4(param_1,uVar1);
  return;
}



void fn_0025f3f4(uint param_1,int param_2)

{
  int iVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_6f0;
  uint local_6ec [10];
  undefined2 local_6c4;
  undefined2 local_6c2;
  undefined2 local_6c0;
  undefined2 local_6be;
  undefined2 local_6bc;
  undefined2 local_6ba;
  undefined1 local_698;
  undefined1 local_697;
  byte local_5d0;
  short local_5cc [176];
  undefined1 auStack_46c [288];
  undefined1 auStack_34c [112];
  undefined1 local_2dc;
  undefined1 auStack_2d8 [288];
  undefined1 auStack_1b8 [288];
  int local_98;
  undefined1 auStack_94 [56];
  short local_5c [14];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar5 = param_1;
  if (param_2 != 0) {
    uVar5 = (uint)*(ushort *)(param_2 + 0x1c);
  }
  if (param_2 != 0 && uVar5 != 0) {
    local_98 = param_2;
    uVar4 = fn_006bfda8(&local_98);
    *(undefined2 *)(param_1 + 0x1c) = uVar4;
    uVar3 = fn_006bfe90(&local_98);
    *(undefined1 *)(param_1 + 0x1e) = uVar3;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    iVar6 = fn_00100b58(param_2 + 4);
    if (iVar6 != 0) {
      fn_00231128(&local_40,0xc,param_2,0);
    }
    fn_0042e9d4(param_1,&local_40);
    uVar3 = fn_006c0108(&local_98);
    *(undefined1 *)(param_1 + 0x24) = uVar3;
    uVar3 = fn_006bfdec(&local_98);
    *(undefined1 *)(param_1 + 0x25) = uVar3;
    uVar3 = fn_006bf1d4(&local_98);
    *(undefined1 *)(param_1 + 0x26) = uVar3;
    uVar3 = fn_006bf2b4(&local_98);
    *(undefined1 *)(param_1 + 0x27) = uVar3;
    uVar3 = fn_006bf184(&local_98);
    *(undefined1 *)(param_1 + 0x28) = uVar3;
    uVar3 = fn_006c0334(&local_98);
    *(undefined1 *)(param_1 + 0x45b) = uVar3;
    uVar4 = fn_006bf5bc(&local_98);
    *(undefined2 *)(param_1 + 0x2a) = uVar4;
    uVar4 = fn_006c0028(&local_98);
    *(undefined2 *)(param_1 + 0x2c) = uVar4;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    uVar4 = fn_006bf5c8(&local_98);
    *(undefined2 *)(param_1 + 0x30) = uVar4;
    uVar4 = fn_006c0114(&local_98);
    *(undefined2 *)(param_1 + 0x32) = uVar4;
    *(undefined1 *)(param_1 + 0x34) = 0;
    uVar4 = fn_006c09b4(&local_98);
    *(undefined2 *)(param_1 + 0x36) = uVar4;
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = fn_006bed98(&local_98);
    *(undefined2 *)(param_1 + 0x3a) = uVar4;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    uVar4 = fn_006c01f4(&local_98);
    *(undefined2 *)(param_1 + 0x3e) = uVar4;
    *(undefined1 *)(param_1 + 0x40) = 0;
    uVar4 = fn_006bff0c(&local_98);
    *(undefined2 *)(param_1 + 0x42) = uVar4;
    *(undefined1 *)(param_1 + 0x44) = 0;
    uVar7 = fn_006bf5d4(&local_98);
    *(undefined4 *)(param_1 + 0x48) = uVar7;
    uVar7 = fn_006bf0e4(&local_98);
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    iVar6 = fn_006c02d4(&local_98,local_5c,7);
    uVar5 = 0;
    do {
      if ((int)uVar5 < iVar6) {
        fn_0042ec18(param_1,uVar5,(int)local_5c[uVar5 * 2],local_5c[uVar5 * 2 + 1]);
      }
      else {
        fn_0042ec18(param_1,uVar5,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 7);
    iVar6 = 0;
    do {
      iVar11 = param_2 + iVar6 * 0x20;
      local_6f0 = (*(byte *)(iVar11 + 0xaf) & 3) >> 1;
      fn_0042ecb4(param_1,iVar6,(int)*(short *)(iVar11 + 0x90),iVar11 + 0x92);
      local_6f0 = (uint)*(short *)(iVar11 + 0xac);
      local_6ec[0] = (*(byte *)(iVar11 + 0xaf) & 0xf) >> 3;
      fn_0042e954(param_1,iVar6,(int)*(short *)(iVar11 + 0xaa),(*(byte *)(iVar11 + 0xaf) & 7) >> 2)
      ;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    fn_00301f50(auStack_2d8,0x98);
    fn_00301f50(auStack_1b8,0x98);
    iVar6 = 1;
    local_6f0 = 1;
    local_6ec[0] = 1;
    local_6ec[1] = 1;
    local_6ec[2] = 1;
    fn_006bf5ec(&local_98,auStack_2d8,0x4c,1);
    local_6f0 = 1;
    local_6ec[0] = 1;
    local_6ec[1] = 1;
    local_6ec[2] = 0;
    fn_006bf5ec(&local_98,auStack_1b8,0x4c,1);
    fn_0042e9bc(param_1,auStack_2d8);
    fn_0042e938(param_1,auStack_1b8);
    do {
      uVar3 = fn_006bf24c(&local_98,iVar6);
      auStack_94[iVar6] = uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1a);
    fn_0042ec28(param_1,auStack_94);
    puVar8 = (undefined4 *)fn_006c0010(&local_98);
    *(undefined4 *)(param_1 + 0xac) = *puVar8;
    *(undefined4 *)(param_1 + 0xb0) = puVar8[1];
    *(undefined4 *)(param_1 + 0xb4) = puVar8[2];
    *(undefined4 *)(param_1 + 0xb8) = puVar8[3];
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(puVar8 + 4);
    puVar8 = (undefined4 *)fn_006c001c(&local_98);
    uVar7 = puVar8[1];
    uVar9 = puVar8[2];
    uVar10 = puVar8[3];
    *(undefined4 *)(param_1 + 0x2d4) = *puVar8;
    *(undefined4 *)(param_1 + 0x2d8) = uVar7;
    *(undefined4 *)(param_1 + 0x2dc) = uVar9;
    *(undefined4 *)(param_1 + 0x2e0) = uVar10;
    iVar6 = fn_006bf1d4(&local_98);
    if (((iVar6 == 100) && (iVar6 = fn_00154ac8(0x19), iVar6 == 0)) ||
       ((iVar6 = fn_006bf184(&local_98), iVar6 != 0 && (iVar6 = fn_00154ac8(0x463), iVar6 == 0))))
    {
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x338) = 1;
    }
    else {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x338) = 0;
    }
    *(undefined1 *)(param_1 + 0x330) = uVar3;
    *(undefined1 *)(param_1 + 0x45a) = 0;
    iVar6 = DAT_00896380;
    if (DAT_00896380 == 0) {
      *(undefined4 *)(param_1 + 0x460) = 0;
    }
    else {
      *(int *)(param_1 + 0x460) = DAT_00896380;
      uVar7 = DAT_00896384;
      *(undefined4 *)(param_1 + 0x45c) = DAT_00896384;
      fn_00358b34(uVar7,iVar6,&local_6f0);
      *(undefined2 *)(param_1 + 0x1c) = (undefined2)local_6f0;
      *(undefined1 *)(param_1 + 0x1e) = local_697;
      fn_0042e9d4(param_1,local_6ec);
      *(undefined1 *)(param_1 + 0x24) = local_698;
      *(undefined1 *)(param_1 + 0x45b) = local_2dc;
      *(undefined2 *)(param_1 + 0x2a) = local_6c4;
      *(undefined2 *)(param_1 + 0x2c) = local_6c4;
      *(undefined2 *)(param_1 + 0x30) = local_6c2;
      *(undefined2 *)(param_1 + 0x32) = local_6c2;
      *(undefined2 *)(param_1 + 0x36) = local_6c0;
      *(undefined2 *)(param_1 + 0x3a) = local_6be;
      *(undefined2 *)(param_1 + 0x3e) = local_6bc;
      *(undefined2 *)(param_1 + 0x42) = local_6ba;
      fn_0042e9bc(param_1,auStack_46c);
      fn_0042e938(param_1,auStack_46c);
      fn_0042ec28(param_1,auStack_34c);
      fn_0042ec74(param_1);
      iVar11 = 0;
      iVar6 = 0;
      if (local_5d0 != 0) {
        do {
          sVar2 = local_5cc[iVar6];
          if ((((sVar2 != 1 && sVar2 != 2) && (sVar2 != 3 && sVar2 != 4)) &&
              (sVar2 != 5 && sVar2 != 6)) && ((sVar2 != 7 && sVar2 != 8) && sVar2 != 0x175)) {
            iVar1 = iVar11 * 2;
            iVar11 = iVar11 + 1;
            *(short *)(param_1 + iVar1 + 0x468) = sVar2;
            *(char *)(param_1 + 0x464) = (char)iVar11;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)local_5d0);
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1c) = 0;
  }
  return;
}



void fn_0025f31c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001caa80();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0081dce8;
  return;
}



void fn_0025f2d0(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  
  fn_001ca2b8();
  iVar1 = *(int *)(param_1 + 0xe4);
  if (0 < iVar1) {
    if (iVar1 <= *(int *)(param_1 + 0xcc) * *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x30)) {
      fn_00300f74(iVar1 + -1);
      *(undefined4 *)(param_1 + 0x30) = extraout_r1;
      fn_001c9ba0(param_1);
      return;
    }
  }
  return;
}



void fn_0025f1d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  iVar6 = *(int *)(param_1 + 200);
  iVar7 = *(int *)(param_1 + 0xe4);
  if (iVar6 < 2) {
    if (iVar7 < 1) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    else {
      iVar1 = fn_00300f74(iVar7,*(undefined4 *)(param_1 + 0x40));
    }
    if (iVar1 < 2) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x30);
  iVar1 = iVar3;
  if ((0 < iVar7) && (fn_00300f74(iVar7), iVar1 = extraout_r1, extraout_r1 == 0)) {
    iVar1 = iVar3;
  }
  iVar2 = *(int *)(param_1 + 0xcc);
  iVar4 = iVar6 + -1;
  bVar9 = SBORROW4(iVar4,iVar2);
  iVar3 = iVar4 - iVar2;
  bVar8 = iVar4 == iVar2;
  if (iVar2 < iVar4) {
    bVar9 = SBORROW4(iVar6,1);
    iVar3 = iVar6 + -1;
    bVar8 = iVar6 == 1;
  }
  if (bVar8 || iVar3 < 0 != bVar9) {
    if (iVar5 < iVar1 + -1) {
      if (1 < iVar6) {
        iVar5 = iVar1 + -1;
      }
    }
    else if (1 < iVar6) {
      *(undefined1 *)(param_1 + 0x4a) = 1;
      if (*(char *)(param_1 + 0x45) == '\0') {
        iVar5 = iVar1 + -1;
      }
      else {
        *(undefined4 *)(param_1 + 0xcc) = 0;
        iVar5 = 0;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    *(int *)(param_1 + 0xcc) = iVar2 + 1;
    if (iVar7 <= (iVar2 + 1) * *(int *)(param_1 + 0x40) + iVar5) {
      iVar5 = iVar1 + -1;
    }
  }
  *(int *)(param_1 + 0x30) = iVar5;
  fn_001c9ba0(param_1);
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}


