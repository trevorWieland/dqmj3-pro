#include "006cdc38_006ce720.h"



bool fn_006ce720(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_r1;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0x1dec;
  if (*param_3 == 0) {
    if (0 < *param_1) {
      uVar3 = *param_1 + 4;
    }
    fn_00301f50(param_2 + 1,0x1de8);
    piVar2 = extraout_r1;
  }
  else {
    piVar2 = param_2;
    if (0 < *param_2) {
      uVar3 = *param_2 + 4;
    }
  }
  bVar4 = (uVar3 & 0x7f) != 0;
  if (bVar4) {
    piVar2 = (int *)&DAT_00000001;
  }
  if (!bVar4) {
    piVar2 = (int *)0x0;
  }
  iVar1 = *param_3;
  bVar4 = (int)((int)piVar2 + ((int)(uVar3 + ((uint)((int)uVar3 >> 0x1f) >> 0x19)) >> 7)) <= iVar1;
  if (!bVar4) {
    if ((int)uVar3 < iVar1 * 0x80 + 0x80) {
      fn_00301a9c(param_2 + iVar1 * 0x20,param_1,uVar3 + iVar1 * -0x80);
      bVar4 = true;
    }
    else {
      fn_00301a9c(param_2 + iVar1 * 0x20,param_1,0x80);
    }
  }
  *param_3 = *param_3 + 1;
  return bVar4;
}



void fn_006ce670(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1560 [2696];
  undefined1 auStack_ad8 [2744];
  
  iVar2 = *param_3;
  if (iVar2 < 0x16) {
    fn_0017821c(auStack_ad8,param_2,0xa88);
    fn_0017821c(auStack_1560,auStack_ad8,0xa88);
    iVar1 = 0;
    if ((iVar2 < 1) || (iVar1 = iVar2 * 0x80, iVar1 + 0x80 < 0xa89)) {
      fn_00301a9c(auStack_1560 + iVar1,param_1,0x80);
    }
    else {
      fn_00301a9c(auStack_1560 + iVar1,param_1,iVar2 * -0x80 + 0xa88);
    }
    fn_0017821c(param_2,auStack_1560,0xa88);
    *param_3 = *param_3 + 1;
  }
  return;
}



bool fn_006ce63c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0066e28c(DAT_00898840,param_2,1);
  piVar2 = (int *)fn_0013d4ec();
  return iVar1 != *piVar2;
}



undefined4 fn_006ce5b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0077f778();
  if (iVar1 == 0) {
    uVar2 = fn_0077f768(param_1);
    iVar1 = fn_0066e510(DAT_00898840,uVar2);
    if (((iVar1 != 0) &&
        (iVar1 = fn_006b6530(*(undefined4 *)(param_1 + 8),param_2,uVar2), iVar1 != 0)) &&
       (iVar1 = fn_006b6530(*(undefined4 *)(param_1 + 8),param_2,0), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



void fn_006ce3b4(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint local_a4;
  undefined1 auStack_a0 [128];
  uint local_20;
  
  fn_00301f50(auStack_a0,0x80);
  fn_00102908(auStack_a0,0x80,(&PTR_s_Null_player__02d_0089302c)[param_3],*param_2 + 1);
  uVar1 = fn_002febd8(auStack_a0);
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)&DAT_008f9d04;
  }
  else {
    puVar3 = &local_20;
    if (0x20 < uVar1) {
      puVar3 = &local_a4;
    }
    local_a4 = uVar1;
    local_20 = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9cf8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6(uVar5 + 0xe,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined1 *)((int)puVar2 + uVar1 + 0xc);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *param_1 = puVar2;
  fn_00301a9c(puVar2,auStack_a0,uVar1);
  return;
}



int fn_006ce2f0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_2 == 0;
  if (-1 < param_2) {
    param_3 = *(int *)(param_1 + 0x4c4);
    bVar1 = param_3 == param_2;
  }
  if (((!bVar1 && (-1 < param_2 && param_2 <= param_3)) &&
      (param_2 = param_2 + *(int *)(param_1 + 0x4bc), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x4b8))) {
    return param_1 + param_2 * 0xc + 8;
  }
  return 0;
}



int fn_006ce2b0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = param_2 == 0;
  if (-1 < param_2) {
    param_3 = *(int *)(param_1 + 0x4c8);
    bVar1 = param_3 == param_2;
  }
  if (((!bVar1 && (-1 < param_2 && param_2 <= param_3)) &&
      (param_2 = param_2 + *(int *)(param_1 + 0x4c0), -1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x4b8))) {
    return param_1 + param_2 * 0xc + 8;
  }
  return 0;
}



undefined * fn_006ce034(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined1 auStack_14 [4];
  undefined4 local_10 [2];
  
  iVar3 = *(int *)(param_1 + 100);
  bVar1 = *(byte *)(iVar3 + 8);
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      local_28 = *(undefined4 *)(iVar3 + 0xc);
      uStack_24 = *(undefined4 *)(iVar3 + 0x10);
      uStack_20 = *(undefined4 *)(iVar3 + 0x14);
      uStack_1c = *(undefined4 *)(iVar3 + 0x18);
      local_18 = &DAT_008f9cf4;
      fn_00231690(auStack_14,&local_28,0);
      fn_007854f8(&local_18,auStack_14);
      fn_001588d4(auStack_14);
      fn_0015b0dc(local_18);
      cVar2 = ((unsigned int)(uStack_24) >> 16) & 0xff + '\x01';
      uStack_24 = (uStack_24 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(cVar2,(undefined2)uStack_24)) & 0xffffff);
      fn_00231690(auStack_14,&local_28,0);
      fn_007854f8(&local_18,auStack_14);
      fn_001588d4(auStack_14);
      fn_0015b0dc(local_18);
      puVar4 = (undefined *)fn_0022f584((char *)&DAT_006ce188,0);
      fn_001588d4(&local_18);
      return puVar4;
    }
    if (bVar1 != 2) {
      return &DAT_0042d048;
    }
  }
  iVar5 = 0;
  if (bVar1 < 2) {
    iVar5 = (int)*(short *)(iVar3 + 0x10);
  }
  else if (bVar1 == 2) {
    iVar5 = (int)*(short *)(iVar3 + 0x1c);
  }
  fn_0023097c(local_10,iVar5,0);
  fn_0015b0dc(local_10[0]);
  puVar4 = (undefined *)fn_0022f584((char *)&DAT_006ce168,0);
  fn_001588d4(local_10);
  return puVar4;
}



undefined4 fn_006cdec0(undefined4 *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = fn_00154ac8(0x47);
  if (iVar1 == 0) {
    return 0;
  }
  psVar2 = (short *)param_1[1];
  psVar3 = (short *)*param_1;
  if (psVar3 < psVar2) {
    iVar4 = (int)psVar2 - (int)psVar3;
    iVar1 = 1;
    if (1 < iVar4 / 6 + 1) {
      do {
        if (*psVar3 == param_2) goto LAB_006cdf58;
        iVar1 = iVar1 + 1;
        psVar3 = psVar3 + 3;
      } while (iVar1 < iVar4 / 6 + 1);
    }
  }
  else {
    for (; psVar3 != psVar2; psVar3 = psVar3 + 3) {
      if (*psVar3 == param_2) {
LAB_006cdf58:
        if (psVar3 == (short *)0x0) {
          return 0;
        }
        if (*(char *)((int)psVar3 + 5) == '\x01' || *(char *)((int)psVar3 + 5) == '\x02') {
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}



void fn_006cdc38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_24;
  int local_20;
  undefined1 auStack_1c [4];
  
  fn_00168a24(&local_24,&DAT_006cde18,auStack_1c);
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar5);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_00144df4(uVar5,iVar4);
      if (iVar2 == param_2) {
        uVar5 = fn_00230a84(0);
        fn_00147974(&local_24,uVar5);
        goto LAB_006cdd34;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  iVar1 = fn_006b84b0(uVar5);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006b8538(uVar5,iVar4);
      if (iVar2 == param_2) {
        uVar5 = fn_00230a84(1,0);
        fn_00147974(&local_24,uVar5);
        goto LAB_006cdd34;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar5 = fn_00230a84(2,0);
  fn_00147974(&local_24,uVar5);
LAB_006cdd34:
  fn_00231210(&local_20,param_2,0);
  uVar3 = *(uint *)(local_24 + -4);
  iVar1 = *(int *)(local_20 + -4);
  if ((*(uint *)(local_24 + -8) < uVar3 + iVar1) || (1 < *(int *)(local_24 + -0xc) + 1U)) {
    if (-iVar1 - 0xfU < uVar3) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar3,-iVar1 - 0xfU);
    }
    fn_00177c88(&local_24,*(undefined4 *)(local_24 + -4),0,local_20,*(undefined4 *)(local_20 + -4),
                 0,iVar1);
  }
  else {
    fn_00301a9c(local_24 + uVar3 * 2,local_20,(iVar1 + 1) * 2);
    *(uint *)(local_24 + -4) = uVar3 + iVar1;
  }
  fn_001588d4(&local_20);
  fn_0015b0dc(local_24);
  fn_001588d4(&local_24);
  return;
}


