#include "00175c44_00176244bb.h"



int fn_00176244(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int in_r12;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar6 = *(uint *)(param_2 + 4) & 0xff;
  bVar12 = uVar6 != 0;
  if (bVar12) {
    in_r12 = 0;
  }
  *(char *)(param_1 + 0xc) = (char)*(uint *)(param_2 + 4);
  piVar3 = (int *)(param_2 + 8);
  while (bVar12) {
    iVar5 = in_r12 * 4;
    uVar6 = uVar6 - 1;
    bVar12 = uVar6 != 0;
    in_r12 = in_r12 + 1;
    *(int *)(param_1 + iVar5 + 0x10) = *piVar3 + param_2;
    piVar3 = piVar3 + 1;
  }
  *(int *)(param_1 + 0x9c) = piVar3[5];
  iVar5 = 0;
  bVar1 = *(byte *)(param_1 + 0xc);
  uVar6 = (uint)bVar1;
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar7 = *(int *)(param_1 + uVar10 * 4 + 0x10);
      uVar8 = 0;
      if (*(uint *)(iVar7 + 0x1c) != 0) {
        do {
          sVar2 = *(short *)(*(int *)(iVar7 + 0x18) + iVar7 + uVar8 * 0x14);
          if (sVar2 != 0) {
            if (sVar2 == 1) {
              iVar5 = iVar5 + 2;
            }
            else if (sVar2 == 2) {
              iVar5 = iVar5 + 6;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar7 + 0x1c));
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < uVar6);
  }
  uVar10 = 0;
  if (uVar6 != 0) {
    bVar12 = (bVar1 & 1) != 0;
    if (bVar12) {
      uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 6);
    }
    uVar4 = (uint)bVar12;
    iVar7 = 0;
    for (uVar8 = (uint)(bVar1 >> 1); uVar8 != 0; uVar8 = uVar8 - 1) {
      iVar9 = param_1 + uVar4 * 4;
      uVar4 = uVar4 + 2;
      uVar10 = uVar10 + *(byte *)(*(int *)(iVar9 + 0x10) + 6);
      iVar7 = iVar7 + (uint)*(byte *)(*(int *)(iVar9 + 0x14) + 6);
    }
    uVar10 = uVar10 + iVar7;
  }
  iVar7 = (uVar6 - uVar10) * (uVar10 + 1);
  uVar10 = 0;
  iVar5 = *(int *)(param_1 + 0x9c) * 4 + uVar6 * 4 + iVar5 * 4 + iVar7 * 4;
  if (uVar6 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + uVar10 * 4 + 0x10) + 6) == '\0') {
        iVar9 = 0;
        iVar5 = iVar5 + 0x98;
        uVar8 = uVar6;
        do {
          iVar11 = *(int *)(param_1 + iVar9 * 4 + 0x10);
          if (*(char *)(iVar11 + 6) != '\0') {
            if (*(char *)(iVar11 + 0x14) == '\x01') {
              iVar11 = 200;
            }
            else {
              iVar11 = 0xc0;
            }
            iVar5 = iVar5 + iVar11;
          }
          uVar8 = uVar8 - 1;
          iVar9 = iVar9 + 1;
        } while (0 < (int)uVar8);
      }
      uVar10 = uVar10 + 1 & 0xff;
    } while (uVar10 < uVar6);
  }
  return iVar5 + uVar6 * 8 + 4 + iVar7 * 4;
}



undefined1 fn_001760dc(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  
  if (*param_2 == '\x01') {
    iVar4 = param_1[1];
  }
  else {
    iVar4 = *param_1;
  }
  iVar6 = param_1[iVar4 + 4];
  iVar5 = *(int *)(iVar6 + 0x30);
  iVar9 = *(int *)(iVar6 + 0x38) + iVar6;
  pcVar10 = param_2;
  iVar4 = fn_002febd8(param_3);
  uVar8 = 0;
  if (*(int *)(iVar6 + 0x34) != 0) {
    do {
      piVar7 = (int *)(iVar5 + iVar6 + uVar8 * 8);
      iVar3 = fn_00147e6c(param_3,*piVar7 + iVar9,iVar4,param_4,param_1,pcVar10);
      if ((iVar3 == 0) &&
         ((cVar1 = *(char *)(*piVar7 + iVar9 + iVar4), cVar1 == '\0' || (cVar1 == '.')))) {
        *(int *)(param_2 + 4) = *piVar7 + iVar9;
        uVar8 = piVar7[1] & 0xff;
        cVar1 = (char)piVar7[1];
        param_2[2] = cVar1;
        cVar2 = (char)((uint)piVar7[1] >> 0x10);
        param_2[3] = cVar2;
        if (0x87 < uVar8) {
          return 0;
        }
        if (uVar8 < 0x78) {
          if (uVar8 < 0x70) {
            if (uVar8 < 0x10) {
              if (param_2[1] != '\x01') {
                return 0;
              }
            }
            else {
              param_2[2] = cVar1 + -0x10;
              param_2[3] = cVar2 + -0x10;
              if (param_2[1] != '\x02') {
                return 0;
              }
            }
          }
          else {
            param_2[2] = cVar1 + -0x70;
            param_2[3] = cVar2 + -0x70;
            if (param_2[1] != '\x03') {
              return 0;
            }
          }
        }
        else {
          param_2[2] = cVar1 + -0x78;
          param_2[3] = cVar2 + -0x78;
          if (param_2[1] != '\x04') {
            return 0;
          }
        }
        return 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(iVar6 + 0x34));
  }
  return 0;
}


