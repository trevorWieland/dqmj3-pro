#include "00118a68_00118e70.h"



void fn_00118e70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_001249d0();
  fn_00124b28(uVar2,param_2);
  return;
}



undefined4 * fn_00118e24(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &DAT_00850d54;
  uVar1 = fn_00118290();
  param_1[1] = uVar1;
  uVar1 = fn_001287b4();
  param_1[2] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



undefined4 * fn_00118dcc(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_r4;
  
  *param_1 = &DAT_00859490;
  param_1[1] = 0;
  puVar1 = (undefined1 *)fn_00145b00(1,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    unaff_r4 = puVar1;
  }
  if (puVar1 == (undefined1 *)0x0) {
    unaff_r4 = (undefined1 *)0x0;
  }
  if ((undefined1 *)param_1[1] != unaff_r4) {
    fn_002feef8();
    param_1[1] = unaff_r4;
  }
  return param_1;
}



undefined4 *
fn_00118ca8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  *param_1 = &DAT_00859430;
  param_1[1] = 0;
  puVar2 = (undefined4 *)fn_00145b00(0x48,&DAT_00812c8c,param_3,param_4,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
  }
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 != puVar2) {
    if (puVar6 != (undefined4 *)0x0) {
      uVar3 = puVar6[1];
      uVar5 = puVar6[2];
      uVar1 = uVar3;
      if (uVar3 < uVar5) {
        if (0 < (int)(uVar5 - uVar3)) {
          for (iVar4 = (int)(uVar5 - uVar3) >> 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          }
        }
      }
      else {
        for (; uVar1 != uVar5; uVar1 = uVar1 + 8) {
        }
      }
      fn_001008c4(uVar3,(int)(puVar6[3] - uVar3) >> 3,0);
      fn_002feef8(puVar6);
    }
    param_1[1] = puVar2;
  }
  fn_00128858(param_1,param_2);
  return param_1;
}



void fn_00118a68(int param_1)

{
  uint *puVar1;
  undefined4 extraout_r1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  
  iVar4 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar4 + 0x18) != 0 || *(int *)(iVar4 + 0x1c) != 0) ||
     (*(int *)(iVar4 + 0x24) != 0 || *(int *)(iVar4 + 0x20) != 0)) {
    if (*(int *)(iVar4 + 0x18) == 0 && *(int *)(iVar4 + 0x1c) == 0) {
      uVar5 = 0;
      uVar6 = uVar5;
    }
    else {
      uVar13 = fn_0011a534(iVar4);
      uVar6 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
      uVar5 = (uint)uVar13 - uVar6;
      uVar6 = (int)((ulonglong)uVar13 >> 0x20) -
              (*(int *)(*(int *)(param_1 + 4) + 0x1c) + (uint)((uint)uVar13 < uVar6));
    }
    iVar4 = *(int *)(param_1 + 4);
    uVar7 = uVar5 + *(uint *)(iVar4 + 0x20);
    uVar8 = uVar6 + *(int *)(iVar4 + 0x24) + (uint)CARRY4(uVar5,*(uint *)(iVar4 + 0x20));
    puVar1 = (uint *)(*(int *)(iVar4 + 4) + *(int *)(iVar4 + 0x10) * 8);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar11 = *(undefined4 **)(param_1 + 4);
    fn_00169f1c(puVar11[4] + 1,*puVar11);
    puVar11[4] = extraout_r1;
    iVar4 = *(int *)(param_1 + 4);
    uVar6 = *(uint *)(iVar4 + 0x30);
    uVar5 = *(uint *)(iVar4 + 0x34);
    if ((int)(uVar8 - (uVar5 + (uVar7 < uVar6))) < 0 ==
        (SBORROW4(uVar8,uVar5) != SBORROW4(uVar8 - uVar5,(uint)(uVar7 < uVar6)))) {
      if (uVar6 == uVar9 && uVar5 == uVar10) {
        puVar1 = *(uint **)(iVar4 + 4);
        puVar12 = *(uint **)(iVar4 + 8);
        if (puVar1 != puVar12) {
          puVar2 = puVar1 + 2;
          if (puVar2 < puVar12) {
            if (0 < (int)puVar12 - (int)puVar2) {
              iVar3 = (int)puVar12 - (int)puVar2 >> 3;
              do {
                uVar5 = puVar2[1];
                uVar6 = puVar1[1];
                if ((int)(uVar5 - (uVar6 + (*puVar2 < *puVar1))) < 0 !=
                    (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)(*puVar2 < *puVar1)))) {
                  puVar1 = puVar2;
                }
                iVar3 = iVar3 + -1;
                puVar2 = puVar2 + 2;
              } while (iVar3 != 0);
            }
          }
          else {
            for (; puVar2 != puVar12; puVar2 = puVar2 + 2) {
              uVar5 = puVar2[1];
              uVar6 = puVar1[1];
              if ((int)(uVar5 - (uVar6 + (*puVar2 < *puVar1))) < 0 !=
                  (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)(*puVar2 < *puVar1)))) {
                puVar1 = puVar2;
              }
            }
          }
        }
        uVar6 = puVar1[1];
        *(uint *)(iVar4 + 0x30) = *puVar1;
        *(uint *)(iVar4 + 0x34) = uVar6;
      }
    }
    else {
      *(uint *)(iVar4 + 0x30) = uVar7;
      *(uint *)(iVar4 + 0x34) = uVar8;
    }
    iVar4 = *(int *)(param_1 + 4);
    uVar5 = *(uint *)(iVar4 + 0x28);
    uVar6 = *(uint *)(iVar4 + 0x2c);
    if ((int)(uVar6 - (uVar8 + (uVar5 < uVar7))) < 0 ==
        (SBORROW4(uVar6,uVar8) != SBORROW4(uVar6 - uVar8,(uint)(uVar5 < uVar7)))) {
      if (uVar6 == uVar10 && uVar5 == uVar9) {
        puVar1 = *(uint **)(iVar4 + 4);
        puVar12 = *(uint **)(iVar4 + 8);
        if (puVar1 != puVar12) {
          puVar2 = puVar1 + 2;
          if (puVar2 < puVar12) {
            if (0 < (int)puVar12 - (int)puVar2) {
              iVar3 = (int)puVar12 - (int)puVar2 >> 3;
              do {
                uVar5 = puVar1[1];
                uVar6 = puVar2[1];
                if ((int)(uVar5 - (uVar6 + (*puVar1 < *puVar2))) < 0 !=
                    (SBORROW4(uVar5,uVar6) != SBORROW4(uVar5 - uVar6,(uint)(*puVar1 < *puVar2)))) {
                  puVar1 = puVar2;
                }
                iVar3 = iVar3 + -1;
                puVar2 = puVar2 + 2;
              } while (iVar3 != 0);
            }
          }
          else {
            for (; puVar2 != puVar12; puVar2 = puVar2 + 2) {
              uVar5 = puVar2[1];
              uVar6 = puVar1[1];
              if ((int)(uVar6 - (uVar5 + (*puVar1 < *puVar2))) < 0 !=
                  (SBORROW4(uVar6,uVar5) != SBORROW4(uVar6 - uVar5,(uint)(*puVar1 < *puVar2)))) {
                puVar1 = puVar2;
              }
            }
          }
        }
        uVar6 = puVar1[1];
        *(uint *)(iVar4 + 0x28) = *puVar1;
        *(uint *)(iVar4 + 0x2c) = uVar6;
      }
    }
    else {
      *(uint *)(iVar4 + 0x28) = uVar7;
      *(uint *)(iVar4 + 0x2c) = uVar8;
    }
    iVar4 = *(int *)(param_1 + 4);
    uVar6 = *(uint *)(iVar4 + 0x40);
    uVar5 = uVar6 + (uVar7 - uVar9);
    iVar3 = *(int *)(iVar4 + 0x44) + (uVar8 - (uVar10 + (uVar7 < uVar9))) +
            (uint)CARRY4(uVar6,uVar7 - uVar9);
    *(uint *)(iVar4 + 0x40) = uVar5;
    *(int *)(iVar4 + 0x44) = iVar3;
    puVar11 = *(undefined4 **)(param_1 + 4);
    uVar13 = fn_0011c134(uVar5,iVar3,*puVar11,0);
    *(undefined8 *)(puVar11 + 0xe) = uVar13;
    iVar4 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    iVar4 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
  }
  return;
}


