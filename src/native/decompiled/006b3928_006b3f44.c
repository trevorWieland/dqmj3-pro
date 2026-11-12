#include "006b3928_006b3f44.h"



undefined4 fn_006b3f44(undefined4 param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x45 < param_2)) {
    return 0;
  }
  return *(undefined4 *)(&DAT_007ba240 + param_2 * 0x10);
}



undefined4 fn_006b3f1c(undefined4 param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x45 < param_2)) {
    return 0;
  }
  return (&DAT_007ba238)[param_2 * 4];
}



undefined4 fn_006b3ef0(undefined4 param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x45 < param_2)) {
    return 0;
  }
  return *(undefined4 *)(&DAT_007ba23c + param_2 * 0x10);
}



int fn_006b3ec4(undefined4 param_1,uint param_2)

{
  if (((int)param_2 < 0) || (0x45 < param_2)) {
    return 0;
  }
  return (int)(char)(&DAT_007ba244)[param_2 * 0x10];
}



int * fn_006b3e50(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == param_2) {
    return param_1;
  }
  uVar3 = 0;
  iVar2 = param_1[0x28] - param_1[0x27] >> 0x1f;
  iVar1 = (param_1[0x28] - param_1[0x27]) / 0x90 + iVar2;
  if (iVar1 != iVar2) {
    do {
      if (*(int *)(param_1[0x27] + uVar3 * 0x90) == param_2) {
        return (int *)(param_1[0x27] + uVar3 * 0x90);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(iVar1 - iVar2));
  }
  return (int *)0x0;
}



int fn_006b3e34(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b38f4(param_1 + 0x90);
  return iVar1 - *(int *)(param_1 + 0xa8);
}



int fn_006b3e10(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x02') {
    param_1 = 1;
  }
  else {
    if (cVar1 == '\0') {
      param_1 = *(int *)(param_1 + 0xa8);
    }
    if (cVar1 != '\0' || param_1 != 1) {
      param_1 = 0;
    }
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x006b3bc8) */
/* WARNING: Removing unreachable block (ram,0x006b3b9c) */
/* WARNING: Removing unreachable block (ram,0x006b3ba0) */
/* WARNING: Removing unreachable block (ram,0x006b3ba4) */
/* WARNING: Removing unreachable block (ram,0x006b3ba8) */
/* WARNING: Removing unreachable block (ram,0x006b3bac) */
/* WARNING: Removing unreachable block (ram,0x006b3d3c) */
/* WARNING: Removing unreachable block (ram,0x006b3d40) */
/* WARNING: Removing unreachable block (ram,0x006b3d44) */
/* WARNING: Removing unreachable block (ram,0x006b3d48) */
/* WARNING: Removing unreachable block (ram,0x006b3d4c) */

undefined4 fn_006b3af0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  puVar7 = &local_38;
  puVar9 = (undefined4 *)0x0;
  puVar11 = (undefined4 *)0x0;
  local_34 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_30 = fn_006b8478();
  if (0x3fffffff < local_30) {
    local_38 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7649);
  }
  if (local_30 != 0) {
    if (0x1f < local_30) {
      puVar7 = &local_30;
    }
    local_38 = 0x20;
    uVar10 = *puVar7;
    puVar9 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    fn_001008c4(0,0,0);
    puVar11 = puVar9 + uVar10;
  }
  iVar12 = 0;
  iVar1 = fn_006b8478(local_34);
  puVar6 = puVar9;
  puVar5 = puVar9;
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b074(local_34,iVar12);
      if (puVar6 == puVar11) {
        uVar10 = (int)puVar6 - (int)puVar9 >> 2;
        if (uVar10 < (uint)((int)puVar11 - (int)puVar9 >> 2)) {
          puVar3 = puVar6 + -1;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = puVar6[-1];
          }
          puVar5 = puVar6 + 1;
          puVar4 = puVar6;
          if (puVar6 < puVar3) {
            if (0 < (int)puVar3 - (int)puVar6) {
              iVar1 = (int)puVar3 - (int)puVar6 >> 2;
              iVar8 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar6[iVar8 + -1] = puVar3[iVar8 + -1];
                iVar8 = iVar8 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar6 != puVar3) {
              puVar3 = puVar3 + -1;
              puVar4[-1] = *puVar3;
              puVar4 = puVar4 + -1;
            }
          }
          *puVar6 = uVar2;
        }
        else {
          uVar13 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
          if (uVar13 < uVar10 + 0x20) {
            uVar13 = uVar10 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
          puVar3 = puVar4;
          for (puVar5 = puVar9; puVar5 != puVar6; puVar5 = puVar5 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar5;
            }
            puVar3 = puVar3 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar6 - (int)puVar9 & 0xfffffffcU) + (int)puVar4);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar2;
          }
          puVar5 = puVar9;
          if (puVar6 < puVar9) {
            do {
              puVar5 = puVar5 + 1;
            } while (puVar5 != puVar6);
          }
          fn_001008c4(puVar9,(int)puVar11 - (int)puVar9 >> 2,0);
          puVar11 = puVar4 + uVar13;
          puVar5 = puVar4 + ((int)puVar6 - (int)puVar9 >> 2) + 1;
          puVar9 = puVar4;
        }
      }
      else {
        puVar5 = puVar6 + 1;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = uVar2;
        }
      }
      iVar12 = iVar12 + 1;
      iVar1 = fn_006b8478(local_34);
      puVar6 = puVar5;
    } while (iVar12 < iVar1);
  }
  iVar1 = fn_00163868((int)puVar5 - (int)puVar9 >> 2);
  local_2c = puVar9[iVar1];
  puVar6 = puVar9;
  if (puVar5 < puVar9) {
    do {
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar5);
  }
  fn_001008c4(puVar9,(int)puVar11 - (int)puVar9 >> 2,0);
  return local_2c;
}



int fn_006b3a38(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (param_2 == 0) {
    uVar1 = (uint)*(byte *)(param_1 + 9);
    if (uVar1 != 2) {
      bVar5 = uVar1 == 0;
      if (bVar5) {
        uVar1 = *(uint *)(param_1 + 0xa8);
      }
      if (!bVar5 || uVar1 != 1) {
        return *(int *)(param_1 + 0xa8);
      }
    }
    iVar4 = 1;
  }
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  iVar3 = iVar2 >> 0x1f;
  if (iVar2 / 0x90 + iVar3 != iVar3) {
    do {
      iVar3 = fn_006b2ef8(*(int *)(param_1 + 0x9c) + uVar1 * 0x90);
      if ((iVar3 != 0) && (*(byte *)(*(int *)(param_1 + 0x9c) + uVar1 * 0x90 + 8) == param_2)) {
        iVar4 = iVar4 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x90));
  }
  return iVar4;
}



int fn_006b39b4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  iVar2 = iVar1 >> 0x1f;
  if (iVar1 / 0x90 + iVar2 != iVar2) {
    do {
      iVar2 = fn_006b2ef8(*(int *)(param_1 + 0x9c) + uVar3 * 0x90);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x90));
  }
  return iVar4 + 1;
}



int * fn_006b3950(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  piVar4 = *(int **)(param_1 + 0xa0);
  for (piVar3 = *(int **)(param_1 + 0x9c); piVar3 != piVar4; piVar3 = piVar3 + 0x24) {
    iVar2 = fn_006b2ef8(piVar3);
    if ((iVar2 != 0) && (*piVar3 == iVar1 + param_2)) goto LAB_006b39a0;
  }
  piVar3 = piVar4;
LAB_006b39a0:
  if (*(int **)(param_1 + 0xa0) == piVar3) {
    piVar3 = (int *)0x0;
  }
  return piVar3;
}



byte * fn_006b3928(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (1 < bVar1) {
    if (bVar1 == 2) {
      param_1 = (byte *)(uint)param_1[7];
    }
    if (bVar1 == 2 && param_1 == (byte *)0x0) {
      return param_1;
    }
  }
  return &DAT_00000001;
}


