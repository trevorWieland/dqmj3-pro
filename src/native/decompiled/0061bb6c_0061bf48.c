#include "0061bb6c_0061bf48.h"



int fn_0061bf48(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = fn_00654ee8();
  uVar2 = fn_002697b4(uVar2,*(undefined4 *)(param_3 + 0x180478),*(undefined4 *)(param_3 + 0x180470)
                       ,*(undefined4 *)(param_3 + 0x180474),*(undefined4 *)(param_3 + 0x180478),
                       *(undefined4 *)(param_3 + 0x18047c),*(undefined4 *)(param_3 + 0x180480),
                       *(undefined4 *)(param_3 + 0x180484));
  cVar1 = fn_0025fd54();
  uVar5 = (uint)cVar1;
  if ((((int)uVar5 < 0) || (0xb < uVar5)) ||
     (iVar3 = (*(code *)(&PTR_LAB_008bf678)[uVar5])(param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  iVar3 = fn_0025fd9c(uVar2);
  if (((iVar3 - 1U < 699) && (iVar4 = fn_006196d8(0,param_3 + 0x180388), iVar4 != 0)) &&
     (iVar4 = fn_006924f4(iVar3), iVar4 != 0)) {
    iVar3 = 0;
  }
  return iVar3;
}



void fn_0061be3c(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  iVar3 = fn_0069ccac();
  if (iVar3 != 0) {
    cVar1 = *(char *)(param_3 + 0x180470);
    uVar4 = fn_006f4850(param_3 + 0x180470);
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(param_3 + 0x180384);
    }
    if ((bVar8 && uVar4 == 1) && (cVar1 != '\x02')) {
      uVar7 = param_2 - 0x10;
      uVar4 = param_2 - 0x18;
      if ((uVar7 < 4 || uVar4 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = 0x14;
      }
      if ((uVar7 < 4 || uVar4 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
        uVar6 = 0x14;
      }
      else {
        uVar6 = 0x18;
      }
      if (uVar5 < uVar6) {
        do {
          iVar3 = param_3 + (char)uVar5 * 0x418;
          if (0 < *(short *)(iVar3 + 0x17c308)) {
            uVar2 = *(undefined2 *)((int)&DAT_0017c334 + iVar3 + 2);
            *(undefined2 *)(iVar3 + 0x17c324) = *(undefined2 *)((int)&DAT_0017c334 + iVar3);
            *(undefined2 *)(iVar3 + 0x17c326) = uVar2;
          }
          uVar5 = uVar5 + 1;
          if ((uVar7 < 4 || uVar4 < 4) || (param_2 == 0x20 || param_2 == 0x22)) {
            iVar3 = 0x14;
          }
          else {
            iVar3 = 0x18;
          }
        } while ((int)uVar5 < iVar3);
      }
    }
  }
  return;
}



undefined4 fn_0061be08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 - 0x10;
  bVar3 = 3 < uVar2;
  if (bVar3) {
    uVar2 = param_1 - 0x18;
  }
  if ((bVar3 && 3 < uVar2) && (param_1 != 0x20 && param_1 != 0x22)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0061bb6c(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = 10;
  iVar6 = -1;
  iVar4 = 0;
  do {
    sVar2 = *(short *)(param_2 + iVar4 * 2);
    cVar3 = (char)iVar4;
    if (sVar2 == 0) {
      iVar6 = (int)cVar3;
      break;
    }
    if (sVar2 == 1) {
      iVar6 = (int)cVar3;
      uVar5 = 0xf;
    }
    else if (sVar2 == 2) {
      iVar6 = (int)cVar3;
      uVar5 = 0x14;
    }
    else if (sVar2 == 3) {
      iVar6 = (int)cVar3;
      uVar5 = 0x14;
    }
    else if (sVar2 == 4) {
      iVar6 = (int)cVar3;
      uVar5 = 0x19;
    }
    else if (sVar2 == 5) {
      iVar6 = (int)cVar3;
      uVar5 = 0x1e;
    }
    else if (sVar2 == 6) {
      iVar6 = (int)cVar3;
      uVar5 = 0x23;
    }
    else if (sVar2 == 7) {
      iVar6 = (int)cVar3;
      uVar5 = 0x28;
    }
    bVar7 = SBORROW4(uVar5,10);
    iVar1 = uVar5 - 10;
    if (uVar5 < 0xb) {
      bVar7 = SBORROW4(iVar4 + 1,0x4c);
      iVar1 = iVar4 + -0x4b;
      iVar4 = iVar4 + 1;
    }
  } while (iVar1 < 0 != bVar7);
  if (iVar6 == -1) {
    iVar6 = 0x4b;
  }
  cVar3 = fn_001cab7c((int)*(char *)(param_1 + 0x59));
  cVar3 = (char)uVar5 + cVar3 * '\n';
  if (cVar3 < '\x15') {
    *(undefined2 *)(param_2 + iVar6 * 2) = 3;
  }
  else if (cVar3 < '\x1f') {
    *(undefined2 *)(param_2 + iVar6 * 2) = 5;
  }
  else if (cVar3 < ')') {
    *(undefined2 *)(param_2 + iVar6 * 2) = 7;
  }
  else if (cVar3 < '3') {
    *(undefined2 *)(param_2 + iVar6 * 2) = 0x5f;
  }
  else if (cVar3 < '=') {
    *(undefined2 *)(param_2 + iVar6 * 2) = 0x60;
  }
  else {
    if (cVar3 < 'G') {
      *(undefined2 *)(param_2 + iVar6 * 2) = 0x61;
      return;
    }
    if (cVar3 < 'Q') {
      *(undefined2 *)(param_2 + iVar6 * 2) = 0x62;
      return;
    }
  }
  return;
}


