#include "003fc8f8_003ffb14.h"



undefined4 fn_003ffb14(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  wchar16 *local_78;
  char *pcStack_74;
  int local_70;
  undefined4 local_6c;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  undefined4 *local_1c;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00895be4) goto LAB_003ffb5c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003ffb5c:
  fn_00397774(&local_78);
  local_78 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_74 = (char *)&DAT_003ffce0;
  local_70 = fn_006e8194(puVar5);
  local_6c = 0;
  uVar2 = fn_0022f750((char *)&DAT_003ffcf4);
  fn_00147974(auStack_5c,uVar2);
  local_44 = 2;
  local_4c = 0;
  uVar2 = fn_0022f750((char *)&DAT_003ffd00);
  fn_00147974(auStack_38,uVar2);
  fn_00147974(auStack_30,puVar5[6]);
  uVar2 = fn_00397618(param_1,&local_78);
  iVar6 = 0;
  if (0 < local_70) {
    do {
      fn_003ff968(&local_1c,param_1,iVar6);
      fn_0031b78c(param_1,iVar6,0,local_1c);
      if (local_1c != &DAT_008f9cf4) {
        piVar3 = local_1c + -3;
        iVar4 = *piVar3;
        if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
          fn_001008c4(local_1c + -3,local_1c[-2] + 8,0);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_70);
  }
  fn_00689efc(param_1,0xa9,0);
  fn_003ffd38(param_1,local_6c);
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar6 = fn_001588d4(auStack_50);
  iVar6 = fn_001588d4(iVar6 + -4);
  iVar6 = fn_001588d4(iVar6 + -4);
  fn_001588d4(iVar6 + -4);
  return uVar2;
}



void fn_003ff968(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint local_ac;
  uint local_a8 [2];
  undefined1 auStack_a0 [128];
  
  fn_0018a618(auStack_a0,0x40,0x3f,&DAT_003ffafc,param_3 + 1);
  puVar6 = *(undefined4 **)(param_2 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895be4) goto LAB_003ff9d4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_003ff9d4:
  puVar6 = (undefined4 *)fn_006e81e8(puVar6,param_3);
  uVar2 = fn_0022f750(*puVar6);
  uVar3 = fn_00100b58(auStack_a0);
  if (uVar3 == 0) {
    puVar6 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_a8;
    if (0x20 < uVar3) {
      puVar4 = &local_ac;
    }
    local_ac = uVar3;
    local_a8[0] = 0x20;
    uVar7 = *puVar4;
    if (0xfffffff1 < uVar7) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
    }
    if (uVar7 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
    }
    if (uVar7 == 0) {
      puVar6 = &DAT_008f9ce8;
    }
    else {
      puVar6 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar5 = (undefined2 *)((int)puVar6 + uVar3 * 2 + 0xc);
      *puVar6 = 0;
      puVar6[1] = uVar7;
      puVar6[2] = uVar3;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar6 = puVar6 + 3;
  }
  *param_1 = (int)puVar6;
  fn_00301a9c(puVar6,auStack_a0,uVar3 << 1);
  uVar8 = *(undefined4 *)(*param_1 + -4);
  local_a8[0] = fn_00100b58(uVar2);
  local_ac = 0;
  fn_00177c88(param_1,uVar8,0,uVar2,local_a8[0]);
  return;
}



void fn_003fed04(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



undefined4 fn_003fe668(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0023070c((char *)&DAT_003fe6d4);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 0;
  fn_00689bd0(param_1,0x48,0);
  return 1;
}



void fn_003fd3c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 100) + 8) != '\x01') {
    iVar1 = fn_00154a6c(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar1;
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      if (iVar1 == 1) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
      }
      if (2 < *(int *)(param_1 + 0x78)) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 9) = 1;
        return;
      }
      uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                           *(undefined4 *)(&DAT_00894b84 + *(int *)(param_1 + 0x78) * 4),
                           *(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar2);
      *(undefined4 *)(param_1 + 0x7c) = uVar2;
    }
  }
  return;
}



undefined4 fn_003fd288(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x65);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894b30) goto LAB_003fd2d8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003fd2d8:
  *(undefined4 **)(param_1 + 100) = puVar1;
  if (*(int *)(param_1 + 0x6c) == -1) {
    uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00894b64,&DAT_003fd388,1,1);
    *(undefined4 *)(param_1 + 0x6c) = uVar3;
  }
  if (*(int *)(param_1 + 0x70) == -1) {
    uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                         DAT_00894b68,&DAT_003fd38c,0,1,0);
    *(undefined4 *)(param_1 + 0x70) = uVar3;
  }
  if (*(int *)(param_1 + 0x74) == -1) {
    uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                         *(undefined4 *)(&DAT_00894b84 + *(int *)(param_1 + 0x78) * 4),
                         *(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x74) = uVar3;
    uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar3);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
  }
  fn_006cc5fc(param_1);
  return 1;
}



void fn_003fc8f8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_r10;
  bool bVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  if (*(int *)(*(int *)(iVar2 + 0x8f8) + -4) == 0) {
    if (*(int *)(*(int *)(iVar2 + 0x8fc) + -4) == 0) {
      fn_0039c438(param_1);
    }
    else {
      fn_0039bf58();
    }
  }
  else {
    fn_0039bdb0(param_1);
  }
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  uVar3 = fn_00246ec4(iVar2 + 0x530,4);
  fn_0036e8fc(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar7 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar4 = fn_0036e9e4(uVar3,iVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar7 * 4) = uVar4;
    local_30 = *(undefined4 *)(param_1 + 0x68);
    local_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar4 = fn_0036eaa8(uVar3,iVar7,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar7 + 1;
    *(undefined4 *)(iVar8 + iVar7 * 4) = uVar4;
    iVar7 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  iVar7 = 0;
  cVar1 = *(char *)(*(int *)(param_1 + 0x9c) + 0x903);
  do {
    bVar9 = *(char *)(*(int *)(param_1 + 0x9c) + 0x900) != '\0';
    if (bVar9) {
      unaff_r10 = 1;
    }
    iVar6 = iVar2 + 0x1c + iVar7 * 0xf0;
    if (!bVar9) {
      unaff_r10 = 0;
    }
    iVar8 = iVar6 + 0x514;
    if ((iVar8 == 0) || (iVar6 = fn_001a46f4((int)*(short *)(iVar6 + 0x530)), iVar6 == 0)) {
LAB_003fca64:
      iVar6 = 1;
    }
    else {
      if ((uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2) <= uVar5)
      goto LAB_003fca64;
      local_2c = 0;
      local_30 = 1;
      local_28 = 0;
      fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar5 * 4),iVar8,0,0);
      local_30 = 1;
      fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar5 * 4),iVar8,unaff_r10,(int)cVar1)
      ;
      iVar6 = fn_0020bbc4(&local_30,iVar8);
      if (iVar6 != 0) {
        iVar6 = iVar6 + 4;
      }
      uVar3 = fn_006bfe90(iVar6);
      iVar6 = fn_001cab7c(uVar3);
    }
    uVar5 = iVar6 + uVar5 & 0xff;
    if ((3 < uVar5) || (iVar7 = iVar7 + 1, 3 < iVar7)) {
      if (*(char *)(*(int *)(param_1 + 0x9c) + 0x901) == '\0') {
        return;
      }
      fn_0039bcf8(param_1,*(undefined2 *)(iVar2 + 0x74),DAT_00894e6c);
      return;
    }
  } while( true );
}


