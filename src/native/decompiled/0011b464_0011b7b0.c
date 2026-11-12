#include "0011b464_0011b7b0.h"



void fn_0011b7b0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  int *piVar5;
  undefined4 in_s0;
  
  iVar4 = (int)*(char *)(param_1 + 0x20c);
  if ((*param_2 & 0xf0) != 0) {
    iVar4 = 0;
  }
  uVar1 = fn_0012a27c(param_1,iVar4);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = fn_0012a27c(param_1,iVar4,param_2[1]);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar2 = fn_0012a27c(param_1,iVar4,param_2[2]);
  *(uint *)(param_1 + 0x54) = uVar2;
  if (*(char *)(param_1 + 0x20d) == '\x01') {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | *(uint *)(param_1 + 0x210);
    *(undefined1 *)(param_1 + 0x20d) = 2;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x210) | *(uint *)(param_1 + 0x4c);
  }
  else if (*(char *)(param_1 + 0x20d) == '\x02') {
    *(undefined1 *)(param_1 + 0x20d) = 1;
    *(uint *)(param_1 + 0x54) = uVar2 | *(uint *)(param_1 + 0x210);
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  do {
    uVar3 = 1 << (uVar2 & 0xff);
    piVar5 = (int *)(param_1 + uVar2 * 4 + 0x58);
    if ((*(uint *)(param_1 + 0x48) & uVar3) == 0) {
      *piVar5 = 0;
    }
    else {
      if (*piVar5 < *(int *)(param_1 + 0x1fc)) {
        uVar3 = *(uint *)(param_1 + 0x50) | *(uint *)(param_1 + 0x4c) & uVar3;
LAB_0011b8a4:
        *(uint *)(param_1 + 0x50) = uVar3;
      }
      else {
        fn_00300f74(*piVar5 - *(int *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
        if (extraout_r1 == 0) {
          uVar3 = *(uint *)(param_1 + 0x50) | uVar3;
          goto LAB_0011b8a4;
        }
      }
      *piVar5 = *piVar5 + 1;
    }
    uVar2 = uVar2 + 1;
    if (0x18 < (int)uVar2) {
      fn_0013cb18(param_1 + 8,(int)(short)param_2[3]);
      *(undefined4 *)(param_1 + 0xbc) = in_s0;
      fn_0013cb18(param_1 + 8,(int)*(short *)((int)param_2 + 0xe));
      *(undefined4 *)(param_1 + 0xc0) = in_s0;
      return;
    }
  } while( true );
}



void fn_0011b698(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 != 0x402) {
    uVar6 = (uint)(param_1 != 0x400);
    iVar5 = (&DAT_008e31bc)[uVar6];
    do {
      do {
        fn_0014fef4();
        iVar4 = (&DAT_008e31bc)[uVar6];
      } while (iVar5 == iVar4);
      iVar3 = fn_0013ddd8(uVar6);
      iVar5 = iVar4;
    } while (iVar3 != 0);
    return;
  }
  iVar5 = DAT_008e31bc;
  iVar4 = DAT_008e31c0;
  do {
    fn_0014fef4();
    iVar1 = DAT_008e31c0;
    iVar3 = DAT_008e31bc;
    if ((iVar5 != DAT_008e31bc) && (iVar2 = fn_0013ddd8(0), iVar2 != 0)) {
      iVar5 = iVar3;
    }
    if ((iVar4 != iVar1) && (iVar2 = fn_0013ddd8(1), iVar2 != 0)) {
      iVar4 = iVar1;
    }
  } while (iVar5 == iVar3 || iVar4 == iVar1);
  return;
}



void fn_0011b5fc(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (DAT_008e31e4 != 0 || DAT_008e31e0 != 0) {
    uVar3 = fn_00158f10();
  }
  do {
    if (DAT_008e3079 == '\0') {
      return;
    }
    if (DAT_008e31e0 != 0 || DAT_008e31e4 != 0) {
      uVar4 = fn_00158f10();
      uVar2 = (uint)uVar4 - (uint)uVar3;
      iVar1 = (int)((ulonglong)uVar4 >> 0x20) -
              ((int)((ulonglong)uVar3 >> 0x20) + (uint)((uint)uVar4 < (uint)uVar3));
      if ((int)(DAT_008e31e4 - (iVar1 + (uint)(DAT_008e31e0 < uVar2))) < 0 !=
          (SBORROW4(DAT_008e31e4,iVar1) !=
          SBORROW4(DAT_008e31e4 - iVar1,(uint)(DAT_008e31e0 < uVar2)))) {
        if (DAT_008e31d8 == (code *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0011b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_008e31d8)(DAT_008e31d8,iVar1,DAT_008e31e0 - uVar2);
        return;
      }
    }
    fn_0014fef4();
  } while( true );
}



void fn_0011b464(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar6 = 0;
  do {
    iVar1 = iVar6 + 0x400;
    bVar8 = param_1 != iVar1;
    if (bVar8) {
      iVar1 = param_1 + -0x400;
    }
    iVar5 = 0;
    if (!bVar8 || iVar1 == 2) {
      iVar4 = (&DAT_008e3190)[iVar6];
      iVar1 = *(int *)(iVar4 + 8);
      if (iVar1 == 0x8057) {
        uVar2 = 3;
        uVar3 = 2;
      }
      else if (iVar1 < 0x8058) {
        if (iVar1 == 0x8051) {
          uVar2 = 1;
          uVar3 = 3;
        }
        else if (iVar1 == 0x8056) {
          uVar2 = 4;
          uVar3 = 2;
        }
        else {
LAB_0011b504:
          uVar2 = 0;
          uVar3 = 0;
        }
      }
      else if (iVar1 == 0x8058) {
        uVar2 = 0;
        uVar3 = 4;
      }
      else {
        if (iVar1 != 0x8d62) goto LAB_0011b504;
        uVar2 = 2;
        uVar3 = uVar2;
      }
      if (*(int *)(iVar4 + 0x14) == 0x10000) {
        uVar7 = 0x100;
      }
      else {
        uVar7 = 0x300;
      }
      uVar2 = uVar2 | uVar7;
      if (iVar6 == 0) {
        uVar7 = uVar2 | 0x40;
        if (DAT_008e31cc != 0x700) {
          if (DAT_008e31cc == 0x701) goto LAB_0011b580;
          if (DAT_008e31cc == 0x702) {
            iVar5 = uVar3 * (*(int *)(DAT_008e3198 + 0xc) *
                             ((*(int *)(DAT_008e3198 + 0x10) - DAT_008e3070) - DAT_008e31b0) +
                            DAT_008e31a4) + *(int *)(DAT_008e3198 + 4);
            uVar7 = uVar2 | 0x20;
          }
        }
      }
      else {
LAB_0011b580:
        uVar7 = uVar2;
      }
      fn_0012bef4(iVar6,(&DAT_008e31b4)[iVar6],
                   uVar3 * (*(int *)(iVar4 + 0xc) *
                            ((*(int *)(iVar4 + 0x10) - (&DAT_008e3070)[iVar6]) -
                            (&DAT_008e31a8)[iVar6]) + (&DAT_008e319c)[iVar6]) + *(int *)(iVar4 + 4),
                   iVar5,*(int *)(iVar4 + 0xc) * uVar3,uVar7,(&DAT_008e31b4)[iVar6]);
      (&DAT_008e31b4)[iVar6] = (uint)((&DAT_008e31b4)[iVar6] == 0);
    }
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      return;
    }
  } while( true );
}


