#include "0059e54c_0059f980.h"



void fn_0059f980(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_2c [2];
  
  fn_002c3e78();
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar4 == &DAT_008944a4) goto LAB_0059f9d0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0059f9d0:
  cVar3 = *(char *)(puVar7 + 3);
  uVar8 = 0;
  uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  if (uVar1 != 0) {
    do {
      uVar2 = *(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 2;
      if (uVar2 <= uVar8) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar8,uVar2);
      }
      uVar5 = fn_0022f584(*(undefined4 *)
                            (&DAT_007c6f90 +
                            *(int *)(*(int *)(param_1 + 0xf0) + uVar8 * 4) * 0xc +
                            (uint)(cVar3 == '\x04') * 4),0);
      fn_0031b78c(param_1,uVar8,1,uVar5);
      if (uVar8 == 1) {
        puVar7 = *(undefined4 **)(param_1 + 0x18);
        if (puVar7 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar4 == &DAT_008944a4) goto LAB_0059faac;
            puVar4 = (undefined4 *)*puVar4;
          } while (puVar4 != (undefined4 *)0x0);
        }
        puVar7 = (undefined4 *)0x0;
LAB_0059faac:
        if ((*(char *)(puVar7 + 3) != '\x04') ||
           (iVar6 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc)), iVar6 != 0))
        goto LAB_0059fad4;
        local_2c[0] = DAT_00894570;
      }
      else {
LAB_0059fad4:
        local_2c[0] = DAT_00894568;
      }
      fn_002c37e0(param_1,uVar8,local_2c);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  return;
}



undefined4 *
fn_0059f600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  
  iVar1 = fn_00145b00(0xfc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_00397a0c(iVar1,param_1,param_3,param_4,unaff_r4);
  puVar5 = (undefined4 *)0x0;
  *puVar2 = &DAT_00846418;
  puVar2[0x3a] = 0;
  *(undefined1 *)(puVar2 + 0x3b) = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0x46);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008951b8) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x39] = puVar5;
  return puVar2;
}



void fn_0059eb9c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  if (param_4 != 0) {
    iVar1 = fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),*(undefined4 *)(param_1 + 0xe8));
    fn_0016ba84(DAT_00897800,iVar1 + 4);
  }
  uVar2 = fn_0022f584(param_2,0);
  fn_0036c5f4(uVar3,uVar2,1,param_3,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 * fn_0059e9a8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_2c [3];
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_00846400;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  uVar2 = fn_00100b58(&DAT_0059eacc);
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_2c + 1;
    if (0x20 < uVar2) {
      puVar4 = local_2c;
    }
    local_2c[0] = uVar2;
    local_2c[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      puVar3[1] = uVar6;
      *puVar3 = 0;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[6] = puVar3;
  fn_00301a9c(puVar3,&DAT_0059eacc,uVar2 << 1);
  fn_0059e54c(puVar1);
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x0059e77c) */
/* WARNING: Removing unreachable block (ram,0x0059e790) */
/* WARNING: Removing unreachable block (ram,0x0059e750) */
/* WARNING: Removing unreachable block (ram,0x0059e758) */
/* WARNING: Removing unreachable block (ram,0x0059e760) */
/* WARNING: Removing unreachable block (ram,0x0059e7b4) */
/* WARNING: Removing unreachable block (ram,0x0059e7d4) */
/* WARNING: Removing unreachable block (ram,0x0059e794) */
/* WARNING: Removing unreachable block (ram,0x0059e79c) */
/* WARNING: Removing unreachable block (ram,0x0059e7a4) */
/* WARNING: Removing unreachable block (ram,0x0059e7ac) */

void fn_0059e54c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 uVar14;
  uint local_28;
  uint local_24;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  uVar11 = *(uint *)(param_1 + 0xc);
  if (uVar11 != uVar10) {
    uVar1 = uVar11;
    if (uVar10 <= uVar11) {
      do {
        uVar1 = uVar1 + 8;
      } while (uVar1 != uVar10);
    }
    *(uint *)(param_1 + 0x10) = uVar10 - (uVar10 - uVar11 & 0xfffffff8);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  puVar5 = *(undefined4 **)(param_1 + 0xc);
  puVar12 = (uint *)(param_1 + 0xc);
  local_28 = (int)puVar2 - (int)puVar5 >> 3;
  if (local_28 < 8) {
    iVar13 = 8 - local_28;
    if (iVar13 != 0) {
      local_28 = iVar13 + local_28;
      if ((uint)(*(int *)(param_1 + 0x14) - (int)puVar5 >> 3) < local_28) {
        uVar10 = (int)(*(int *)(param_1 + 0x10) - *puVar12) >> 3;
        local_24 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (local_24 < uVar10 + 0x20) {
          local_24 = uVar10 + 0x20;
        }
        puVar3 = &local_28;
        if (local_28 < local_24) {
          puVar3 = &local_24;
        }
        uVar10 = *puVar3;
        puVar4 = (undefined4 *)fn_00100fc6(uVar10 << 3,0);
        puVar8 = puVar4;
        for (puVar5 = (undefined4 *)*puVar12; puVar5 != puVar2; puVar5 = puVar5 + 2) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar14 = puVar5[1];
            *puVar8 = *puVar5;
            puVar8[1] = uVar14;
          }
          puVar8 = puVar8 + 2;
        }
        puVar5 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffff8) + (int)puVar4);
        for (iVar7 = iVar13; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
          }
          puVar5 = puVar5 + 2;
        }
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        puVar5 = puVar4 + (iVar13 + ((int)((int)puVar2 - *puVar12) >> 3)) * 2;
        for (; puVar2 != puVar8; puVar2 = puVar2 + 2) {
          if (puVar5 != (undefined4 *)0x0) {
            uVar14 = puVar2[1];
            *puVar5 = *puVar2;
            puVar5[1] = uVar14;
          }
          puVar5 = puVar5 + 2;
        }
        uVar1 = *puVar12;
        uVar9 = *(uint *)(param_1 + 0x10);
        uVar11 = uVar1;
        if (uVar9 < uVar1) {
          do {
            uVar11 = uVar11 + 8;
          } while (uVar11 != uVar9);
        }
        fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x14) - uVar1) >> 3,0);
        *(undefined4 **)(param_1 + 0x14) = puVar4 + uVar10 * 2;
        *(undefined4 **)(param_1 + 0x10) = puVar4 + ((int)(uVar9 - uVar1) >> 3) * 2 + iVar13 * 2;
        *puVar12 = (uint)puVar4;
      }
      else {
        puVar5 = puVar2 + iVar13 * 2;
        *(undefined4 **)(param_1 + 0x10) = puVar2 + iVar13 * 2;
        if (puVar5 < puVar2) {
          puVar6 = puVar2 + iVar13 * -2;
          puVar8 = puVar2;
          for (puVar4 = puVar6; puVar4 != puVar2; puVar4 = puVar4 + 2) {
            if (puVar8 != (undefined4 *)0x0) {
              uVar14 = puVar4[1];
              *puVar8 = *puVar4;
              puVar8[1] = uVar14;
            }
            puVar8 = puVar8 + 2;
          }
          puVar8 = puVar2;
          if (puVar2 < puVar6) {
            iVar13 = (int)puVar6 - (int)puVar2;
            if (0 < iVar13) {
              puVar4 = puVar6;
              if (iVar13 * 0x10000000 < 0) {
                puVar4 = puVar6 + -2;
                puVar8 = puVar2 + -2;
                uVar14 = puVar6[-1];
                *puVar8 = *puVar4;
                puVar2[-1] = uVar14;
              }
              for (iVar13 = iVar13 >> 4; iVar13 != 0; iVar13 = iVar13 + -1) {
                uVar14 = puVar4[-1];
                puVar8[-2] = puVar4[-2];
                puVar8[-1] = uVar14;
                uVar14 = puVar4[-3];
                puVar8[-4] = puVar4[-4];
                puVar8[-3] = uVar14;
                puVar8 = puVar8 + -4;
                puVar4 = puVar4 + -4;
              }
            }
          }
          else {
            while (puVar2 != puVar6) {
              uVar14 = puVar6[-1];
              puVar8[-2] = puVar6[-2];
              puVar8[-1] = uVar14;
              puVar8 = puVar8 + -2;
              puVar6 = puVar6 + -2;
            }
          }
          if (puVar2 < puVar5) {
            iVar13 = (int)puVar5 - (int)puVar2;
            if (0 < iVar13) {
              if (iVar13 * 0x10000000 < 0) {
                puVar5 = puVar2 + 1;
                *puVar2 = 0;
                puVar2 = puVar2 + 2;
                *puVar5 = 0;
              }
              for (iVar13 = iVar13 >> 4; iVar13 != 0; iVar13 = iVar13 + -1) {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
                puVar2 = puVar2 + 4;
              }
            }
          }
          else {
            for (; puVar2 != puVar5; puVar2 = puVar2 + 2) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            puVar2 = puVar2 + 2;
          }
        }
      }
    }
  }
  else if ((8 < local_28) && (puVar8 = puVar5 + 0x10, puVar5 != puVar2)) {
    puVar5 = puVar8;
    if (puVar2 < puVar8) {
      do {
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar2);
    }
    *(uint *)(param_1 + 0x10) = (int)puVar2 - ((int)puVar2 - (int)puVar8 & 0xfffffff8U);
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3 != 0) {
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + uVar10 * 8);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 3));
  }
  return;
}


