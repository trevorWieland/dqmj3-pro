#include "002171f4_00217a18.h"



void fn_00217a18(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x70))(param_1,2);
  if ((iVar2 != 0x1a) && (iVar2 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar2 != 0x17)) {
    iVar2 = param_1[0xdb];
    sVar1 = *(short *)((int)param_1 + 0x16a);
    iVar3 = fn_006f7508(DAT_008977e0);
    fn_00428358(*(undefined4 *)(iVar3 + 0xc),(int)sVar1,(char)iVar2);
  }
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_00214594(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  bVar4 = 0;
  do {
    if (param_1[(char)bVar4 * 4 + 0x7b] != -1) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      param_1[(char)bVar4 * 4 + 0x7b] = -1;
      param_1[(char)bVar4 * 4 + 0x7a] = -1;
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 0x10);
  uVar5 = 0;
  if (param_1[0xbb] - param_1[0xba] >> 4 != 0) {
    do {
      puVar6 = (undefined4 *)(param_1[0xba] + uVar5 * 0x10);
      if (puVar6[1] != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
        puVar6[1] = 0xffffffff;
        *puVar6 = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_1[0xbb] - param_1[0xba] >> 4));
  }
  fn_001d9fcc(param_1);
  return;
}



void fn_002179a4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2[1] == 7) && (iVar1 = fn_0059afc8(param_1), iVar1 == 0)) {
    param_1[0xe7] = param_1[0xe7] & 0xfffffffb;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[0xd7] = *param_2;
  param_1[0xd8] = iVar1;
  param_1[0xd9] = iVar2;
  param_1[0xda] = iVar3;
  (**(code **)(*param_1 + 0xc))(param_1,0x14,param_2);
                    /* WARNING: Could not recover jumptable at 0x00217a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e4))(param_1,param_2);
  return;
}



void fn_00217988(int param_1)

{
  if (*(int *)(param_1 + 0x1c8) != -1) {
    *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  }
  return;
}



void fn_002178f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x36c);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar3 = 9;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      iVar3 = 10;
    }
    fn_00215b58(param_1,iVar3,param_3,param_4,param_4);
    iVar3 = param_1 + iVar3 * 0x10;
    if (*(int *)(iVar3 + 0x1ec) == -1) {
      uVar2 = fn_00215b58(param_1);
      fn_00214c94(param_1,uVar2,2,1,iVar3 + 0x1e8);
    }
  }
  return;
}



void fn_002177ac(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x18;
  iVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x174))(param_1,1);
    iVar1 = fn_006f7a84(DAT_008977e0);
    if ((*(int *)(iVar1 + 0x44c) == 0) &&
       (iVar1 = fn_006f7a84(DAT_008977e0), *(int *)(iVar1 + 0x450) == 0)) {
      iVar2 = 0x14;
    }
    (**(code **)(*param_1 + 0x1dc))(param_1,2,iVar2,0);
    if ((param_1[2] == 2) && (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,2), iVar1 == iVar2)) {
      if ((char)param_1[1] == '\0') {
        *(undefined1 *)((int)param_1 + 6) = 1;
      }
    }
    else if ((char)param_1[1] == '\0') {
      param_1[3] = 2;
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x184))(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (iVar2 == 0x14) {
    fn_006f7a84(DAT_008977e0);
    fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x756b);
  }
                    /* WARNING: Could not recover jumptable at 0x002178e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe4))(param_1,0x10009a0,0);
  return;
}



void fn_0021761c(int *param_1,int param_2,int param_3)

{
  param_1[0x73] = *(int *)(param_2 + 0x13c);
  switch(*(undefined2 *)(param_3 + 2)) {
  case 0:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x23,(int)*(short *)(param_3 + 4));
    break;
  case 1:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x24,(int)*(short *)(param_3 + 4));
    break;
  default:
    return;
  case 3:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x2e,(int)*(short *)(param_3 + 4));
    break;
  case 4:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x27,(int)*(short *)(param_3 + 4));
    break;
  case 5:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x2b,(int)*(short *)(param_3 + 4));
    break;
  case 7:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x29,(int)*(short *)(param_3 + 4));
    break;
  case 8:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x2a,(int)*(short *)(param_3 + 4));
    break;
  case 9:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x2c,(int)*(short *)(param_3 + 4));
    break;
  case 10:
    (**(code **)(*param_1 + 0x1dc))(param_1,2,0x30,(int)*(short *)(param_3 + 4));
  }
  param_1[0x72] = (int)*(short *)(param_3 + 6);
  if ((char)param_1[1] == '\0') {
    param_1[3] = 2;
  }
  param_1[0x65] = 0x3c;
  return;
}



void fn_002174c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20 [2];
  undefined4 local_18;
  
  if (param_1 != 0) {
    fn_001c6d34(local_20);
    uVar1 = fn_006b09bc(param_1);
    if (((*(char *)(param_1 + 0x16d) == '\0') &&
        (iVar2 = fn_0013ad98((int)*(short *)(*(int *)(param_1 + 0x19c) + 2)), iVar2 == 0)) &&
       (iVar2 = fn_0013ad98(uVar1), iVar2 == 2)) {
      fn_006bb84c(*(undefined4 *)(param_1 + 0x170),local_20,(int)*(short *)(param_1 + 0x168));
    }
    else {
      fn_006bb6b0(*(undefined4 *)(param_1 + 0x170),local_20,(int)*(short *)(param_1 + 0x168));
    }
    iVar2 = fn_006a7f8c(local_20);
    if (iVar2 != 0) {
      iVar2 = fn_006f7a9c(DAT_008977e0);
      uVar1 = fn_006b7664(iVar2,local_18);
      if (((int)local_20[0] < 0) ||
         ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= local_20[0])) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + local_20[0] * 4);
      }
      if (((int)local_20[0] < 0) ||
         ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= local_20[0])) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 4) + local_20[0] * 0x34;
      }
      fn_002cd5b0(iVar2,uVar3,uVar1,param_1 + 0x1d4);
    }
  }
  return;
}



int fn_002173e0(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(*(int *)(param_2 + 0x170) + 0xfc) != *(int *)(*(int *)(param_1 + 0x170) + 0xfc)) {
    iVar4 = 0;
    do {
      if (((*(char *)(param_2 + 0x16d) == '\0') &&
          (iVar3 = fn_0013ad98((int)*(short *)(*(int *)(param_2 + 0x19c) + 2)), iVar3 != 0)) ||
         (cVar1 = *(char *)(param_2 + 0x36c), cVar1 == '\0')) {
LAB_00217460:
        sVar2 = *(short *)(*(int *)(param_2 + 0x19c) + 2);
      }
      else if (cVar1 == '\x01') {
        sVar2 = *(short *)(*(int *)(param_2 + 0x19c) + 6);
      }
      else {
        if (cVar1 != '\x02') goto LAB_00217460;
        sVar2 = *(short *)(*(int *)(param_2 + 0x19c) + 8);
      }
      if (sVar2 == *(short *)(*(int *)(param_1 + 0x19c) + iVar4 * 8 + 0x6a)) {
        return *(int *)(param_1 + 0x19c) + iVar4 * 8 + 0x6a;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  return 0;
}



void fn_002171f4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (param_1[2] == 0) {
    return;
  }
  if ((param_1[2] == 1) &&
     (iVar2 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar2 == 7 || iVar2 == 9)) {
    return;
  }
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aba74();
  iVar2 = 0;
  if (iVar1 != 0) {
    fn_006f7a84(DAT_008977e0);
    iVar2 = fn_006aa52c();
  }
  if (((short)param_1[0x6f] != iVar2) &&
     (*(short *)(param_1 + 0x6f) = (short)iVar2, (*(byte *)(param_1 + 0xe7) & 4) != 0)) {
    uVar3 = (uint)*(byte *)(param_1 + 1);
    bVar6 = uVar3 == 0;
    if (bVar6) {
      uVar3 = param_1[2];
    }
    bVar7 = bVar6 && uVar3 == 2;
    if (bVar6 && uVar3 == 2) {
      bVar7 = param_1[3] == 2;
    }
    if ((bVar7) && (param_1[0xd7] != 2)) {
      fn_00683320(param_1,0xc,0);
    }
  }
  if ((param_1[100] != 0) ||
     (uVar3 = fn_006b0108(param_1,(int)*(short *)(param_1[0x67] + 0x2c),0),
     uVar3 == (*(byte *)(param_1 + 0xe7) & 7) >> 2)) goto LAB_0021737c;
  if (uVar3 == 0) {
    uVar4 = 0x10;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x70))(param_1,0);
    if (iVar2 == 2) {
      if (*(char *)((int)param_1 + 0x5a) == '\0') {
        return;
      }
LAB_00217340:
      if (*(char *)((int)param_1 + 0x1e6) == '\0') {
        return;
      }
    }
    else if (iVar2 == 3) goto LAB_00217340;
    uVar4 = 0xf;
  }
  fn_00683320(param_1,uVar4,0);
  uVar3 = param_1[0xe7] & 0xfffffffbU | uVar3 << 2;
  param_1[0xe7] = uVar3;
  uVar5 = (uVar3 & 7) >> 2;
  if (uVar5 == 0) {
    param_1[0xe7] = uVar3 | 0x200;
  }
LAB_0021737c:
  iVar2 = param_1[2];
  bVar6 = iVar2 == 1;
  if (bVar6) {
    iVar2 = param_1[3];
  }
  if ((bVar6 && iVar2 == 1) && (uVar5 != 0)) {
    fn_00683320(param_1,3,0);
  }
  if ((param_1[0x65] == 0) && (iVar2 = fn_002169ac(param_1), iVar2 != 0)) {
    fn_00683320(param_1,9,*(undefined4 *)(iVar2 + 0x13c));
    return;
  }
  return;
}


