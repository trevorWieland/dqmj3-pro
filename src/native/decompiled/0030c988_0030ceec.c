#include "0030c988_0030ceec.h"



void fn_0030ceec(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c) + param_2 * 0xa88;
  uVar2 = *(uint *)(iVar1 + 0xa74);
  *(uint *)(iVar1 + 0xa74) = uVar2 | 1;
  if (param_3 == 0) {
    uVar2 = uVar2 & 0xfffffffd | 1;
  }
  else {
    uVar2 = uVar2 | 3;
  }
  *(uint *)(*(int *)(param_1 + 0x2c) + param_2 * 0xa88 + 0xa74) = uVar2;
  if (param_4 != 0) {
    uVar2 = uVar2 | 4;
  }
  if (param_4 == 0) {
    uVar2 = uVar2 & 0xfffffffb;
  }
  *(uint *)(*(int *)(param_1 + 0x2c) + param_2 * 0xa88 + 0xa74) = uVar2;
  return;
}



void fn_0030cd5c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_s0;
  undefined1 auStack_18 [8];
  
  uVar1 = fn_001287b4();
  iVar2 = fn_0011c184(L"rom:/data/Passing/PassingDemoSetting.nut",uVar1,0x80,5);
  if ((iVar2 == 0) || (iVar3 = fn_00145ac0(), iVar3 == 0)) {
    fn_0012d73c(iVar2);
    return;
  }
  fn_00128f40(auStack_18);
  uVar1 = fn_0012a26c(iVar2);
  uVar4 = fn_00145ac0(iVar2);
  fn_00128ee0(auStack_18,uVar4,uVar1);
  uVar1 = fn_005f6d10(auStack_18,(char *)&DAT_0030c39c,(char *)&DAT_0030c394);
  *(undefined4 *)(param_1 + 4) = uVar1;
  fn_005f6de0(auStack_18,(char *)&DAT_0030c3b8,&DAT_0030c3b0);
  *(undefined4 *)(param_1 + 8) = in_s0;
  fn_0030c988(param_1,auStack_18);
  fn_0030c3d4(param_1,auStack_18);
  fn_0012d73c(iVar2);
  fn_00128fc4(auStack_18);
  return;
}



void fn_0030cca8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = 0;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0x30;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(iVar4 - uVar3) / 0x30,0);
  uVar3 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar2 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar4 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar3,(int)(iVar4 - uVar3) / 0xc,0,uVar3,unaff_r4,in_lr);
  return;
}



void fn_0030c988(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 in_s0;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_58 [52];
  
  iVar12 = 0;
  while( true ) {
    fn_001028d4(auStack_58,(char *)&DAT_0030cc7c,iVar12);
    iVar1 = fn_005f6e60(param_2,auStack_58);
    if (iVar1 == 0) break;
    fn_005f6de0(param_2,auStack_58,(char *)&DAT_0030cc90);
    uVar15 = in_s0;
    fn_005f6de0(param_2,auStack_58,(char *)&DAT_0030cc98);
    uVar16 = in_s0;
    fn_005f6de0(param_2,auStack_58,(char *)&DAT_0030cca0);
    fn_0017fe34();
    fn_0017fe34();
    fn_0017fe34();
    puVar10 = (uint *)(param_1 + 0x18);
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar2 == *(undefined4 **)(param_1 + 0x20)) {
      uVar6 = (int)((int)puVar2 - *puVar10) / 0xc;
      if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x20) - *puVar10) / 0xc)) {
        *(undefined4 **)(param_1 + 0x1c) = puVar2 + 3;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = puVar2[-3];
          puVar2[1] = puVar2[-2];
          puVar2[2] = puVar2[-1];
        }
        puVar7 = puVar2 + -3;
        puVar8 = puVar2;
        if (puVar2 < puVar7) {
          if (0 < (int)puVar7 - (int)puVar2) {
            uVar6 = ((int)puVar7 - (int)puVar2) / 0xc;
            if ((uVar6 & 1) != 0) {
              puVar7 = puVar2 + -6;
              puVar8 = puVar2 + -3;
              *puVar8 = *puVar7;
              puVar2[-2] = puVar2[-5];
              puVar2[-1] = puVar2[-4];
            }
            for (iVar1 = (int)uVar6 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
              uVar11 = puVar7[-2];
              uVar14 = puVar7[-1];
              puVar8[-3] = puVar7[-3];
              puVar8[-2] = uVar11;
              puVar8[-1] = uVar14;
              uVar11 = puVar7[-5];
              uVar14 = puVar7[-4];
              puVar8[-6] = puVar7[-6];
              puVar8[-5] = uVar11;
              puVar8[-4] = uVar14;
              puVar8 = puVar8 + -6;
              puVar7 = puVar7 + -6;
            }
          }
        }
        else {
          while (puVar2 != puVar7) {
            uVar11 = puVar7[-2];
            uVar14 = puVar7[-1];
            puVar8[-3] = puVar7[-3];
            puVar8[-2] = uVar11;
            puVar8[-1] = uVar14;
            puVar8 = puVar8 + -3;
            puVar7 = puVar7 + -3;
          }
        }
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = in_s0;
      }
      else {
        uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar13 < uVar6 + 0x20) {
          uVar13 = uVar6 + 0x20;
        }
        uVar11 = in_s0;
        puVar3 = (undefined4 *)fn_00100fc6(uVar13 * 0xc,0);
        puVar8 = puVar3;
        for (puVar7 = (undefined4 *)*puVar10; puVar7 != puVar2; puVar7 = puVar7 + 3) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar14 = puVar7[1];
            uVar17 = puVar7[2];
            *puVar8 = *puVar7;
            puVar8[1] = uVar14;
            puVar8[2] = uVar17;
          }
          puVar8 = puVar8 + 3;
        }
        puVar7 = puVar3 + ((int)((int)puVar2 - *puVar10) / 0xc) * 3;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = uVar15;
          puVar7[1] = uVar16;
          puVar7[2] = uVar11;
        }
        puVar8 = *(undefined4 **)(param_1 + 0x1c);
        puVar7 = puVar3 + ((int)((int)puVar2 - *puVar10) / 0xc) * 3;
        for (; puVar2 != puVar8; puVar2 = puVar2 + 3) {
          puVar4 = puVar7 + 3;
          if (puVar4 != (undefined4 *)0x0) {
            in_s0 = *puVar2;
            uVar15 = puVar2[1];
            uVar16 = puVar2[2];
            *puVar4 = in_s0;
            puVar7[4] = uVar15;
            puVar7[5] = uVar16;
          }
          puVar7 = puVar4;
        }
        uVar5 = *puVar10;
        uVar9 = *(uint *)(param_1 + 0x1c);
        uVar6 = uVar5;
        if (uVar9 < uVar5) {
          do {
            uVar6 = uVar6 + 0xc;
          } while (uVar6 != uVar9);
        }
        fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x20) - uVar5) / 0xc,0);
        *puVar10 = (uint)puVar3;
        *(undefined4 **)(param_1 + 0x1c) = puVar3 + ((int)(uVar9 - uVar5) / 0xc) * 3 + 3;
        *(undefined4 **)(param_1 + 0x20) = puVar3 + uVar13 * 3;
      }
    }
    else {
      *(undefined4 **)(param_1 + 0x1c) = puVar2 + 3;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = in_s0;
      }
    }
    iVar12 = iVar12 + 1;
  }
  return;
}


