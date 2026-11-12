#include "00553754_00553e68.h"



uint fn_00553e68(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0xb4) != 0;
  uVar2 = param_3;
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0xa4);
  }
  if (bVar3 && uVar2 != 0) {
    uVar1 = 0;
    if (*(short *)(param_1 + 0xcc) != 0) {
      uVar1 = (uint)(ushort)(*(short *)(param_1 + 0xcc) - 1);
    }
    if (param_3 < uVar1) {
      if (uVar1 - param_3 < param_4) {
        param_4 = uVar1 - param_3;
      }
      fn_001694e4(uVar2 + param_3 * 2,param_2,param_4 << 1);
      if (**(short **)(param_1 + 0xa4) == 0) {
        *(undefined2 *)(param_1 + 0xce) = 0;
      }
      else {
        *(short *)(param_1 + 0xce) = (short)param_3 + (short)param_4;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xa4) + (uint)*(ushort *)(param_1 + 0xce) * 2) = 0;
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 4;
      return param_4 & 0xffff;
    }
  }
  return 0;
}



uint fn_00553dbc(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = fn_00100b58(param_2);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  bVar4 = *(int *)(param_1 + 0xb4) != 0;
  if (bVar4) {
    iVar2 = *(int *)(param_1 + 0xa4);
  }
  if (bVar4 && iVar2 != 0) {
    uVar1 = 0;
    if (*(short *)(param_1 + 0xcc) != 0) {
      uVar1 = (uint)(ushort)(*(short *)(param_1 + 0xcc) - 1);
    }
    if (param_3 < uVar1) {
      uVar3 = (uint)uVar5;
      if (uVar1 - param_3 < (uint)uVar5) {
        uVar3 = uVar1 - param_3;
      }
      fn_001694e4(iVar2 + param_3 * 2,param_2,uVar3 << 1);
      if (**(short **)(param_1 + 0xa4) == 0) {
        *(undefined2 *)(param_1 + 0xce) = 0;
      }
      else {
        *(short *)(param_1 + 0xce) = (short)param_3 + (short)uVar3;
      }
      *(undefined2 *)(*(int *)(param_1 + 0xa4) + (uint)*(ushort *)(param_1 + 0xce) * 2) = 0;
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 4;
      return uVar3 & 0xffff;
    }
  }
  return 0;
}



void fn_00553c84(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  if (((param_2 == (int *)0x0) || (iVar2 = (**(code **)(*param_2 + 0x50))(param_2), iVar2 == 1)) &&
     (bVar4 = *(int **)(param_1 + 0xb4) != param_2,
     *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | bVar4 << 2, bVar4)) {
    *(int **)(param_1 + 0xb4) = param_2;
    if (param_2 == (int *)0x0) {
      fVar5 = 0.0;
      fVar6 = *(float *)(param_1 + 0xb8);
      if ((*(float *)(param_1 + 0xb8) == 0.0) && (fVar6 = fVar5, *(float *)(param_1 + 0xbc) == 0.0))
      {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      bVar1 = bVar1 ^ 1;
      if (bVar1 != 0) {
        fVar6 = fVar5;
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | bVar1 << 2;
      if (bVar1 == 0) {
        return;
      }
      *(float *)(param_1 + 0xb8) = fVar6;
    }
    else {
      uVar3 = (**(code **)(*param_2 + 0xc))();
      fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      uVar3 = (**(code **)(**(int **)(param_1 + 0xb4) + 0x10))();
      fVar5 = (float)VectorSignedToFloat(uVar3,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
      if ((*(float *)(param_1 + 0xb8) == fVar6) && (*(float *)(param_1 + 0xbc) == fVar5)) {
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
      *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | (bVar1 ^ 1) << 2;
      if ((bVar1 ^ 1) == 0) {
        return;
      }
      *(float *)(param_1 + 0xb8) = fVar6;
    }
    *(float *)(param_1 + 0xbc) = fVar5;
  }
  return;
}



void fn_00553bf8(int param_1)

{
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0xce) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0xff;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xef) = 0xff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return;
}



undefined4 fn_00553b40(int *param_1,int param_2,undefined4 *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  uint uVar3;
  
  psVar1 = (short *)*param_3;
  uVar2 = 0;
  if (psVar1 != (short *)0x0) {
    uVar3 = param_3[1] & 0xffff;
    if (uVar3 == 0) {
      uVar3 = 0;
      for (; *psVar1 != 0; psVar1 = psVar1 + 1) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 & 0xffff;
    }
    if (param_3[2] == 0) {
      (**(code **)(*param_1 + 0x58))(param_1,uVar3,(int)*(char *)(param_2 + 0x3c));
    }
    else {
      (**(code **)(*param_1 + 0x58))(param_1,param_3[2] & 0xffff,(int)*(char *)(param_2 + 0x3c));
    }
    if (param_1[0x29] != 0) {
      (**(code **)(*param_1 + 0x6c))(param_1,*param_3,0,uVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00553970(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0xf8) + 4);
  uVar9 = (uint)*(byte *)(*(int *)(param_1 + 0xfc) + 0xe);
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      lVar18 = 0;
    }
    else {
      fVar13 = (float)VectorUnsignedToFloat(uVar4 - 1,(byte)(in_fpscr >> 0x16) & 3);
      lVar18 = (ulonglong)(uint)(*(float *)(*(int *)(param_1 + 0xfc) + 4) / fVar13) << 0x20;
      if (uVar4 == 0) {
        return;
      }
    }
    uVar11 = 0;
    do {
      fVar13 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = 0;
      iVar10 = (int)(*(float **)(param_1 + 0xfc))[2] + uVar11 * 0x2c;
      fVar13 = **(float **)(param_1 + 0xfc) + (float)((ulonglong)lVar18 >> 0x20) * fVar13;
      if (uVar9 != 0) {
        do {
          iVar3 = *(int *)(param_1 + 0xfc);
          iVar7 = *(int *)(iVar3 + uVar5 * 8 + 0x10);
          uVar6 = (uint)*(byte *)(iVar3 + uVar5 * 8 + 0x14);
          pfVar8 = (float *)(*(int *)(iVar7 + 8) + iVar7);
          fVar15 = fVar13;
          if ((*(char *)(iVar3 + 0xc) == '\x01') && (1 < *(ushort *)(iVar7 + 4))) {
            fVar16 = *pfVar8;
            fVar17 = pfVar8[(uint)*(ushort *)(iVar7 + 4) * 3 + -3];
            lVar18 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),fVar17);
            in_fpscr = in_fpscr & 0xfffffff;
            uVar1 = in_fpscr | (uint)(fVar13 < fVar17) << 0x1f | (uint)(fVar13 == fVar17) << 0x1e;
            uVar12 = uVar1 | (uint)(NAN(fVar13) || NAN(fVar17)) << 0x1c;
            bVar2 = (byte)(uVar1 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar12 >> 0x1c) & 1)) {
              if (fVar13 < fVar16) {
                fVar16 = fVar16 - fVar13;
                fn_001a23a8();
                fVar13 = (float)lVar18 - fVar16;
              }
            }
            else {
              fVar13 = fVar13 - fVar16;
              fn_001a23a8();
              fVar13 = fVar13 + fVar16;
              in_fpscr = uVar12;
            }
          }
          fn_0054bb74(pfVar8,*(undefined2 *)(iVar7 + 4));
          if (uVar6 < 3) {
            if (uVar6 == 1) {
              fVar13 = -fVar13;
            }
            *(float *)(iVar10 + uVar6 * 4 + 0x18) = fVar13;
            fVar13 = fVar15;
          }
          else if (uVar6 < 6) {
            fn_0052534c(iVar10 + (uVar6 - 3) * 4 + 0xc);
            fVar13 = fVar15;
          }
          else {
            uVar14 = VectorFloatToUnsigned(fVar13,3);
            if (uVar6 < 10) {
              iVar3 = uVar6 - 6;
            }
            else {
              iVar3 = uVar6 - 10;
            }
            if (uVar6 < 10) {
              *(char *)(iVar3 + iVar10 + 0x24) = (char)uVar14;
              fVar13 = fVar15;
            }
            else {
              *(char *)(iVar3 + iVar10 + 0x28) = (char)uVar14;
              fVar13 = fVar15;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  return;
}



void fn_005537d8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_00116f44(param_3,param_1[0x3f] != 0,param_3,param_4,param_4);
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,uVar1,param_4);
  return;
}



void fn_00553754(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xf8) + 0xc) != 0) {
      fn_0019fb94();
    }
    fn_0019fb94(*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    fn_0019fb94();
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined2 *)(param_1 + 0xce) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    fn_0019fb94();
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 8) = 0;
  }
  return;
}


