#include "0016f8fc_00170218.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


int fn_00170218(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_60 [3];
  char local_51 [49];
  undefined4 local_20;
  
  iVar3 = 0;
  local_20 = 0;
  do {
    iVar1 = fn_0017c354(local_60,&local_20,iVar3 * 0x10 + 0x400U & 0xffff,0x40);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = 0;
    do {
      puVar2 = local_60 + iVar1 * 4;
      if ((*puVar2 & 0xff) == 0xfe) {
        DAT_008f314c = '\0';
        fn_0017d77c(&DAT_008f314c,puVar2,0xf);
        if (DAT_008f314c == local_51[iVar1 * 0x10]) {
          *(ushort *)(param_1 + 2) = (ushort)(*puVar2 >> 8) & 0xfff;
          *(ushort *)((int)param_1 + 10) = (ushort)(*puVar2 >> 0x14);
          *param_1 = local_60[iVar1 * 4 + 1];
          param_1[1] = local_60[iVar1 * 4 + 2];
          return 0;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x40);
  return -0x377ef011;
}



void fn_0017008c(float *param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  svc_0x28();
  uVar7 = (int)param_1 - (int)*param_2;
  uVar5 = (int)param_2 - (param_2[1] + (uint)(param_1 < (float *)*param_2));
  uVar3 = (ulonglong)uVar7 * 3 +
          ((ulonglong)
           (uint)(((int)uVar5 >> 0x1f) * -0x452cb512 + (int)((ulonglong)uVar5 * 0xbad34aee >> 0x20))
           << 0x20 | (ulonglong)uVar5 * 0xbad34aee & 0xffffffff) +
          CONCAT44(uVar5 * 3,(int)((ulonglong)uVar7 * 0xbad34aee >> 0x20));
  uVar5 = (uint)(uVar3 >> 0x20);
  bVar10 = (uint)uVar3 < DAT_008c07c0;
  if ((int)(uVar5 - (DAT_008c07c4 + (uint)bVar10)) < 0 ==
      (SBORROW4(uVar5,DAT_008c07c4) != SBORROW4(uVar5 - DAT_008c07c4,(uint)bVar10))) {
    iVar1 = (int)uVar5 >> 0x1f;
    lVar4 = (ulonglong)uVar5 * 0xd7b634db +
            CONCAT44(iVar1 * -0x2849cb25,(int)((uVar3 & 0xffffffff) * 0xd7b634db >> 0x20));
    lVar2 = (uVar3 & 0xffffffff) * 0x431bde82;
    uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
    uVar8 = (uint)((ulonglong)uVar5 * 0x431bde82);
    uVar7 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar4,(uint)lVar2);
    iVar6 = ((int)uVar7 >> 0x1f) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar7,uVar9) +
            iVar1 * 0x431bde82 + (int)((ulonglong)uVar5 * 0x431bde82 >> 0x20) +
            (uint)CARRY4(uVar7 + uVar9,uVar8);
    uVar5 = uVar7 + uVar9 + uVar8 >> 0x12 | iVar6 * 0x4000;
    uVar13 = fn_00191dd4(uVar5 + -iVar1,(iVar6 >> 0x12) + (uint)CARRY4(uVar5,-iVar1));
    uVar5 = *param_3;
    fVar11 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    *param_1 = 1.0 - fVar12 / ((float)uVar13 / fVar11);
    svc_0x28();
    *param_2 = uVar5;
    param_2[1] = (uint)((ulonglong)uVar13 >> 0x20);
    *param_3 = 0;
    fVar11 = *param_1;
    if (*param_1 <= 0.0) {
      fVar11 = 0.0;
    }
    *param_1 = fVar11;
  }
  return;
}



void fn_00170048(int *param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_0017c8a0(&local_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x170068);
  }
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  *param_1 = local_10;
  return;
}



undefined4 * fn_0016ffac(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = &DAT_00200080;
    puVar1 = param_1 + 3;
    param_1[2] = 0;
    param_1 = param_1 + 4;
    *puVar1 = 0;
  }
  *param_1 = 0x13000;
  param_1[1] = 0xf0080;
  return param_1 + 2;
}



undefined4 * fn_0016fe54(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    *param_1 = 0;
    param_1[1] = &DAT_00200080;
    puVar1 = param_1 + 3;
    param_1[2] = 0;
    param_1 = param_1 + 4;
    *puVar1 = 0;
  }
  *param_1 = 0;
  param_1[1] = 0xf008f;
  param_1[2] = 1;
  param_1[3] = 0xf01c6;
  param_1[4] = 0;
  param_1[5] = 0xf01c2;
  return param_1 + 6;
}



void fn_0016fb98(int param_1)

{
  short sVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = 0;
  iVar8 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      iVar12 = *(int *)(param_1 + iVar8 * 4 + 0x10);
      uVar4 = 0x2c0;
      puVar2 = (uint *)(*(int *)(param_1 + 0xb4) + iVar11 * 4);
      iVar9 = 0x2b1;
      puVar10 = (uint *)(param_1 + 0xa4);
      if (*(char *)(iVar12 + 6) != '\0') {
        uVar4 = 0x290;
        iVar9 = 0x281;
        puVar10 = (uint *)(param_1 + 0xa8);
      }
      iVar5 = *(int *)(iVar12 + 0x18);
      uVar7 = 0;
      if (*(int *)(iVar12 + 0x1c) != 0) {
        do {
          psVar6 = (short *)(iVar5 + iVar12 + uVar7 * 0x14);
          sVar1 = *psVar6;
          if (sVar1 == 0) {
            *puVar10 = *puVar10 | (*(uint *)(psVar6 + 2) & 1) << ((ushort)psVar6[1] & 0xff);
          }
          else {
            if (sVar1 == 1) {
              puVar3 = puVar2 + 1;
              *puVar2 = *(int *)(psVar6 + 6) << 0x10 | *(int *)(psVar6 + 8) << 0x18 |
                        *(uint *)(psVar6 + 2) | *(int *)(psVar6 + 4) << 8;
              *puVar3 = (uint)(ushort)psVar6[1] + iVar9 | 0xf0000;
            }
            else {
              if (sVar1 != 2) goto LAB_0016fce0;
              *puVar2 = (uint)(ushort)psVar6[1];
              puVar2[1] = uVar4 | 0x803f0000;
              puVar2[2] = (*(uint *)(psVar6 + 6) & 0xffffff) >> 0x10 | *(int *)(psVar6 + 8) << 8;
              puVar2[3] = (*(uint *)(psVar6 + 4) >> 8 & 0xffff) + *(int *)(psVar6 + 6) * 0x10000;
              puVar2[4] = *(uint *)(psVar6 + 2) & 0xffffff | *(int *)(psVar6 + 4) << 0x18;
              puVar2[5] = 0xead0fead;
              puVar3 = puVar2 + 5;
            }
            puVar2 = puVar3 + 1;
          }
LAB_0016fce0:
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar12 + 0x1c));
      }
      iVar9 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + *(int *)(*(int *)(param_1 + 0xb8) + iVar9);
    } while (iVar8 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  return;
}



int * fn_0016faa8(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_3 = param_3 << 8;
  }
  else {
    param_3 = 0x300;
  }
  *param_1 = param_3;
  param_1[1] = 0x2025e;
  param_1[2] = 0;
  iVar2 = 5;
  param_1[3] = 0x900251;
  piVar1 = param_1 + 3;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = 0x1d00200;
  iVar2 = 0xf;
  piVar1 = param_1 + 0xf;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 2;
  }
  param_1[0x2e] = iVar2;
  param_1[0x2f] = 0x10229;
  param_1[0x30] = 0;
  param_1[0x31] = 0x1d00200;
  iVar2 = 0xf;
  piVar1 = param_1 + 0x31;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  param_1[0x50] = param_2;
  param_1[0x51] = 0x10244;
  return param_1 + 0x52;
}



void fn_0016f8fc(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  **(undefined4 **)(param_1 + 0xc0) = 0;
  if (*(byte *)(param_1 + 0xc) < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~(uint)*(byte *)(param_1 + 0xc) & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = **(undefined4 **)(param_1 + 0xb8);
    }
  }
  uVar2 = uVar2 + 1;
  if (uVar2 < *(byte *)(param_1 + 0xc)) {
    do {
      iVar5 = uVar2 * 4 + -4;
      iVar4 = uVar2 * 4;
      iVar6 = *(int *)(*(int *)(param_1 + 0xc0) + iVar5) +
              *(int *)(*(int *)(param_1 + 0xb8) + iVar5);
      *(int *)(*(int *)(param_1 + 0xc0) + uVar2 * 4) = iVar6;
      iVar5 = uVar2 * 4;
      uVar2 = uVar2 + 2;
      *(int *)(*(int *)(param_1 + 0xc0) + iVar4 + 4) =
           iVar6 + *(int *)(*(int *)(param_1 + 0xb8) + iVar5);
    } while ((int)uVar2 < (int)(uint)*(byte *)(param_1 + 0xc));
  }
  uVar2 = 1;
  uVar7 = 0;
  **(undefined4 **)(param_1 + 0xc4) = 0;
  uVar3 = 1;
  if (1 < *(byte *)(param_1 + 0xc) + 1) {
    do {
      if (*(char *)(*(int *)(param_1 + uVar3 * 4 + 0xc) + 6) == '\0') {
        *(uint *)(*(int *)(param_1 + 0xc4) + uVar3 * 4) = uVar7;
        uVar7 = *(int *)(param_1 + 0xbc) + uVar7 + 1 & 0xff;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0xc4) + uVar3 * 4) = uVar2;
        uVar2 = uVar2 + 1 & 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0xc) + 1);
  }
  bVar1 = *(byte *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0xbc);
  **(undefined4 **)(param_1 + 200) = 0;
  uVar2 = ((uint)bVar1 - iVar4) * (iVar4 + 1);
  if (1 < uVar2) {
    if ((~uVar2 & 1) == 1) {
      *(undefined4 *)(*(int *)(param_1 + 200) + 4) = **(undefined4 **)(param_1 + 0xb0);
    }
    for (uVar3 = (~uVar2 & 1) + 1; uVar3 < uVar2; uVar3 = uVar3 + 2) {
      iVar4 = uVar3 * 4 + -4;
      iVar4 = *(int *)(*(int *)(param_1 + 200) + iVar4) + *(int *)(*(int *)(param_1 + 0xb0) + iVar4)
      ;
      *(int *)(*(int *)(param_1 + 200) + uVar3 * 4) = iVar4;
      *(int *)(*(int *)(param_1 + 200) + uVar3 * 4 + 4) =
           iVar4 + *(int *)(*(int *)(param_1 + 0xb0) + uVar3 * 4);
    }
  }
  return;
}


