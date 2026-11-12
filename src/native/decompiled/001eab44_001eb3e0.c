#include "001eab44_001eb3e0.h"



void fn_001eb3e0(void)

{
  fn_001eb3f0();
  fn_002feef8();
  return;
}



int fn_001eada8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_38;
  uint local_34 [4];
  
  puVar1 = (undefined4 *)fn_001c585c(param_1,0);
  *puVar1 = &PTR_FUN_0081bfa8;
  iVar2 = fn_00101a1c(puVar1 + 0x5f,&LAB_001ad7cc,4);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 1;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x34) = 0xff;
  uVar17 = 0x3f80000000000000;
  *(undefined1 *)(iVar2 + 0x35) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined1 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0;
  *(undefined1 *)(iVar2 + 0x54) = 0;
  *(undefined1 *)(iVar2 + 0x58) = 3;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x70) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x8c) = 0xff;
  *(undefined4 *)(iVar2 + 0x90) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  *(undefined1 *)(iVar2 + 0xb0) = 0;
  *(undefined1 *)(iVar2 + 0xb1) = 0;
  iVar2 = fn_00101a1c(iVar2 + 0xb4,&LAB_00745f74,0xc,4);
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x31) = 0;
  *(int *)(iVar2 + 0x34) = (int)uVar17;
  *(undefined1 *)(iVar2 + 0x38) = 0;
  fn_00301f50(iVar2 + 0x3c,0x48);
  fn_00301f50(iVar2 + 0x84,0x48);
  *(undefined1 *)(iVar2 + 0xcc) = 0;
  *(undefined1 *)(iVar2 + 0xcd) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0xffffffff;
  *(int *)(iVar2 + 0xd4) = iVar2 + -0x230;
  *(undefined4 *)(iVar2 + 0xd8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xe0) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0xffffffff;
  uVar10 = (undefined4)uVar17;
  *(undefined4 *)(iVar2 + 0xe4) = uVar10;
  *(undefined4 *)(iVar2 + 0xe8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xec) = uVar10;
  *(undefined4 *)(iVar2 + 0xf0) = uVar10;
  *(undefined1 *)(iVar2 + 0xf4) = 0;
  *(undefined1 *)(iVar2 + 0xf5) = 0;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x110) = 0;
  puVar1 = (undefined4 *)fn_00171634();
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  *(undefined4 *)(iVar2 + 0x138) = *puVar1;
  *(undefined4 *)(iVar2 + 0x13c) = uVar10;
  *(undefined4 *)(iVar2 + 0x140) = uVar11;
  *(undefined1 *)(iVar2 + 0x144) = 0;
  *(undefined4 *)(iVar2 + 0x148) = 0;
  iVar2 = fn_001c6d34(iVar2 + 0x14c);
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar10 = 0;
  if (iVar3 != 0) {
    uVar10 = fn_001fa2fc();
  }
  *(undefined4 *)(iVar2 + 0xc) = uVar10;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x1d) = 0;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x44) = 0;
  fn_00301a9c(iVar2 + 0x46,&DAT_007ba154,0x1e);
  *(undefined1 *)(iVar2 + 100) = 0;
  *(undefined1 *)(iVar2 + 0x65) = 1;
  *(undefined1 *)(iVar2 + 0x66) = 1;
  *(undefined1 *)(iVar2 + 0x67) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(undefined1 *)(iVar2 + 0x84) = 0;
  *(undefined1 *)(iVar2 + 0x85) = 0;
  iVar3 = fn_00145b00(0x3c,&DAT_00812c8c);
  puVar1 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_008350a4;
    fn_003f52d4();
  }
  *(undefined4 **)(iVar2 + 0x88) = puVar1;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x90) = 0xffffffff;
  *(undefined2 *)(iVar2 + 0x94) = 0;
  *(undefined4 *)(iVar2 + 0x98) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x9c) = 0;
  *(undefined2 *)(iVar2 + 0x9e) = 0;
  *(undefined4 *)(iVar2 + 0xa0) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0xa4) = 0;
  uVar10 = (undefined4)uVar17;
  *(undefined4 *)(iVar2 + 0xa8) = uVar10;
  *(undefined1 *)(iVar2 + 0xac) = 0;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  *(undefined4 *)(iVar2 + 0xb4) = 0;
  *(undefined1 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  uVar11 = (undefined4)((ulonglong)uVar17 >> 0x20);
  *(undefined4 *)(iVar2 + 0xc4) = uVar11;
  *(undefined4 *)(iVar2 + 200) = uVar10;
  *(undefined4 *)(iVar2 + 0xcc) = uVar11;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd4) = 0;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  *(undefined4 *)(iVar2 + 0xe0) = uVar10;
  iVar3 = fn_006887f0(iVar2 + 0xe4);
  piVar14 = (int *)(iVar3 + -0x318);
  uVar16 = 0x39;
  iVar2 = (*(int *)(iVar3 + -0x310) - *(int *)(iVar3 + -0x314)) / 0xc;
  if (iVar2 < 0x3a) {
    if ((*(uint *)(iVar3 + -0x30c) & 0x3fffffff) < 0x39) {
      if (((*piVar14 == 0) || ((*(uint *)(iVar3 + -0x30c) & 0xc0000000) != 0x40000000)) ||
         (puVar1 = (undefined4 *)(**(code **)(*(int *)*piVar14 + 8))((int *)*piVar14,0x2ac,0x20),
         puVar1 == (undefined4 *)0x0)) {
        uVar16 = *(uint *)(iVar3 + -0x30c) & 0x3fffffff;
      }
      else {
        iVar2 = 0;
        puVar8 = *(undefined4 **)(iVar3 + -0x314);
        puVar12 = *(undefined4 **)(iVar3 + -0x310);
        puVar4 = puVar1;
        if (puVar8 != puVar12) {
          do {
            if (puVar4 != (undefined4 *)0x0) {
              uVar10 = puVar8[1];
              uVar11 = puVar8[2];
              *puVar4 = *puVar8;
              puVar4[1] = uVar10;
              puVar4[2] = uVar11;
            }
            puVar8 = puVar8 + 3;
            puVar4 = puVar4 + 3;
          } while (puVar8 != puVar12);
          iVar2 = (*(int *)(iVar3 + -0x310) - *(int *)(iVar3 + -0x314)) / 0xc;
        }
        uVar9 = *(uint *)(iVar3 + -0x314);
        if (uVar9 != 0) {
          uVar5 = *(uint *)(iVar3 + -0x310);
          uVar13 = uVar9;
          if (uVar9 < uVar5) {
            iVar6 = 1;
            if (1 < (int)(uVar5 - uVar9) / 0xc + 1) {
              do {
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)(uVar5 - uVar9) / 0xc + 1);
            }
          }
          else {
            for (; uVar13 != uVar5; uVar13 = uVar13 + 0xc) {
            }
          }
          *(uint *)(iVar3 + -0x310) = uVar9;
          (**(code **)(*(int *)*piVar14 + 0xc))((int *)*piVar14,*(undefined4 *)(iVar3 + -0x314));
        }
        *(undefined4 **)(iVar3 + -0x314) = puVar1;
        *(undefined4 **)(iVar3 + -0x310) = puVar1 + iVar2 * 3;
        *(uint *)(iVar3 + -0x30c) = *(uint *)(iVar3 + -0x30c) & 0xc0000000 | 0x39;
      }
    }
    for (iVar2 = (*(int *)(iVar3 + -0x310) - *(int *)(iVar3 + -0x314)) / 0xc; iVar2 < (int)uVar16;
        iVar2 = iVar2 + 1) {
      puVar1 = (undefined4 *)(*(int *)(iVar3 + -0x314) + iVar2 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0xffffffff;
        puVar1[2] = 0xffffffff;
      }
    }
    iVar2 = *(int *)(iVar3 + -0x314) + uVar16 * 0xc;
  }
  else {
    do {
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar2);
    iVar2 = *(int *)(iVar3 + -0x314) + 0x2ac;
  }
  *(int *)(iVar3 + -0x310) = iVar2;
  local_38 = 3;
  puVar15 = (uint *)(iVar3 + -0x284);
  if ((uint)(*(int *)(iVar3 + -0x27c) - *(int *)(iVar3 + -0x284) >> 2) < 3) {
    uVar16 = *(int *)(iVar3 + -0x280) - *(int *)(iVar3 + -0x284) >> 2;
    local_34[0] = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_34[0] < uVar16 + 0x20) {
      local_34[0] = uVar16 + 0x20;
    }
    puVar7 = local_34;
    if (local_34[0] < 4) {
      puVar7 = &local_38;
    }
    uVar16 = *puVar7;
    puVar8 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
    puVar12 = *(undefined4 **)(iVar3 + -0x280);
    puVar4 = puVar8;
    for (puVar1 = (undefined4 *)*puVar15; puVar1 != puVar12; puVar1 = puVar1 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar1;
      }
      puVar4 = puVar4 + 1;
    }
    uVar13 = *puVar15;
    uVar9 = uVar13;
    if (*(uint *)(iVar3 + -0x280) < uVar13) {
      do {
        uVar9 = uVar9 + 4;
      } while (uVar9 != *(uint *)(iVar3 + -0x280));
    }
    fn_001008c4(uVar13,(int)(*(int *)(iVar3 + -0x27c) - uVar13) >> 2,0);
    uVar9 = *puVar15;
    *(undefined4 **)(iVar3 + -0x284) = puVar8;
    *(int *)(iVar3 + -0x280) = (*(int *)(iVar3 + -0x280) - uVar9 & 0xfffffffc) + (int)puVar8;
    *(undefined4 **)(iVar3 + -0x27c) = puVar8 + uVar16;
  }
  *(undefined4 *)(iVar3 + -0x268) = 0;
  *(undefined4 *)(iVar3 + -0x264) = 0;
  *(undefined4 *)(iVar3 + -0x260) = 0;
  *(undefined4 *)(iVar3 + -0x25c) = 0;
  fn_00301f50(iVar3 + -500,0x48);
  fn_00301f50(iVar3 + -0x1ac,0x48);
  *(undefined4 *)(iVar3 + -0xa4) = 0;
  *(undefined4 *)(iVar3 + -0x130) = 0;
  *(undefined4 *)(iVar3 + -300) = 0;
  *(undefined4 *)(iVar3 + -0x128) = 0;
  *(undefined4 *)(iVar3 + -0x124) = 0;
  *(undefined4 *)(iVar3 + -0xb4) = 0;
  *(undefined4 *)(iVar3 + -0xb0) = 0xffffffff;
  *(undefined4 *)(iVar3 + -0xac) = 0;
  *(undefined4 *)(iVar3 + -0x7c) = 0;
  *(undefined4 *)(iVar3 + -0x78) = 0;
  *(undefined4 *)(iVar3 + -0x74) = 0;
  return iVar3 + -0x460;
}



void fn_001ead4c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  fn_0023f068();
  if (param_2 == 0) {
    uVar1 = fn_006aab6c(param_1);
    *(undefined4 *)(param_1 + 0x228) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x3f4) = 1;
  return;
}



void fn_001eac78(int param_1)

{
  if (*(char *)(param_1 + 0x22d) != '\a') {
    *(undefined4 *)(param_1 + 0x33c) = 0;
    *(undefined4 *)(param_1 + 0x334) = 0x1e;
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x330) = 0;
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 2;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}



void fn_001eab8c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x208) == -1) {
    if (*(char *)(param_1 + 0x1b1) != '\0') {
      *(undefined1 *)(param_1 + 0x3e0) = 1;
    }
  }
  else if (param_2 - 9U < 0x31) {
    param_2 = 0;
  }
  fn_001dbe2c(param_1,param_2);
  if ((*(char *)(param_1 + 0x208) != -1) && (*(char *)(param_1 + 0x1b1) == '\0')) {
    uVar1 = fn_0025988c(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8));
    uVar2 = fn_006aa538(param_1,(int)*(char *)(param_1 + 0x208));
    uVar1 = fn_0016dc08(uVar2,uVar1);
    uVar2 = fn_00241d90(DAT_00897844,*(undefined4 *)(param_1 + 0xe0));
    uVar1 = fn_0017b118(uVar1,uVar2);
    fn_0025968c(*(undefined4 *)(param_1 + 0x18c),param_2,param_3,param_4,
                 *(byte *)(param_1 + 0x138) & 1,uVar1);
  }
  return;
}



void fn_001eab44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_002593fc(param_1 + 0x1dc);
  local_18 = fn_0023ddec(uVar1,param_2);
  fn_001e2904(param_1,local_18,0xffffffff);
  fn_0079d450(param_1 + 0x1dc,&local_18);
  return;
}


