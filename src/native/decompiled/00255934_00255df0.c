#include "00255934_00255df0.h"



void fn_00255df0(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 auStack_30 [8];
  int local_28;
  
  local_28 = param_1;
  uVar3 = fn_001287b4();
  local_38 = fn_0011c184(L"rom:/data/Community/CommunityPrize.nut",uVar3,0x80,5);
  if ((local_38 == 0) || (iVar4 = fn_00145ac0(), iVar4 == 0)) {
    fn_0012d73c(local_38);
    return;
  }
  fn_00128f40(auStack_30);
  uVar3 = fn_0012a26c(local_38);
  uVar5 = fn_00145ac0(local_38);
  fn_00128ee0(auStack_30,uVar5,uVar3);
  uVar11 = 0;
  do {
    uVar3 = (&DAT_007d5d20)[uVar11 * 3];
    iVar4 = local_28 + (char)(&DAT_007d5d1c)[uVar11 * 0xc] * 0xc;
    iVar6 = fn_00128e54(auStack_30,uVar3);
    iVar10 = 0;
    if (0 < iVar6 / 3) {
      do {
        local_3c = 0;
        iVar1 = iVar10 * 3;
        local_40 = 0;
        local_40 = fn_00128e7c(auStack_30,uVar3,iVar1);
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar1 + 1);
        local_3c = CONCAT22(((unsigned int)(local_3c) >> 16) & 0xffff,uVar2);
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar1 + 2);
        local_3c = CONCAT22(uVar2,(undefined2)local_3c);
        puVar7 = *(undefined4 **)(iVar4 + 8);
        if (puVar7 == *(undefined4 **)(iVar4 + 0xc)) {
          fn_0078bbf0(iVar4 + 4,puVar7,&local_40);
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar7 + 2;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = local_40;
            puVar7[1] = local_3c;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6 / 3);
    }
    uVar3 = (&DAT_007d5d24)[uVar11 * 3];
    iVar4 = local_28 + (char)(&DAT_007d5d1c)[uVar11 * 0xc] * 0x1c;
    puVar7 = (undefined4 *)(iVar4 + 0x34);
    iVar6 = fn_00128e54(auStack_30,uVar3);
    if (iVar6 == 0xc) {
      uVar5 = fn_00128e7c(auStack_30,uVar3,0);
      *puVar7 = uVar5;
      uVar5 = fn_00128e7c(auStack_30,uVar3,1);
      iVar6 = 2;
      *(undefined4 *)(iVar4 + 0x38) = uVar5;
      uVar8 = 0;
      do {
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar6);
        *(undefined2 *)(puVar7 + uVar8 + 2) = uVar2;
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar6 + 1);
        uVar9 = uVar8 + 1;
        iVar6 = iVar6 + 2;
        *(undefined2 *)((int)puVar7 + uVar8 * 4 + 10) = uVar2;
        uVar8 = uVar9;
      } while (uVar9 < 5);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  fn_0012d73c(local_38);
  fn_00128fc4(auStack_30);
  return;
}



void fn_00255dd8(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 auStack_30 [8];
  int iStack_28;
  
  fn_00255be0();
  iStack_28 = param_1;
  uVar3 = fn_001287b4();
  iStack_38 = fn_0011c184(L"rom:/data/Community/CommunityPrize.nut",uVar3,0x80,5);
  if ((iStack_38 == 0) || (iVar4 = fn_00145ac0(), iVar4 == 0)) {
    fn_0012d73c(iStack_38);
    return;
  }
  fn_00128f40(auStack_30);
  uVar3 = fn_0012a26c(iStack_38);
  uVar5 = fn_00145ac0(iStack_38);
  fn_00128ee0(auStack_30,uVar5,uVar3);
  uVar11 = 0;
  do {
    uVar3 = (&DAT_007d5d20)[uVar11 * 3];
    iVar4 = iStack_28 + (char)(&DAT_007d5d1c)[uVar11 * 0xc] * 0xc;
    iVar6 = fn_00128e54(auStack_30,uVar3);
    iVar10 = 0;
    if (0 < iVar6 / 3) {
      do {
        uStack_3c = 0;
        iVar1 = iVar10 * 3;
        uStack_40 = 0;
        uStack_40 = fn_00128e7c(auStack_30,uVar3,iVar1);
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar1 + 1);
        uStack_3c = CONCAT22(((unsigned int)(uStack_3c) >> 16) & 0xffff,uVar2);
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar1 + 2);
        uStack_3c = CONCAT22(uVar2,(undefined2)uStack_3c);
        puVar7 = *(undefined4 **)(iVar4 + 8);
        if (puVar7 == *(undefined4 **)(iVar4 + 0xc)) {
          fn_0078bbf0(iVar4 + 4,puVar7,&uStack_40);
        }
        else {
          *(undefined4 **)(iVar4 + 8) = puVar7 + 2;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uStack_40;
            puVar7[1] = uStack_3c;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6 / 3);
    }
    uVar3 = (&DAT_007d5d24)[uVar11 * 3];
    iVar4 = iStack_28 + (char)(&DAT_007d5d1c)[uVar11 * 0xc] * 0x1c;
    puVar7 = (undefined4 *)(iVar4 + 0x34);
    iVar6 = fn_00128e54(auStack_30,uVar3);
    if (iVar6 == 0xc) {
      uVar5 = fn_00128e7c(auStack_30,uVar3,0);
      *puVar7 = uVar5;
      uVar5 = fn_00128e7c(auStack_30,uVar3,1);
      iVar6 = 2;
      *(undefined4 *)(iVar4 + 0x38) = uVar5;
      uVar8 = 0;
      do {
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar6);
        *(undefined2 *)(puVar7 + uVar8 + 2) = uVar2;
        uVar2 = fn_00128e7c(auStack_30,uVar3,iVar6 + 1);
        uVar9 = uVar8 + 1;
        iVar6 = iVar6 + 2;
        *(undefined2 *)((int)puVar7 + uVar8 * 4 + 10) = uVar2;
        uVar8 = uVar9;
      } while (uVar9 < 5);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  fn_0012d73c(iStack_38);
  fn_00128fc4(auStack_30);
  return;
}



void fn_00255d24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = 0;
  do {
    iVar6 = param_1 + iVar2 * 0xc;
    uVar5 = *(uint *)(iVar6 + 4);
    *(undefined4 *)(iVar6 + 4) = 0;
    uVar3 = *(uint *)(iVar6 + 8);
    *(undefined4 *)(iVar6 + 8) = 0;
    iVar4 = *(int *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    uVar1 = uVar5;
    if (uVar3 <= uVar5) {
      for (; uVar1 != uVar3; uVar1 = uVar1 + 8) {
      }
    }
    fn_001008c4(uVar5,(int)(iVar4 - uVar5) >> 3,0);
    iVar4 = iVar2 + 1;
    iVar2 = param_1 + iVar2 * 0x1c;
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x3c) = 0;
    *(undefined4 *)(iVar2 + 0x40) = 0;
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(undefined4 *)(iVar2 + 0x48) = 0;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    iVar2 = iVar4;
  } while (iVar4 < 4);
  return;
}



void fn_00255be0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar6 = 0;
  do {
    iVar8 = param_2 + uVar6 * 8;
    iVar1 = fn_00163940((int)*(short *)(iVar8 + 100));
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x20);
      if (puVar2 == *(undefined4 **)(param_1 + 0x24)) {
        fn_0078bbf0(param_1 + 0x1c);
      }
      else {
        *(undefined4 **)(param_1 + 0x20) = puVar2 + 2;
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)(iVar8 + 100);
          *puVar2 = *(undefined4 *)(iVar8 + 0x60);
          puVar2[1] = uVar3;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 10);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  uVar7 = *(undefined4 *)(param_2 + 0xc0);
  uVar9 = *(undefined4 *)(param_2 + 0xc4);
  uVar10 = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0x80) = uVar9;
  *(undefined4 *)(param_1 + 0x84) = uVar10;
  uVar6 = 0;
  do {
    iVar8 = param_2 + uVar6 * 8;
    iVar1 = fn_00163940((int)*(short *)(iVar8 + 0xd0));
    if (iVar1 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x2c);
      if (puVar2 == *(undefined4 **)(param_1 + 0x30)) {
        fn_0078bbf0();
      }
      else {
        *(undefined4 **)(param_1 + 0x2c) = puVar2 + 2;
        if (puVar2 != (undefined4 *)0x0) {
          uVar3 = *(undefined4 *)(iVar8 + 0xd0);
          *puVar2 = *(undefined4 *)(iVar8 + 0xcc);
          puVar2[1] = uVar3;
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 10);
  uVar3 = *(undefined4 *)(param_2 + 0x120);
  uVar4 = *(undefined4 *)(param_2 + 0x124);
  uVar5 = *(undefined4 *)(param_2 + 0x128);
  uVar7 = *(undefined4 *)(param_2 + 300);
  uVar9 = *(undefined4 *)(param_2 + 0x130);
  uVar10 = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  *(undefined4 *)(param_1 + 0x98) = uVar7;
  *(undefined4 *)(param_1 + 0x9c) = uVar9;
  *(undefined4 *)(param_1 + 0xa0) = uVar10;
  return;
}



undefined4 fn_002559d4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00255a8c,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar3 = 0x60;
  iVar4 = 0;
  iVar1 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar3 != 0 || iVar4 != 0) {
    param_1 = 0;
  }
  psVar2 = (short *)-(param_4 + (uint)(4 < param_3));
  if ((int)psVar2 < 0 == (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    iVar1 = 0;
  }
  DAT_0089247c = param_1;
  DAT_00892480 = iVar1;
  if (0 < iVar1) {
    psVar2 = (short *)(param_1 + 0x4a);
  }
  DAT_0089247a = 0;
  if (0 < iVar1) {
    do {
      if (*psVar2 != 0) {
        DAT_0089247a = DAT_0089247a + 1;
      }
      iVar1 = iVar1 + -1;
      psVar2 = psVar2 + 0x30;
    } while (iVar1 != 0);
  }
  return 1;
}



void fn_00255998(undefined4 *param_1)

{
  *param_1 = &DAT_0081d788;
  if (param_1[0xc] != 0) {
    fn_001cfc5c();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



void fn_00255934(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_0081d788;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x27) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}


