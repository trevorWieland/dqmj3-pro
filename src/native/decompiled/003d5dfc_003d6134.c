#include "003d5dfc_003d6134.h"



void fn_003d6134(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  undefined1 auStack_450 [1048];
  uint local_38;
  uint local_34;
  int local_30;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  fn_003d61f0(param_1,auStack_450,&local_38,param_3,param_4,param_5,param_6,param_7);
  fn_00237410(param_2,&local_38,param_3,param_4,param_5);
  uVar1 = local_38;
  if (local_34 < local_38) {
    do {
      uVar1 = uVar1 + 2;
    } while (uVar1 != local_34);
  }
  fn_001008c4(local_38,(int)(local_30 - local_38) >> 1,0);
  return;
}



void fn_003d5fc8(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  fn_006c9c84(param_1,1,&local_20,0xffffffff,1,0,param_1 != -0x54,0);
  while ((uVar4 = (int)(local_1c - local_20) >> 1, 4 < uVar4 &&
         ((uint)(param_2[1] - *param_2 >> 1) < 5))) {
    iVar2 = fn_00163868(uVar4);
    psVar3 = (short *)param_2[1];
    psVar5 = (short *)(local_20 + iVar2 * 2);
    for (psVar6 = (short *)*param_2; (psVar6 != psVar3 && (*psVar6 != *psVar5)); psVar6 = psVar6 + 1
        ) {
    }
    if (psVar3 == psVar6) {
      if (psVar3 == (short *)param_2[2]) {
        fn_0079e460(param_2,psVar3);
      }
      else {
        param_2[1] = (int)(psVar3 + 1);
        if (psVar3 != (short *)0x0) {
          *psVar3 = *psVar5;
        }
      }
    }
  }
  uVar4 = local_20;
  if (local_1c < local_20) {
    do {
      uVar4 = uVar4 + 2;
    } while (uVar4 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 1,0);
  if (param_2[1] - *param_2 >> 1 == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x24) + *(short *)*param_2 * 0x40);
  }
  *(undefined2 *)(param_1 + 0x4c) = uVar1;
  return;
}



void fn_003d5dfc(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short local_458;
  short local_456;
  undefined1 auStack_450 [1048];
  uint local_38;
  uint local_34;
  int local_30;
  
  uVar4 = 0;
  if (param_2[1] - *param_2 >> 1 != 0) {
    do {
      local_34 = 0;
      local_458 = 0;
      local_38 = 0;
      local_30 = 0;
      local_456 = 0;
      fn_00301f50(auStack_450,0x418);
      fn_0079e608(&local_38);
      iVar3 = 0;
      local_458 = *(short *)(*param_2 + uVar4 * 2);
      iVar1 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c)) / 0x430;
      if (0 < iVar1) {
        do {
          if (*(short *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x430) == local_458) {
            if (*(int *)(param_1 + 0x3c) + iVar3 * 0x430 != 0) goto LAB_003d5f60;
            break;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
      local_456 = -1;
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(short *)(*(int *)(param_1 + 0x24) + iVar1 * 0x40) == local_458) {
            local_456 = (short)iVar1;
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x14));
      }
      if (local_456 != -1) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == *(int *)(param_1 + 0x44)) {
          fn_00790dd0(param_1 + 0x3c,iVar1,&local_458);
        }
        else {
          *(int *)(param_1 + 0x40) = iVar1 + 0x430;
          if (iVar1 != 0) {
            fn_003d5d00(iVar1,&local_458);
          }
        }
      }
LAB_003d5f60:
      uVar2 = local_38;
      if (local_34 < local_38) {
        do {
          uVar2 = uVar2 + 2;
        } while (uVar2 != local_34);
      }
      fn_001008c4(local_38,(int)(local_30 - local_38) >> 1,0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_2[1] - *param_2 >> 1));
  }
  return;
}


