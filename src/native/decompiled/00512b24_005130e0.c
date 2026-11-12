#include "00512b24_005130e0.h"



undefined1 * fn_005130e0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_00509460();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008c06a8 == 0) {
    puVar3 = (undefined4 *)fn_004ecfe0(0x7a0);
    iVar1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *(undefined1 *)(puVar3 + 1) = 0;
      iVar1 = fn_00101a1c(puVar3 + 2,&LAB_00513fc4,0x18,0x20);
      iVar4 = fn_00101a1c(iVar1 + 0x340,&LAB_00513fc4,0x18,0x20);
      iVar1 = iVar4 + -0x348;
      *(undefined4 *)(iVar4 + 0x450) = 0;
      *(undefined4 *)(iVar4 + 0x454) = 0;
    }
    DAT_008c06a8 = iVar1;
    if (0x3fefffff < iVar1 - 0x100000U) {
      return (undefined1 *)0xe0614820;
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_d8a1482e;
  }
  return puVar2;
}



undefined8 fn_00512f9c(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 - 0x100000U < 0x3ff00000) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    puVar1 = &DAT_e0a14821;
  }
  else {
    iVar2 = fn_004ecfe0(0x120);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = fn_00513e2c();
    }
    param_2 = iVar3 - 0x100000;
    *param_1 = iVar3;
    if (0x3fefffff < param_2) {
      if (DAT_008c0630 != 0) {
        param_2 = 8;
      }
      return CONCAT44(param_2,0xe0614820);
    }
    puVar1 = (undefined1 *)0x0;
  }
  return CONCAT44(param_2,puVar1);
}



void fn_00512f30(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 500;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x90;
  *(undefined1 *)(param_1 + 10) = 0xfd;
  *(undefined1 *)((int)param_1 + 0x29) = 5;
  *(undefined1 *)((int)param_1 + 0x2a) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  return;
}



void fn_00512f1c(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x1c) = param_2;
  DAT_008ed95c = param_2;
  return;
}



void fn_00512de8(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *param_1 = 0;
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[1] = 0;
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[4] = 0;
  }
  bVar2 = (char)param_1[0xd] != '\0';
  if (bVar2) {
    iVar1 = param_1[5];
  }
  if (bVar2 && iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[5] = 0;
  }
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[6] = 0;
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[0xe] = 0;
  }
  return;
}



undefined4 fn_00512b24(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint local_44;
  
  uVar11 = 0;
  iVar12 = 0;
  uVar13 = *(uint *)(DAT_008bf4d4 + 0x30);
  uVar4 = (uint)*(byte *)(param_1 + 0x29) * uVar13 * uVar13;
  if ((uVar4 & 7) != 0) {
    uVar4 = uVar4 + (8 - (uVar4 & 7));
  }
  uVar4 = uVar4 >> 3;
  uVar5 = 0xe0e14826;
  if ((uVar4 + uVar13 * 4 + 4 <= param_3) && (param_2 - 0x100000U < 0x3ff00000)) {
    local_44 = 0;
    if (uVar13 != 0) {
      do {
        uVar10 = 0;
        if (uVar13 != 0) {
          do {
            uVar6 = 0;
            cVar1 = ('\b' - (char)uVar11) - *(byte *)(param_1 + 0x29);
            uVar9 = (uint)cVar1;
            if ((int)uVar9 < 0) {
              pbVar2 = (byte *)(param_2 + iVar12);
              uVar11 = 0;
              iVar12 = iVar12 + 1;
              uVar6 = ((1 << (*(byte *)(param_1 + 0x29) + uVar9 & 0xff)) - 1U & (uint)*pbVar2) <<
                      (-uVar9 & 0xff) & 0xff;
              uVar9 = (uint)(char)(cVar1 + '\b');
            }
            bVar3 = *(byte *)(param_2 + iVar12);
            uVar6 = uVar6 + ((uint)(bVar3 >> (uVar9 & 0xff)) &
                            (1 << ((8 - uVar9) - uVar11 & 0xff)) - 1U);
            uVar11 = uVar6 & 0xff;
            *(char *)(uVar10 + local_44 * uVar13 + *(int *)(param_1 + 8)) = (char)uVar6;
            param_4 = (uint)bVar3;
            if ((uVar13 <= uVar11) && (DAT_008c0630 != 0)) {
              param_4 = uVar11;
            }
            if (uVar9 == 0) {
              iVar12 = iVar12 + 1;
            }
            uVar11 = 8 - uVar9 & 0xff;
            if (uVar9 == 0) {
              uVar11 = 0;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar13);
        }
        local_44 = local_44 + 1;
      } while (local_44 < uVar13);
    }
    uVar11 = 0;
    if (uVar13 != 0) {
      do {
        pbVar2 = (byte *)(param_2 + uVar4);
        iVar12 = uVar4 + 1;
        iVar7 = uVar4 + 2;
        iVar8 = uVar4 + 3;
        param_4 = *(uint *)(param_1 + 0x10);
        uVar4 = uVar4 + 4;
        *(uint *)(param_4 + uVar11 * 4) =
             (uint)*pbVar2 * 0x1000000 + (uint)*(byte *)(param_2 + iVar12) * 0x10000 +
             (uint)*(byte *)(param_2 + iVar7) * 0x100 + (uint)*(byte *)(param_2 + iVar8);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
    fn_001694e4(param_1 + 0x30,uVar4 + param_2,4);
    uVar4 = 0;
    uVar11 = *(uint *)(DAT_008bf4d4 + 0x30);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (uVar11 != 0) {
      do {
        if (uVar11 != 0) {
          param_4 = *(uint *)(param_1 + 8);
        }
        uVar10 = 0;
        if (uVar11 != 0) {
          param_4 = uVar4 * uVar11 + param_4;
          do {
            if (*(byte *)(uVar10 + param_4) != uVar4) {
              *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1 << (uVar4 & 0xff);
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar11);
    }
    fn_001694e4(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 8),uVar13 * uVar13);
    uVar5 = 0;
  }
  return uVar5;
}


