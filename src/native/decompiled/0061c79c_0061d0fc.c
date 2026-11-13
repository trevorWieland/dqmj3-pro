#include "0061c79c_0061d0fc.h"



int fn_0061d0fc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (*(char *)(param_3 + 0x180389) != '\r') {
    uVar4 = fn_00654ee8();
    iVar5 = fn_002697b4(uVar4,*(undefined4 *)(param_3 + 0x180478),
                         *(undefined4 *)(param_3 + 0x180470),*(undefined4 *)(param_3 + 0x180474),
                         *(undefined4 *)(param_3 + 0x180478),*(undefined4 *)(param_3 + 0x18047c),
                         *(undefined4 *)(param_3 + 0x180480),*(undefined4 *)(param_3 + 0x180484));
    if (iVar5 != 0) {
      uVar4 = fn_0025fe88();
      iVar6 = fn_0063a54c(0,uVar4);
      iVar9 = 0;
      do {
        iVar7 = fn_0025fed0(iVar5,iVar9);
        cVar2 = fn_0025fde4(iVar5,iVar9);
        cVar3 = fn_0025fe48(iVar5,iVar9);
        iVar1 = 0;
        if (iVar7 != 0) {
          iVar6 = iVar6 - cVar2;
          iVar1 = iVar6;
        }
        uVar8 = (uint)cVar3;
        if (iVar1 < 0) {
          if ((int)uVar8 < 0) {
            return -1;
          }
          if (0xb < uVar8) {
            return -1;
          }
          iVar5 = (*(code *)(&PTR_LAB_008bf678)[uVar8])(param_2,param_3);
          if (iVar5 == 0) {
            return -1;
          }
          return iVar9;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
    }
  }
  return -1;
}



void fn_0061cfc0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = fn_00654ee8();
  uVar1 = fn_002697b4(uVar1,*(undefined4 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xe8),
                       *(undefined4 *)(param_2 + 0xec),*(undefined4 *)(param_2 + 0xf0),
                       *(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8),
                       *(undefined4 *)(param_2 + 0xfc));
  local_10 = fn_0025fd78();
  uStack_c = 100;
  iVar2 = fn_00655430(&local_10);
  if (iVar2 != 0) {
    fn_0025fe24(uVar1);
  }
  return;
}



undefined4 fn_0061cd8c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar7 = param_1 - 0x18;
  uVar8 = param_1 - 0x10;
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x14;
  }
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar5 < uVar2) {
    do {
      iVar6 = param_2 + 0x180388 + uVar5 * 0x418;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar1 = *(char *)(iVar6 + -0x4019);
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = *(char *)(iVar6 + -0x400a);
        }
        bVar10 = bVar9 && cVar1 == '\0';
        if (bVar9 && cVar1 == '\0') {
          bVar10 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if ((bVar10) && (iVar3 = fn_006196d8(uVar5,param_2 + 0x180388), iVar3 == 0)) {
          uVar4 = fn_00176dc0((short *)(iVar6 + -0x4080));
          iVar6 = fn_00300f74(*(short *)(iVar6 + -0x4064) * 100,uVar4);
          if (iVar6 < 100) {
            return 1;
          }
        }
      }
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar6 = 0x14;
      }
      else {
        iVar6 = 0x18;
      }
    } while ((int)uVar5 < iVar6);
  }
  return 0;
}



undefined4 fn_0061ca1c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar7 = param_1 - 0x18;
  uVar8 = param_1 - 0x10;
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x14;
  }
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar5 < uVar2) {
    do {
      iVar6 = param_2 + 0x180388 + (char)uVar5 * 0x418;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar1 = *(char *)(iVar6 + -0x4019);
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = *(char *)(iVar6 + -0x400a);
        }
        bVar10 = bVar9 && cVar1 == '\0';
        if (bVar9 && cVar1 == '\0') {
          bVar10 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if ((bVar10) && (iVar3 = fn_006196d8((int)(char)uVar5,param_2 + 0x180388), iVar3 == 0)) {
          uVar4 = fn_00176e70((short *)(iVar6 + -0x4080));
          iVar6 = fn_00300f74(*(short *)(iVar6 + -0x4062) * 100,uVar4);
          if (iVar6 < 0x1f) {
            return 1;
          }
        }
      }
      uVar5 = uVar5 + 1;
      if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar6 = 0x14;
      }
      else {
        iVar6 = 0x18;
      }
    } while ((int)uVar5 < iVar6);
  }
  return 0;
}



undefined4 fn_0061c8fc(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar7 = param_1 - 0x18;
  uVar8 = param_1 - 0x10;
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar5 = 0x10;
  }
  else {
    uVar5 = 0x14;
  }
  if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar5 < uVar2) {
    do {
      iVar6 = param_2 + 0x180388 + uVar5 * 0x418;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar1 = *(char *)(iVar6 + -0x4019);
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = *(char *)(iVar6 + -0x400a);
        }
        bVar10 = bVar9 && cVar1 == '\0';
        if (bVar9 && cVar1 == '\0') {
          bVar10 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if ((bVar10) && (iVar3 = fn_006196d8(uVar5,param_2 + 0x180388), iVar3 == 0)) {
          uVar4 = fn_00176dc0((short *)(iVar6 + -0x4080));
          iVar6 = fn_00300f74(*(short *)(iVar6 + -0x4064) * 100,uVar4);
          if (iVar6 < 0x33) {
            return 1;
          }
        }
      }
      uVar5 = (uint)(char)((char)uVar5 + '\x01');
      if ((uVar8 < 4 || uVar7 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar6 = 0x14;
      }
      else {
        iVar6 = 0x18;
      }
    } while ((int)uVar5 < iVar6);
  }
  return 0;
}



undefined4 fn_0061c890(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061c62c();
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = fn_0061cc70(param_1,param_2), uVar2 = 0, iVar1 != 0)) {
    if ((int)(char)(*(char *)(param_2 + 0x180388) + '\x01') % 10 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



undefined4 fn_0061cc70(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 - 0x10;
  uVar4 = param_1 - 0x18;
  if ((uVar5 < 4 || uVar4 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x14;
  }
  if ((uVar5 < 4 || uVar4 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 0x18;
  }
  if (uVar3 < uVar1) {
    do {
      if ((0 < *(short *)(param_2 + 0x180388 + (char)uVar3 * 0x418 + -0x4080)) &&
         (iVar2 = fn_006196d8((int)(char)uVar3,param_2 + 0x180388), iVar2 == 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      if ((uVar5 < 4 || uVar4 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar2 = 0x14;
      }
      else {
        iVar2 = 0x18;
      }
    } while ((int)uVar3 < iVar2);
  }
  return 0;
}



undefined4 fn_0061c79c(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = param_1 - 0x10;
  uVar5 = param_1 - 0x18;
  if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar4 = 0x10;
  }
  else {
    uVar4 = 0x14;
  }
  if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  if (uVar4 < uVar2) {
    do {
      iVar3 = param_2 + 0x180388 + uVar4 * 0x418;
      if (0 < *(short *)(iVar3 + -0x4080)) {
        cVar1 = *(char *)(iVar3 + -0x4019);
        bVar7 = cVar1 == '\0';
        if (bVar7) {
          cVar1 = *(char *)(iVar3 + -0x400a);
        }
        bVar8 = bVar7 && cVar1 == '\0';
        if (bVar7 && cVar1 == '\0') {
          bVar8 = *(char *)(iVar3 + -0x4018) == '\0';
        }
        if ((bVar8) && (cVar1 = *(char *)(iVar3 + -0x4024), iVar3 = fn_00182924(1), cVar1 < iVar3))
        {
          return 1;
        }
      }
      uVar4 = (uint)(char)((char)uVar4 + '\x01');
      if ((uVar6 < 4 || uVar5 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
        iVar3 = 0x14;
      }
      else {
        iVar3 = 0x18;
      }
    } while ((int)uVar4 < iVar3);
  }
  return 0;
}


