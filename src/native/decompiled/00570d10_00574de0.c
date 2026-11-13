#include "00570d10_00574de0.h"



void fn_00574de0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar2 = *(int **)(param_1 + 0xb4);
  iVar8 = piVar2[8];
  iVar10 = piVar2[10];
  iVar3 = (**(code **)(*piVar2 + 0x14))();
  iVar9 = 0;
  if (0 < iVar8 * iVar3) {
    do {
      iVar4 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),iVar10,iVar9);
      if (iVar4 != 0) {
        piVar2 = *(int **)(param_1 + 0x10c);
        bVar1 = false;
        while (*(int **)(param_1 + 0x110) != piVar2) {
          iVar7 = *piVar2;
          piVar2 = piVar2 + 1;
          if (iVar7 == iVar4) {
            bVar1 = true;
          }
        }
        uVar5 = fn_00346ed0(*(undefined4 *)(param_1 + 0xb4),iVar9);
        if (bVar1) {
          uVar6 = 2;
        }
        else {
          uVar6 = 0xffffffff;
        }
        fn_002b325c(uVar5,uVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8 * iVar3);
  }
  return;
}



void fn_00573db4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00311824(param_1,0xffffffff,0);
  *puVar1 = &DAT_008412e8;
  return;
}



void fn_00572eac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if ((&PTR_s_HelpMessage1902_007ca15c)[param_2] == (undefined *)0x0) {
    return;
  }
  uVar1 = fn_0022f750((&DAT_00897098)[param_2]);
  if (param_2 != 2) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar2 == &DAT_00897044) goto LAB_00572f24;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_00572f24:
    fn_0022f750(*(undefined4 *)(&DAT_007ca134 + (uint)*(byte *)(puVar4 + 4) * 4));
    fn_0015b0dc();
  }
  uVar3 = fn_0022eed8((&PTR_s_HelpMessage1902_007ca15c)[param_2]);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00572a60(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_3f8 [962];
  undefined1 local_36;
  undefined1 local_33;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0xc4) = fn_0057282c;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_00572ae8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00572ae8:
  uVar1 = *(undefined1 *)(puVar5 + 4);
  uVar3 = fn_002f7e70();
  iVar4 = fn_006c3ab0(uVar3,uVar1);
  if (*(char *)(iVar4 + 0x3c5) != '\0') {
    *(code **)(param_1 + 0xc4) = fn_005726e0;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  uVar3 = fn_002f7e70();
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_00572b64;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00572b64:
  fn_006c3acc(uVar3,*(undefined1 *)(puVar5 + 4),auStack_3f8);
  iVar4 = fn_002f6fa8();
  local_36 = (undefined1)*(undefined4 *)(iVar4 + 8);
  local_33 = 1;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_00572bcc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00572bcc:
  fn_0036a810(uVar3,*(undefined1 *)(puVar5 + 4),auStack_3f8);
  fn_002f6100(param_1);
  fn_0015b0dc();
  fn_0015b0f8(local_36);
  uVar3 = fn_0022f584((char *)&DAT_00572c54,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 fn_005722b8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  wchar16 *pwStack_58;
  char *pcStack_54;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_26;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00897044) goto LAB_00572308;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00572308:
  DAT_00897098 = *(undefined4 *)(&DAT_007ca12c + (uint)*(byte *)(puVar4 + 4) * 4);
  fn_002c330c(&pwStack_58);
  pwStack_58 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_54 = (char *)&DAT_00572630;
  local_50 = 4;
  local_4c = fn_002f70cc(param_1);
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00897044) goto LAB_00572378;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00572378:
  uVar2 = fn_0022f750(*(undefined4 *)(&DAT_007ca13c + (uint)*(byte *)(puVar4 + 4) * 4));
  fn_00147974(&local_3c,uVar2);
  local_2c = 0;
  local_2b = 1;
  uVar2 = fn_0022f750(DAT_008970a8);
  fn_00147974(&local_30,uVar2);
  local_26 = 1;
  fn_002c29a0(param_1,&pwStack_58);
  iVar5 = 0;
  if (0 < local_50) {
    do {
      uVar2 = fn_0022f750((&DAT_00897098)[iVar5]);
      fn_0031b78c(param_1,iVar5,0,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_50);
  }
  iVar5 = fn_002f672c(param_1);
  if (iVar5 == 0) {
    puVar4 = (undefined4 *)param_1[6];
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_00897044) goto LAB_00572488;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_00572488:
    if (*(char *)(puVar4 + 4) == '\0') {
      param_1[0x31] = (int)&LAB_0057280c;
      param_1[0x32] = 0;
      param_1[0x2f] = (int)&LAB_0057280c;
      param_1[0x30] = 0;
      param_1[0x34] = 0;
      param_1[0x2d] = (int)&LAB_0057280c;
      param_1[0x2e] = 0;
      (**(code **)(*param_1 + 0x14))(param_1);
    }
    else {
      param_1[0x31] = (int)fn_00572e1c;
      param_1[0x32] = 0;
      param_1[0x2f] = (int)fn_00572e1c;
      param_1[0x30] = 0;
      param_1[0x34] = 0;
      param_1[0x2d] = (int)fn_00572e1c;
      param_1[0x2e] = 0;
      (**(code **)(*param_1 + 0x14))(param_1);
    }
  }
  else {
    param_1[0x31] = (int)&DAT_00572650;
    param_1[0x32] = 0;
    param_1[0x2f] = (int)&DAT_00572650;
    param_1[0x30] = 0;
    param_1[0x34] = 0;
    param_1[0x2d] = (int)&DAT_00572650;
    param_1[0x2e] = 0;
    fn_00689efc(param_1,0xee,0);
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar3 = local_34 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar3 = local_38 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar3 = local_3c + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return 1;
}



undefined4 fn_005720d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_28 [3];
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar5 = *(undefined4 *)(iVar1 + 8);
  local_28[0] = (char *)0x1;
  iVar1 = fn_001481c8(uVar5,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/gp_select.arc",
                       &DAT_00572214,1);
  param_1[0x19] = iVar1;
  local_28[0] = (char *)0x0;
  local_28[1] = (char *)0x1;
  local_28[2] = (char *)0x0;
  iVar1 = fn_001480d0(uVar5,iVar1,(char *)&DAT_00572220,&DAT_0057221c);
  param_1[0x1a] = iVar1;
  uVar5 = fn_00178f9c(uVar5,iVar1);
  uVar2 = fn_001827b0(uVar5,(char *)&DAT_00572230);
  uVar5 = fn_001827b0(uVar5,(char *)&DAT_0057223c);
  iVar4 = 0;
  local_28[0] = (char *)&DAT_00869b9c;
  local_28[1] = (char *)&DAT_00869b7c;
  local_28[2] = (char *)&DAT_00869b88;
  iVar1 = fn_002f6404(0);
  if (iVar1 != 0) {
    iVar4 = 1;
    iVar1 = fn_002f6180(0);
    if (iVar1 < 1) {
      iVar4 = 2;
    }
    else {
      fn_0015b0f8();
    }
  }
  uVar3 = fn_0022f750(local_28[iVar4]);
  fn_00190d50(uVar2,uVar3);
  local_28[0] = (char *)&DAT_00869b9c;
  local_28[1] = (char *)&DAT_00869b7c;
  local_28[2] = (char *)&DAT_00869b88;
  iVar4 = 0;
  iVar1 = fn_002f6404(1);
  if (iVar1 != 0) {
    iVar4 = 1;
    iVar1 = fn_002f6180(1);
    if (iVar1 < 1) {
      iVar4 = 2;
    }
    else {
      fn_0015b0f8();
    }
  }
  uVar2 = fn_0022f750(local_28[iVar4]);
  fn_00190d50(uVar5,uVar2);
  return 1;
}



void fn_00570d10(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022eed8(*(undefined4 *)(&DAT_008959b0 + param_2 * 4));
  uVar2 = fn_0022f750((&DAT_008959a8)[param_2]);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
  fn_00689bd0(param_1,0x49,0);
  return;
}


