#include "00676150_00676818.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


int fn_00676818(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    if (*(int *)(DAT_00898840 + 0x34) == 2) {
      fn_0066eb80(DAT_00898840,6);
      fn_006701e0();
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
    if (*(int *)(DAT_00898840 + 0x34) == 1) {
      fn_0066eb80(DAT_00898840,8);
      fn_00671d38();
      (**(code **)(*param_1 + 0x34))(param_1,2);
      return 0;
    }
    return 0;
  }
  if (iVar1 == 1) {
    iVar1 = fn_0066eb80(DAT_00898840,6);
    if ((*(byte *)(iVar1 + 0x4c) & 1) == 0) {
      return 0;
    }
    iVar1 = fn_00676994(param_1);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 0;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar1 = fn_0066eb80(DAT_00898840,8);
    if ((*(byte *)(iVar1 + 0x4c) & 1) == 0) {
      return 0;
    }
    iVar1 = fn_00676994(param_1);
  }
  if (iVar1 == 0) {
    param_1[0x13] = param_1[0x13] | 1;
    (**(code **)(*param_1 + 0x34))(param_1,3);
  }
  return iVar1;
}



undefined4 fn_006766f4(int *param_1)

{
  int iVar1;
  
  if (param_1[0x12] == 0) {
    if (DAT_008bf4d4 != 0) {
      if ((DAT_00898878 != 0) &&
         (iVar1 = fn_0050c6d8(DAT_008bf4d4 + 0x10,DAT_00898878,0x3000), iVar1 != 0)) {
        fn_0050ea60();
        fn_0050c738(DAT_008bf4d4 + 0x10,DAT_00898878);
        DAT_00898878 = 0;
      }
      if ((DAT_00898874 != 0) &&
         (iVar1 = fn_0050c6d8(DAT_008bf4d4 + 0x10,DAT_00898874,0x2000), iVar1 != 0)) {
        fn_005147b4();
        fn_0050c738(DAT_008bf4d4 + 0x10,DAT_00898874);
        DAT_00898874 = 0;
      }
      if (DAT_008bf4d4 != 0) {
        fn_0051d8e4();
      }
      fn_0051ced4();
    }
    param_1[0x13] = 0;
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if ((param_1[0x12] == 1) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return 0;
}



void fn_00676688(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_40 [40];
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar1 = fn_0066eb80(DAT_00898840,0xb);
  fn_00674100(&local_18,uVar1,param_2);
  uVar1 = fn_0050b0d4(DAT_008bf4cc,local_18,uStack_14);
  fn_0051c664(uVar1,auStack_40);
  fn_00103130(param_3,auStack_40,0xb);
  return;
}



void fn_0067664c(int param_1,int param_2)

{
  undefined4 in_s16;
  
  fn_0066ec18(param_2);
  *(undefined4 *)(param_2 + 0x14) = in_s16;
  *(undefined4 *)(param_2 + 0xc) = 8;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x44);
  return;
}



undefined4 fn_00676624(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((DAT_008bf4d4 != 0) && ((*(uint *)(DAT_008bf4d4 + 0x38) & 0x80000000) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006765e8(int *param_1)

{
  bool bVar1;
  
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  bVar1 = (*(byte *)(param_1 + 0x13) & 1) == 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x30))(param_1,1);
  }
  return bVar1;
}



void fn_00676384(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar8;
  undefined4 *puVar7;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  
  cVar2 = *(char *)(param_1 + 0x10029);
  do {
    if (cVar2 == '\0') {
      return;
    }
    uVar12 = 0;
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    if (uVar1 != 0) {
      do {
        piVar13 = *(int **)(*(int *)(param_1 + 4) + uVar12 * 4);
        iVar3 = (**(code **)(*piVar13 + 4))(piVar13);
        if (iVar3 == 0) {
          for (puVar11 = *(undefined4 **)(param_1 + 4); *(undefined4 **)(param_1 + 8) != puVar11;
              puVar11 = puVar11 + 1) {
            piVar6 = (int *)*puVar11;
            if (piVar6 == piVar13) {
              (**(code **)(*piVar6 + 0x14))(piVar6);
              puVar4 = *(undefined4 **)(param_1 + 8);
              if (*(undefined4 **)(param_1 + 4) != puVar4) {
                puVar7 = puVar11 + 1;
                if (puVar4 != puVar7) {
                  if (puVar4 < puVar7) {
                    do {
                      puVar8 = puVar7 + 1;
                      *puVar11 = *puVar7;
                      puVar7 = puVar8;
                      puVar11 = puVar11 + 1;
                    } while (puVar8 != puVar4);
                  }
                  else {
                    uVar10 = (int)puVar4 - (int)puVar7;
                    if (0 < (int)uVar10) {
                      uVar5 = (uVar10 & 7) >> 2;
                      if (uVar5 != 0) {
                        *puVar11 = *puVar7;
                      }
                      uVar9 = (uint)(uVar5 != 0);
                      for (; (int)uVar5 < (int)uVar10 >> 2; uVar5 = uVar5 + 2) {
                        puVar11[uVar9] = puVar7[uVar9];
                        puVar11[uVar9 + 1] = puVar7[uVar9 + 1];
                        uVar9 = uVar9 + 2;
                      }
                    }
                  }
                }
                *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
              }
              break;
            }
          }
          uVar12 = uVar12 - 1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar1);
    }
    if (*(int *)(param_1 + 0x1002c) != 0) {
      fn_0012d6a4(&DAT_004c4b40,0);
    }
    svc_0xa();
    cVar2 = *(char *)(param_1 + 0x10029);
  } while( true );
}



undefined4 fn_0067633c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((iVar1 == 1 || iVar1 == 4) || (iVar1 == 6 || iVar1 == 7)) || (iVar1 == 8 || iVar1 == 9)) ||
     (iVar1 == 10 || iVar1 == 0xb)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_0067629c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &DAT_00859f04;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[2] = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  DAT_0089883c = 0;
  uVar3 = param_1[1];
  uVar2 = uVar3;
  if ((uint)param_1[2] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[2]);
  }
  fn_001008c4(uVar3,(int)(param_1[3] - uVar3) >> 2,0);
  return param_1;
}



undefined4 * fn_00676150(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  puVar8 = param_1 + 1;
  *param_1 = &DAT_00859f04;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_20 = 8;
  if ((uint)((int)(param_1[3] - param_1[1]) >> 2) < 8) {
    uVar9 = (int)(param_1[2] - param_1[1]) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar1 = local_1c;
    if (local_1c[0] < 9) {
      puVar1 = &local_20;
    }
    uVar9 = *puVar1;
    puVar2 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = (undefined4 *)param_1[2];
    puVar3 = puVar2;
    for (puVar5 = (undefined4 *)*puVar8; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar5;
      }
      puVar3 = puVar3 + 1;
    }
    uVar7 = *puVar8;
    uVar4 = uVar7;
    if ((uint)param_1[2] < uVar7) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[2]);
    }
    fn_001008c4(uVar7,(int)(param_1[3] - uVar7) >> 2,0);
    uVar4 = *puVar8;
    param_1[1] = puVar2;
    param_1[2] = (param_1[2] - uVar4 & 0xfffffffc) + (int)puVar2;
    param_1[3] = puVar2 + uVar9;
  }
  DAT_0089883c = param_1;
  fn_0066e464(DAT_00898840,fn_00676094,fn_0067602c,fn_006760fc);
  return param_1;
}


