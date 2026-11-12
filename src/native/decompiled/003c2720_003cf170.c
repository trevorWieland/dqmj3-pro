#include "003c2720_003cf170.h"



void fn_003cf170(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_18;
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  fn_005f3aac(8);
  fn_0026d2e8(*(undefined4 *)(param_1 + 0x70),1);
  uVar2 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  fn_0026d700(&local_18,*(undefined4 *)(param_1 + 0x70),uVar2);
  puVar1 = local_18;
  fn_001930b8();
  fn_0044d6e4(puVar1);
  if (local_18 != &DAT_008f9cf4) {
    piVar3 = local_18 + -3;
    iVar4 = *piVar3;
    if (iVar4 == -1) {
LAB_003cf1fc:
      fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar4 + -1;
      if (iVar4 == 0) goto LAB_003cf1fc;
    }
  }
  uVar2 = fn_006ba860(*(undefined4 *)(param_1 + 0x98));
  fn_0026d700(&local_18,*(undefined4 *)(param_1 + 0x70),uVar2);
  puVar1 = local_18;
  fn_001930b8();
  fn_0044d6e4(puVar1);
  if (local_18 == &DAT_008f9cf4) goto LAB_003cf288;
  piVar3 = local_18 + -3;
  iVar4 = *piVar3;
  if (iVar4 != -1) {
    if (piVar3 == &DAT_008f9ce8) goto LAB_003cf288;
    *piVar3 = iVar4 + -1;
    if (iVar4 != 0) goto LAB_003cf288;
  }
  fn_001008c4(local_18 + -3,local_18[-2] + 8,0);
LAB_003cf288:
  uVar2 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  uVar2 = fn_0026e33c(*(undefined4 *)(param_1 + 0x70),uVar2,*(undefined4 *)(param_1 + 0x8c),20000,0
                       ,0);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined1 *)(param_1 + 0x78) = 5;
  return;
}



void fn_003cd4f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0081e5d8;
  puVar1[1] = param_2;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  puVar1[2] = *param_3;
  puVar1[3] = uVar2;
  puVar1[4] = uVar3;
  puVar1[5] = in_s0;
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[7] = param_4;
  *puVar1 = &DAT_00830f5c;
  puVar1[8] = param_5;
  *(undefined1 *)(puVar1 + 9) = 0;
  return;
}



void fn_003cd194(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0x2c)) {
  case 0:
    fn_0016c358(*(undefined4 *)(param_1 + 4),param_1 + 0x10,param_1 + 0x14,param_1 + 0x18);
    fn_0029df74(*(undefined4 *)(param_1 + 4),0);
    uVar1 = 1;
    if (0 < *(int *)(param_1 + 0x18)) {
      *(undefined1 *)(param_1 + 0x2c) = 6;
      *(undefined1 *)(param_1 + 0x2d) = 1;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x18);
      return;
    }
    break;
  case 1:
    iVar3 = fn_0029e4e0(*(undefined4 *)(param_1 + 4));
    if (iVar3 < 1) goto LAB_003cd22c;
    uVar1 = 2;
    break;
  case 2:
    fn_003cd090(param_1);
    return;
  case 3:
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_00154b54(uVar2,*(undefined4 *)(param_1 + 0x24));
    if (iVar3 == 0) {
      return;
    }
LAB_003cd22c:
    *(undefined1 *)(param_1 + 0x2c) = 4;
    return;
  case 4:
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_0016561c(uVar2,(int)*(char *)(param_1 + 4));
    uVar2 = 0x1e;
    if (iVar3 == 1) {
      uVar2 = 0x2d;
    }
    *(undefined1 *)(param_1 + 0x2c) = 6;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0x2d) = 5;
    return;
  default:
    return;
  case 6:
    iVar3 = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x28) = iVar3;
    if (0 < iVar3) {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2d);
  }
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
  return;
}



void fn_003cd068(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016dd44();
  *puVar1 = &DAT_00830f14;
  return;
}



undefined4 fn_003cc09c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),L"rom:/data/Layout/menu/information.arc",
                       &DAT_003cc17c,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_003cc188,&DAT_003cc184,0,1,0)
  ;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar1);
  uVar2 = fn_00689220(uVar1,(char *)&DAT_003cc19c);
  uVar3 = fn_0022f750((char *)&DAT_003cc1a8);
  uVar4 = fn_0068897c(uVar2,(char *)&DAT_003cc1c4);
  fn_00190d50(uVar4,uVar3);
  iVar5 = DAT_0089783c + 0x128;
  uVar1 = fn_001827b0(uVar1,(char *)&DAT_003cc1d4);
  fn_00190d50(uVar1,iVar5);
  iVar5 = fn_0068897c(uVar2,(char *)&DAT_003cc1dc);
  if (iVar5 != 0) {
    uVar1 = fn_0022f750((char *)&DAT_003cc1e8);
    fn_00190d50(iVar5,uVar1);
  }
  return 1;
}



void fn_003c3f90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022f584((&PTR_s_MenuMessagePassingBattle_0089665c)[param_2],0);
  uVar2 = fn_0022eefc((int)*(short *)(&DAT_007c7f4c + param_2 * 2),0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_003c2720(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2b;
  
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  if (puVar8 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar2 == &DAT_00896630) goto LAB_003c276c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003c276c:
  *(undefined4 **)(param_1 + 0x158) = puVar8;
  puVar8 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar8 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar2 == &DAT_00896a84) goto LAB_003c27b0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003c27b0:
  *(undefined4 **)(param_1 + 0x15c) = puVar8;
  puVar8 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar8 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_003c27f4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003c27f4:
  *(undefined4 **)(param_1 + 0x160) = puVar8;
  uVar3 = fn_00292f20();
  *(undefined4 *)(param_1 + 0x164) = uVar3;
  cVar1 = *(char *)(*(int *)(param_1 + 0x158) + 0x14);
  if (cVar1 != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x14) = 0;
    iVar4 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
    iVar7 = 0;
    if (0 < iVar4) {
      do {
        fn_006be0f4(*(undefined4 *)(param_1 + 0x164),iVar7);
        iVar5 = fn_00292f34();
        if (iVar5 != 0) {
          fn_00292778();
        }
        fn_0030ceec(*(undefined4 *)(param_1 + 0x164),iVar7,iVar5,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
  }
  fn_002c330c(&local_58);
  local_58 = DAT_0089661c;
  local_54 = DAT_00896620;
  local_50 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
  uStack_4c = 0;
  local_2b = 1;
  fn_00147974(&local_3c,&DAT_003c2a84);
  uVar3 = fn_0022f750((char *)&DAT_003c2a88);
  fn_00147974(&local_30,uVar3);
  fn_002c29a0(param_1,&local_58);
  fn_0039f248(param_1);
  if (cVar1 == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x158) + 0x15) == '\0') {
      uVar3 = fn_0022f584((char *)&DAT_003c2a90,0);
      fn_0068974c(param_1,uVar3,0,1);
      *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x15) = 1;
    }
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  else {
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar6 = local_30 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar6 = local_34 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar6 = local_38 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar6 = local_3c + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return 1;
}


