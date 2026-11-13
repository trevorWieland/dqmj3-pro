#include "003a24ec_003a2974.h"



int fn_003a2974(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = 0xffffffff;
  cVar1 = *(char *)(DAT_00897840 + 4);
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar5 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar5 != iVar5) {
    do {
      iVar5 = 0;
      do {
        uVar2 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
        if (uVar2 <= uVar4) {
          fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar4,uVar2);
        }
        iVar3 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        if (*(int *)(*(int *)(param_1 + 0x10) + uVar4 * 0xc + iVar3) == (int)cVar1) {
          uVar6 = uVar4;
        }
      } while (iVar5 < 2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  uVar4 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
  if (uVar4 <= uVar6) {
    fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar6,uVar4);
  }
  return *(int *)(param_1 + 0x10) + uVar6 * 0xc;
}



int fn_003a2914(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,param_2,uVar1);
  }
  return *(int *)(param_1 + 0x10) + param_2 * 0xc;
}



void fn_003a24ec(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(&DAT_007c670c + *param_1 * 4);
  cVar2 = (char)param_1[7];
  while( true ) {
    if (iVar6 < cVar2) {
      return;
    }
    uVar5 = 0;
    iVar3 = param_1[5] - param_1[4] >> 0x1f;
    if ((param_1[5] - param_1[4]) / 0xc + iVar3 != iVar3) {
      do {
        uVar1 = (param_1[5] - param_1[4]) / 0xc;
        if (uVar1 <= uVar5) {
          fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
        }
        iVar3 = param_1[4];
        if (*(int *)(iVar3 + uVar5 * 0xc + 4) < 0) {
          uVar1 = (param_1[5] - iVar3) / 0xc;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
          }
          iVar3 = param_1[4];
          uVar1 = (param_1[5] - iVar3) / 0xc;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
          }
          *(undefined4 *)(iVar3 + uVar5 * 0xc + 8) = *(undefined4 *)(param_1[4] + uVar5 * 0xc);
        }
        else {
          uVar4 = fn_005f65d4();
          uVar1 = (param_1[5] - param_1[4]) / 0xc;
          if ((uVar4 & 1) == 0) {
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = param_1[4];
            uVar1 = (param_1[5] - iVar3) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            *(undefined4 *)(iVar3 + uVar5 * 0xc + 8) = *(undefined4 *)(param_1[4] + uVar5 * 0xc);
            uVar1 = (param_1[5] - param_1[4]) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = fn_002043cc(DAT_00897840,*(undefined4 *)(param_1[4] + uVar5 * 0xc + 8));
            *(int *)(iVar3 + 0x798) = *(int *)(iVar3 + 0x798) + 1;
            *(int *)(iVar3 + 0x79c) = (int)(char)param_1[7] + *(int *)(iVar3 + 0x79c);
            *(char *)(iVar3 + 0x1082) = *(char *)(iVar3 + 0x1082) + '\x01';
            uVar1 = (param_1[5] - param_1[4]) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = fn_002043cc(DAT_00897840,*(undefined4 *)(param_1[4] + uVar5 * 0xc));
            *(undefined1 *)(iVar3 + 0x1080) = 0;
          }
          else {
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = param_1[4];
            uVar1 = (param_1[5] - iVar3) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            *(undefined4 *)(iVar3 + uVar5 * 0xc + 8) = *(undefined4 *)(param_1[4] + uVar5 * 0xc + 4)
            ;
            uVar1 = (param_1[5] - param_1[4]) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = fn_002043cc(DAT_00897840,*(undefined4 *)(param_1[4] + uVar5 * 0xc + 8));
            *(int *)(iVar3 + 0x798) = *(int *)(iVar3 + 0x798) + 1;
            *(int *)(iVar3 + 0x79c) = (int)(char)param_1[7] + *(int *)(iVar3 + 0x79c);
            *(char *)(iVar3 + 0x1082) = *(char *)(iVar3 + 0x1082) + '\x01';
            uVar1 = (param_1[5] - param_1[4]) / 0xc;
            if (uVar1 <= uVar5) {
              fn_002ff628(9,&DAT_008c762c,&DAT_008c762c,uVar5,uVar1);
            }
            iVar3 = fn_002043cc(DAT_00897840,*(undefined4 *)(param_1[4] + uVar5 * 0xc));
            *(undefined1 *)(iVar3 + 0x1080) = 0;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)((param_1[5] - param_1[4]) / 0xc));
    }
    if (iVar6 <= (char)param_1[7]) break;
    fn_003a3628(param_1);
    cVar2 = (char)param_1[7] + '\x01';
    *(char *)(param_1 + 7) = cVar2;
  }
  return;
}


