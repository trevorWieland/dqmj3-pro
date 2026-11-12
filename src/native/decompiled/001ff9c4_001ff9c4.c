#include "001ff9c4_001ff9c4.h"



void fn_001ff9c4(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 **ppuVar9;
  int iVar10;
  code *pcVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  int iVar15;
  undefined4 *local_108 [2];
  undefined4 *local_100 [21];
  undefined4 *local_ac;
  
  uVar3 = param_1[5];
  if ((uint)param_1[6] < uVar3) {
    iVar10 = (param_1[3] - param_1[2]) - uVar3;
  }
  else {
    iVar10 = -uVar3;
  }
  if (param_1[6] + iVar10 != 0) {
    uVar4 = fn_001088e0(*param_1,param_1[*(char *)(param_1[2] + uVar3) + 7]);
    iVar10 = fn_00154a6c();
    if ((iVar10 != 0) && (iVar10 = fn_006e1e4c(uVar4), iVar10 == 0)) {
      uVar3 = param_1[5];
      if ((uint)param_1[6] < uVar3) {
        iVar10 = (param_1[3] - param_1[2]) - uVar3;
      }
      else {
        iVar10 = -uVar3;
      }
      if (param_1[6] + iVar10 != 0) {
        uVar3 = uVar3 + 1;
        if ((uint)(param_1[3] - param_1[2]) <= uVar3) {
          uVar3 = 0;
        }
        param_1[5] = uVar3;
      }
    }
  }
  fn_001088e0(*param_1,param_1[0x27]);
  fn_00154a6c();
  fn_0068eb24(DAT_008977e8);
  uVar4 = fn_006f8008();
  iVar10 = fn_001088e0(*param_1,0);
  uVar4 = VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar10 + 0x10) = uVar4;
  uVar4 = fn_0068eb24(DAT_008977e8);
  uVar5 = fn_006f825c(uVar4,0);
  uVar6 = fn_006f8240(uVar4,0);
  local_108[0] = (undefined4 *)((int)param_1 + 0x2dd);
  fn_001fef28(param_1,param_1[0xb4],param_1[0xae],param_1[0xb0],param_1[0xaf],uVar6,uVar5,
               param_1[0xb6]);
  uVar5 = fn_006f825c(uVar4,1);
  uVar4 = fn_006f8240(uVar4,1);
  local_108[0] = param_1 + 0xb7;
  fn_001fef28(param_1,param_1[0xb5],param_1[0xb1],param_1[0xb3],param_1[0xb2],uVar4,uVar5,
               param_1[0xb6]);
  param_1[0xb6] = param_1[0xb6] + 1;
  iVar10 = fn_0068eb24(DAT_008977e8);
  iVar15 = 0;
  local_ac = param_1 + 0x80;
  bVar12 = 0 < *(int *)(iVar10 + 0xac);
  if ((bool)*(char *)(param_1 + 0xad) == bVar12) {
    if (bVar12) goto LAB_001ffc48;
    piVar7 = (int *)fn_001088e0(*param_1,0x1e);
    piVar7[4] = iVar15;
    (**(code **)(*piVar7 + 0x10))(piVar7,0);
    iVar10 = fn_001828f0(param_1[0x28],s_Null_win_tention_speed_008c450e);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
LAB_001ffc64:
    *(bool *)(param_1 + 0xad) = bVar12;
  }
  else {
    if (bVar12) {
      piVar7 = (int *)fn_001088e0(*param_1,0x1e);
      piVar7[4] = iVar15;
      (**(code **)(*piVar7 + 0x10))(piVar7,1);
      iVar10 = fn_001828f0(param_1[0x28],s_Null_win_tention_speed_008c450e);
      *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe | 1;
LAB_001ffc48:
      iVar10 = fn_001088e0(*param_1,0x1e);
      if (*(char *)(iVar10 + 0x14) != '\0') {
        fn_00154a6c();
      }
      goto LAB_001ffc64;
    }
    iVar10 = fn_001088e0(*param_1,0x1e);
    *(int *)(iVar10 + 0x10) = iVar15;
    iVar10 = fn_001828f0(param_1[0x28],s_Null_win_tention_speed_008c450e);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
    *(undefined1 *)(param_1 + 0xad) = 0;
  }
  iVar10 = fn_0068eb24(DAT_008977e8);
  bVar1 = *(byte *)(iVar10 + 400);
  uVar3 = (uint)bVar1;
  if (uVar3 == 0) {
    piVar7 = (int *)fn_001088e0(*param_1,1);
    uVar4 = fn_00176970();
    fVar14 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = fn_00176970(piVar7);
    fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    piVar7[4] = (int)(fVar14 - fVar13);
    (**(code **)(*piVar7 + 0x10))(piVar7,1);
    iVar10 = 0;
    do {
      piVar7 = (int *)fn_001088e0(*param_1,iVar10 + 0x17);
      (**(code **)(*piVar7 + 0x10))(piVar7,0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
  }
  else {
    uVar4 = fn_001088e0(*param_1,uVar3 + 0x16);
    if (*(byte *)(param_1 + 0x78) < uVar3) {
      uVar5 = fn_00176970(uVar4);
      fVar14 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = fn_00176970(uVar4);
      fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      param_1[0x79] = (int)(fVar14 - fVar13);
    }
    else if (*(byte *)(param_1 + 0x78) != uVar3) {
      uVar4 = fn_00176970(uVar4);
      fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      param_1[0x79] = (int)fVar13;
    }
    iVar10 = 0;
    do {
      piVar7 = (int *)fn_001088e0(*param_1,iVar10 + 0x17);
      bVar12 = iVar10 != uVar3 - 1;
      if (bVar12) {
        pcVar11 = *(code **)(*piVar7 + 0x10);
      }
      else {
        iVar15 = VectorSignedToFloat(param_1[0x79],(byte)(in_fpscr >> 0x16) & 3);
        piVar7[4] = iVar15;
        pcVar11 = *(code **)(*piVar7 + 0x10);
      }
      (*pcVar11)(piVar7,!bVar12);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 5);
    piVar7 = (int *)fn_001088e0(*param_1,1);
    (**(code **)(*piVar7 + 0x10))(piVar7,0);
    uVar4 = fn_00176970(piVar7);
    fVar13 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    local_108[0] = (undefined4 *)(int)fVar13;
    ppuVar9 = local_100;
    if ((int)fVar13 <= param_1[0x79] + 1) {
      ppuVar9 = local_108;
    }
    local_100[0] = (undefined4 *)(param_1[0x79] + 1);
    param_1[0x79] = *ppuVar9;
  }
  if (*(byte *)(param_1 + 0x78) < uVar3) {
    iVar10 = fn_001828f0(param_1[0x28],s_Null_lamp_tention_008c441c);
    bVar2 = 0;
    if (iVar10 != 0) {
      bVar2 = *(byte *)(iVar10 + 0x44);
    }
    if (iVar10 != 0 && (bVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  *(byte *)(param_1 + 0x78) = bVar1;
  iVar8 = fn_0068eb24(DAT_008977e8);
  iVar10 = 1;
  iVar15 = 1;
  if (1 < *(byte *)(iVar8 + 0x129)) {
    do {
      iVar10 = iVar15 + 1;
      *(byte *)(param_1[iVar15 + 0x79] + 0x44) = *(byte *)(param_1[iVar15 + 0x79] + 0x44) & 0xfe | 1
      ;
      iVar8 = fn_0068eb24(DAT_008977e8);
      iVar15 = iVar10;
    } while (iVar10 < (int)(uint)*(byte *)(iVar8 + 0x129));
    if (4 < iVar10) goto LAB_001fff3c;
  }
  do {
    iVar15 = iVar10 + 1;
    *(byte *)(param_1[iVar10 + 0x79] + 0x44) = *(byte *)(param_1[iVar10 + 0x79] + 0x44) & 0xfe;
    iVar10 = iVar15;
  } while (iVar15 < 5);
LAB_001fff3c:
  fn_0014481c(DAT_008977e8);
  iVar15 = fn_006b6bc4();
  iVar10 = 0;
  if (0 < iVar15) {
    do {
      uVar4 = fn_00144810(DAT_008977e8);
      iVar15 = fn_006a873c(uVar4,iVar10);
      iVar15 = param_1[iVar15 + 0x31];
      iVar8 = iVar10 + 1;
      uVar4 = param_1[iVar10 * 3 + 0x3a];
      uVar5 = param_1[iVar10 * 3 + 0x3b];
      *(undefined4 *)(iVar15 + 0x1c) = param_1[iVar10 * 3 + 0x39];
      *(undefined4 *)(iVar15 + 0x20) = uVar4;
      *(undefined4 *)(iVar15 + 0x24) = uVar5;
      *(byte *)(iVar15 + 0x44) = *(byte *)(iVar15 + 0x44) & 0xef | 0x10;
      fn_0014481c(DAT_008977e8);
      iVar15 = fn_006b6bc4();
      iVar10 = iVar8;
    } while (iVar8 < iVar15);
  }
  fn_00144810(DAT_008977e8);
                    /* WARNING: Subroutine does not return */
  fn_006a8660();
}


