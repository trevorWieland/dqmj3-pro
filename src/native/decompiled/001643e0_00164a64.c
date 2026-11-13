#include "001643e0_00164a64.h"



undefined4 fn_00164a64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fn_00183718(&uStack_2c,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               &DAT_00164b08);
  uStack_34 = uStack_18;
  uStack_30 = uStack_14;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  uStack_38 = uStack_1c;
  if (uStack_2c != 0) {
    uVar3 = 0;
    do {
      uVar1 = fn_0018385c(&uStack_44,uVar3);
      iVar2 = fn_003035b0(uVar1,param_2);
      if (iVar2 == 0) {
        uVar1 = fn_00183840(&uStack_44,uVar3);
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uStack_2c);
  }
  return 0;
}



undefined4 fn_00164a34(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = (int)param_2;
  uVar3 = iVar1 - 0x10;
  bVar4 = 7 < uVar3;
  if (bVar4) {
    uVar3 = iVar1 - 0x20;
  }
  if ((bVar4 && 1 < uVar3) && (1 < iVar1 - 0x22U)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001649ec(int param_1)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 != 0) {
    local_c[0] = *(undefined1 *)(iVar1 + 5);
    fn_00159b18(local_c,iVar1 + 0x59,iVar1 + 0x38,iVar1 + 0x48,0x61);
  }
  return;
}



void fn_0016498c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = fn_001667e0(iVar1 + 10,0x400);
  if (iVar2 != 0) {
    local_10 = (local_10 & ~((unsigned int)0xff << 0)) | ((unsigned int)(*(undefined1 *)(iVar1 + 5)) & 0xff);
    fn_00159e5c(&local_10,(int)*(short *)(iVar1 + 0x1c));
    local_10 = CONCAT31(((unsigned int)(local_10) >> 8) & 0xffffff,*(undefined1 *)(iVar1 + 5));
    fn_00159ec8(&local_10,(int)*(short *)(iVar1 + 0x1e));
  }
  return;
}



undefined4 fn_001648dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_50 [17];
  
  uVar2 = fn_00164634();
  switch(uVar2) {
  case 0:
    goto switchD_001648f4_caseD_0;
  case 1:
  case 3:
  case 7:
  case 9:
  case 0xb:
  case 0xc:
    iVar3 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_50,0x10);
    if (0 < iVar3) {
      iVar1 = iVar3 - param_2;
      if (iVar3 >= param_2) {
        iVar1 = param_2;
      }
      if (((iVar1 < 0 == (iVar3 < param_2 && SBORROW4(iVar3,param_2))) && (aiStack_50[param_2] != 0)
          ) && (*(char *)(aiStack_50[param_2] + 0x2665) != '\0')) {
        return 0;
      }
    }
switchD_001648f4_caseD_0:
    return 1;
  default:
    return 0;
  }
}



undefined4 fn_00164634(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar3 = fn_00175aa4(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 != 0) {
    psVar4 = (short *)fn_00175aa4();
    uVar5 = fn_00163cbc((int)*psVar4);
    return uVar5;
  }
  iVar3 = fn_00165998(*(undefined4 *)(param_1 + 0x84));
  if (iVar3 == 0) {
    iVar3 = fn_00165b0c(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 != 0) {
      return 10;
    }
    iVar3 = fn_00165b34(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 != 0) {
      psVar4 = (short *)fn_00165b34();
      sVar2 = fn_001746c0((int)*psVar4);
      uVar5 = fn_00163cbc((int)sVar2);
      return uVar5;
    }
    iVar3 = fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
    if (iVar3 == 0) {
      iVar3 = fn_00165984(*(undefined4 *)(param_1 + 0x84));
      if (iVar3 != 0) {
        return 8;
      }
      iVar3 = fn_00165af8(*(undefined4 *)(param_1 + 0x84));
      if ((((iVar3 != 0) || (iVar3 = fn_00165328(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) ||
          (iVar3 = fn_00165b5c(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) ||
         ((iVar3 = fn_00165b20(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0 ||
          (iVar3 = fn_00175bd0(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)))) {
        return 2;
      }
      iVar3 = fn_00165b48(*(undefined4 *)(param_1 + 0x84));
      if (iVar3 != 0) {
switchD_00164748_caseD_1:
        return 0xb;
      }
      iVar3 = fn_001659ac(*(undefined4 *)(param_1 + 0x84));
      if (iVar3 != 0) {
        uVar5 = fn_00163cbc(1);
        return uVar5;
      }
      iVar6 = fn_00165020(param_1,param_2);
      iVar3 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
      if (iVar3 - 0x10U < 8) {
        iVar8 = fn_00174828(DAT_008977e4);
        cVar1 = *(char *)(iVar8 + iVar3 * 0x418 + -0x4027);
        goto LAB_001648b8;
      }
    }
    else {
      pcVar7 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
      if (*pcVar7 != '\x01') {
        if (*pcVar7 != '\x04') {
          return 0;
        }
        switch(*(undefined2 *)(pcVar7 + 2)) {
        default:
          return 0;
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 10:
        case 0xd:
        case 0xe:
          goto switchD_00164748_caseD_1;
        case 0xf:
          return 7;
        }
      }
      iVar6 = (int)*(short *)(pcVar7 + 2);
    }
    uVar5 = fn_00163cbc(iVar6);
  }
  else {
    iVar3 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
    iVar6 = fn_00174828(DAT_008977e4);
    cVar1 = *(char *)(iVar6 + iVar3 * 0x418 + -0x4027);
    iVar6 = 1;
LAB_001648b8:
    uVar5 = fn_00163cd8(iVar6,(int)cVar1);
  }
  return uVar5;
}



undefined4 fn_00164610(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00165020();
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_001639e4();
    if (iVar1 == 0x28) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



int fn_001645e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return (int)*(short *)(iVar1 + param_2 * 0x418 + -0x4064);
}



undefined4 fn_001643e0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auStack_40 [32];
  
  sVar2 = fn_001642a8();
  sVar3 = fn_00165098(param_1,param_2);
  fn_00165190(param_1,param_2);
  uVar5 = 0;
  uVar6 = 2;
  if ((int)sVar2 - 1U < 699) {
    iVar4 = fn_001642a8(param_1,param_2);
    if ((iVar4 < 1) || (699 < iVar4)) {
LAB_00164454:
      uVar5 = 0;
    }
    else {
      uVar5 = fn_0016a888();
    }
  }
  else {
    if ((int)sVar3 - 1U < 0x21f) {
      iVar4 = fn_00165098(param_1,param_2);
      if ((iVar4 < 1) || (0x21f < iVar4)) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_0016a7c4();
      }
      uVar6 = 1;
      goto LAB_001645b8;
    }
    iVar4 = fn_00163940();
    if (iVar4 == 0) {
      iVar4 = fn_00175a78(*(undefined4 *)(param_1 + 0x84));
      if (iVar4 == 0) {
        iVar4 = fn_00175d48(*(undefined4 *)(param_1 + 0x84));
        if (iVar4 == 0) goto LAB_001645b8;
        uVar5 = 0x26c;
        cVar1 = *(char *)(*(int *)(param_1 + 0x84) + 4);
        if ((cVar1 == '\x1f' || cVar1 == ' ') || (cVar1 == '!' || cVar1 == '\"')) {
          uVar5 = 0x26d;
        }
        fn_001028d4(auStack_40,(char *)&DAT_00164f64,uVar5);
      }
      else {
        fn_001028d4(auStack_40,(char *)&DAT_00164f64,2);
      }
      uVar5 = 0;
      if (DAT_00897800 != 0) {
        uVar5 = fn_0016ba34(DAT_00897800,DAT_0089820c,auStack_40,0);
      }
      uVar6 = 0;
      goto LAB_001645b8;
    }
    uVar5 = fn_00165190(param_1,param_2);
    iVar4 = fn_00163940();
    if (iVar4 == 0) goto LAB_00164454;
    uVar5 = fn_0016a82c(uVar5);
  }
  uVar6 = 0;
LAB_001645b8:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar6;
  }
  return uVar5;
}


