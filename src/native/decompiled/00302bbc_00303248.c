#include "00302bbc_00303248.h"



void fn_00303248(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_001031a4(param_2,param_1,&uStack_8);
  return;
}



void fn_00303234(undefined4 param_1,undefined4 param_2)

{
  fn_0030282a(&DAT_008f7e40,param_1,param_2);
  return;
}



undefined4 * fn_00302dac(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_20;
  uint local_1c;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &PTR_FUN_00821720;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00424c50();
  }
  puVar1[0x18] = uVar3;
  local_20 = 0x15e;
  puVar13 = puVar1 + 3;
  if ((uint)((int)(puVar1[5] - *puVar13) >> 2) < 0x15e) {
    uVar14 = (int)(puVar1[4] - *puVar13) >> 2;
    uVar8 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    local_1c = uVar14 + 0x20;
    if (uVar14 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar10 = &local_1c;
    if (local_1c < 0x15f) {
      puVar10 = &local_20;
    }
    uVar14 = *puVar10;
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar12 = (undefined4 *)puVar1[4];
    puVar5 = puVar4;
    for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar12; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar13;
    uVar8 = uVar6;
    if ((uint)puVar1[4] < uVar6) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != puVar1[4]);
    }
    fn_001008c4(uVar6,(int)(puVar1[5] - uVar6) >> 2,0);
    uVar8 = *puVar13;
    puVar1[3] = puVar4;
    puVar1[4] = (puVar1[4] - uVar8 & 0xfffffffc) + (int)puVar4;
    puVar1[5] = puVar4 + uVar14;
  }
  local_20 = 0x50;
  puVar13 = puVar1 + 6;
  if ((uint)((int)(puVar1[8] - puVar1[6]) >> 2) < 0x50) {
    uVar14 = (int)(puVar1[7] - puVar1[6]) >> 2;
    uVar8 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    local_1c = uVar14 + 0x20;
    if (uVar14 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar10 = &local_1c;
    if (local_1c < 0x51) {
      puVar10 = &local_20;
    }
    uVar14 = *puVar10;
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar12 = (undefined4 *)puVar1[7];
    puVar5 = puVar4;
    for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar12; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar13;
    uVar8 = uVar6;
    if ((uint)puVar1[7] < uVar6) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != puVar1[7]);
    }
    fn_001008c4(uVar6,(int)(puVar1[8] - uVar6) >> 2,0);
    uVar8 = *puVar13;
    puVar1[6] = puVar4;
    puVar1[7] = (puVar1[7] - uVar8 & 0xfffffffc) + (int)puVar4;
    puVar1[8] = puVar4 + uVar14;
  }
  puVar13 = puVar1 + 9;
  local_20 = 0x50;
  if ((uint)((int)(puVar1[0xb] - puVar1[9]) >> 2) < 0x50) {
    uVar14 = (int)(puVar1[10] - puVar1[9]) >> 2;
    local_1c = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_1c < uVar14 + 0x20) {
      local_1c = uVar14 + 0x20;
    }
    puVar10 = &local_1c;
    if (local_1c < 0x51) {
      puVar10 = &local_20;
    }
    uVar14 = *puVar10;
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar12 = (undefined4 *)puVar1[10];
    puVar5 = puVar4;
    for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar12; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar13;
    uVar8 = uVar6;
    if ((uint)puVar1[10] <= uVar6) {
      for (; uVar8 != puVar1[10]; uVar8 = uVar8 + 4) {
      }
    }
    fn_001008c4(uVar6,(int)(puVar1[0xb] - uVar6) >> 2,0);
    uVar8 = *puVar13;
    puVar1[9] = puVar4;
    puVar1[10] = (puVar1[10] - uVar8 & 0xfffffffc) + (int)puVar4;
    puVar1[0xb] = puVar4 + uVar14;
  }
  local_20 = 10;
  puVar13 = puVar1 + 0xc;
  if ((uint)((int)(puVar1[0xe] - puVar1[0xc]) >> 2) < 10) {
    uVar14 = (int)(puVar1[0xd] - puVar1[0xc]) >> 2;
    uVar8 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    local_1c = uVar14 + 0x20;
    if (uVar14 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar10 = &local_1c;
    if (local_1c < 0xb) {
      puVar10 = &local_20;
    }
    uVar14 = *puVar10;
    puVar4 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
    puVar12 = (undefined4 *)puVar1[0xd];
    puVar5 = puVar4;
    for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar12; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar13;
    uVar8 = uVar6;
    if ((uint)puVar1[0xd] < uVar6) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != puVar1[0xd]);
    }
    fn_001008c4(uVar6,(int)(puVar1[0xe] - uVar6) >> 2,0);
    uVar8 = *puVar13;
    puVar1[0xc] = puVar4;
    puVar1[0xd] = (puVar1[0xd] - uVar8 & 0xfffffffc) + (int)puVar4;
    puVar1[0xe] = puVar4 + uVar14;
  }
  iVar2 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)fn_0037bed4(iVar2,1,0);
  }
  piVar7 = (int *)puVar1[0x12];
  if (piVar7 != piVar11) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))();
    }
    puVar1[0x12] = piVar11;
  }
  return puVar1;
}



uint fn_00302bbc(byte param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_2[3];
  param_2[3] = uVar1 & 0xffd7ffff | 0x400000;
  if ((int)(uVar1 << 0x1a) < 0) {
    fn_003026f0(param_2);
  }
  uVar1 = param_2[3];
  if ((uVar1 & 0x1082) != 2) {
    fn_00302644(param_2);
    return 0xffffffff;
  }
  if ((uVar1 & 0xa000) == 0x8000) {
    if ((int)(uVar1 << 0xf) < 0) {
      uVar1 = param_2[0xb];
      if ((uint)param_2[0xb] <= (uint)param_2[1]) {
        uVar1 = param_2[1];
      }
      param_2[1] = uVar1;
    }
    else {
      param_2[0xb] = param_2[4];
      param_2[1] = param_2[4];
      uVar2 = fn_003023a8(param_2[5]);
      param_2[6] = uVar2;
    }
  }
  uVar1 = (uint)param_1;
  if (((int)param_2[2] < 0) && (-1 < (int)(param_2[3] << 0x16))) {
    param_2[2] = ~param_2[2];
    *param_2 = 0;
    param_2[3] = param_2[3] | 0x12000;
    pbVar3 = (byte *)param_2[1];
    param_2[1] = pbVar3 + 1;
    *pbVar3 = param_1;
    return uVar1;
  }
  param_2[3] = param_2[3] | 0x2000;
  *param_2 = 0;
  if (param_2[4] != 0) goto LAB_00302cbe;
  iVar4 = fn_0030235c(param_2[5]);
  if (iVar4 == 0) {
    iVar4 = fn_002fecec(param_2[7]);
    param_2[4] = iVar4;
    if (iVar4 == 0) goto LAB_00302c86;
    uVar8 = param_2[3];
    uVar5 = uVar8 | 0x800;
    param_2[3] = uVar5;
    if ((uVar8 & 0x3ff) >> 8 == 0) {
      uVar8 = 0x100;
      goto LAB_00302cb6;
    }
  }
  else {
    if ((*(ushort *)(param_2 + 3) & 0x3ff) >> 8 == 0) {
LAB_00302c86:
      param_2[4] = param_2 + 9;
      param_2[7] = 1;
      uVar5 = param_2[3] & 0xfffffcff;
      uVar8 = 0x400;
LAB_00302cb6:
      uVar5 = uVar5 | uVar8;
    }
    else {
      iVar4 = fn_002fecec(param_2[7]);
      param_2[4] = iVar4;
      if (iVar4 == 0) goto LAB_00302c86;
      uVar5 = param_2[3] | 0x800;
    }
    param_2[3] = uVar5;
  }
  param_2[1] = param_2[4];
LAB_00302cbe:
  uVar8 = param_2[3];
  pbVar3 = (byte *)param_2[4];
  if ((int)(uVar8 << 0x17) < 0) {
    uVar8 = param_2[0xb];
    if ((uint)param_2[0xb] <= (uint)param_2[1]) {
      uVar8 = param_2[1];
    }
    if ((uVar8 - (int)pbVar3 != 0) &&
       (iVar4 = fn_00302658(pbVar3,uVar8 - (int)pbVar3,param_2), iVar4 != 0)) {
      return 0xffffffff;
    }
    if (-1 < (int)(param_2[3] << 8)) {
      param_2[0xb] = pbVar3 + 1;
      param_2[1] = pbVar3 + 1;
      param_2[2] = param_2[7] + -1;
      param_2[3] = param_2[3] | 0x10000;
      *pbVar3 = param_1;
      return uVar1;
    }
    param_2[0xb] = pbVar3;
    param_2[1] = pbVar3;
    param_2[2] = 0;
  }
  else {
    if ((int)(uVar8 << 8) < 0) {
      uVar8 = uVar8 & 0x10000;
    }
    else {
      pbVar6 = (byte *)param_2[1];
      param_2[1] = pbVar6 + 1;
      *pbVar6 = param_1;
      param_2[3] = param_2[3] | 0x10000;
      if (uVar1 == 10) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
    }
    uVar5 = param_2[0xb];
    uVar7 = param_2[1];
    if (uVar7 < uVar5) {
      uVar9 = uVar5;
    }
    else {
      uVar9 = uVar7;
    }
    iVar4 = uVar9 - (int)pbVar3;
    if ((((int)((uint)*(ushort *)(param_2 + 3) << 0x15) < 0) || ((int)param_2[7] <= iVar4)) ||
       (uVar8 != 0)) {
      if (uVar5 <= uVar7) {
        uVar5 = uVar7;
      }
      param_2[0xb] = pbVar3;
      param_2[1] = pbVar3;
      param_2[2] = 0;
      if ((0 < iVar4) && (iVar4 = fn_00302658(pbVar3,iVar4,param_2,iVar4,param_4), iVar4 != 0)) {
        return 0xffffffff;
      }
      if (uVar5 - uVar7 != 0) {
        param_2[0xb] = pbVar3;
        param_2[1] = pbVar3;
        param_2[6] = param_2[6] - (uVar5 - uVar7);
        param_2[3] = param_2[3] | 0x10;
      }
    }
    if (-1 < (int)(param_2[3] << 8)) {
      return uVar1;
    }
    iVar4 = param_2[1];
    param_2[0xb] = pbVar3;
    param_2[1] = pbVar3;
    param_2[6] = param_2[6] + (iVar4 - (int)pbVar3);
  }
  return 0xfffffffe;
}


