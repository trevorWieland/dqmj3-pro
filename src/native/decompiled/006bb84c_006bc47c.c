#include "006bb84c_006bc47c.h"



undefined4 fn_006bc47c(void)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  return *(undefined4 *)(iVar1 + 8);
}



undefined4 fn_006bc46c(void)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  return *(undefined4 *)(iVar1 + 4);
}



bool fn_006bc458(void)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  return iVar1 != 0;
}



undefined4 fn_006bc448(void)

{
  int iVar1;
  
  iVar1 = fn_006bc1dc();
  return *(undefined4 *)(iVar1 + 0xc);
}



undefined4 fn_006bc43c(int param_1)

{
  return **(undefined4 **)(param_1 + 4);
}



undefined8 fn_006bc2e4(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_40;
  uint local_3c;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  uint *local_2c;
  uint *puStack_28;
  
  uVar6 = 0;
  local_40 = *param_3;
  local_3c = param_3[1];
  uStack_30 = param_1;
  local_2c = param_2;
  puStack_28 = param_3;
  fn_006d0234(&local_38,&local_40,0);
  local_40 = local_38;
  local_3c = iStack_34;
  fn_006d0494(&local_38,&local_40,0);
  local_40 = local_38;
  local_3c = iStack_34;
  fn_006d0500(&local_38,&local_40,0);
  local_40 = local_38;
  local_3c = iStack_34;
  fn_006d056c(&local_38,&local_40,0);
  uVar2 = local_38 + 0xfad9a400;
  iVar1 = iStack_34 - (uint)(local_38 < 86400000);
  uVar4 = *local_2c;
  uVar5 = local_2c[1];
  iVar3 = uVar4 - uVar2;
  if ((int)(uVar5 - (iVar1 + (uint)(uVar4 < uVar2))) < 0 ==
      (SBORROW4(uVar5,iVar1) != SBORROW4(uVar5 - iVar1,(uint)(uVar4 < uVar2)))) {
    iVar3 = uVar4 - local_38;
    if ((int)(uVar5 - (iStack_34 + (uint)(uVar4 < local_38))) < 0 ==
        (SBORROW4(uVar5,iStack_34) != SBORROW4(uVar5 - iStack_34,(uint)(uVar4 < local_38)))) {
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return CONCAT44(iVar3,uVar6);
}



int fn_006bc1dc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x98) == param_2) {
    iVar1 = iVar1 + 0x98;
  }
  else if (*(int *)(iVar1 + 0xb8) == param_2) {
    iVar1 = iVar1 + 0xb8;
  }
  else if (*(int *)(iVar1 + 0xd8) == param_2) {
    iVar1 = iVar1 + 0xd8;
  }
  else if (*(int *)(iVar1 + 0xf8) == param_2) {
    iVar1 = iVar1 + 0xf8;
  }
  else if (*(int *)(iVar1 + 0x118) == param_2) {
    iVar1 = iVar1 + 0x118;
  }
  else if (*(int *)(iVar1 + 0x138) == param_2) {
    iVar1 = iVar1 + 0x138;
  }
  else if (*(int *)(iVar1 + 0x158) == param_2) {
    iVar1 = iVar1 + 0x158;
  }
  else if (*(int *)(iVar1 + 0x178) == param_2) {
    iVar1 = iVar1 + 0x178;
  }
  else if (*(int *)(iVar1 + 0x198) == param_2) {
    iVar1 = iVar1 + 0x198;
  }
  else if (*(int *)(iVar1 + 0x1b8) == param_2) {
    iVar1 = iVar1 + 0x1b8;
  }
  else if (*(int *)(iVar1 + 0x1d8) == param_2) {
    iVar1 = iVar1 + 0x1d8;
  }
  else if (*(int *)(iVar1 + 0x1f8) == param_2) {
    iVar1 = iVar1 + 0x1f8;
  }
  else if (*(int *)(iVar1 + 0x218) == param_2) {
    iVar1 = iVar1 + 0x218;
  }
  else if (*(int *)(iVar1 + 0x238) == param_2) {
    iVar1 = iVar1 + 0x238;
  }
  else if (*(int *)(iVar1 + 600) == param_2) {
    iVar1 = iVar1 + 600;
  }
  else if (*(int *)(iVar1 + 0x278) == param_2) {
    iVar1 = iVar1 + 0x278;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



byte fn_006bc18c(int param_1)

{
  byte bVar1;
  
  if ((*(int *)(param_1 + 8) == 0) &&
     ((*(uint *)(param_1 + 0xc) & 1) == 0 || *(uint *)(param_1 + 0xc) == 0)) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  return (*(code **)(param_1 + 8) == fn_002e2204 && *(int *)(param_1 + 0xc) == 0) | bVar1;
}



undefined4 fn_006bc084(undefined4 param_1)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  bVar2 = false;
  pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar6 = 3;
  pcVar4 = (char *)&DAT_00891f18;
  do {
    pcVar1 = pcVar4 + 4;
    pcVar4 = pcVar4 + 8;
    if (*pcVar1 == *pcVar3) {
      bVar2 = true;
    }
    if (*pcVar4 == *pcVar3) {
      bVar2 = true;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if ((bVar2) && (iVar6 = fn_00163868(100), iVar6 < 3)) {
    iVar7 = 0;
    pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                  *(undefined4 *)(DAT_008977e0 + 0xa8));
    pcVar4 = (char *)&DAT_00891f18;
    iVar5 = 0x891f1a;
    iVar6 = 3;
    do {
      pcVar1 = pcVar4 + 4;
      pcVar4 = pcVar4 + 8;
      if (*pcVar1 == *pcVar3) {
        iVar7 = (int)*(short *)(iVar5 + 4);
      }
      if (*pcVar4 == *pcVar3) {
        iVar7 = (int)*(short *)(iVar5 + 8);
      }
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar6 != 0);
    iVar6 = fn_006bb944(param_1,iVar7);
    if (iVar6 != 0) {
      fn_00242834(*(undefined4 *)(DAT_00897804 + 0x1c),iVar7);
      uVar8 = 1;
    }
  }
  return uVar8;
}



undefined4 fn_006bc024(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar1 == 6) && (iVar1 = fn_006b5288(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar1 != 0)) {
    fn_002ea524();
    uVar2 = fn_00237090();
    iVar1 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),uVar2);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



undefined1 fn_006bbda8(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 uVar6;
  
  uVar6 = 0;
  iVar2 = fn_00211e00(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if (iVar2 == 0) {
    pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                  *(undefined4 *)(DAT_008977e0 + 0xa8));
    iVar5 = 4;
    pcVar4 = (char *)&DAT_00891f32;
    iVar2 = 0x891f33;
    do {
      pcVar1 = pcVar4 + 2;
      pcVar4 = pcVar4 + 4;
      if (*pcVar1 == *pcVar3) {
        uVar6 = *(undefined1 *)(iVar2 + 2);
      }
      if (*pcVar4 == *pcVar3) {
        uVar6 = *(undefined1 *)(iVar2 + 4);
      }
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 4;
    } while (iVar5 != 0);
  }
  else {
    uVar6 = 5;
  }
  return uVar6;
}



bool fn_006bb944(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = fn_002e9f9c(param_2);
  uVar2 = fn_002e9ce8(param_2);
  iVar4 = 0;
  do {
    iVar3 = fn_00154ac8((&DAT_00891edc)[iVar4 * 2]);
    if (iVar3 == 0) {
      if (iVar4 < 8) goto LAB_006bb9a0;
      break;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 7;
LAB_006bb9a0:
  iVar4 = fn_00300f74((&DAT_00891ee0)[iVar4 * 2] * ((uVar1 & 0xff) + 100),(uVar2 & 0xff) + 10);
  iVar4 = iVar4 + *(int *)(&DAT_007c1014 + *(int *)(param_1 + 0x10) * 4);
  if (iVar4 < 10) {
    iVar4 = 10;
  }
  iVar3 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar3 == 5 || iVar3 == 4) && (iVar4 < 300)) {
    iVar4 = 300;
  }
  iVar3 = fn_00163868(1000);
  return iVar3 + 1 <= iVar4;
}



void fn_006bb84c(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar1 = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1a4) >> 1;
  if (uVar1 != 0) {
    do {
      if (*(short *)(*(int *)(param_1 + 0x1a4) + uVar5 * 2) == param_3) {
        if (uVar5 < 0x10) {
          puVar2 = (undefined4 *)(*(int *)(param_1 + 0x198) + (uVar5 + 0x10) * 0xc);
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          *param_2 = *puVar2;
          param_2[1] = uVar3;
          param_2[2] = uVar4;
          return;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0xffffffff;
  return;
}


