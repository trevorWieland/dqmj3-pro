#include "00342fa0_00343480.h"



undefined4 fn_00343480(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  
  if (*(byte *)(param_1 + 0x24) == param_2) {
    uVar1 = 0;
  }
  else {
    iVar2 = 0x3c;
    do {
      fn_00343ca8(param_1,iVar2);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    fn_002afe58();
    *(char *)(param_1 + 0x24) = (char)param_2;
    if (param_2 == 0) {
      uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
      fn_00102908(auStack_28,0x10,&DAT_003433c0,uVar1);
    }
    else {
      uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 4));
      fn_00102908(auStack_28,0x10,(char *)&DAT_003433b8,uVar1);
    }
    fn_002afd5c(auStack_28,*(undefined4 *)(param_1 + 0x20));
    fn_00343558(param_1,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4
fn_003433c4(int param_1,int param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
            int param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_6 == 0) {
    uVar2 = fn_0011c184(param_3,*(undefined4 *)(param_1 + 0x20),4,5);
  }
  else {
    uVar2 = fn_0012d6b0();
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 8) + param_2 * 0x28);
  *(undefined2 *)(puVar4 + 1) = 0;
  puVar4[3] = 0xffffffff;
  puVar4[4] = 0;
  *puVar4 = uVar2;
  puVar4[8] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[2] = param_5;
  *(undefined1 *)(puVar4 + 9) = param_4;
  iVar3 = fn_00145aac();
  if (iVar3 == 0) {
    uVar1 = 1;
  }
  else {
    if (iVar3 != 1) {
      *(undefined2 *)(puVar4 + 1) = 3;
      return 1;
    }
    uVar1 = 2;
  }
  *(undefined2 *)(puVar4 + 1) = uVar1;
  return 1;
}



undefined4 * fn_003432e8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00825100;
  uVar1 = param_1[1];
  uVar2 = uVar1;
  if ((uint)param_1[2] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar1,(int)(param_1[3] - uVar1) / 0xc,0);
  return param_1;
}



void fn_003432cc(undefined4 *param_1)

{
  *param_1 = &DAT_00825100;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



undefined4 fn_0034329c(int *param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 == -1) {
    param_2 = (short)param_1[4] + 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  *(undefined2 *)(param_1 + 4) = uVar1;
  return 1;
}



void fn_00342fa0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  uVar8 = *(uint *)(param_1 + 4);
  iVar1 = (param_2[1] - *param_2) / 0xc;
  uVar5 = *(uint *)(param_1 + 8);
  if (uVar8 != uVar5) {
    uVar2 = uVar8;
    if (uVar5 <= uVar8) {
      do {
        uVar2 = uVar2 + 0xc;
      } while (uVar2 != uVar5);
    }
    *(uint *)(param_1 + 8) = uVar5 + ((int)(uVar5 - uVar8) / 0xc) * -0xc;
  }
  iVar13 = 0;
  if (0 < iVar1) {
    do {
      puVar11 = *(undefined4 **)(param_1 + 8);
      puVar15 = (uint *)(param_1 + 4);
      puVar14 = (undefined4 *)(*param_2 + iVar13 * 0xc);
      if (puVar11 == *(undefined4 **)(param_1 + 0xc)) {
        uVar5 = (int)((int)puVar11 - *puVar15) / 0xc;
        if (uVar5 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar15) / 0xc)) {
          *(undefined4 **)(param_1 + 8) = puVar11 + 3;
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = puVar11[-3];
            puVar11[1] = puVar11[-2];
            puVar11[2] = puVar11[-1];
          }
          puVar6 = puVar11 + -3;
          puVar12 = puVar11;
          if (puVar11 < puVar6) {
            if (0 < (int)puVar6 - (int)puVar11) {
              uVar5 = ((int)puVar6 - (int)puVar11) / 0xc;
              if ((uVar5 & 1) != 0) {
                puVar6 = puVar11 + -6;
                puVar12 = puVar11 + -3;
                *puVar12 = *puVar6;
                puVar11[-2] = puVar11[-5];
                puVar11[-1] = puVar11[-4];
              }
              for (iVar3 = (int)uVar5 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar9 = puVar6[-2];
                uVar10 = puVar6[-1];
                puVar12[-3] = puVar6[-3];
                puVar12[-2] = uVar9;
                puVar12[-1] = uVar10;
                uVar9 = puVar6[-5];
                uVar10 = puVar6[-4];
                puVar12[-6] = puVar6[-6];
                puVar12[-5] = uVar9;
                puVar12[-4] = uVar10;
                puVar6 = puVar6 + -6;
                puVar12 = puVar12 + -6;
              }
            }
          }
          else {
            while (puVar11 != puVar6) {
              uVar9 = puVar6[-2];
              uVar10 = puVar6[-1];
              puVar12[-3] = puVar6[-3];
              puVar12[-2] = uVar9;
              puVar12[-1] = uVar10;
              puVar12 = puVar12 + -3;
              puVar6 = puVar6 + -3;
            }
          }
          uVar9 = puVar14[1];
          uVar10 = puVar14[2];
          *puVar11 = *puVar14;
          puVar11[1] = uVar9;
          puVar11[2] = uVar10;
        }
        else {
          uVar8 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
          if (uVar8 < uVar5 + 0x20) {
            uVar8 = uVar5 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar8 * 0xc,0);
          puVar12 = puVar4;
          for (puVar6 = (undefined4 *)*puVar15; puVar6 != puVar11; puVar6 = puVar6 + 3) {
            if (puVar12 != (undefined4 *)0x0) {
              uVar9 = puVar6[1];
              uVar10 = puVar6[2];
              *puVar12 = *puVar6;
              puVar12[1] = uVar9;
              puVar12[2] = uVar10;
            }
            puVar12 = puVar12 + 3;
          }
          puVar6 = puVar4 + ((int)((int)puVar11 - *puVar15) / 0xc) * 3;
          if (puVar6 != (undefined4 *)0x0) {
            uVar9 = puVar14[1];
            uVar10 = puVar14[2];
            *puVar6 = *puVar14;
            puVar6[1] = uVar9;
            puVar6[2] = uVar10;
          }
          puVar6 = *(undefined4 **)(param_1 + 8);
          puVar14 = puVar4 + ((int)((int)puVar11 - *puVar15) / 0xc) * 3;
          for (; puVar11 != puVar6; puVar11 = puVar11 + 3) {
            puVar12 = puVar14 + 3;
            if (puVar12 != (undefined4 *)0x0) {
              uVar9 = puVar11[1];
              uVar10 = puVar11[2];
              *puVar12 = *puVar11;
              puVar14[4] = uVar9;
              puVar14[5] = uVar10;
            }
            puVar14 = puVar12;
          }
          uVar2 = *puVar15;
          uVar7 = *(uint *)(param_1 + 8);
          uVar5 = uVar2;
          if (uVar7 < uVar2) {
            do {
              uVar5 = uVar5 + 0xc;
            } while (uVar5 != uVar7);
          }
          fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) / 0xc,0);
          *puVar15 = (uint)puVar4;
          *(undefined4 **)(param_1 + 8) = puVar4 + ((int)(uVar7 - uVar2) / 0xc) * 3 + 3;
          *(undefined4 **)(param_1 + 0xc) = puVar4 + uVar8 * 3;
        }
      }
      else {
        *(undefined4 **)(param_1 + 8) = puVar11 + 3;
        if (puVar11 != (undefined4 *)0x0) {
          uVar9 = puVar14[1];
          uVar10 = puVar14[2];
          *puVar11 = *puVar14;
          puVar11[1] = uVar9;
          puVar11[2] = uVar10;
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar1);
  }
  return;
}


