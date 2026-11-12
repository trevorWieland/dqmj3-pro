#include "0011e1f0_0011e284.h"



void fn_0011e284(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  byte *pbVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  int local_50 [11];
  
  pbVar6 = param_2 + 0x180388;
  uVar5 = *(undefined4 *)(param_2 + 0x18047c);
  *param_1 = *(undefined4 *)(param_2 + 0x180478);
  param_1[1] = uVar5;
  cVar2 = '\x14';
  *(byte *)(param_1 + 2) = param_2[0x180384];
  do {
    if ((0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) && (pbVar6[cVar2 * 0x418 + -0x4019] != 0)
       ) {
      *(short *)((int)param_1 + *(char *)((int)param_1 + 0x1a) * 2 + 10) =
           *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080);
      if (pbVar6[cVar2 * 0x418 + -0x400a] != 0) {
        *(undefined1 *)((int)param_1 + *(char *)((int)param_1 + 0x1a) + 0x1b) = 1;
      }
      *(char *)((int)param_1 + 0x1a) = *(char *)((int)param_1 + 0x1a) + '\x01';
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  cVar2 = '\x1c';
  do {
    if ((0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) && (pbVar6[cVar2 * 0x418 + -0x4019] != 0)
       ) {
      *(short *)((int)param_1 + *(char *)((int)param_1 + 0x1a) * 2 + 10) =
           *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080);
      if (pbVar6[cVar2 * 0x418 + -0x400a] != 0) {
        *(undefined1 *)((int)param_1 + *(char *)((int)param_1 + 0x1a) + 0x1b) = 1;
      }
      *(char *)((int)param_1 + 0x1a) = *(char *)((int)param_1 + 0x1a) + '\x01';
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < ' ');
  cVar2 = '\x10';
  do {
    if (0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) {
      *(short *)(param_1 + 9) =
           (short)*(undefined4 *)(pbVar6 + cVar2 * 0x418 + -0x3c70) + *(short *)(param_1 + 9);
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x14');
  cVar2 = '\x18';
  do {
    if (0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) {
      *(short *)(param_1 + 9) =
           (short)*(undefined4 *)(pbVar6 + cVar2 * 0x418 + -0x3c70) + *(short *)(param_1 + 9);
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x1c');
  fVar17 = 0.0;
  uVar16 = 0;
  cVar2 = '\x10';
  param_1[10] = (int)(char)*pbVar6;
  fVar15 = fVar17;
  fVar13 = fVar17;
  fVar14 = fVar17;
  do {
    pbVar10 = pbVar6 + cVar2 * 0x418 + -0x4080;
    if (0 < *(short *)pbVar10) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(pbVar6 + cVar2 * 0x418 + -0x4064),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(pbVar6 + cVar2 * 0x418 + -0x4062),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar15 = fVar12 + fVar15;
      fVar14 = fVar11 + fVar14;
      uVar5 = fn_00176dc0(pbVar10);
      fVar11 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar17 = fVar11 + fVar17;
      uVar5 = fn_00176e70(pbVar10);
      fVar11 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = fVar11 + fVar13;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x14');
  fVar11 = (float)((ulonglong)uVar16 >> 0x20);
  param_1[0xb] = fVar15 / fVar17;
  param_1[0xc] = fVar14 / fVar13;
  param_1[0xd] = *(undefined4 *)(param_2 + 0x180398);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x18039c);
  cVar2 = '\x14';
  fVar15 = fVar11;
  do {
    if (0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(pbVar6 + cVar2 * 0x418 + -0x4064),
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar15 = fVar13 + fVar15;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  *(bool *)(param_1 + 0xf) = fVar15 != fVar11;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  if (((param_2[0x180384] == 5) && (iVar3 = fn_00145adc(param_2 + 0x180470), iVar3 != 0)) &&
     (uVar8 = 0, *param_2 != 0)) {
    do {
      if (param_2[uVar8 * 0x266c + 4] == 10) {
        bVar1 = param_2[uVar8 * 0x266c + 8];
        iVar3 = fn_00154ae0(DAT_008977e4);
        psVar9 = (short *)(iVar3 + (char)(bVar1 - 0x14) * 0x24 + 0x38);
        iVar3 = fn_0013add0((int)*psVar9);
        if ((iVar3 != 0) && (iVar3 = fn_0013ad98((int)*psVar9), iVar3 != 0)) {
          *(undefined1 *)((int)param_1 + 0x3e) = 1;
        }
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < *param_2);
  }
  iVar3 = 0;
  cVar2 = '\x10';
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  do {
    if (0 < *(short *)(pbVar6 + cVar2 * 0x418 + -0x4080)) {
      if (pbVar6[cVar2 * 0x418 + -0x3c6c] == 0) {
        local_50[iVar3] = (int)(pbVar6 + cVar2 * 0x418 + -0x4080);
        iVar3 = iVar3 + 1;
      }
      else {
        iVar4 = iVar3 + 1;
        local_50[iVar3] = (int)(param_2 + 0x184628);
        iVar3 = iVar3 + 2;
        local_50[iVar4] = (int)(param_2 + 0x184a40);
      }
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x14');
  if (0 < iVar3) {
    param_2 = (byte *)&DAT_00897804;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar5 = fn_00144df4(*(undefined4 *)(*(int *)param_2 + 0xc),iVar4);
      param_1[iVar4 * 2 + 0x10] = uVar5;
      iVar7 = iVar4 + 1;
      *(undefined1 *)(param_1 + iVar4 * 2 + 0x11) = *(undefined1 *)(local_50[iVar4] + 0x5a);
      iVar4 = iVar7;
    } while (iVar7 < iVar3);
  }
  return;
}



void fn_0011e1f0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_0016383c(param_1,0xd,param_2);
  bVar3 = *(int *)(param_1 + 0x20) == 0;
  cVar1 = '\0';
  if (!bVar3) {
    cVar1 = *(char *)(param_1 + 0x39);
  }
  if (bVar3 || cVar1 == '\0') {
    bVar3 = *(int *)(param_1 + 0x28) == 0;
    cVar1 = '\0';
    if (!bVar3) {
      cVar1 = *(char *)(param_1 + 0x39);
    }
    if ((bVar3 || cVar1 == '\0') || (*(char *)(param_1 + 0x38) != '\0')) goto LAB_0011e270;
    uVar2 = 0xf;
  }
  else {
    if (*(char *)(param_1 + 0x38) != '\0') goto LAB_0011e270;
    uVar2 = 0xc;
  }
  fn_00128788(param_1,uVar2,0,param_2);
LAB_0011e270:
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}


