#include "00112880_00113194.h"



int fn_00113194(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = &DAT_0081e700;
  iVar1 = fn_00101a1c(param_1 + 1,&LAB_00122314,4,2);
  uVar2 = 0;
  do {
    *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return iVar1 + -4;
}



void fn_00112fb4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



undefined4 * fn_00112ea0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  *param_1 = &DAT_0081e13c;
  param_1[1] = param_2;
  fn_00301f50(&DAT_008c97a8,0x80);
  puVar2 = (undefined4 *)fn_00129dd4(DAT_008977fc,0x23);
  iVar3 = fn_00147e6c(puVar2,&DAT_00112f64,4);
  if (iVar3 == 0) {
    uVar8 = fn_00129e04(DAT_008977fc,0x23);
    uVar4 = fn_0011c134((uint)uVar8 - 4,(int)((ulonglong)uVar8 >> 0x20) - (uint)((uint)uVar8 < 4),
                         0x40,0);
    puVar7 = puVar2;
    if (uVar4 != 0) {
      puVar7 = &DAT_008c97a8;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        if ((char)*(short *)((int)(puVar2 + uVar5 * 0x10 + 1) + 2) != '\0') {
          uVar6 = (uint)*(short *)(puVar2 + uVar5 * 0x10 + 1);
          uVar1 = uVar6 >> 5;
          puVar7[uVar1] = puVar7[uVar1] | 1 << (uVar6 & 0x1f);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  return param_1;
}



void fn_00112e48(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0xc4) = param_3;
  return;
}



void fn_00112e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x278) = param_3;
  *(undefined4 *)(iVar1 + 0x27c) = param_4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00112c24) */
/* WARNING: Removing unreachable block (ram,0x00112c30) */
/* WARNING: Removing unreachable block (ram,0x00112bfc) */
/* WARNING: Removing unreachable block (ram,0x00112c00) */
/* WARNING: Removing unreachable block (ram,0x00112c04) */
/* WARNING: Removing unreachable block (ram,0x00112c08) */
/* WARNING: Removing unreachable block (ram,0x00112c0c) */
/* WARNING: Removing unreachable block (ram,0x00112c4c) */
/* WARNING: Removing unreachable block (ram,0x00112c5c) */
/* WARNING: Removing unreachable block (ram,0x00112c34) */
/* WARNING: Removing unreachable block (ram,0x00112c3c) */
/* WARNING: Removing unreachable block (ram,0x00112c40) */
/* WARNING: Removing unreachable block (ram,0x00112c44) */

undefined4 * fn_001129d0(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_60 [52];
  uint local_2c;
  uint local_28;
  
  *param_1 = &DAT_0081d340;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = (undefined4 *)fn_001283fc(auStack_60);
  iVar3 = param_1[1];
  iVar8 = param_1[2];
  uVar15 = (iVar8 - iVar3) / 0x34;
  if (uVar15 < param_2) {
    fn_0012d1c4(param_1 + 1,iVar8,param_2 - uVar15);
  }
  else if (uVar15 != param_2) {
    puVar2 = (undefined4 *)(param_2 * 5);
    iVar14 = iVar3 + param_2 * 0x34;
    iVar1 = iVar14;
    if (iVar3 != iVar8) {
      for (; iVar1 != iVar8; iVar1 = iVar1 + 0x34) {
      }
      iVar8 = iVar8 - iVar14;
      iVar3 = iVar8 >> 0x1f;
      puVar2 = (undefined4 *)(iVar8 / 0x34 + iVar3);
      param_1[2] = param_1[2] + ((int)puVar2 - iVar3) * -0x34;
    }
  }
  puVar9 = (undefined4 *)param_1[5];
  puVar12 = (undefined4 *)param_1[4];
  puVar13 = param_1 + 4;
  local_2c = (int)puVar9 - (int)puVar12 >> 2;
  if (local_2c < param_2) {
    iVar3 = param_2 - local_2c;
    if (iVar3 != 0) {
      local_2c = iVar3 + local_2c;
      if ((uint)(param_1[6] - (int)puVar12 >> 2) < local_2c) {
        uVar15 = (int)(param_1[5] - *puVar13) >> 2;
        local_28 = uVar15 + (uVar15 >> 1) + (uVar15 >> 3);
        if (local_28 < uVar15 + 0x20) {
          local_28 = uVar15 + 0x20;
        }
        puVar10 = &local_28;
        if (local_28 <= local_2c) {
          puVar10 = &local_2c;
        }
        uVar15 = *puVar10;
        puVar5 = (undefined4 *)fn_00100fc6(uVar15 << 2,0);
        puVar12 = puVar5;
        for (puVar2 = (undefined4 *)*puVar13; puVar2 != puVar9; puVar2 = puVar2 + 1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *puVar2;
          }
          puVar12 = puVar12 + 1;
        }
        puVar2 = (undefined4 *)(((int)puVar9 - *puVar13 & 0xfffffffc) + (int)puVar5);
        for (iVar8 = iVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
        }
        puVar12 = (undefined4 *)param_1[5];
        puVar2 = puVar5 + iVar3 + ((int)((int)puVar9 - *puVar13) >> 2);
        for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar9;
          }
          puVar2 = puVar2 + 1;
        }
        uVar6 = *puVar13;
        uVar11 = param_1[5];
        uVar7 = uVar6;
        if (uVar11 < uVar6) {
          do {
            uVar7 = uVar7 + 4;
          } while (uVar7 != uVar11);
        }
        fn_001008c4(uVar6,(int)(param_1[6] - uVar6) >> 2,0);
        param_1[6] = puVar5 + uVar15;
        param_1[5] = puVar5 + ((int)(uVar11 - uVar6) >> 2) + iVar3;
        *puVar13 = (uint)puVar5;
      }
      else {
        puVar2 = puVar9 + iVar3;
        param_1[5] = puVar9 + iVar3;
        if (puVar2 < puVar9) {
          puVar4 = puVar9 + -iVar3;
          puVar5 = puVar9;
          for (puVar12 = puVar4; puVar12 != puVar9; puVar12 = puVar12 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar12;
            }
            puVar5 = puVar5 + 1;
          }
          puVar12 = puVar9;
          if (puVar9 < puVar4) {
            if (0 < (int)puVar4 - (int)puVar9) {
              iVar3 = (int)puVar4 - (int)puVar9 >> 2;
              iVar8 = 0;
              do {
                iVar3 = iVar3 + -1;
                puVar9[iVar8 + -1] = puVar4[iVar8 + -1];
                iVar8 = iVar8 + -1;
              } while (iVar3 != 0);
            }
          }
          else {
            while (puVar9 != puVar4) {
              puVar4 = puVar4 + -1;
              puVar12[-1] = *puVar4;
              puVar12 = puVar12 + -1;
            }
          }
          if (puVar9 < puVar2) {
            iVar3 = (int)puVar2 - (int)puVar9;
            if (0 < iVar3) {
              puVar2 = puVar9;
              if (iVar3 * 0x20000000 < 0) {
                puVar2 = puVar9 + 1;
                *puVar9 = 0;
              }
              for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                puVar9 = puVar2 + 1;
                *puVar2 = 0;
                puVar2 = puVar2 + 2;
                *puVar9 = 0;
              }
            }
          }
          else {
            for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
              *puVar9 = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = 0;
            }
            puVar9 = puVar9 + 1;
          }
        }
      }
    }
  }
  else {
    if (param_2 != local_2c) {
      puVar2 = puVar12 + param_2;
    }
    if (param_2 != local_2c && puVar12 != puVar9) {
      puVar12 = puVar2;
      if (puVar9 <= puVar2) {
        for (; puVar12 != puVar9; puVar12 = puVar12 + 1) {
        }
      }
      param_1[5] = (int)puVar9 - ((int)puVar9 - (int)puVar2 & 0xfffffffcU);
    }
  }
  return param_1;
}



undefined4 * fn_0011294c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00851994;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00120c70();
  }
  param_1[1] = uVar2;
  iVar1 = fn_00145b00(0x90,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00120aa8(iVar1,0,2);
  }
  param_1[2] = uVar2;
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00120be4();
  }
  param_1[3] = uVar2;
  fn_00120c38(param_1[1]);
  return param_1;
}



undefined4 * fn_00112918(undefined4 *param_1)

{
  *param_1 = &DAT_0081cfb0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_00120a0c(param_1 + 4);
  return param_1;
}



int * fn_00112880(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  local_14 = param_1[4];
  if (local_14 != 0) {
    local_18 = *(undefined4 *)(local_14 + 8);
    fn_0012c034(auStack_10,param_1,&local_18,&local_14);
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      fn_001008c4(piVar2[2],piVar2[1],0);
      fn_001008c4(piVar2,1,0);
      piVar2 = (int *)*param_1;
    }
  }
  return param_1;
}


