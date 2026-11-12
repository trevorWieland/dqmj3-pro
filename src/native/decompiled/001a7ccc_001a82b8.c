#include "001a7ccc_001a82b8.h"



void fn_001a82b8(uint *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  fn_00170704();
  if (*(char *)((int)param_1 + 0x6f) != '\0') {
    fn_001ac8e0(&DAT_008ef5bc,*param_1 & 0xff);
    if ((param_1[0xc] == 0) || (*(char *)(param_1[0xc] + 0x11) != '\x04')) {
      if (0 < (short)param_1[0xd]) {
        fn_001acac4(&DAT_008ef5bc,*param_1 & 0xff);
        *(undefined2 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0xd) = 0;
    }
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    uVar5 = param_1[0xc];
LAB_001a9a58:
    if (uVar5 == 0) {
      param_1[0xc] = 0;
    }
    else {
      if (*(char *)(uVar5 + 0x11) == '\x04') goto LAB_001a9a74;
      param_1[0xc] = uVar5;
      do {
        uVar4 = *(uint *)(uVar5 + 0x14);
        if ((uVar4 == 0) || (*(char *)(uVar4 + 0x11) != '\x04')) {
          uVar5 = uVar4;
        }
        else {
          *(undefined4 *)(uVar5 + 0x14) = *(undefined4 *)(uVar4 + 0x14);
          coproc_moveto_Data_Memory_Barrier(0);
          *(undefined1 *)(uVar4 + 0x11) = 3;
        }
      } while (uVar5 != 0);
    }
    *(undefined1 *)((int)param_1 + 0x6f) = 0;
  }
  uVar5 = param_1[0xc];
  iVar2 = (int)(short)param_1[0xd];
  for (iVar3 = iVar2; iVar3 != 0 && uVar5 != 0; iVar3 = iVar3 + -1) {
    uVar5 = *(uint *)(uVar5 + 0x14);
  }
  for (; iVar2 < 5; iVar2 = iVar2 + 1) {
    uVar4 = 0;
    if (uVar5 != 0) {
      if ((short)param_1[0xd] == 0) {
        *(undefined2 *)((int)param_1 + 0x36) = 0;
        fn_001ac8e0(&DAT_008ef5bc,*param_1 & 0xff);
        *(undefined1 *)(uVar5 + 0x11) = 2;
        if ((*(ushort *)((int)param_1 + 0x1e) & 0xf) >> 2 == 2) {
          uVar4 = (uint)*(byte *)((int)param_1 + 0x6e);
          bVar6 = uVar4 == 0;
          if (bVar6) {
            uVar4 = *(uint *)(uVar5 + 8);
          }
          if (!bVar6 || uVar4 != 0) {
            *(undefined1 *)((int)param_1 + 0x6e) = 1;
          }
        }
        fn_001acb84(&DAT_008ef5bc,*param_1 & 0xff,uVar5,*(undefined2 *)((int)param_1 + 0x1e));
      }
      else {
        fn_001ac948(&DAT_008ef5bc,*param_1 & 0xff,uVar5,(int)*(short *)((int)param_1 + 0x36));
        sVar1 = *(short *)((int)param_1 + 0x36) + 1;
        *(short *)((int)param_1 + 0x36) = sVar1;
        if (3 < sVar1) {
          *(undefined2 *)((int)param_1 + 0x36) = 0;
        }
      }
      uVar4 = *(uint *)(uVar5 + 0x14);
      *(short *)(param_1 + 0xd) = (short)param_1[0xd] + 1;
    }
    uVar5 = uVar4;
  }
  fn_001707b4(param_1 + 0x1c);
  return;
LAB_001a9a74:
  coproc_moveto_Data_Memory_Barrier(0);
  *(undefined1 *)(uVar5 + 0x11) = 3;
  uVar5 = *(uint *)(uVar5 + 0x14);
  goto LAB_001a9a58;
}



void fn_001a8294(int param_1,undefined4 param_2)

{
  fn_00301a9c(param_1 + 0x7c,param_2,0x20);
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x40;
  return;
}



void fn_001a812c(int param_1,int param_2,ushort *param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_30 [5];
  
  iVar6 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x18dc) + 0x68);
  if ((param_3[1] == *(ushort *)(iVar6 + 4)) &&
     (*(uint *)(iVar6 + 8) = *(uint *)(param_3 + 2) >> 0x10 | *(uint *)(param_3 + 2) << 0x10,
     (*param_3 & 0xff00) != 0)) {
    iVar11 = iVar6 + 0x70;
    uVar2 = param_3[4];
    uVar3 = param_3[5];
    fn_00170704(iVar11);
    iVar10 = *(int *)(iVar6 + 0x30);
    if (iVar10 == 0) {
      fn_001707b4(iVar11);
    }
    else {
      psVar7 = (short *)(iVar6 + 0x34);
      iVar9 = 0;
      if (*(short *)(iVar6 + 0x34) != 0) {
        while (*(ushort *)(iVar10 + 0x12) != uVar2) {
          sVar4 = *psVar7;
          *psVar7 = sVar4 + -1;
          local_30[iVar9] = iVar10;
          iVar9 = iVar9 + 1;
          if ((uVar2 == 0) && (*(ushort *)(iVar10 + 0x12) == uVar3 || uVar3 == 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if ((bVar5) || ((short)(sVar4 + -1) == 0)) goto LAB_001a8238;
        }
        *(undefined1 *)(iVar10 + 0x11) = 2;
      }
LAB_001a8238:
      if (uVar2 == 0) {
        *psVar7 = 0;
      }
      coproc_moveto_Data_Memory_Barrier(0);
      iVar8 = 0;
      if (0 < iVar9) {
        do {
          piVar1 = local_30 + iVar8;
          iVar8 = iVar8 + 1;
          *(undefined1 *)(*piVar1 + 0x11) = 3;
        } while (iVar8 < iVar9);
      }
      *(int *)(iVar6 + 0x30) = iVar10;
      fn_001707b4(iVar11);
    }
  }
  *(bool *)(iVar6 + 0xc) = (*param_3 & 0xff) == 1;
  return;
}



void fn_001a80f0(uint *param_1)

{
  if ((param_1[0x1b] & 0x8000) != 0) {
    fn_001a9968(&DAT_008ef5bc,*param_1 & 0xff,(int)(short)param_1[1]);
    *(ushort *)(param_1 + 0x1b) = (ushort)param_1[0x1b] & 0x7fff;
  }
  return;
}



void fn_001a7efc(int param_1)

{
  int iVar1;
  uint in_fpscr;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = 0;
  uVar8 = 0x4120000000000000;
  iVar2 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  if (iVar2 < 0x409c6a80) {
    fVar3 = 4.888;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 4),(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar2 = VectorFloatToUnsigned(fVar3 * 0.20458265,3);
  *(int *)(param_1 + 0x9c) = iVar2 * 0xa0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  iVar2 = VectorUnsignedToFloat(*(float *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 4.888;
  if (0x409c6a7f < iVar2) {
    fVar3 = *(float *)(param_1 + 0xc);
  }
  if (0x409c6a7f < iVar2) {
    fVar3 = (float)VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar2 = VectorFloatToUnsigned(fVar3 * 0.20458265,3);
  VectorUnsignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  *(int *)(param_1 + 0xa4) = iVar2 * 0xa0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x34);
  uVar7 = 0x43000000;
  do {
    iVar2 = param_1 + iVar1 * 4;
    *(undefined4 *)(iVar2 + 0xb4) = 0;
    VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xac),(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)((ulonglong)uVar8 >> 0x20);
    fn_001a4a80(*(undefined4 *)(iVar2 + 0xac));
    fVar6 = (float)uVar7;
    iVar1 = iVar1 + 1;
    *(int *)(iVar2 + 0xbc) = (int)(fVar3 * fVar6);
  } while (iVar1 < 2);
  fVar3 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 200) = 0;
  if (0x3f733333 < (int)fVar3) {
    fVar3 = 0.95;
  }
  *(int *)(param_1 + 0xcc) = (int)(*(float *)(param_1 + 0x10) * fVar6);
  *(int *)(param_1 + 0xe4) = (int)(*(float *)(param_1 + 0x20) * fVar6);
  *(int *)(param_1 + 0xe0) = (int)(*(float *)(param_1 + 0x1c) * fVar6);
  if (*(char *)(param_1 + 0x24) == '\x01') {
    fVar4 = fVar3 - 1.0;
    fVar5 = -128.0;
  }
  else {
    fVar4 = 1.0 - fVar3;
    fVar5 = fVar6;
  }
  *(int *)(param_1 + 0xe8) = (int)(fVar4 * fVar6);
  *(int *)(param_1 + 0xec) = (int)(fVar3 * fVar5);
  fn_00158f6c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_001a7ccc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  bool bVar17;
  undefined4 local_48 [5];
  int local_34;
  
  if (*(char *)(param_1 + 0x104) == '\0') {
    return;
  }
  local_48[0] = *param_2;
  local_48[1] = param_2[1];
  local_34 = 0;
  do {
    iVar1 = param_1 + local_34 * 4;
    iVar3 = param_1 + local_34 * 8;
    iVar2 = *(int *)(iVar1 + 0xd0);
    iVar9 = 0;
    piVar4 = (int *)(*(int *)(iVar1 + 0x3c) + *(int *)(param_1 + 0xa0) * 4);
    piVar5 = (int *)(*(int *)(iVar1 + 0x4c) + *(int *)(param_1 + 0xa8) * 4);
    piVar6 = (int *)(*(int *)(iVar3 + 0x60) + *(int *)(param_1 + 0xb8) * 4);
    piVar7 = (int *)(*(int *)(iVar1 + 0x7c) + *(int *)(param_1 + 200) * 4);
    piVar8 = (int *)local_48[local_34];
    piVar15 = (int *)(*(int *)(iVar3 + 0x5c) + *(int *)(param_1 + 0xb4) * 4);
    do {
      iVar3 = *piVar8;
      iVar13 = *piVar5;
      iVar9 = iVar9 + 1;
      *piVar5 = iVar3;
      iVar10 = *piVar15;
      if (iVar10 < 0) {
        iVar11 = -iVar10;
      }
      else {
        iVar11 = iVar10;
      }
      iVar11 = iVar11 * *(int *)(param_1 + 0xbc) >> 7;
      if (iVar10 < 0) {
        iVar11 = -iVar11;
      }
      *piVar15 = iVar11 + iVar13;
      iVar11 = *piVar6;
      if (iVar11 < 0) {
        iVar14 = -iVar11;
      }
      else {
        iVar14 = iVar11;
      }
      iVar14 = iVar14 * *(int *)(param_1 + 0xc0) >> 7;
      if (iVar11 < 0) {
        iVar14 = -iVar14;
      }
      *piVar6 = iVar13 + iVar14;
      iVar14 = *(int *)(param_1 + 0xcc);
      iVar13 = *piVar7;
      if (iVar13 < 0) {
        iVar12 = -iVar13;
      }
      else {
        iVar12 = iVar13;
      }
      iVar12 = iVar12 * iVar14 >> 7;
      if (iVar13 < 0) {
        iVar12 = -iVar12;
      }
      iVar12 = iVar12 + (iVar10 - iVar11);
      bVar17 = iVar12 < 0;
      *piVar7 = iVar12;
      if (bVar17) {
        iVar12 = -iVar12;
      }
      iVar10 = iVar12 * iVar14 >> 7;
      if (bVar17) {
        iVar10 = -iVar10;
      }
      iVar11 = *(int *)(param_1 + 0xe8);
      iVar12 = *piVar4;
      iVar16 = *(int *)(param_1 + 0xe0);
      iVar14 = *(int *)(param_1 + 0xec);
      *piVar4 = iVar3;
      iVar2 = iVar2 * iVar14 + iVar11 * (iVar13 - iVar10) >> 7;
      *piVar8 = *(int *)(param_1 + 0xe4) * iVar2 + iVar12 * iVar16 >> 7;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
      piVar15 = piVar15 + 1;
    } while (iVar9 < 0xa0);
    local_34 = local_34 + 1;
    *(int *)(iVar1 + 0xd0) = iVar2;
  } while (local_34 < 2);
  iVar2 = *(int *)(param_1 + 0xa0) + 0xa0;
  *(int *)(param_1 + 0xa0) = iVar2;
  if (*(int *)(param_1 + 0x9c) <= iVar2) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xa8) + 0xa0;
  *(int *)(param_1 + 0xa8) = iVar2;
  if (*(int *)(param_1 + 0xa4) <= iVar2) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb4) + 0xa0;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (*(int *)(param_1 + 0xac) <= iVar2) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb8) + 0xa0;
  *(int *)(param_1 + 0xb8) = iVar2;
  if (*(int *)(param_1 + 0xb0) <= iVar2) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  iVar2 = *(int *)(param_1 + 200) + 0xa0;
  *(int *)(param_1 + 200) = iVar2;
  if (*(int *)(param_1 + 0xc4) <= iVar2) {
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}


