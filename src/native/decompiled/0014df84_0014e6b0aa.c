#include "0014df84_0014e6b0aa.h"

static void svc_0x1f(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x1f }
#endif
}


int fn_0014e258(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 & 0xfff) == 0) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = fn_0015e33c(param_1,param_3);
      if (iVar2 == 0) {
        iVar1 = -0x279fe7c9;
      }
      else {
        *(byte *)(param_1 + 0x10) = ~(byte)(param_5 >> 1) & 1;
        iVar1 = *(int *)(param_1 + 0x14);
        svc_0x1f();
        if (iVar1 < 0) {
          fn_0014e3e4(param_1,iVar2,param_5,param_4);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
      }
    }
    else {
      iVar1 = 0x8a01bf9;
    }
  }
  else {
    iVar1 = -0x1f1fe40e;
  }
  return iVar1;
}



/* WARNING: Removing unreachable block (ram,0x0014e044) */

int fn_0014dffc(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x14) = param_2;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = fn_0014e0a8(&DAT_008ef530,param_1,param_3 + 0xfffU & 0xfffff000,0x1000);
    if (iVar1 == 0) {
      iVar1 = -0x279fe7c9;
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = param_4;
      iVar1 = *(int *)(param_1 + 0x14);
      svc_0x1f();
      if (-1 < iVar1) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
    }
  }
  else {
    iVar1 = 0x8a01bf9;
  }
  return iVar1;
}



int fn_0014df84(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = *param_1;
    iVar2 = (int)*(short *)((int)param_1 + 6);
    if (iVar3 <= *(short *)((int)param_1 + 6) - param_2) {
      iVar2 = iVar3 + param_2;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if ((iVar3 < 1) || (0 < (short)param_1[1])) {
    fn_00147e54(DAT_008c0334,param_1,0,param_2,0,0);
  }
  return iVar3;
}


