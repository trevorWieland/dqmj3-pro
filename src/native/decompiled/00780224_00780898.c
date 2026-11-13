#include "00780224_00780898.h"



void fn_00780898(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  uint in_fpscr;
  float in_s0;
  int iVar5;
  float fVar6;
  
  fn_006df72c();
  in_s0 = in_s0 - *param_1;
  iVar5 = VectorFloatToUnsigned(in_s0,3);
  fVar6 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = in_s0 - fVar6;
  if (fVar6 == 0.0) {
    pfVar1 = (float *)((int)param_1[3] + iVar5 * 0x10);
    fVar6 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    param_2[3] = pfVar1[3];
    *param_2 = fVar6;
    param_2[1] = fVar3;
    param_2[2] = fVar4;
    return;
  }
  fVar3 = param_1[3];
  if (param_1[1] == in_s0) {
    pfVar1 = (float *)(iVar5 * 0x10 + 0x10 + (int)fVar3);
    fVar6 = pfVar1[3];
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    *param_2 = *pfVar1;
    param_2[3] = fVar6;
    param_2[1] = fVar3;
    param_2[2] = fVar4;
    return;
  }
  pfVar2 = (float *)(iVar5 * 0x10 + 0x10 + (int)fVar3);
  pfVar1 = (float *)((int)fVar3 + iVar5 * 0x10);
  *param_2 = *pfVar1 + fVar6 * (*pfVar2 - *pfVar1);
  param_2[1] = pfVar1[1] + fVar6 * (pfVar2[1] - pfVar1[1]);
  param_2[2] = pfVar1[2] + fVar6 * (pfVar2[2] - pfVar1[2]);
  param_2[3] = pfVar1[3] + fVar6 * (pfVar2[3] - pfVar1[3]);
  return;
}



int fn_00780650(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int local_60 [16];
  int local_20 [2];
  
  uVar8 = *(uint *)(param_1 + 4);
  if (uVar8 == 0) {
    iVar1 = 0;
  }
  else {
    if (uVar8 < param_2) {
      param_2 = uVar8;
    }
    else {
    }
    uVar5 = 0;
    if (param_2 != 0) {
      do {
        local_60[uVar5] =
             *(int *)(param_1 + ((uVar8 - uVar5) + -1 + *(int *)(param_1 + 8) & 0xf) * 4 + 0xc);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_2);
    }
    piVar9 = local_60 + param_2;
    if (local_60 != piVar9) {
      iVar1 = (int)piVar9 - (int)local_60 >> 2;
      fn_007b0d00(local_60,piVar9,iVar1);
      if (iVar1 < 0x11) {
        piVar7 = local_60;
        while (piVar7 = piVar7 + 1, piVar7 != piVar9) {
          iVar1 = *piVar7;
          piVar4 = piVar7;
          if (iVar1 < local_60[0]) {
            if (0 < (int)piVar7 - (int)local_60 >> 2) {
              piVar2 = piVar7 + 1;
              if ((int)piVar7 * 0x20000000 < 0) {
                piVar4 = piVar7 + -1;
                *piVar7 = piVar7[-1];
                piVar2 = piVar7;
              }
              for (iVar10 = (int)piVar7 - (int)local_60 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                piVar2[-1] = piVar4[-1];
                piVar4 = piVar4 + -2;
                piVar2 = piVar2 + -2;
                *piVar2 = *piVar4;
              }
            }
            local_60[0] = iVar1;
          }
          else {
            while( true ) {
              iVar10 = piVar4[-1];
              if (iVar10 <= iVar1) break;
              *piVar4 = iVar10;
              piVar4 = piVar4 + -1;
            }
            *piVar4 = iVar1;
          }
        }
      }
      else {
        piVar4 = local_20;
        piVar7 = local_60;
        while (piVar7 = piVar7 + 1, piVar7 != piVar4) {
          iVar1 = *piVar7;
          piVar2 = piVar7;
          if (iVar1 < local_60[0]) {
            if (0 < (int)piVar7 - (int)local_60 >> 2) {
              piVar6 = piVar7 + 1;
              if ((int)piVar7 * 0x20000000 < 0) {
                piVar2 = piVar7 + -1;
                *piVar7 = piVar7[-1];
                piVar6 = piVar7;
              }
              for (iVar10 = (int)piVar7 - (int)local_60 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                piVar3 = piVar2 + -1;
                piVar2 = piVar2 + -2;
                piVar6[-1] = *piVar3;
                piVar6 = piVar6 + -2;
                *piVar6 = *piVar2;
              }
            }
            local_60[0] = iVar1;
          }
          else {
            while( true ) {
              iVar10 = piVar2[-1];
              if (iVar10 <= iVar1) break;
              *piVar2 = iVar10;
              piVar2 = piVar2 + -1;
            }
            *piVar2 = iVar1;
          }
        }
        for (; piVar4 != piVar9; piVar4 = piVar4 + 1) {
          iVar1 = *piVar4;
          piVar7 = piVar4;
          while( true ) {
            iVar10 = piVar7[-1];
            if (iVar10 <= iVar1) break;
            *piVar7 = iVar10;
            piVar7 = piVar7 + -1;
          }
          *piVar7 = iVar1;
        }
      }
    }
    uVar8 = param_2 >> 1;
    if ((param_2 & 1) == 0) {
      iVar1 = (local_60[uVar8] + local_60[uVar8 - 1]) / 2;
    }
    else {
      iVar1 = local_60[uVar8];
    }
  }
  return iVar1;
}



undefined4 fn_00780518(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x74);
    if (iVar1 == 0) {
      iVar1 = param_1[2];
    }
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = fn_006d0c60(iVar1,0x73), uVar2 = 0, iVar1 != 0)) {
      fn_00456160(param_2,iVar1,*(undefined4 *)(iVar1 + 0x78));
      uVar2 = 1;
    }
  }
  return uVar2;
}



int fn_007803e4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  
  piVar1 = (int *)(param_1 + 0x24);
  (**(code **)(*piVar1 + 8))();
  iVar2 = fn_00169c08(&local_18,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar2 = iVar5;
  iVar3 = *(int *)(iVar5 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < local_18) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar2 == iVar5) || (local_18 < *(uint *)(iVar2 + 0x10))) {
    iVar2 = iVar5;
  }
  if (iVar2 != iVar5) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return iVar2 + 0x14;
  }
  iVar2 = fn_00169c08(&local_14,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_18 = local_14;
  uVar4 = fn_00785c48(param_1 + 0x4c,&local_18);
  fn_00786a18(uVar4,param_1 + 0xc);
  iVar2 = fn_00169c08(&local_14,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_18 = local_14;
  iVar2 = fn_00785c48(param_1 + 0x4c,&local_18);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return iVar2;
}



void fn_007803bc(int param_1)

{
  fn_00170704(param_1 + 0x58);
  fn_001707b4(param_1 + 0x58);
  return;
}



undefined1 * fn_00780224(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_3c [20];
  undefined1 auStack_28 [4];
  
  puVar6 = (ushort *)param_4[2];
  uVar8 = param_4[1];
  uVar7 = *param_4 ^ 0x75bcd15;
  iVar3 = (int)(uVar8 * 2) >> 1;
  iVar2 = iVar3 + -1;
  if (0 < iVar2) {
    puVar5 = puVar6 + -1;
    if (-1 < (int)(uVar8 << 0x1f)) {
      uVar7 = (uint)*puVar6 ^ (uVar7 >> 5 | uVar7 << 0x1b);
      puVar5 = puVar6;
    }
    uVar1 = puVar5[1];
    for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar7 = (uint)uVar1 ^ (uVar7 >> 5 | uVar7 << 0x1b);
      uVar1 = puVar5[3];
      uVar7 = (uint)puVar5[2] ^ (uVar7 >> 5 | uVar7 << 0x1b);
      puVar5 = puVar5 + 2;
    }
  }
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    uVar7 = (uint)puVar6[iVar3] ^ (uVar7 >> 5 | uVar7 << 0x1b);
  }
  puVar4 = (undefined1 *)fn_0077fa34(param_1,param_2,param_3,param_4,uVar7,puVar6,uVar8 << 1);
  if ((int)puVar4 < 0) {
    uVar7 = ((uint)puVar4 & 0x3fc00) >> 10;
    bVar9 = uVar7 == 0x11;
    if (bVar9) {
      uVar7 = (uint)puVar4 & 0x3ff;
    }
    if (bVar9 && uVar7 == 0x6f) {
      uVar8 = param_4[1];
      puVar6 = (ushort *)param_4[2];
      uVar7 = *param_4 ^ 0x75bcd15;
      iVar3 = (int)(uVar8 * 2) >> 1;
      iVar2 = iVar3 + -1;
      if (0 < iVar2) {
        puVar5 = puVar6 + -1;
        if (-1 < (int)(uVar8 << 0x1f)) {
          uVar7 = (uint)*puVar6 ^ (uVar7 >> 5 | uVar7 << 0x1b);
          puVar5 = puVar6;
        }
        uVar1 = puVar5[1];
        for (iVar2 = iVar2 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          uVar7 = (uint)uVar1 ^ (uVar7 >> 5 | uVar7 << 0x1b);
          uVar1 = puVar5[3];
          uVar7 = (uint)puVar5[2] ^ (uVar7 >> 5 | uVar7 << 0x1b);
          puVar5 = puVar5 + 2;
        }
      }
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        uVar7 = (uint)puVar6[iVar3] ^ (uVar7 >> 5 | uVar7 << 0x1b);
      }
      puVar4 = (undefined1 *)
               fn_0077fc60(param_1 + 0x28,auStack_28,auStack_3c,param_4,uVar7,puVar6,uVar8 << 1);
      if ((int)puVar4 < 0) {
        uVar7 = ((uint)puVar4 & 0x3fc00) >> 10;
        bVar9 = uVar7 == 0x11;
        if (bVar9) {
          uVar7 = (uint)puVar4 & 0x3ff;
        }
        if (bVar9 && uVar7 == 0x6f) {
          puVar4 = &DAT_c8804471;
        }
      }
      else {
        puVar4 = (undefined1 *)0xe0c04702;
      }
    }
  }
  return puVar4;
}


