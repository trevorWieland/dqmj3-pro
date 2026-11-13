#include "003d5670_003d5ddc.h"



void fn_003d5ddc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_005f65ec();
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  fn_00107aac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
  return;
}



void fn_003d5b58(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short local_450;
  undefined2 local_44e;
  undefined1 auStack_448 [1048];
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar4 = 0;
  if (param_2[1] - *param_2 >> 1 != 0) {
    do {
      if (*(short *)(*param_2 + uVar4 * 2) != -1) {
        local_2c = 0;
        local_450 = 0;
        local_30 = 0;
        local_28 = 0;
        local_44e = 0;
        fn_00301f50(auStack_448,0x418);
        fn_0079e608(&local_30);
        iVar3 = 0;
        local_450 = *(short *)(*(int *)(param_1 + 0x24) + *(short *)(*param_2 + uVar4 * 2) * 0x40);
        iVar2 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x430;
        if (0 < iVar2) {
          do {
            if (*(short *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x430) == local_450) {
              if (*(int *)(param_1 + 0x3c) + iVar3 * 0x430 != 0) goto LAB_003d5ca0;
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar2);
        }
        local_44e = *(undefined2 *)(*param_2 + uVar4 * 2);
        iVar2 = *(int *)(param_1 + 0x40);
        if (iVar2 == *(int *)(param_1 + 0x44)) {
          fn_00790dd0(param_1 + 0x3c,iVar2,&local_450);
        }
        else {
          *(int *)(param_1 + 0x40) = iVar2 + 0x430;
          if (iVar2 != 0) {
            fn_003d5d00(iVar2,&local_450);
          }
        }
LAB_003d5ca0:
        uVar1 = local_30;
        if (local_2c < local_30) {
          do {
            uVar1 = uVar1 + 2;
          } while (uVar1 != local_2c);
        }
        fn_001008c4(local_30,(int)(local_28 - local_30) >> 1,0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_2[1] - *param_2 >> 1));
  }
  return;
}



undefined2 * fn_003d5d00(undefined2 *param_1,undefined2 *param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint local_18 [2];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  fn_0017821c(param_1 + 4,param_2 + 4,0x418);
  piVar7 = (int *)(param_1 + 0x210);
  *piVar7 = 0;
  piVar8 = (int *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x212) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  local_18[0] = *(int *)(param_2 + 0x212) - *piVar8 >> 1;
  puVar1 = local_18;
  if (local_18[0] < 0x20) {
    puVar1 = local_18 + 1;
  }
  local_18[1] = 0x20;
  uVar9 = *puVar1;
  puVar2 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
  *piVar7 = (int)puVar2;
  puVar6 = *(undefined2 **)(param_2 + 0x212);
  for (puVar4 = (undefined2 *)*piVar8; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *puVar4;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = *(int *)(param_2 + 0x212);
  iVar5 = *piVar8;
  *(uint *)(param_1 + 0x214) = *piVar7 + uVar9 * 2;
  *(int *)(param_1 + 0x212) = *piVar7 + (iVar3 - iVar5 >> 1) * 2;
  return param_1;
}



void fn_003d5b48(int param_1)

{
  fn_0078ef08(param_1 + 0x6c);
  return;
}



void fn_003d5998(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_118 [46];
  undefined1 local_ea;
  undefined1 local_dc;
  
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0x58),(byte)(in_fpscr >> 0x16) & 3)
  ;
  fn_0020b82c(auStack_118);
  local_dc = fn_002376f0(local_ea,param_4 ^ 1);
  uVar1 = fn_005fe128(auStack_118,0);
  iVar7 = (int)fVar6;
  fVar6 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)iVar7,1);
  uVar1 = fn_0020ddfc(auStack_118,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)iVar7,1);
  uVar8 = CONCAT44(uVar1,iVar7);
  uVar1 = fn_0020fd10(auStack_118,0);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)uVar8,1);
  uVar1 = fn_00210174(auStack_118,0);
  fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)uVar8,1);
  uVar1 = fn_0020e628(auStack_118,0);
  fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)uVar8,1);
  uVar1 = fn_0020e3a4(auStack_118,0);
  fVar5 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880((int)(short)uVar8,1);
  fVar9 = (float)((ulonglong)uVar8 >> 0x20);
  if (param_3 != 0) {
    fVar6 = fVar6 * 2.0;
    fVar9 = fVar9 * 2.0;
  }
  *(short *)(param_2 + 0x20) = (short)(int)fVar6;
  *(short *)(param_2 + 0x22) = (short)(int)fVar9;
  *(short *)(param_2 + 0x24) = (short)(int)fVar2;
  *(short *)(param_2 + 0x26) = (short)(int)fVar3;
  *(short *)(param_2 + 0x28) = (short)(int)fVar4;
  *(short *)(param_2 + 0x2a) = (short)(int)fVar5;
  *(short *)(param_2 + 0x1c) = (short)(int)fVar6;
  *(short *)(param_2 + 0x1e) = (short)(int)fVar9;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  return;
}



void fn_003d5930(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int local_c;
  
  piVar1 = *(int **)(param_1 + 0x78);
  piVar2 = *(int **)(param_1 + 0x7c);
  while( true ) {
    if (piVar1 != piVar2) {
      unaff_r4 = *piVar1;
    }
    if (piVar1 == piVar2 || unaff_r4 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  if (piVar2 == piVar1) {
    if (piVar2 == *(int **)(param_1 + 0x80)) {
      local_c = param_2;
      fn_0079ce44(param_1 + 0x78,piVar2,&local_c,piVar2,param_1);
      return;
    }
    *(int **)(param_1 + 0x7c) = piVar2 + 1;
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
    }
  }
  return;
}



void fn_003d58cc(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (uVar1 != uVar2) {
    uVar3 = uVar1;
    if (uVar2 <= uVar1) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar2);
    }
    *(uint *)(param_1 + 0x7c) = uVar2 - (uVar2 - uVar1 & 0xfffffffc);
  }
  fn_0078ef08(param_1 + 0x6c);
  fn_0078e9a4(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x70),*param_2,param_2[1]);
  return;
}



void fn_003d5670(int param_1,uint *param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  if ((param_5 == 2 || param_5 == 5) || (param_5 == 6)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar2 = *(int *)(param_1 + 0x28) + iVar11 * 0x12;
      if ((*(byte *)(uVar2 + 1) < 4) && ((!bVar1 || (*(char *)(uVar2 + 0xb) != '\x01')))) {
        bVar12 = (param_4 & 1 << (uint)*(byte *)(uVar2 + 1)) != 0;
        if (bVar12) {
          uVar2 = (uint)*(short *)(uVar2 + 0xc);
        }
        if (bVar12 && (uVar2 & param_3) != 0) {
          piVar3 = (int *)param_2[1];
          if (piVar3 == (int *)param_2[2]) {
            uVar2 = (int)((int)piVar3 - *param_2) >> 2;
            if (uVar2 < (uint)((int)((int)param_2[2] - *param_2) >> 2)) {
              param_2[1] = (uint)(piVar3 + 1);
              if (piVar3 != (int *)0x0) {
                *piVar3 = piVar3[-1];
              }
              piVar7 = piVar3 + -1;
              piVar8 = piVar3;
              if (piVar3 < piVar7) {
                iVar10 = (int)piVar7 - (int)piVar3;
                if (0 < iVar10) {
                  if (iVar10 * 0x20000000 < 0) {
                    piVar7 = piVar3 + -2;
                    piVar8 = piVar3 + -1;
                    *piVar8 = *piVar7;
                  }
                  for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                    piVar8[-1] = piVar7[-1];
                    piVar7 = piVar7 + -2;
                    piVar8 = piVar8 + -2;
                    *piVar8 = *piVar7;
                  }
                }
              }
              else {
                while (piVar3 != piVar7) {
                  piVar7 = piVar7 + -1;
                  piVar8[-1] = *piVar7;
                  piVar8 = piVar8 + -1;
                }
              }
              *piVar3 = iVar11;
            }
            else {
              uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar6 < uVar2 + 0x20) {
                uVar6 = uVar2 + 0x20;
              }
              piVar4 = (int *)fn_00100fc6(uVar6 << 2,0);
              piVar8 = piVar4;
              for (piVar7 = (int *)*param_2; piVar7 != piVar3; piVar7 = piVar7 + 1) {
                if (piVar8 != (int *)0x0) {
                  *piVar8 = *piVar7;
                }
                piVar8 = piVar8 + 1;
              }
              piVar7 = (int *)((int)piVar4 + ((int)piVar3 - *param_2 & 0xfffffffc));
              if (piVar7 != (int *)0x0) {
                *piVar7 = iVar11;
              }
              piVar8 = (int *)param_2[1];
              piVar7 = (int *)((int)piVar4 + ((int)piVar3 - *param_2 & 0xfffffffc));
              for (; piVar3 != piVar8; piVar3 = piVar3 + 1) {
                piVar7 = piVar7 + 1;
                if (piVar7 != (int *)0x0) {
                  *piVar7 = *piVar3;
                }
              }
              uVar5 = *param_2;
              uVar9 = param_2[1];
              uVar2 = uVar5;
              if (uVar9 < uVar5) {
                do {
                  uVar2 = uVar2 + 4;
                } while (uVar2 != uVar9);
              }
              fn_001008c4(uVar5,(int)(param_2[2] - uVar5) >> 2,0);
              param_2[2] = (uint)(piVar4 + uVar6);
              *param_2 = (uint)piVar4;
              param_2[1] = (uint)(piVar4 + ((int)(uVar9 - uVar5) >> 2) + 1);
            }
          }
          else {
            param_2[1] = (uint)(piVar3 + 1);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar11;
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x18));
  }
  return;
}


