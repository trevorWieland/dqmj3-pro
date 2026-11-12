#include "single_00745064_2.h"



int fn_00745064(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  
  iVar1 = DAT_008bfab0;
  iVar6 = 0x502;
  if (param_2 != 0) {
    return 0x502;
  }
  puVar3 = (uint *)(DAT_008bfab0 + 0x770);
  iVar2 = 1;
  do {
    uVar4 = param_1[iVar2 * 0x11 + 0xd];
    if (((((uVar4 == 0) || (param_1[0x1a] != param_1[iVar2 * 0x11 + 0x1a])) ||
         (param_1[0x15] != param_1[iVar2 * 0x11 + 0x15])) ||
        ((param_1[0x10] != param_1[iVar2 * 0x11 + 0x10] ||
         (param_1[0x11] != param_1[iVar2 * 0x11 + 0x11])))) ||
       ((param_1[0x12] != param_1[iVar2 * 0x11 + 0x12] ||
        (((int)(param_1[iVar2 * 0x11 + 0x15] + uVar4 + -1) >> 0x19 != param_1[0xd] >> 0x19 ||
         (uVar4 < (uint)param_1[0xd])))))) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  if (iVar2 == 6) {
    iVar6 = 0;
  }
  if ((*(char *)(DAT_008bfab0 + 0x107) == '\0') || (iVar6 != 0)) {
    *puVar3 = *puVar3 & 0xfffffffe;
    return iVar6;
  }
  fVar10 = (float)param_1[7];
  fVar12 = (float)param_1[6];
  uVar4 = *(uint *)(DAT_008bfab0 + 0x77c);
  fVar8 = (float)param_1[8];
  fVar9 = (float)param_1[9];
  *(uint *)(DAT_008bfab0 + 0x77c) = uVar4 & 0xfeefffff;
  iVar6 = VectorFloatToUnsigned(fVar10 * 255.0,3);
  uVar7 = VectorFloatToUnsigned(fVar12 * 255.0,3);
  iVar2 = VectorFloatToUnsigned(fVar8 * 255.0,3);
  iVar11 = VectorFloatToUnsigned(fVar9 * 255.0,3);
  *(uint *)(iVar1 + 0x774) = uVar7 | iVar6 << 8 | iVar2 << 0x10 | iVar11 << 0x18;
  uVar7 = *(uint *)(iVar1 + 0x778);
  uVar5 = (param_1[0x10] & 0x7ffU) << 0x10;
  *(uint *)(iVar1 + 0x778) = uVar7 & 0xf800ffff | uVar5;
  *(uint *)(iVar1 + 0x778) = param_1[0x11] & 0x7ffU | uVar7 & 0xf800f800 | uVar5;
  *(uint *)(iVar1 + 0x79c) = *(uint *)(iVar1 + 0x79c) & 0xff000000;
  *(uint *)(iVar1 + 0x7a8) = param_1[0x14] & 0xfU | *(uint *)(iVar1 + 0x7a8) & 0xfffffff0;
  iVar6 = param_1[0x12];
  if (iVar6 != 0x190a) {
    if (iVar6 < 0x190a) {
      uVar7 = iVar6 - 0x1906;
      if ((1 < uVar7) && (uVar7 != 2 && uVar7 != 3)) {
        return 0x502;
      }
    }
    else {
      if (iVar6 == 0x6040) {
        *(uint *)(iVar1 + 0x77c) = uVar4 & 0x8eef88cf | 0x40100006;
        *(uint *)(iVar1 + 0x780) = *(uint *)(iVar1 + 0x780) & 0xf0f0e000;
        goto LAB_0074559c;
      }
      if (iVar6 != 0x675a && iVar6 != 0x675b) {
        return 0x502;
      }
    }
  }
  *(uint *)(iVar1 + 0x77c) = uVar4 & 0x8eefffff | 0x10000000;
  iVar6 = param_1[2];
  if (iVar6 == 0x2901) {
    uVar4 = uVar4 & 0x8eef8fff | 0x10002000;
LAB_007452cc:
    *(uint *)(iVar1 + 0x77c) = uVar4;
  }
  else {
    if (iVar6 == 0x812d) {
      uVar4 = uVar4 & 0x8eef8fff | 0x10001000;
      goto LAB_007452cc;
    }
    if (iVar6 == 0x812f) {
      uVar4 = uVar4 & 0x8eef8fff | 0x10000000;
      goto LAB_007452cc;
    }
    if (iVar6 == 0x8370) {
      uVar4 = uVar4 & 0x8eef8fff | 0x10003000;
      goto LAB_007452cc;
    }
  }
  iVar6 = param_1[3];
  if (iVar6 == 0x2901) {
    uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffff8ff | 0x200;
LAB_00745338:
    *(uint *)(iVar1 + 0x77c) = uVar4;
  }
  else {
    if (iVar6 == 0x812d) {
      uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffff8ff | 0x100;
      goto LAB_00745338;
    }
    if (iVar6 == 0x812f) {
      uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffff8ff;
      goto LAB_00745338;
    }
    if (iVar6 == 0x8370) {
      uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffff8ff | 0x300;
      goto LAB_00745338;
    }
  }
  if (*param_1 == 0x2600) {
    uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffffffd;
LAB_00745364:
    *(uint *)(iVar1 + 0x77c) = uVar4;
  }
  else if (*param_1 == 0x2601) {
    uVar4 = *(uint *)(iVar1 + 0x77c) | 2;
    goto LAB_00745364;
  }
  iVar6 = param_1[1];
  if (iVar6 == 0x2701) {
    uVar4 = *(uint *)(iVar1 + 0x77c) | 4;
    *(uint *)(iVar1 + 0x77c) = uVar4;
    uVar5 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
    uVar7 = uVar5 | *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
    *(uint *)(iVar1 + 0x780) = uVar5 | *(uint *)(iVar1 + 0x780) & 0xfff0ffff;
    uVar5 = param_1[5];
joined_r0x00745520:
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    *(uint *)(iVar1 + 0x780) = uVar7 | (uVar5 & 0xf) << 0x18;
    *(uint *)(iVar1 + 0x77c) = uVar4 & 0xfeffffff;
  }
  else if (iVar6 < 0x2701) {
    if (iVar6 == 0x2600) {
      *(uint *)(iVar1 + 0x780) = *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
      *(uint *)(iVar1 + 0x77c) = *(uint *)(iVar1 + 0x77c) & 0xfefffffb;
    }
    else if (iVar6 == 0x2601) {
      *(uint *)(iVar1 + 0x780) = *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
      *(uint *)(iVar1 + 0x77c) = *(uint *)(iVar1 + 0x77c) & 0xfeffffff | 4;
    }
    else if (iVar6 == 0x2700) {
      uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffffffb;
      *(uint *)(iVar1 + 0x77c) = uVar4;
      uVar5 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      uVar7 = uVar5 | *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
      *(uint *)(iVar1 + 0x780) = uVar5 | *(uint *)(iVar1 + 0x780) & 0xfff0ffff;
      uVar5 = param_1[5];
      goto joined_r0x00745520;
    }
  }
  else {
    if (iVar6 == 0x2702) {
      uVar4 = *(uint *)(iVar1 + 0x77c) & 0xfffffffb;
      *(uint *)(iVar1 + 0x77c) = uVar4;
      uVar5 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      uVar7 = uVar5 | *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
      *(uint *)(iVar1 + 0x780) = uVar5 | *(uint *)(iVar1 + 0x780) & 0xfff0ffff;
      uVar5 = param_1[5];
    }
    else {
      if (iVar6 != 0x2703) goto LAB_007454b4;
      uVar4 = *(uint *)(iVar1 + 0x77c) | 4;
      *(uint *)(iVar1 + 0x77c) = uVar4;
      uVar5 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      uVar7 = uVar5 | *(uint *)(iVar1 + 0x780) & 0xf0f0ffff;
      *(uint *)(iVar1 + 0x780) = uVar5 | *(uint *)(iVar1 + 0x780) & 0xfff0ffff;
      uVar5 = param_1[5];
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    *(uint *)(iVar1 + 0x780) = uVar7 | (uVar5 & 0xf) << 0x18;
    *(uint *)(iVar1 + 0x77c) = uVar4 | 0x1000000;
  }
LAB_007454b4:
  *(uint *)(iVar1 + 0x780) = *(uint *)(iVar1 + 0x780) & 0xffffe000;
  if (param_1[0x12] == 0x675a) {
    iVar6 = 2;
  }
  else {
    iVar6 = 0;
  }
  *(uint *)(iVar1 + 0x77c) = *(uint *)(iVar1 + 0x77c) & 0xffffffcf | iVar6 << 4;
LAB_0074559c:
  uVar4 = fn_00166b28(param_1[0xd]);
  *(uint *)(iVar1 + 0x784) = *(uint *)(iVar1 + 0x784) & 0xc0000000 | uVar4 >> 3;
  uVar4 = fn_00166b28(param_1[0x1e]);
  *(uint *)(iVar1 + 0x788) = *(uint *)(iVar1 + 0x788) & 0xffc00000 | uVar4 >> 3 & 0xe03fffff;
  uVar4 = fn_00166b28(param_1[0x2f]);
  *(uint *)(iVar1 + 0x78c) = *(uint *)(iVar1 + 0x78c) & 0xffc00000 | uVar4 >> 3 & 0xe03fffff;
  uVar4 = fn_00166b28(param_1[0x40]);
  *(uint *)(iVar1 + 0x790) = *(uint *)(iVar1 + 0x790) & 0xffc00000 | uVar4 >> 3 & 0xe03fffff;
  uVar4 = fn_00166b28(param_1[0x51]);
  *(uint *)(iVar1 + 0x794) = *(uint *)(iVar1 + 0x794) & 0xffc00000 | uVar4 >> 3 & 0xe03fffff;
  uVar4 = fn_00166b28(param_1[0x62]);
  *(uint *)(iVar1 + 0x798) = *(uint *)(iVar1 + 0x798) & 0xffc00000 | uVar4 >> 3 & 0xe03fffff;
  *puVar3 = *puVar3 | 1;
  fn_006f95a4(0x81,10,iVar1 + 0x774);
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = *(undefined4 *)(iVar1 + 0x7a8);
    DAT_008bf790[1] = 0xf008e;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  return 0;
}


