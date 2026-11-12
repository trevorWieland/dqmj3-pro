#include "006f7530_006f7acc.h"



undefined4 fn_006f7acc(undefined4 param_1,uint param_2,uint param_3)

{
  if ((param_2 & ~param_3) == 0) {
    if ((param_3 & ~param_2) == 0) {
      if ((((param_2 & param_3) != 0) &&
          (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
         (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
        return 1;
      }
    }
    else if (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc)) {
      return 1;
    }
  }
  else if (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) {
    return 1;
  }
  return 0;
}



undefined4 fn_006f7ab8(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x9c) * 4);
}



int fn_006f7a9c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x5c) * 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + -0x1c;
  }
  return iVar1;
}



undefined4 fn_006f7a84(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 4);
}



undefined4 fn_006f7a70(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4);
}



undefined4 fn_006f7a5c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x78) * 4);
}



undefined4 fn_006f7a48(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4);
}



bool fn_006f7a30(int param_1)

{
  return *(char *)(param_1 + 0x16c) != -1;
}



undefined4 fn_006f7a0c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4);
}



undefined4 fn_006f7984(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x74) * 4);
}



void fn_006f77d4(int param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_s0;
  undefined4 local_48 [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_3);
  iVar3 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_4);
  puVar4 = (undefined4 *)
           (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                                    *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) +
                       0x24))();
  if (iVar2 != iVar3) {
    puVar4 = &DAT_007bfc54;
  }
  uVar5 = 0;
  if (iVar2 != iVar3) {
    in_s0 = *puVar4;
  }
  *(undefined4 *)(param_2 + 0x24) = in_s0;
  *(undefined4 *)(param_2 + 0x2c) = 0xbf800000;
  local_48[0] = 0x5f303053;
  local_48[1] = 0x3030;
  local_48[2] = 0x29e;
  local_3c = 1;
  uStack_38 = 0x5f303056;
  uStack_34 = 0x3030;
  uStack_30 = 0x29f;
  uStack_2c = 1;
  while( true ) {
    iVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),local_48 + uVar5 * 4);
    if ((iVar2 == param_4) && (iVar2 = fn_00154ac8(local_48[uVar5 * 4 + 2]), iVar2 != 0)) break;
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
LAB_006f78c8:
      iVar2 = fn_006afa24(*(undefined4 *)(DAT_008977e0 + 0x1c),param_4);
      if (iVar2 == 0) {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      else {
        iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_3);
        iVar3 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),param_4);
        if (iVar2 == iVar3) {
          *(undefined1 *)(param_2 + 0x28) = param_5;
        }
        else {
          iVar2 = fn_00145b00(0x94,&DAT_00812c8c);
          if (iVar2 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)fn_0036a4c0(iVar2,param_4);
          }
          uVar1 = (**(code **)(*(int *)piVar6[10] + 0x34))();
          *(undefined1 *)(param_2 + 0x28) = uVar1;
          if (piVar6 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar6 + 4))(piVar6);
            return;
          }
        }
      }
      return;
    }
  }
  if (*(char *)(&local_3c + uVar5 * 4) != -1) {
    *(char *)(param_2 + 0x28) = *(char *)(&local_3c + uVar5 * 4);
    return;
  }
  goto LAB_006f78c8;
}



int fn_006f7770(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4
                                 ) + 0x68))();
  if (iVar1 == 0) {
    return *(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                            *(int *)(DAT_008977e0 + 0x60) * 4) + 4) + 0x20;
  }
  return *(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x78) * 4) +
         0x1c;
}



void fn_006f76f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar4 = 3;
  param_2[9] = *(undefined4 *)(param_1 + 0x204);
  *(undefined1 *)(param_2 + 10) = *(undefined1 *)(param_1 + 0x208);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x20c);
  *param_2 = *(undefined4 *)(param_1 + 0x1e0);
  iVar1 = fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0x1e0));
  if (iVar1 != 0) {
    uVar4 = 6;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  uVar3 = *(undefined4 *)(param_1 + 0x1f0);
  param_2[2] = *(undefined4 *)(param_1 + 0x1e8);
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  param_2[5] = *(undefined4 *)(param_1 + 500);
  param_2[6] = *(undefined4 *)(param_1 + 0x1f8);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x210);
  return;
}



void fn_006f7674(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  char *pcStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  
  fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c));
  uVar2 = fn_002ea880(DAT_00897848,param_2);
  fn_00223f40(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 8),uVar2);
  iVar3 = *(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x84) * 4);
  if (*(int *)(iVar3 + 0x10) != -1 && param_2 != 0) {
    local_28 = 0;
    pcStack_24 = (char *)&DAT_00860cb4;
    uStack_20 = 0;
    pcStack_1c = "ic_partner_02";
    uStack_18 = 0;
    iVar3 = fn_00178f9c(*(undefined4 *)(iVar3 + 4));
    piVar4 = *(int **)(iVar3 + 0x10);
    iVar3 = 0;
    do {
      if ((&local_28)[iVar3] != 0) {
        iVar1 = (**(code **)(*piVar4 + 0x2c))(piVar4);
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | iVar3 == param_2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
  }
  return;
}



bool fn_006f7638(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f766c);
  return *(int *)(param_1 + 0xa8) == iVar1;
}



undefined4 fn_006f7624(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x98) * 4);
}



int fn_006f75c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
  iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  if (0 < iVar3) {
    param_1 = *(int *)(param_1 + 0x18c);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      if (*(int *)(param_1 + iVar1 * 0x38) == param_2) {
        return param_1 + iVar1 * 0x38;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}



undefined4 fn_006f75ac(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x8c) * 4);
}



undefined4 fn_006f756c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x90) * 4);
}



bool fn_006f7530(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006f7564);
  return *(int *)(param_1 + 0xa8) == iVar1;
}


