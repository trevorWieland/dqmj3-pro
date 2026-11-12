#include "0039cbe4_003a1030.h"



undefined4 fn_003a1030(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  wchar16 *pwStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 auStack_60 [64];
  int local_20;
  
  fn_002c330c(&pwStack_94);
  local_8c = 4;
  uStack_88 = 0;
  local_80 = 4;
  local_84 = 0;
  pwStack_94 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_90 = (char *)&DAT_003a1330;
  uVar3 = fn_0022f750((char *)&DAT_003a1344);
  fn_00147974(&local_78,uVar3);
  fn_00147974(&local_74,&DAT_003a135c);
  fn_00147974(&local_70,&DAT_003a135c);
  fn_00147974(&local_6c,&DAT_003a135c);
  local_64 = 0xff;
  local_63 = 0;
  local_62 = 0;
  local_61 = 0xff;
  local_68 = 0;
  fn_002c29a0(param_1,&pwStack_94);
  iVar8 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_007c7a78)[iVar8]);
    fn_0031b78c(param_1,iVar8,0,uVar3);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  uVar3 = fn_006b6238(*(undefined4 *)(DAT_00897804 + 8));
  fn_00113b94(*(undefined4 *)(DAT_00897804 + 0x44),uVar3);
  piVar4 = (int *)fn_001f74ec(param_1,0x95);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*piVar4)(piVar4);
    do {
      if (puVar5 == &DAT_00894c6c) goto LAB_003a115c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_003a115c:
  (**(code **)(*piVar4 + 0x10))(piVar4);
  *(undefined1 *)(piVar4 + 0x281) = 0;
  puVar5 = (undefined4 *)fn_001f74ec(param_1,0xb1);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_00895c98) goto LAB_003a11b4;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003a11b4:
  if (*(char *)(puVar5 + 5) != '\0') {
    puVar6 = (undefined4 *)fn_001f74ec(param_1,0xd4);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar7 == &DAT_00894eb0) goto LAB_003a1204;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_003a1204:
    uVar3 = puVar6[2];
    iVar8 = fn_0028b3a0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
    if (iVar8 != 0) {
      fn_00113974(*(undefined4 *)(DAT_00897804 + 0x40),uVar3);
      iVar8 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
      fn_00113ba0(*(undefined4 *)(DAT_00897804 + 0x44),*(undefined2 *)(iVar8 + 0x1c));
    }
    *(undefined1 *)(puVar5 + 5) = 0;
  }
  puVar5 = (undefined4 *)fn_001f74d8(param_1,0x36);
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar6 == &DAT_008951dc) goto LAB_003a1298;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003a1298:
  iVar8 = fn_006bebf8(*(undefined4 *)(DAT_00897804 + 0x40));
  if (iVar8 == 0) {
    fn_00147974(puVar5 + 8,&DAT_003a135c);
    *(undefined1 *)((int)puVar5 + 0x27) = 0;
  }
  else {
    iVar8 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_002311c4(auStack_60,0x20,(int)*(short *)(iVar8 + 0x1c),iVar8 + 4,0);
    fn_00147974(puVar5 + 8,auStack_60);
    local_20 = iVar8;
    uVar1 = fn_006bf2b4();
    *(undefined1 *)((int)puVar5 + 0x27) = uVar1;
    puVar5[0x2b] = *(undefined4 *)(iVar8 + 0x72);
    puVar5[0x2c] = *(undefined4 *)(iVar8 + 0x76);
    puVar5[0x2d] = *(undefined4 *)(iVar8 + 0x7a);
    puVar5[0x2e] = *(undefined4 *)(iVar8 + 0x7e);
    *(undefined2 *)(puVar5 + 0x2f) = *(undefined2 *)(iVar8 + 0x82);
  }
  fn_001003e0((int)puVar5 + 0x2e6,**(undefined4 **)(DAT_00897804 + 0x44));
  uVar1 = fn_006c3b68(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined1 *)((int)puVar5 + 0x2e5) = uVar1;
  uVar2 = fn_006c3b74(*(undefined4 *)(DAT_00897804 + 0x44));
  *(undefined2 *)(puVar5 + 7) = uVar2;
  *(undefined1 *)(puVar5 + 0xb9) = 1;
  puVar5[0xcd] = 0x1b;
  fn_00689930(param_1,0x36,0);
  if (local_6c != &DAT_008f9cf4) {
    piVar4 = local_6c + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_6c + -3,local_6c[-2] + 8,0);
    }
  }
  if (local_70 != &DAT_008f9cf4) {
    piVar4 = local_70 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
    }
  }
  if (local_74 != &DAT_008f9cf4) {
    piVar4 = local_74 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_74 + -3,local_74[-2] + 8,0);
    }
  }
  if (local_78 != &DAT_008f9cf4) {
    piVar4 = local_78 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_78 + -3,local_78[-2] + 8,0);
    }
  }
  return 1;
}



void fn_0039d91c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  
  iVar1 = fn_00145b00(0xdc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &PTR_FUN_0082cc84;
  puVar2[0x19] = &DAT_008592d0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  *(undefined1 *)((int)puVar2 + 0x69) = 0;
  *(undefined1 *)((int)puVar2 + 0x6a) = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1d] = &DAT_008592e0;
  puVar2[0x1c] = 0;
  *(undefined1 *)(puVar2 + 0x1e) = 0;
  *(undefined1 *)((int)puVar2 + 0x79) = 0;
  *(undefined1 *)((int)puVar2 + 0x7a) = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = *(undefined4 *)(param_1 + 8);
  puVar2[0x23] = *(undefined4 *)(param_1 + 0x14);
  uVar12 = *(undefined4 *)(param_1 + 0x20);
  puVar2[0x25] = 0xffffffff;
  puVar2[0x24] = uVar12;
  puVar2[0x26] = 0xffffffff;
  puVar2[0x27] = 0xffffffff;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_00584c08(iVar1,puVar2[0x22]);
  }
  puVar2[0x31] = uVar12;
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_00593dd0(iVar1,*(undefined4 *)(param_1 + 0x24));
  }
  puVar2[0x32] = uVar12;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_0038970c(iVar1,puVar2[0x23]);
  }
  puVar2[0x33] = uVar12;
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_003e8990(iVar1,puVar2[0x23],puVar2[0x33]);
  }
  puVar2[0x34] = uVar12;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_0041f760(iVar1,puVar2[0x23]);
  }
  puVar2[0x35] = uVar12;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar12 = 0;
  if (iVar1 != 0) {
    uVar12 = fn_005713ac(iVar1,puVar2[0x23],puVar2[0x35]);
  }
  iVar1 = 0;
  puVar2[0x36] = uVar12;
  do {
    puVar3 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
    if (puVar3 != (undefined4 *)0x0) {
      uVar13 = puVar2[0x24];
      uVar15 = puVar2[0x22];
      iVar4 = fn_00145b00(0x14,&DAT_00812c8c);
      uVar12 = 0;
      if (iVar4 != 0) {
        uVar12 = fn_0043f0c4(iVar4,uVar15);
      }
      *puVar3 = uVar12;
      iVar4 = fn_00145b00(0x14,&DAT_00812c8c);
      uVar12 = 0;
      if (iVar4 != 0) {
        uVar12 = fn_0044adf4(iVar4,uVar13,iVar1);
      }
      puVar3[1] = uVar12;
      *(undefined1 *)(puVar3 + 2) = 0;
    }
    piVar14 = (int *)puVar2[0x2f];
    puVar16 = puVar2 + 0x2e;
    if (piVar14 == (int *)puVar2[0x30]) {
      uVar7 = (int)((int)piVar14 - *puVar16) >> 2;
      if (uVar7 < (uint)((int)((int)puVar2[0x30] - *puVar16) >> 2)) {
        puVar2[0x2f] = piVar14 + 1;
        if (piVar14 != (int *)0x0) {
          *piVar14 = piVar14[-1];
        }
        piVar9 = piVar14 + -1;
        piVar10 = piVar14;
        if (piVar14 < piVar9) {
          if (0 < (int)piVar9 - (int)piVar14) {
            iVar4 = (int)piVar9 - (int)piVar14 >> 2;
            iVar8 = 0;
            do {
              iVar4 = iVar4 + -1;
              piVar14[iVar8 + -1] = piVar9[iVar8 + -1];
              iVar8 = iVar8 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          while (piVar14 != piVar9) {
            piVar9 = piVar9 + -1;
            piVar10[-1] = *piVar9;
            piVar10 = piVar10 + -1;
          }
        }
        *piVar14 = (int)puVar3;
      }
      else {
        uVar17 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar17 < uVar7 + 0x20) {
          uVar17 = uVar7 + 0x20;
        }
        piVar5 = (int *)fn_00100fc6(uVar17 << 2,0);
        piVar10 = piVar5;
        for (piVar9 = (int *)*puVar16; piVar9 != piVar14; piVar9 = piVar9 + 1) {
          if (piVar10 != (int *)0x0) {
            *piVar10 = *piVar9;
          }
          piVar10 = piVar10 + 1;
        }
        piVar9 = (int *)(((int)piVar14 - *puVar16 & 0xfffffffc) + (int)piVar5);
        if (piVar9 != (int *)0x0) {
          *piVar9 = (int)puVar3;
        }
        piVar10 = (int *)puVar2[0x2f];
        piVar9 = (int *)(((int)piVar14 - *puVar16 & 0xfffffffc) + (int)piVar5);
        for (; piVar14 != piVar10; piVar14 = piVar14 + 1) {
          piVar9 = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar14;
          }
        }
        uVar6 = *puVar16;
        uVar11 = puVar2[0x2f];
        uVar7 = uVar6;
        if (uVar11 < uVar6) {
          do {
            uVar7 = uVar7 + 4;
          } while (uVar7 != uVar11);
        }
        fn_001008c4(uVar6,(int)(puVar2[0x30] - uVar6) >> 2,0);
        puVar2[0x30] = piVar5 + uVar17;
        puVar2[0x2f] = piVar5 + ((int)(uVar11 - uVar6) >> 2) + 1;
        *puVar16 = (uint)piVar5;
      }
    }
    else {
      puVar2[0x2f] = piVar14 + 1;
      if (piVar14 != (int *)0x0) {
        *piVar14 = (int)puVar3;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0039cbe4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar3 = fn_001828f0(uVar2,(char *)&DAT_0039cd24);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  iVar3 = *(int *)(param_1 + 0x98);
  uVar4 = fn_001827b0(uVar2,(char *)&DAT_0039cd38);
  fn_00190d50(uVar4,iVar3 + 0x2e6);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x2e5);
  uVar4 = fn_002303c0(uVar1);
  uVar5 = fn_001827b0(uVar2,(char *)&DAT_0039cd44);
  fn_00190d50(uVar5,uVar4);
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x20);
  uVar4 = fn_001827b0(uVar2,(char *)&DAT_0039cd50);
  fn_00190d50(uVar4,uVar5);
  uVar4 = fn_0022f750((char *)&DAT_0039cd60);
  uVar5 = fn_001827b0(uVar2,(char *)&DAT_0039cd6c);
  fn_00190d50(uVar5,uVar4);
  uVar4 = fn_001827b0(uVar2,(char *)&DAT_0039cd74);
  fn_00190d50(uVar4,&DAT_0039cd80);
  iVar6 = fn_00145b00(4,&DAT_00812c8c);
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = fn_00289c84();
  }
  iVar6 = *(int *)(param_1 + 0xf0);
  if (iVar6 != iVar3) {
    if (iVar6 != 0) {
      fn_00289ca8(iVar6);
      fn_002feef8();
    }
    *(int *)(param_1 + 0xf0) = iVar3;
  }
  fn_00289bac(*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 100));
  uVar2 = fn_001828f0(uVar2,(char *)&DAT_0039cd88);
  fn_00289ac0(*(undefined4 *)(param_1 + 0xf0),uVar2,uVar1);
  return;
}


