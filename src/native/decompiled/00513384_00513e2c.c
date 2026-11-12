#include "00513384_00513e2c.h"



int fn_00513e2c(int param_1)

{
  fn_00301f50(param_1,0x10c);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  return param_1;
}



void fn_00513b80(int *param_1)

{
  if (*param_1 != 0) {
    fn_004ecfd0(*param_1);
    *param_1 = 0;
  }
  return;
}



longlong fn_00513994(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_008c0630;
  if (0x3fefffff < *param_1 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
    puVar1 = &DAT_e0a1482b;
LAB_005139f0:
    return CONCAT44(puVar2,puVar1);
  }
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if (uVar3 == 0) {
    uVar3 = DAT_008bf4d0 - 0x100000;
    if (uVar3 < 0x3ff00000) {
      puVar1 = (undefined1 *)fn_00513d5c(*param_1);
      puVar2 = (undefined4 *)((uint)puVar1 & 0x80000000);
      if (-1 < (int)puVar2) {
        uVar3 = *(uint *)(DAT_008bf4d4 + 0xc);
        param_1[0x1e6] = *(int *)(DAT_008bf4d4 + 8);
        param_1[0x1e7] = uVar3;
        *(undefined1 *)(param_1 + 1) = 1;
        return (ulonglong)uVar3 << 0x20;
      }
      goto LAB_005139f0;
    }
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar3 = 8;
  }
  return CONCAT44(uVar3,&DAT_e0a14827);
}



longlong fn_00513d5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    fn_005186b8(param_1);
    uVar1 = *(uint *)(DAT_008bf4d4 + 0xc);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(DAT_008bf4d4 + 8);
    *(uint *)(param_1 + 0x114) = uVar1;
    *(undefined1 *)(param_1 + 0x118) = 1;
    return (ulonglong)uVar1 << 0x20;
  }
  if (DAT_008c0630 != 0) {
    param_2 = 8;
  }
  return CONCAT44(param_2,&DAT_e0a14827);
}



void fn_005138e4(int *param_1)

{
  if ((char)param_1[1] != '\0') {
    if (*param_1 - 0x100000U < 0x3ff00000) {
      fn_00513d48();
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



void fn_00513d48(int param_1)

{
  if (*(char *)(param_1 + 0x118) != '\0') {
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



longlong fn_00513618(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint extraout_r1;
  undefined4 uVar4;
  
  puVar2 = &DAT_008c0630;
  if (0x3fefffff < *param_1 - 0x100000U) {
    if (DAT_008c0630 != 0) {
      puVar2 = (undefined4 *)0x8;
    }
    puVar1 = &DAT_e0a1482b;
LAB_0051369c:
    return CONCAT44(puVar2,puVar1);
  }
  if ((char)param_1[1] == '\0') {
    uVar3 = 0;
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
  }
  else {
    uVar3 = DAT_008bf4d0 - 0x100000;
    if (uVar3 < 0x3ff00000) {
      puVar1 = (undefined1 *)fn_00513ba8(*param_1);
      puVar2 = (undefined4 *)((uint)puVar1 & 0x80000000);
      if (-1 < (int)puVar2) {
        puVar1 = (undefined1 *)fn_006da94c(*param_1,param_1 + 0x1a2);
        puVar2 = (undefined4 *)((uint)puVar1 & 0x80000000);
        if (-1 < (int)puVar2) {
          uVar4 = *(undefined4 *)(DAT_008bf4d4 + 0x2c);
          puVar1 = (undefined1 *)fn_006d9940(uVar4,param_1 + 2,param_1 + 0xd2);
          puVar2 = (undefined4 *)((uint)puVar1 & 0x80000000);
          if (-1 < (int)puVar2) {
            fn_0050a454(uVar4);
            return (ulonglong)extraout_r1 << 0x20;
          }
        }
      }
      goto LAB_0051369c;
    }
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
  }
  return CONCAT44(uVar3,&DAT_e0a14827);
}



longlong fn_00513ba8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  char local_30 [12];
  
  iVar6 = DAT_008bf4cc;
  if (*(char *)(param_1 + 0x118) != '\0') {
    if (DAT_008bf4cc - 0x100000U < 0x3ff00000) {
      local_30[0] = '\0';
      local_30[1] = '\0';
      local_30[2] = '\0';
      local_30[3] = '\0';
      local_30[4] = '\0';
      local_30[5] = '\0';
      local_30[6] = '\0';
      local_30[7] = '\0';
      local_30[8] = '\0';
      local_30[9] = '\0';
      local_30[10] = '\0';
      local_30[0xb] = '\0';
      iVar9 = *(int *)(DAT_008bf4cc + 0xa4);
      for (piVar8 = (int *)(DAT_008bf4cc + 0x3c);
          piVar8 != (int *)(iVar6 + *(int *)(iVar6 + 0x38) * 4 + 0x3c); piVar8 = piVar8 + 1) {
        iVar3 = *piVar8;
        if (((iVar3 != iVar9) && (uVar5 = (uint)*(byte *)(iVar3 + 0x14), uVar5 < 0xb)) &&
           (iVar3 - 0xfffc8U < 0x3ff00000)) {
          local_30[uVar5] = '\x01';
          puVar10 = (undefined4 *)(param_1 + uVar5 * 0x18);
          uVar1 = fn_006dbb64(*piVar8);
          *puVar10 = uVar1;
          uVar1 = *(undefined4 *)(iVar3 + 0x48);
          uVar4 = *(undefined4 *)(iVar3 + 0x4c);
          if (*(char *)(puVar10 + 5) == '\0') {
            puVar10[2] = uVar1;
            puVar10[4] = uVar4;
            puVar10[1] = uVar1;
            *(undefined1 *)(puVar10 + 5) = 1;
            puVar10[3] = puVar10[4];
          }
          else {
            uVar7 = puVar10[4];
            puVar10[4] = uVar4;
            puVar10[1] = puVar10[2];
            puVar10[2] = uVar1;
            puVar10[3] = uVar7;
          }
        }
      }
      uVar5 = 0;
      iVar6 = 0xc;
      pcVar2 = local_30;
      do {
        if (*pcVar2 == '\0') {
          *(undefined1 *)(param_1 + uVar5 * 0x18 + 0x14) = 0;
        }
        iVar6 = iVar6 + -1;
        uVar5 = uVar5 + 1;
        pcVar2 = pcVar2 + 1;
      } while (iVar6 != 0);
      return (ulonglong)uVar5 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
  }
  return CONCAT44(param_2,&DAT_e0a14827);
}



void fn_00513384(int *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 local_370 [4];
  undefined4 local_360 [188];
  uint local_70;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (0x3fefffff < *param_1 - 0x100000U) {
    return;
  }
  local_30 = *(undefined4 *)(DAT_008bf4d4 + 0x2c);
  fn_00101a1c(local_370,&LAB_00513fc4,0x18,0x20);
  iVar4 = fn_006d9940(local_30,local_370,0);
  if (iVar4 < 0) {
    return;
  }
  DAT_008edd98 = 0;
  DAT_008eddd8 = local_40;
  DAT_008ede18 = local_38;
  DAT_008ede1c = uStack_34;
  if (local_70 < 0xf) {
    uVar8 = local_70;
    if (local_70 != 0) goto LAB_00513418;
  }
  else {
    uVar8 = 0xf;
LAB_00513418:
    iVar4 = 0;
    puVar10 = local_360;
    puVar9 = &DAT_008edd9c;
    puVar11 = local_370 + 3;
    puVar13 = &DAT_008ede20;
    puVar14 = &DAT_008edddc;
    do {
      uVar8 = uVar8 - 1;
      *puVar9 = local_370[iVar4 * 6];
      iVar4 = iVar4 + 1;
      *puVar14 = *puVar11;
      uVar5 = *puVar10;
      uVar17 = puVar10[1];
      puVar10 = puVar10 + 6;
      *puVar13 = uVar5;
      puVar13[1] = uVar17;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 6;
      puVar13 = puVar13 + 2;
      puVar14 = puVar14 + 1;
    } while (uVar8 != 0);
  }
  iVar4 = fn_006d9940(local_30,0,local_370);
  if (iVar4 < 0) {
    return;
  }
  DAT_008ede98 = 0;
  DAT_008eded8 = local_40;
  DAT_008edf18 = local_38;
  DAT_008edf1c = uStack_34;
  if (local_70 < 0xf) {
    if (local_70 == 0) goto LAB_00513500;
  }
  else {
    local_70 = 0xf;
  }
  iVar4 = 0;
  puVar10 = local_360;
  puVar9 = &DAT_008ede9c;
  puVar11 = &DAT_008edf20;
  puVar13 = local_370 + 3;
  puVar14 = &DAT_008ededc;
  do {
    local_70 = local_70 - 1;
    *puVar9 = local_370[iVar4 * 6];
    iVar4 = iVar4 + 1;
    *puVar14 = *puVar13;
    uVar5 = *puVar10;
    uVar17 = puVar10[1];
    puVar10 = puVar10 + 6;
    *puVar11 = uVar5;
    puVar11[1] = uVar17;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 2;
    puVar13 = puVar13 + 6;
    puVar14 = puVar14 + 1;
  } while (local_70 != 0);
LAB_00513500:
  iVar4 = DAT_008bf4cc;
  if ((DAT_008bf4cc - 0x100000U < 0x3ff00000) &&
     (iVar16 = *(int *)(DAT_008bf4cc + 0xa4), iVar16 - 0x100000U < 0x3ff00000)) {
    iVar15 = 0;
    for (piVar12 = (int *)(DAT_008bf4cc + 0x3c);
        piVar12 != (int *)(iVar4 + *(int *)(iVar4 + 0x38) * 4 + 0x3c); piVar12 = piVar12 + 1) {
      iVar6 = *piVar12;
      iVar7 = iVar15;
      if ((iVar6 != iVar16) && (iVar6 - 0xfffc8U < 0x3ff00000)) {
        uVar1 = *(undefined1 *)(iVar6 + 0x14);
        local_2c = fn_006dbb64();
        if (*(int *)(iVar6 + 0x48) == 0) {
          uVar3 = 0xffff;
        }
        else {
          lVar2 = (ulonglong)*(uint *)(iVar6 + 0x4c) * 10000;
          uVar3 = fn_00169c20((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),*(int *)(iVar6 + 0x48),0);
        }
        iVar7 = fn_0051c788(*piVar12,&local_30);
        if (iVar7 < 0) {
          local_30 = 0xffffffff;
        }
        uVar5 = fn_004ed478(local_30);
        (&DAT_008edf98)[iVar15] = uVar5;
        (&DAT_008edff4)[iVar15] = uVar1;
        (&DAT_008ee00c)[iVar15] = (short)local_2c;
        iVar7 = iVar15 + 1;
        (&DAT_008ee03a)[iVar15] = uVar3;
      }
      iVar15 = iVar7;
    }
  }
  return;
}


