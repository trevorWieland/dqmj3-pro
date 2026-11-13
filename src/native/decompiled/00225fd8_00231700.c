#include "00225fd8_00231700.h"



void fn_00231700(undefined2 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_40 [36];
  
  if (param_3 == 0) {
    if (0 < (int)param_2) {
      puVar3 = param_1 + -1;
      if ((param_2 & 1) != 0) {
        *param_1 = 0;
        puVar3 = param_1;
      }
      iVar4 = (int)param_2 >> 1;
      if (iVar4 != 0) {
        do {
          puVar3[1] = 0;
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + 2;
          *puVar3 = 0;
        } while (iVar4 != 0);
        return;
      }
    }
  }
  else {
    uVar1 = fn_00661094(param_3);
    uVar2 = fn_00230e40(uVar1,param_4);
    uVar1 = DAT_00898210;
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_0015b0b4,param_3);
    uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_40,0);
    fn_0018a618(param_1,param_2,param_2 - 1,L"%ls%ls",uVar2,uVar1);
  }
  return;
}



void fn_00231210(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [8];
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  puVar4 = &local_48;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  if (param_2 == 0) {
    iVar2 = 8;
    local_48 = 0;
    do {
      *(undefined2 *)((int)puVar4 + 2) = 0;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
      *(undefined2 *)puVar4 = 0;
    } while (iVar2 != 0);
  }
  else {
    iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    sVar1 = 0;
    if (iVar2 != 0) {
      sVar1 = *(short *)(iVar2 + 0x1c);
    }
    if (iVar2 == 0 || sVar1 == 0) {
      iVar2 = 8;
      local_48 = local_48 & 0xffff0000;
      do {
        *(undefined2 *)((int)puVar4 + 2) = 0;
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + 1;
        *(undefined2 *)puVar4 = 0;
      } while (iVar2 != 0);
    }
    else {
      uVar3 = fn_00661094();
      uVar3 = fn_00230e40(uVar3,param_3);
      fn_0018a618(puVar4,0x11,0x10,L"%ls%ls",uVar3,iVar2 + 4);
    }
  }
  fn_00168a24(param_1,&local_48,auStack_24);
  return;
}



void fn_00230acc(undefined4 param_1)

{
  fn_0016ba34(DAT_00897800,DAT_008987b0,param_1,0);
  return;
}



void fn_0022fa84(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  if (param_1 == 1) {
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_002301a4,0);
  }
  else {
    if (param_1 == 2) {
      puVar2 = &DAT_002301ac;
    }
    else {
      if (param_1 != 3) {
        uVar1 = 0;
        goto LAB_0022fac8;
      }
      puVar2 = &DAT_002301a0;
    }
    uVar1 = fn_0016ba34(DAT_00897800,DAT_008987ac,puVar2,0);
  }
LAB_0022fac8:
  fn_0016ba84(DAT_00897800,uVar1);
  fn_0016ba34(DAT_00897800,DAT_008987ac,&DAT_0022fb1c,0);
  return;
}



void fn_0022f584(undefined4 param_1,undefined4 param_2)

{
  fn_0016ba34(DAT_00897800,DAT_00898214,param_1,param_2);
  return;
}



uint fn_0022ebb4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *local_78 [10];
  undefined *local_50;
  undefined **ppuStack_4c;
  char *pcStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined *local_3c;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = fn_0018a618(param_1,param_2,param_2 + -1,&DAT_0022ed54,param_3);
  iVar4 = 0;
  local_50 = &DAT_00830082;
  ppuStack_4c = &PTR_LAB_00850084;
  pcStack_48 = "agmentLightSource[3].enabled";
  puStack_44 = &DAT_00890088;
  puStack_40 = &DAT_008b008a;
  local_3c = &DAT_008f008e;
  ppuStack_38 = &PTR_LAB_00850084;
  uStack_34 = 0x900086;
  uStack_30 = 0x910088;
  uStack_2c = 0x92008a;
  do {
    if (param_4 == 0) {
      puVar2 = (ushort *)fn_00192cb4(DAT_00897800,(int)*(short *)((int)&local_50 + iVar4 * 2),0);
      local_78[iVar4] = puVar2;
    }
    else {
      puVar2 = (ushort *)fn_00192cb4(DAT_00897800,(int)*(short *)((int)&local_3c + iVar4 * 2),0);
      local_78[iVar4] = puVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      puVar2 = (ushort *)(param_1 + uVar3 * 2);
      if (*puVar2 == 0) {
        return uVar1;
      }
      switch(*puVar2) {
      case 0x30:
        *puVar2 = *local_78[0];
        break;
      case 0x31:
        *puVar2 = *local_78[1];
        break;
      case 0x32:
        *puVar2 = *local_78[2];
        break;
      case 0x33:
        *puVar2 = *local_78[3];
        break;
      case 0x34:
        *puVar2 = *local_78[4];
        break;
      case 0x35:
        *puVar2 = *local_78[5];
        break;
      case 0x36:
        *puVar2 = *local_78[6];
        break;
      case 0x37:
        *puVar2 = *local_78[7];
        break;
      case 0x38:
        *puVar2 = *local_78[8];
        break;
      case 0x39:
        *puVar2 = *local_78[9];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return uVar1;
}



void fn_00226228(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28 [4];
  
  if (*(char *)((int)param_1 + 0x243) != '\0') {
    if (param_1[0x5f] == param_1[0x39]) {
      (**(code **)(*param_1 + 0x20))(param_1);
      uVar1 = fn_0017fde4(param_1[0x5f]);
      fn_00224680(param_1,uVar1);
      iVar2 = fn_0017fde4(param_1[0x61]);
      if ((char)param_1[0x8f] == '\0') {
        if (iVar2 == 0) {
          if (*(char *)((int)param_1 + 0x243) == '\0') {
            iVar2 = param_1[0x61];
          }
          else {
            iVar2 = param_1[0x5f];
          }
          iVar2 = fn_0017fde4(iVar2);
        }
        iVar3 = fn_006ebf84(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),iVar2);
        if (iVar3 == 0) {
          fn_001969a4(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),iVar2);
          *(undefined1 *)(param_1 + 0x8f) = 1;
        }
      }
      fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      uVar1 = fn_001caca8();
      local_28[0] = 1;
      fn_0022455c(param_1,param_1[0x61],uVar1,param_1[0x38]);
      if (*(char *)((int)param_1 + 0x243) == '\0') goto LAB_00226390;
    }
    if ((int *)param_1[0x5f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x5f] + 4))();
      param_1[0x5f] = 0;
    }
    iVar2 = fn_006a7f8c(param_1 + 0x69);
    if (iVar2 != 0) {
      fn_006f7a9c(DAT_008977e0);
      fn_00279848();
      piVar4 = (int *)fn_001c6d34(local_28);
      iVar2 = piVar4[1];
      iVar3 = piVar4[2];
      param_1[0x69] = *piVar4;
      param_1[0x6a] = iVar2;
      param_1[0x6b] = iVar3;
    }
  }
LAB_00226390:
  *(undefined1 *)((int)param_1 + 0x243) = 0;
  return;
}



void fn_00225fd8(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x65] != -1) {
    *(undefined1 *)(param_1 + 0x65) = 0xff;
    if (param_1[0x60] != 0) {
      if (param_2 != 0) {
        fn_00223e50(param_1);
      }
      fn_00223ff8(param_1,0,1);
    }
    if (param_3 == 0) {
      if ((char)param_1[0x65] == -1) {
        fn_00226784(param_1,0xf,param_1 + 8);
        fn_00225a6c(param_1,0x10009cd);
      }
      else {
        fn_00226784(param_1,5,param_1 + 8);
        fn_00225a6c(param_1,0x10009ce);
      }
    }
    if (param_2 != 0) {
      fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      uVar1 = fn_001caca8();
      fn_0022455c(param_1,param_1[0x61],uVar1,param_1[0x38],1);
      fn_00162d44(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24));
      fn_00221828(param_1);
      fn_00259728(param_1 + 0x71,1);
                    /* WARNING: Could not recover jumptable at 0x00226108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x44))(param_1,0,4,1);
      return;
    }
  }
  return;
}


