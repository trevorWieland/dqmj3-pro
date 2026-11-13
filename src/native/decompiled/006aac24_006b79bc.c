#include "006aac24_006b79bc.h"



void fn_006b79bc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_88 [128];
  
  uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
  fn_00101a50(auStack_88,0x80,L"rom:/data/Field/Map/%s.bch",uVar1);
  fn_006b7674(param_1,0x1d0,0x1eb,auStack_88);
  return;
}



void fn_006b609c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006b614c);
  if (iVar1 != param_2) {
    iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006b6154);
    if (iVar1 == param_2) {
      param_2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_006b615c);
    }
    uVar2 = fn_006f7a9c(DAT_008977e0);
    fn_002798b8(uVar2,param_2,param_3);
    return;
  }
  uVar2 = fn_006f7a9c();
  iVar1 = fn_006b77f0(uVar2,(char *)&DAT_006b613c);
  if (iVar1 == -1) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    fn_0027833c(uVar2,(char *)&DAT_006b613c);
    return;
  }
  return;
}



void fn_006b4cd0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006b4cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x40))();
  return;
}



void fn_006b2ed0(int *param_1,int param_2)

{
  fn_0016ba34(DAT_00897800,DAT_0089877c,*(undefined4 *)(*param_1 + param_2 * 8),0);
  return;
}



undefined4 fn_006b20c8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (iVar1 == 1) {
    uVar2 = fn_0023080c((char *)&DAT_006b2148);
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = fn_0023080c((char *)&DAT_006b215c);
    return uVar2;
  }
  if (iVar1 == 3) {
    uVar2 = fn_0023080c((char *)&DAT_006b2170);
    return uVar2;
  }
  if (iVar1 == 4) {
    uVar2 = fn_0023080c((char *)&DAT_006b2138);
    return uVar2;
  }
  return 0;
}



void fn_006b1130(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_28;
  
  iVar5 = 1;
  iVar6 = 0;
  iVar4 = 0;
  iVar7 = 0;
  local_28 = param_4 & 0xffffff00;
  iVar2 = fn_006f7a84(DAT_008977e0);
  cVar1 = *(char *)(iVar2 + 0x408);
  if (cVar1 != '\0') {
    iVar2 = fn_00661094((int)*(short *)(param_2 + 0x16a));
    if (cVar1 == '\x01') {
      cVar1 = (&DAT_007be354)[iVar2];
    }
    else {
      if (cVar1 == '\x02') {
        puVar3 = &DAT_007be35e;
      }
      else {
        if (cVar1 != '\x03') goto LAB_006b11ec;
        puVar3 = &DAT_007be368;
      }
      cVar1 = puVar3[iVar2];
    }
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        iVar4 = 0;
        iVar6 = 3;
        iVar7 = 0;
        iVar5 = 0x20;
      }
      else if (cVar1 == '\x02') {
        iVar7 = 0;
        iVar6 = 2;
        iVar4 = 0;
        iVar5 = 0x1c;
      }
      goto switchD_006b1200_default;
    }
  }
LAB_006b11ec:
  iVar7 = fn_006b0d64(param_2,&local_28);
  switch(iVar7) {
  case 0:
    iVar6 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x3e);
    iVar5 = fn_003b21ec((int)*(short *)(*(int *)(param_2 + 0x19c) + 0x40));
    iVar4 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x42);
    break;
  case 1:
    iVar6 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x44);
    iVar5 = fn_003b21ec((int)*(short *)(*(int *)(param_2 + 0x19c) + 0x46));
    iVar4 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x48);
    break;
  case 2:
    iVar6 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x4c);
    iVar5 = fn_003b21ec((int)*(short *)(*(int *)(param_2 + 0x19c) + 0x4e));
    iVar4 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x50);
    break;
  case 3:
    iVar6 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x54);
    iVar5 = fn_003b21ec((int)*(short *)(*(int *)(param_2 + 0x19c) + 0x56));
    iVar4 = (int)*(short *)(*(int *)(param_2 + 0x19c) + 0x58);
    break;
  case 4:
    iVar6 = (int)*(short *)(*(int *)(param_2 + 0x19c) + (char)local_28 * 8 + 0x5c);
    iVar5 = fn_003b21ec((int)*(short *)(*(int *)(param_2 + 0x19c) + (char)local_28 * 8 + 0x5e));
    iVar4 = (int)*(short *)(*(int *)(param_2 + 0x19c) + (char)local_28 * 8 + 0x60);
  }
switchD_006b1200_default:
  param_1[1] = iVar5;
  *param_1 = iVar6;
  param_1[2] = iVar4;
  param_1[3] = iVar7;
  return;
}



undefined4 fn_006b0d64(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aba74();
  if (iVar1 == 0) {
    return 0;
  }
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aa52c();
  if (*(short *)(*(int *)(param_1 + 0x19c) + 0x5a) == iVar1) {
    *param_2 = 0;
  }
  else {
    if (*(short *)(*(int *)(param_1 + 0x19c) + 0x62) != iVar1) {
      iVar1 = fn_00661094();
      if (*(short *)(*(int *)(param_1 + 0x19c) + 0x4a) == iVar1) {
        return 2;
      }
      fn_006f7a84(DAT_008977e0);
      iVar1 = fn_00259878();
      switch(*(undefined2 *)(*(int *)(param_1 + 0x19c) + 0x52)) {
      case 1:
        if (*(char *)(param_1 + 0x1be) < iVar1) {
          return 3;
        }
        break;
      case 2:
        if (iVar1 < *(char *)(param_1 + 0x1be)) {
          return 3;
        }
        break;
      case 3:
        if (iVar1 == 2) {
          return 3;
        }
        break;
      case 4:
        if (iVar1 == 0) {
          return 3;
        }
        break;
      case 5:
        if (iVar1 == 4) {
          return 3;
        }
      }
      fn_006f7a84(DAT_008977e0);
      iVar1 = fn_006ab0e0();
      iVar1 = fn_001f88e8((int)*(short *)(iVar1 + 0x1e),(int)*(short *)(iVar1 + 0x20),
                           (int)*(short *)(iVar1 + 0x26),(int)*(short *)(iVar1 + 0x28),
                           (int)*(short *)(iVar1 + 0x2a),(int)*(short *)(iVar1 + 0x2c));
      iVar2 = fn_002aa920(param_1);
      if (iVar2 == -1) {
        return 0;
      }
      if (iVar1 < iVar2 * 4) {
        return 0;
      }
      return 1;
    }
    *param_2 = 1;
  }
  return 4;
}



void fn_006af5dc(int param_1,int param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_0017d96c(&local_28,0x20,0x1f,(char *)&DAT_006af654,*(int *)(param_1 + 4) + param_2 * 0x74);
  fn_0016ba34(DAT_00897800,DAT_0089822c,&local_28,0);
  return;
}



undefined4 fn_006aac24(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,0);
  if (iVar1 != 0) {
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd784(uVar2,param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd7f4(uVar2,param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = fn_006f7a70(DAT_008977e0);
    iVar1 = fn_006bd864(uVar2,param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = fn_006acefc(*(undefined4 *)(DAT_008977e0 + 0x30),param_1);
    if (iVar1 != 0) {
      return 0;
    }
  }
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = fn_006b6088(*(undefined4 *)(iVar1 + 0x54));
  if ((iVar1 != 0) && (iVar1 = fn_006aaf6c(param_1), iVar1 != -1)) {
    uVar2 = fn_006aaf6c(param_1);
    iVar1 = fn_006afe0c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
    if (iVar1 == 0) {
      uVar2 = fn_006aaf6c(param_1);
      pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
      if ((*pcVar3 != 'C') || (uVar4 = fn_00163d44(0), 8 < uVar4)) {
        return 1;
      }
    }
  }
  return 0;
}


