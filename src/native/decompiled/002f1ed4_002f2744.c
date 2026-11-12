#include "002f1ed4_002f2744.h"



bool fn_002f2744(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b71a8(uVar2,uVar4 & 0xff);
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      iVar3 = fn_00156f30(iVar1,0);
      if ((iVar3 != *(char *)(iVar5 + 0x219)) && (iVar3 = fn_006f8074(iVar1), iVar3 != 0)) {
        iVar6 = iVar1;
        break;
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while ((int)uVar4 < iVar1);
  }
  *(int *)(param_1 + 0x60) = iVar6;
  return iVar6 != 0;
}



undefined4 fn_002f26a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x60) == 0) ||
     (iVar1 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_002f2594(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  longlong lVar10;
  
  iVar5 = 0;
  uVar4 = 0;
  lVar10 = 0x461c400000000000;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b71a8(uVar2,uVar4 & 0xff);
      iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      iVar3 = fn_00156f30(iVar1,0);
      if (iVar3 != *(char *)(iVar6 + 0x219)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
        fVar9 = *(float *)(iVar1 + 8) - *(float *)(iVar3 + 8);
        fVar7 = *(float *)(iVar1 + 0xc) - *(float *)(iVar3 + 0xc);
        fVar8 = *(float *)(iVar1 + 0x10) - *(float *)(iVar3 + 0x10);
        fVar11 = (float)((ulonglong)lVar10 >> 0x20);
        fVar7 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
        lVar10 = CONCAT44(fVar11,fVar7);
        if ((fVar7 < fVar11) && (iVar3 = fn_006f8074(iVar1), iVar3 == 0)) {
          lVar10 = lVar10 << 0x20;
          iVar5 = iVar1;
        }
      }
      uVar4 = uVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while ((int)uVar4 < iVar1);
  }
  *(int *)(param_1 + 0x60) = iVar5;
  return iVar5 != 0;
}



void fn_002f2584(void)

{
  fn_002f1c5c();
  fn_002feef8();
  return;
}



undefined4 fn_002f24d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(int *)(param_1 + 0x60) == 0) ||
      (iVar2 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar2 == 0)) ||
     (cVar1 = *(char *)(*(int *)(param_1 + 0x60) + 0x53),
     iVar2 = fn_00156f30(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),0), cVar1 == iVar2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_002f2268(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint extraout_r1;
  int iVar5;
  int iVar6;
  
  iVar1 = fn_006bd170();
  if (iVar1 != 0) {
    iVar5 = 0;
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6bc4();
    if (0 < iVar1) {
      do {
        uVar2 = fn_00144810(DAT_008977e8);
        uVar2 = fn_006a873c(uVar2,iVar5);
        uVar3 = fn_0014481c(DAT_008977e8);
        piVar4 = (int *)fn_006b71a8(uVar3,uVar2);
        iVar1 = (**(code **)(*piVar4 + 0x98))(piVar4);
        if (((iVar1 != 0) || (iVar1 = (**(code **)(*piVar4 + 0x9c))(piVar4), iVar1 != 0)) &&
           (iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4), iVar1 = fn_00156f30(piVar4,0),
           iVar1 != *(char *)(iVar6 + 0x219))) {
          uVar3 = fn_00144810(DAT_008977e8);
          iVar1 = fn_006a8858(uVar3,uVar2,0);
          if (0 < iVar1) {
            uVar3 = fn_0014481c(DAT_008977e8);
            uVar2 = fn_006b6f3c(uVar3,uVar2,0);
            *(undefined4 *)(param_1 + 0x60) = uVar2;
            break;
          }
        }
        iVar5 = iVar5 + 1;
        fn_0014481c(DAT_008977e8);
        iVar1 = fn_006b6bc4();
      } while (iVar5 < iVar1);
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      return 1;
    }
  }
  iVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar2 = fn_00144810(DAT_008977e8);
      uVar2 = fn_006a873c(uVar2,iVar5);
      iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 4);
      uVar3 = fn_0014481c(DAT_008977e8);
      uVar3 = fn_006b71a8(uVar3,uVar2);
      iVar1 = fn_00156f30(uVar3,0);
      if (iVar1 != *(char *)(iVar6 + 0x219)) {
        uVar3 = fn_00144810(DAT_008977e8);
        iVar1 = fn_006a8858(uVar3,uVar2,0);
        if (0 < iVar1) {
          uVar3 = fn_0014481c(DAT_008977e8);
          uVar2 = fn_006b6f3c(uVar3,uVar2,0);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
          break;
        }
      }
      iVar5 = iVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while (iVar5 < iVar1);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    fn_0014481c(DAT_008977e8);
    uVar2 = fn_006b6bc4();
    fn_00300f74(*(byte *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x104) + 1,uVar2);
    uVar2 = fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6f3c(uVar2,extraout_r1 & 0xff,0);
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



void fn_002f21f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x104);
  uVar2 = fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6f3c(uVar2,uVar1,0);
  fn_002f0374(param_1,iVar3 + 8,param_3,param_2,1,0);
  return;
}



void fn_002f21a4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x5c) + 4) + 0x104);
  uVar2 = fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b6f3c(uVar2,uVar1,0);
  fn_002f0860(param_1,*(int *)(*(int *)(param_1 + 0x5c) + 4) + 8,iVar3 + 8,1);
  return;
}



undefined4 fn_002f2164(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
  if ((iVar1 < *(int *)(param_1 + 0x60)) ||
     (iVar1 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_002f20c0(int param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  fn_002f0860(param_1,*(int *)(*(int *)(param_1 + 0x5c) + 4) + 8,*(int *)(param_1 + 100) + 8,1);
  return;
}



undefined4 fn_002f1ed4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar5 = 0;
  iVar6 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 100) + 0x90);
    if ((*(char *)(param_2 + 0x69) == '\0') || (*(int *)(param_2 + 0x58) != iVar3)) {
      if ((*(char *)(param_2 + 0x7d) == '\0') || (*(int *)(param_2 + 0x6c) != iVar3)) {
        if ((*(char *)(param_2 + 0x91) == '\0') || (*(int *)(param_2 + 0x80) != iVar3)) {
          if ((*(char *)(param_2 + 0xa5) == '\0') || (*(int *)(param_2 + 0x94) != iVar3)) {
            if ((*(char *)(param_2 + 0xb9) == '\0') || (*(int *)(param_2 + 0xa8) != iVar3)) {
              if ((*(char *)(param_2 + 0xcd) == '\0') || (*(int *)(param_2 + 0xbc) != iVar3)) {
                if ((*(char *)(param_2 + 0xe1) == '\0') || (*(int *)(param_2 + 0xd0) != iVar3)) {
                  if ((*(char *)(param_2 + 0xf5) == '\0') || (*(int *)(param_2 + 0xe4) != iVar3)) {
                    if ((*(char *)(param_2 + 0x109) == '\0') || (*(int *)(param_2 + 0xf8) != iVar3))
                    {
                      if ((*(char *)(param_2 + 0x11d) == '\0') ||
                         (*(int *)(param_2 + 0x10c) != iVar3)) {
                        uVar5 = 0;
                      }
                      else {
                        uVar5 = param_2 + 0x10c;
                      }
                    }
                    else {
                      uVar5 = param_2 + 0xf8;
                    }
                  }
                  else {
                    uVar5 = param_2 + 0xe4;
                  }
                }
                else {
                  uVar5 = param_2 + 0xd0;
                }
              }
              else {
                uVar5 = param_2 + 0xbc;
              }
            }
            else {
              uVar5 = param_2 + 0xa8;
            }
          }
          else {
            uVar5 = param_2 + 0x94;
          }
        }
        else {
          uVar5 = param_2 + 0x80;
        }
      }
      else {
        uVar5 = param_2 + 0x6c;
      }
    }
    else {
      uVar5 = param_2 + 0x58;
    }
    iVar4 = 0;
    iVar3 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
    if (0 < iVar3) {
      do {
        iVar3 = fn_006f8418(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4),iVar4);
        if (*(int *)(param_1 + 100) == iVar3) {
          iVar6 = 1;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = fn_006f7de8(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4));
      } while (iVar4 < iVar3);
    }
  }
  uVar1 = iVar6 - 1;
  bVar7 = (uVar5 & uVar1) == 0;
  if (!bVar7) {
    uVar1 = (uint)*(byte *)(uVar5 + 0x10);
  }
  if ((bVar7 || uVar1 == 1) ||
     (iVar6 = fn_006f8074(*(undefined4 *)(*(int *)(param_1 + 0x5c) + 4)), uVar2 = 0, iVar6 != 0)) {
    if (*(int *)(param_1 + 100) != 0) {
      fn_002cf370(*(int *)(param_1 + 100),param_1 + 0x60);
      *(undefined4 *)(param_1 + 100) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


