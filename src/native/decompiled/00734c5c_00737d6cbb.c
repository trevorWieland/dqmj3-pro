#include "00734c5c_00737d6cbb.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


undefined4
fn_00737d6c(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,char *param_7,
            int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      *(code **)(param_1 + 0x20) = fn_0073aa84;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      *(code **)(param_1 + 0x24) = fn_0073aa8c;
    }
    if (param_2 == -1) {
      param_2 = 6;
    }
    uVar5 = (uint)(-1 < (int)param_4);
    if (-1 < (int)param_4) {
      if (0xf < (int)param_4) {
        uVar5 = 2;
        param_4 = param_4 - 0x10;
      }
    }
    else {
      param_4 = -param_4;
    }
    if (((((param_5 - 1U < 9) && (param_3 == 8)) &&
         ((7 < (int)param_4 && (((int)param_4 < 0x10 && (-1 < param_2)))))) && (param_2 < 10)) &&
       ((-1 < param_6 && (param_6 < 5)))) {
      if (param_4 == 8) {
        param_4 = 9;
      }
      piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c4);
      if (piVar1 == (int *)0x0) {
        return 0xfffffffc;
      }
      *(int **)(param_1 + 0x1c) = piVar1;
      piVar1[0xc] = param_4;
      iVar2 = 1 << (param_5 + 7U & 0xff);
      iVar3 = 1 << (param_4 & 0xff);
      piVar1[0xb] = iVar3;
      piVar1[0x13] = iVar2;
      piVar1[0xd] = iVar3 + -1;
      *piVar1 = param_1;
      piVar1[0x14] = param_5 + 7U;
      piVar1[0x15] = iVar2 + -1;
      piVar1[0x16] = (param_5 + 9U) / 3;
      piVar1[6] = uVar5;
      piVar1[7] = 0;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),iVar3,2);
      piVar1[0xe] = iVar2;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0xb],2);
      piVar1[0x10] = iVar2;
      iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),piVar1[0x13],2);
      uVar5 = 1 << (param_5 + 6U & 0xff);
      piVar1[0x11] = iVar2;
      piVar1[0x5b0] = 0;
      piVar1[0x5a7] = uVar5;
      iVar3 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),uVar5,4);
      piVar1[2] = iVar3;
      uVar5 = piVar1[0x5a7];
      piVar1[3] = uVar5 << 2;
      iVar2 = 0;
      if (piVar1[0xe] != 0) {
        iVar2 = piVar1[0x10];
      }
      if ((piVar1[0xe] != 0 && iVar2 != 0) && (piVar1[0x11] != 0 && iVar3 != 0)) {
        piVar1[0x5a9] = (uVar5 & 0xfffffffe) + iVar3;
        piVar1[0x5a6] = uVar5 * 3 + iVar3;
        piVar1[0x21] = param_2;
        piVar1[0x22] = param_6;
        *(undefined1 *)(piVar1 + 9) = 8;
        uVar4 = fn_00737ff8(param_1);
        return uVar4;
      }
      piVar1[1] = 0x29a;
      *(char **)(param_1 + 0x18) = "insufficient memory";
      fn_00737c8c(param_1);
      return 0xfffffffc;
    }
  }
  return 0xfffffffe;
}



void fn_00735644(void)

{
  svc_0xa();
  return;
}



void fn_0073561c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}


