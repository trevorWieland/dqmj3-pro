#include "00416d40_0041d6f4.h"



void fn_0041d6f4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022f584((&DAT_00896868)[param_2],0);
  uVar2 = fn_0022eefc((int)*(short *)(&DAT_007c7f6c + param_2 * 2),0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0041c380(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar1 = fn_0022eed8((char *)&DAT_0041c418);
    uVar2 = fn_0022f750((char *)&DAT_00866f1c);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
  }
  else if (param_2 == 1) {
    uVar1 = fn_0022eed8((char *)&DAT_0041c428);
    uVar2 = fn_0022f750((char *)&DAT_00866f2c);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
  }
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_0041c10c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  wchar16 *pwStack_84;
  char *pcStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [28];
  char *apcStack_28 [3];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_0041c15c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041c15c:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  fn_00397774(&pwStack_84);
  local_70 = 2;
  local_7c = 2;
  pwStack_84 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_80 = (char *)&DAT_0041c33c;
  local_78 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x18);
  uVar3 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_68,uVar3);
  local_58 = 0;
  local_57 = 0;
  local_50 = 1;
  uVar3 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7668 + *(int *)(*(int *)(param_1 + 0xe4) + 0x10) * 4));
  fn_00147974(auStack_44,uVar3);
  fn_00397618(param_1,&pwStack_84);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar4 + 0x81) = 1;
  fn_0031f3f4(iVar4,0);
  fn_00100414(auStack_48,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_5c);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  uVar5 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_007c7660)[uVar5]);
    fn_0031b78c(param_1,uVar5,0,uVar3);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  apcStack_28[0] = "MenuMessageFieldTacticsTutorial00";
  apcStack_28[1] = (char *)&DAT_00866fb4;
  apcStack_28[2] = (char *)&DAT_00866fd8;
  iVar4 = fn_00154ac8(0x315);
  if ((iVar4 == 0) && (*(uint *)(param_1 + 0xec) < 3)) {
    uVar3 = fn_0022f584(apcStack_28[*(uint *)(param_1 + 0xec)],0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
    uVar5 = *(int *)(param_1 + 0xec) + 1;
    *(uint *)(param_1 + 0xec) = uVar5;
    if (2 < uVar5) {
      fn_00144834(0x315,1);
    }
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  return 1;
}



void fn_0041bb14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    uVar2 = fn_0022f750((&DAT_007c910c)[param_2 * 3]);
    uVar3 = fn_0022eefc((int)*(short *)(&DAT_007c9114 + param_2 * 0xc),0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



void fn_004198b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_20;
  
  local_20 = param_4;
  fn_002c3e78();
  iVar5 = *(int *)(param_1 + 0xb0);
  uVar1 = fn_006ba284(param_1);
  *(undefined4 *)(iVar5 + 0xc) = uVar1;
  iVar6 = 0;
  iVar5 = fn_006ba274(param_1);
  if (0 < iVar5) {
    do {
      iVar5 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar5 * iVar2 + iVar6;
      if ((((int)uVar3 < 0) ||
          ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar3)) ||
         (iVar5 = *(int *)(param_1 + 0xcc) + uVar3 * 0x10, iVar5 == 0)) {
        fn_0031b78c(param_1,iVar6,1,&LAB_00419a5c);
      }
      else {
        uVar1 = fn_00231ca0(0x25,0);
        fn_00396588(param_1,iVar6,uVar1);
        fn_0023097c(&local_20,(int)*(short *)(iVar5 + 10),1);
        fn_0031b78c(param_1,iVar6,1,local_20);
        if (local_20 != &DAT_008f9cf4) {
          piVar4 = local_20 + -3;
          iVar5 = *piVar4;
          if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = fn_006ba274(param_1);
    } while (iVar6 < iVar5);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00419758(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar5 = iVar1 * iVar2 + param_2;
  if (((int)uVar5 < 0) ||
     ((uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 4) <= uVar5)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xcc) + uVar5 * 0x10;
  }
  uVar3 = fn_0016a82c((int)*(short *)(iVar1 + 10));
  uVar4 = fn_0022ee7c((int)*(short *)(iVar1 + 10));
  fn_00321118(*(undefined4 *)(param_1 + 0xb4),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00418f70(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_001f7e04(param_1,0x80);
  if (((iVar1 == 0) || (iVar1 = fn_00689c1c(param_1,0x80), *(char *)(iVar1 + 8) == '\0')) ||
     (iVar1 = fn_0066e158(DAT_00898840), iVar1 == 0)) {
    if (*(int *)(param_1[0x35] + 8) == 0) {
      fn_00689878(param_1,0);
    }
    fn_006899f4(param_1,*(undefined4 *)(param_1[0x35] + 8),1);
    fn_0068ab44(param_1,0x100094c);
    *(undefined4 *)(param_1[0x35] + 0xc) = 0;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008963ac) goto LAB_00419048;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_00419048:
    *(undefined1 *)(puVar2 + 0xe) = 0;
  }
  return;
}



void fn_004185f8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  fn_0068ab44(param_1,0x1000950);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_00418650;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00418650:
  iVar3 = puVar4[5] + 1;
  if (1 < iVar3) {
    iVar3 = puVar4[5] + -1;
  }
  fn_00417f00(param_1,iVar3);
  (**(code **)(*param_1 + 0x124))(param_1);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00895dec) goto LAB_004186b0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_004186b0:
  uVar2 = fn_00231cb8((&DAT_007c7b10)[puVar4[5]]);
  fn_00243550(param_1[0x29],uVar2);
  return;
}



void fn_00417e64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_006ba274(param_1);
  iVar2 = fn_006ba284(param_1);
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0xf4) + (iVar1 * iVar2 + param_2) * 0x100;
  fn_0016a82c((int)*(short *)(iVar2 + 4));
  uVar4 = 0;
  iVar1 = fn_006b4ed4(iVar2);
  if (iVar1 != 0) {
    uVar3 = fn_0016a82c((int)*(short *)(iVar2 + 4));
    uVar4 = fn_0022ee7c((int)*(short *)(iVar2 + 4));
  }
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00417d14(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001f7e04(param_1,0xb0);
  if (iVar1 == 0) {
    fn_00689824(param_1,1);
    (**(code **)(*param_1 + 0x124))(param_1);
    param_1[0x39] = (int)&DAT_004176b0;
    param_1[0x3a] = 0;
  }
  return;
}



void fn_00416d40(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_2) {
  case 0:
    pcVar1 = (char *)&DAT_00416dcc;
    break;
  case 1:
    pcVar1 = (char *)&DAT_00416dd4;
    break;
  case 2:
    pcVar1 = (char *)&DAT_00416de0;
    break;
  case 3:
    pcVar1 = (char *)&DAT_00416dec;
    break;
  case 4:
    pcVar1 = (char *)&DAT_00416df8;
    break;
  case 5:
    pcVar1 = (char *)&DAT_00416e08;
    break;
  case 6:
    pcVar1 = (char *)&DAT_00416e14;
    break;
  case 7:
    pcVar1 = (char *)&DAT_00416e20;
    break;
  case 8:
    pcVar1 = (char *)&DAT_00416e2c;
    break;
  case 9:
    pcVar1 = (char *)&DAT_00416e38;
  }
  fn_0022f750(pcVar1);
  return;
}


