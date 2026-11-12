#include "0061e770_0061ec70.h"



bool fn_0061ec70(undefined4 param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  
  cVar1 = *param_2;
  bVar2 = true;
  cVar3 = cVar1;
  if ('\0' < cVar1) {
    cVar3 = param_2[1];
  }
  if (cVar3 < '\x01') {
    cVar3 = param_2[3];
    if ('\0' < cVar3) {
      cVar3 = param_2[4];
    }
    bVar2 = '\0' < cVar3;
    if (!bVar2) {
      return bVar2;
    }
  }
  cVar3 = cVar1;
  if ('\0' < cVar1) {
    cVar3 = param_2[1];
  }
  if ('\0' < cVar1) {
    cVar1 = cVar3;
  }
  cVar3 = *(char *)(param_3 + 0x180388) + '\x01';
  if ('\0' < cVar1) {
    fn_0061ed58(param_1,param_2,2,0x20,0x22,0x10,bVar2,param_3);
    *(char *)(param_3 + 0x18046c) = cVar3;
  }
  cVar1 = param_2[3];
  if ('\0' < cVar1) {
    cVar1 = param_2[4];
  }
  if ('\0' < cVar1) {
    fn_0061ed58(param_1,param_2 + 3,2,0x21,0x23,0x14,0,param_3);
    *(char *)(param_3 + 0x18046d) = cVar3;
  }
  return true;
}



undefined4 fn_0061ec28(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = param_2;
  if (param_1 != 0xea) {
    pcVar3 = (char *)0xfffffe8b;
  }
  if ((((param_1 == 0xea || pcVar3 + param_1 == (char *)0x0) || param_1 == 0x160) ||
      (iVar1 = fn_00163cbc(), (iVar1 != 1 && iVar1 != 7) && iVar1 != 0xb)) ||
     (uVar2 = 1, ((int)*param_2 & 0x80000001U) != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0061e910(undefined4 param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  
  iVar4 = param_4 + param_3 * 0x418;
  iVar9 = iVar4 + -0x4080;
  if ((*(char *)(iVar4 + -0x3fe0) < '\x01') || (iVar5 = fn_00163a00(param_1), iVar5 != 1)) {
    param_5[1] = 1;
    *param_5 = 0;
    if ((*(char *)(iVar4 + -0x3ff7) < '\x01') && (iVar5 = fn_00691ed8(param_1), iVar5 != 0)) {
      iVar5 = param_4 + param_2 * 0x418;
      iVar11 = iVar5 + -0x4080;
      iVar6 = fn_006f44fc(iVar11,0x85);
      if (iVar6 == 0) {
        cVar3 = *(char *)(iVar5 + -0x3fe6);
        if (cVar3 < '\x01') {
          cVar3 = *(char *)(iVar5 + -0x3fe5);
        }
        if (cVar3 < '\x01') {
          cVar3 = *(char *)(iVar5 + -0x3fe4);
          if (cVar3 < '\x01') {
            cVar3 = *(char *)(iVar4 + -0x3fe6);
          }
          if (cVar3 < '\x01') {
            cVar3 = *(char *)(iVar4 + -0x3fe5);
          }
          if (cVar3 < '\x01') {
            if ('\0' < *(char *)(iVar4 + -0x3fe4)) {
              *param_5 = 0;
              param_5[1] = 1;
              return;
            }
            iVar5 = fn_006f447c(iVar9);
            if (iVar5 == 0) {
              return;
            }
            if (*(char *)(param_4 + 1) == '\x01') {
              iVar5 = fn_006f4044(iVar11);
              iVar6 = fn_006f4044(iVar9);
              iVar5 = iVar5 - iVar6;
            }
            else {
              iVar5 = fn_006f4044(iVar9);
              iVar6 = fn_006f4044(iVar11);
              iVar5 = iVar5 - iVar6;
            }
            iVar6 = 0;
            iVar11 = 1;
            uVar7 = 0;
            do {
              iVar8 = (&DAT_007f02fc)[uVar7 * 4];
              iVar10 = (&DAT_007f0300)[uVar7 * 4];
              bVar12 = SBORROW4(iVar8,iVar5);
              iVar1 = iVar8 - iVar5;
              if (iVar8 <= iVar5) {
                bVar12 = SBORROW4(iVar5,iVar10);
                iVar1 = iVar5 - iVar10;
                iVar8 = iVar10;
              }
              if (iVar8 == iVar5 || iVar1 < 0 != bVar12) {
                iVar6 = (&DAT_007f0304)[uVar7 * 4] * 100;
                iVar11 = (&DAT_007f0308)[uVar7 * 4] * 100;
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 8);
            *param_5 = iVar6;
            param_5[1] = iVar11;
            uVar7 = 0;
            do {
              if ((&DAT_007f037c)[uVar7 * 2] == (int)*(char *)(iVar4 + -0x4014)) {
                *param_5 = ((&DAT_007f0380)[uVar7 * 2] * iVar6) / 100 + iVar6;
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 4);
            iVar6 = 1;
            iVar5 = fn_006f44fc(iVar9,0x84);
            if ((iVar5 != 0) || (iVar5 = fn_006f3458(iVar9), iVar5 != 0)) {
              iVar6 = 2;
            }
            iVar6 = *param_5 * iVar6;
            *param_5 = iVar6;
            iVar5 = param_5[1];
            if (iVar6 < 1) {
              *param_5 = 0;
              return;
            }
            iVar11 = fn_00145adc();
            if (iVar11 == 0) {
              iVar5 = fn_006f4850(param_4 + 0xe8);
              if (iVar5 == 0) {
                return;
              }
              sVar2 = *(short *)(iVar4 + -0x4064);
              iVar4 = fn_00176dc0(iVar9);
              uVar7 = 0;
              while( true ) {
                iVar9 = (&DAT_007f03a4)[uVar7 * 3];
                if (((int)(short)(&DAT_007f039c)[uVar7 * 6] * (int)sVar2 <= iVar4) &&
                   ((&DAT_007f03a0)[uVar7 * 3] * param_5[1] < iVar9 * *param_5)) break;
                uVar7 = uVar7 + 1;
                if (2 < uVar7) {
                  return;
                }
              }
              *param_5 = (&DAT_007f03a0)[uVar7 * 3];
              param_5[1] = iVar9;
              return;
            }
            iVar4 = fn_0061be08(param_3);
            if (iVar4 == 0) {
              if (iVar6 * 8 <= iVar5) {
                return;
              }
              *param_5 = 1;
            }
            else {
              if (iVar6 * 8 <= iVar5 * 3) {
                return;
              }
              *param_5 = 3;
            }
            param_5[1] = 8;
            return;
          }
          *param_5 = 1;
        }
        else {
          *param_5 = 0;
        }
        param_5[1] = 1;
      }
    }
  }
  else {
    *param_5 = 1;
    param_5[1] = 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0061e8f8) */
/* WARNING: Removing unreachable block (ram,0x0061e8fc) */

void fn_0061e774(int param_1,int param_2,int *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_44 [5];
  longlong local_30 [2];
  
  iVar3 = fn_006f4850(param_2 + 0xe8);
  if (iVar3 == 0) {
    iVar3 = fn_0061be08(param_1);
    if (iVar3 == 0) {
      uVar9 = 10;
    }
    else {
      uVar9 = 0x19;
    }
  }
  else {
    uVar9 = 0x32;
  }
  param_2 = param_2 + param_1 * 0x418;
  iVar10 = param_2 + -0x4080;
  iVar3 = fn_00176dc0(iVar10);
  iVar4 = fn_00176dc0(iVar10);
  uVar8 = iVar4 - *(short *)(param_2 + -0x4064);
  uVar5 = *(byte *)(param_2 + -0x4028) - 10;
  uVar1 = (ulonglong)uVar9 * (ulonglong)uVar5;
  lVar2 = (uVar1 & 0xffffffff) * (ulonglong)uVar8;
  uVar11 = fn_0011c134((int)lVar2,
                        uVar8 * (((int)uVar5 >> 0x1f) * uVar9 + (int)(uVar1 >> 0x20)) +
                        ((int)uVar8 >> 0x1f) * (int)uVar1 + (int)((ulonglong)lVar2 >> 0x20),iVar3,
                        iVar3 >> 0x1f);
  lVar12 = fn_0011c134((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x5a,0);
  lVar2 = (ulonglong)uVar9 * (ulonglong)(uint)(int)*(char *)(param_2 + -0x4024);
  local_30[0] = fn_0011c134((int)lVar2,
                             ((int)*(char *)(param_2 + -0x4024) >> 0x1f) * uVar9 +
                             (int)((ulonglong)lVar2 >> 0x20),4,0);
  local_30[0] = lVar12 + local_30[0];
  plVar6 = (longlong *)&local_50;
  if (-1 < local_30[0]) {
    plVar6 = local_30;
  }
  local_50 = 0;
  uStack_4c = 0;
  *param_3 = (int)*plVar6;
  param_3[1] = 100;
  iVar3 = fn_006f44fc(iVar10,0x1d9);
  if (iVar3 != 0) {
    local_44[0] = (*param_3 * 200) / 100;
    local_44[1] = 100;
    piVar7 = local_44;
    if (100 < local_44[0]) {
      piVar7 = local_44 + 1;
    }
    *param_3 = *piVar7;
  }
  return;
}



undefined4 * fn_0061e770(undefined4 *param_1)

{
  *param_1 = &DAT_008595e8;
  return param_1;
}


