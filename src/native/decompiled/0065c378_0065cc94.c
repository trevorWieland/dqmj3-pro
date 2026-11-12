#include "0065c378_0065cc94.h"



void fn_0065cc94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006a7f8c(param_1 + 0x1b0);
  if (iVar1 != 0) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    fn_002782b4(uVar2,param_1 + 0x1b0);
  }
  fn_003191f8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0065cc64) */

int fn_0065cc20(int param_1,int param_2)

{
  int *piVar1;
  uint in_fpscr;
  float in_s0;
  float fVar2;
  int local_10 [4];
  
  if (param_2 == 0) {
    local_10[2] = 9999999;
  }
  else {
    local_10[2] = 0x26259fc;
  }
  piVar1 = local_10;
  if (param_1 < local_10[2]) {
    fVar2 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    param_1 = (int)(fVar2 * in_s0);
  }
  local_10[0] = param_1;
  local_10[1] = 0;
  if (param_1 < 0) {
    piVar1 = local_10 + 1;
  }
  if (local_10[2] < *piVar1) {
    piVar1 = local_10 + 2;
  }
  return *piVar1;
}



undefined * fn_0065cba4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = **(undefined4 **)(param_1 + 0xc);
  uVar1 = fn_00661324((int)(short)uVar2);
  fn_001028d4(&DAT_008cdb24,(char *)&DAT_0065cbd4,uVar2,uVar1);
  return &DAT_008cdb24;
}



undefined * fn_0065cb58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *apuStack_1c [4];
  undefined *puStack_c;
  
  apuStack_1c[0] = &DAT_00869eb8;
  apuStack_1c[1] = &DAT_00869eb0;
  apuStack_1c[2] = &DAT_00869ea8;
  apuStack_1c[3] = &DAT_00869ea0;
  puStack_c = &DAT_00869ec0;
  fn_001028d4(&DAT_008cdb64,&DAT_0065cb9c,apuStack_1c[**(int **)(param_1 + 0xc)],param_4,
               &DAT_00869f40);
  return &DAT_008cdb64;
}



void fn_0065c7a8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2] + param_2 * 0x34;
  iVar2 = *(int *)(iVar1 + 8);
  if (param_3 == 0) {
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 0x11) = 0;
      *(undefined1 *)(param_1[2] + param_2 * 0x34 + 0x10) = 1;
    }
    else {
      if (iVar2 == 1) {
        *(undefined1 *)(iVar1 + 0x11) = 0;
        iVar1 = param_1[2] + param_2 * 0x34;
        if (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8)) goto LAB_0065c9e4;
      }
      else {
        *(undefined1 *)(iVar1 + 0x11) = 1;
        iVar1 = param_1[2] + param_2 * 0x34;
        if (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8)) {
LAB_0065c9e4:
          *(undefined1 *)(iVar1 + 0x10) = 1;
          goto LAB_0065c9e8;
        }
      }
      *(undefined1 *)(iVar1 + 0x10) = 0;
    }
LAB_0065c9e8:
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x14) = 0;
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x18) = 0;
    iVar1 = param_1[2] + param_2 * 0x34;
    if (*(char *)(iVar1 + 0x11) != '\0') {
      *(undefined4 *)(iVar1 + 0x14) = 1;
      iVar1 = param_1[2] + param_2 * 0x34;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 8) + -1;
    }
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x1c) = 0;
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x20) = 0;
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x24) = 0;
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x28) = 0;
    iVar1 = param_1[2] + param_2 * 0x34;
    if (*(char *)(iVar1 + 0x10) != '\0') {
      return;
    }
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 4) + -1;
    iVar1 = param_1[2] + param_2 * 0x34;
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 4) + -1;
    iVar1 = param_1[2] + param_2 * 0x34;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x28) = 0;
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x14))
                      ((int *)param_1[1],param_2,*(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x24)
                       ,0);
    *(int *)(param_1[2] + param_2 * 0x34 + 0x2c) = iVar2;
    iVar1 = param_1[2] + param_2 * 0x34;
    goto joined_r0x0065cae4;
  }
  if (iVar2 == 0) {
    *(undefined1 *)(iVar1 + 0x11) = 0;
    *(undefined1 *)(param_1[2] + param_2 * 0x34 + 0x10) = 1;
  }
  else {
    if (iVar2 == 1) {
      *(undefined1 *)(iVar1 + 0x11) = 0;
      iVar1 = param_1[2] + param_2 * 0x34;
      if (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8)) goto LAB_0065c834;
    }
    else {
      *(undefined1 *)(iVar1 + 0x11) = 1;
      iVar1 = param_1[2] + param_2 * 0x34;
      if (*(int *)(iVar1 + 4) != *(int *)(iVar1 + 8)) {
LAB_0065c834:
        *(undefined1 *)(iVar1 + 0x10) = 1;
        goto LAB_0065c838;
      }
    }
    *(undefined1 *)(iVar1 + 0x10) = 0;
  }
LAB_0065c838:
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x14) = 0;
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x18) = 0;
  iVar1 = param_1[2] + param_2 * 0x34;
  if (*(char *)(iVar1 + 0x11) != '\0') {
    if (*(int *)(iVar1 + 0xc) < 1) {
      *(undefined1 *)(iVar1 + 0x11) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 1;
      iVar1 = param_1[2] + param_2 * 0x34;
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0xc);
    }
    iVar1 = param_1[2] + param_2 * 0x34;
    if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 4)) {
      *(undefined1 *)(iVar1 + 0x10) = 0;
    }
    else {
      *(undefined1 *)(iVar1 + 0x10) = 1;
    }
  }
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x1c) = 0;
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x20) = 0;
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x24) = 0;
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x28) = 0;
  iVar1 = param_1[2] + param_2 * 0x34;
  if (*(char *)(iVar1 + 0x10) != '\0') {
    return;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = param_1[2] + param_2 * 0x34;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 4) + -1;
  iVar1 = param_1[2] + param_2 * 0x34;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x28) = 0;
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x14))
                    ((int *)param_1[1],param_2,*(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x24),0
                    );
  *(int *)(param_1[2] + param_2 * 0x34 + 0x2c) = iVar2;
  iVar1 = param_1[2] + param_2 * 0x34;
joined_r0x0065cae4:
  if (iVar2 == 999) {
    *(undefined1 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(param_1[2] + param_2 * 0x34 + 0x30) = 0;
    return;
  }
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(*(int *)(*param_1 + 0x10) + iVar2 * 8 + 4);
  return;
}



undefined4 * fn_0065c6cc(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 7) != '\0') {
    iVar4 = (int)(param_1[5] - param_1[4]) >> 3;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      fn_00159f34(*param_1,*(undefined4 *)(param_1[4] + iVar4 * 8));
    }
    uVar3 = param_1[4];
    param_1[4] = 0;
    uVar2 = param_1[5];
    param_1[5] = 0;
    iVar4 = param_1[6];
    param_1[6] = 0;
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      for (; uVar1 != uVar2; uVar1 = uVar1 + 8) {
      }
    }
    fn_001008c4(uVar3,(int)(iVar4 - uVar3) >> 3,0);
    *(undefined1 *)(param_1 + 7) = 0;
  }
  uVar2 = param_1[4];
  uVar1 = uVar2;
  if ((uint)param_1[5] < uVar2) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != param_1[5]);
  }
  fn_001008c4(uVar2,(int)(param_1[6] - uVar2) >> 3,0);
  return param_1;
}



undefined4 fn_0065c628(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
    return 3;
  case 4:
  case 5:
    return 2;
  default:
    return 0xffffffff;
  }
}



undefined4 fn_0065c588(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 1:
    return 3;
  case 2:
  case 3:
  case 4:
    return 2;
  default:
    return 0xffffffff;
  }
}



undefined4 fn_0065c4a0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < 2) {
    uVar1 = 2;
  }
  else if (param_2 == 2) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0065c378(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00101d80();
  if ((((iVar1 == 0) && (iVar1 = fn_00101d80(param_1 + 0x34,param_2 + 0x34), iVar1 == 0)) &&
      (*(short *)(param_1 + 0x58) == *(short *)(param_2 + 0x58))) &&
     ((*(char *)(param_1 + 0x5a) == *(char *)(param_2 + 0x5a) &&
      (*(short *)(param_1 + 0x1c) == *(short *)(param_2 + 0x1c))))) {
    if ((((*(char *)(param_1 + 0x60) == *(char *)(param_2 + 0x60)) &&
         ((*(char *)(param_1 + 0x60) == '\0' || *(char *)(param_2 + 0x60) == '\0' ||
          (iVar1 = fn_001010c8(param_1 + 100,param_2 + 100,0x60), iVar1 == 0)))) &&
        ((*(char *)(param_1 + 0xc4) == *(char *)(param_2 + 0xc4) &&
         (((*(char *)(param_1 + 0xc5) == *(char *)(param_2 + 0xc5) &&
           (*(char *)(param_1 + 0xc6) == *(char *)(param_2 + 0xc6))) &&
          (*(char *)(param_1 + 199) == *(char *)(param_2 + 199))))))) &&
       (*(char *)(param_1 + 200) == *(char *)(param_2 + 200))) {
      return 1;
    }
  }
  return 0;
}


