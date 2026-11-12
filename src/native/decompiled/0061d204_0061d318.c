#include "0061d204_0061d318.h"



undefined4 fn_0061d318(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = param_1 - 0x10;
  uVar6 = param_1 - 0x18;
  if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x14;
  }
  if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar5 < uVar2) {
    do {
      iVar4 = param_2 + 0x180388 + (char)uVar5 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        if ((bVar8 && cVar1 == '\0') && (*(char *)(iVar4 + -0x4018) == '\0')) {
          uVar2 = 1;
          do {
            iVar3 = fn_0068fd00((int)(short)uVar2,(int)*(char *)(iVar4 + -0x4025 + (uVar2 & 0xff)))
            ;
            if (iVar3 != 0) {
              return 1;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 0x61);
        }
      }
      uVar5 = uVar5 + 1;
      if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar4 = 0x14;
      }
      else {
        iVar4 = 0x18;
      }
    } while ((int)uVar5 < iVar4);
  }
  return 0;
}



undefined4 fn_0061d204(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = param_1 - 0x10;
  uVar6 = param_1 - 0x18;
  if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar5 = 0x14;
  }
  else {
    uVar5 = 0x10;
  }
  if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x18;
  }
  else {
    uVar2 = 0x14;
  }
  if (uVar5 < uVar2) {
    do {
      iVar4 = param_2 + 0x180388 + (char)uVar5 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar1 = *(char *)(iVar4 + -0x4019);
        bVar8 = cVar1 == '\0';
        if (bVar8) {
          cVar1 = *(char *)(iVar4 + -0x400a);
        }
        if ((bVar8 && cVar1 == '\0') && (*(char *)(iVar4 + -0x4018) == '\0')) {
          uVar2 = 1;
          do {
            iVar3 = fn_0068fea8((int)(short)uVar2,(int)*(char *)(iVar4 + -0x4025 + (uVar2 & 0xff)))
            ;
            if (iVar3 != 0) {
              return 1;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 0x61);
        }
      }
      uVar5 = uVar5 + 1;
      if ((uVar7 < 4 || uVar6 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar4 = 0x18;
      }
      else {
        iVar4 = 0x14;
      }
    } while ((int)uVar5 < iVar4);
  }
  return 0;
}


