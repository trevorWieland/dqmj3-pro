#include "00388df8_00389548bbb.h"



void fn_00389548(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x94) == -1) {
    uVar3 = fn_0014481c(DAT_008977e8);
    fn_002625d0(uVar3,param_1);
  }
  else {
    fn_001cc890(param_1);
    cVar1 = *(char *)(param_1 + 0x94);
    if (cVar1 == '\0') {
      fn_00389054(param_1);
      return;
    }
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x48) = 0x42200000;
      iVar2 = fn_0025ff70(param_1);
      if (iVar2 != 0) {
        fn_0026009c(param_1,iVar2,1);
        fn_0069fe38(iVar2,param_1);
        *(undefined1 *)(param_1 + 0x94) = 0xff;
        return;
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      iVar2 = fn_0068cafc(DAT_008977e8);
      if (*(int *)(iVar2 + 0xb4) <= *(int *)(param_1 + 0x90)) {
        *(undefined1 *)(param_1 + 0x94) = 0xff;
      }
      return;
    }
    if (cVar1 != '\x02') {
      return;
    }
    fn_00260640(param_1,0xa032);
    fn_0014481c(DAT_008977e8);
    iVar2 = fn_00263814();
    fn_00660790(0x1e,iVar2 + 8,param_1 + 8);
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



undefined4 fn_00389360(int *param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar4 = 0;
  if (((DAT_00896cac & 1) == 0) && (iVar2 = fn_00303afc(&DAT_00896cac), iVar2 != 0)) {
    DAT_008cd114 = *(undefined4 *)(iVar1 + 0xbc);
    DAT_008cd11c = *(undefined4 *)(iVar1 + 0xc0);
    DAT_008cd120 = *(undefined4 *)(iVar1 + 0xc4);
    DAT_008cd128 = *(undefined4 *)(iVar1 + 200);
    DAT_008cd12c = *(undefined4 *)(iVar1 + 0xcc);
    DAT_008cd134 = *(undefined4 *)(iVar1 + 0xd0);
    DAT_008cd138 = *(undefined4 *)(iVar1 + 0xd4);
    DAT_008cd140 = *(undefined4 *)(iVar1 + 0xd8);
    DAT_008cd144 = *(undefined4 *)(iVar1 + 0xdc);
    DAT_008cd14c = *(undefined4 *)(iVar1 + 0xe0);
    DAT_008cd150 = *(undefined4 *)(iVar1 + 0xe4);
    DAT_008cd158 = *(undefined4 *)(iVar1 + 0xe8);
    DAT_008cd15c = *(undefined4 *)(iVar1 + 0xec);
    DAT_008cd164 = *(undefined4 *)(iVar1 + 0xf0);
    DAT_008cd168 = *(undefined4 *)(iVar1 + 0xf4);
    DAT_008cd170 = *(undefined4 *)(iVar1 + 0xf8);
    DAT_008cd17c = *(undefined4 *)(iVar1 + 0xf8);
    DAT_008cd174 = *(undefined4 *)(iVar1 + 0xfc);
    DAT_008cd118 = iVar4;
    DAT_008cd124 = iVar4;
    DAT_008cd130 = iVar4;
    DAT_008cd13c = iVar4;
    DAT_008cd148 = iVar4;
    DAT_008cd154 = iVar4;
    DAT_008cd160 = iVar4;
    DAT_008cd16c = iVar4;
    DAT_008cd178 = iVar4;
  }
  param_1[0x12] = 0x40a00000;
  param_1[0xf] = iVar4;
  param_1[0x10] = 0x40a00000;
  param_1[0x11] = iVar4;
  local_30 = *param_3 + (float)(&DAT_008cd114)[param_4 * 3];
  local_2c = param_3[1] + (float)(&DAT_008cd118)[param_4 * 3];
  local_28 = param_3[2] + (float)(&DAT_008cd11c)[param_4 * 3];
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 0x20);
  iVar4 = param_1[4];
  fVar3 = (float)param_1[3] + (float)param_1[0x12];
  iVar1 = param_1[2];
  fn_00260640(param_1,0xa030);
  param_1[0x24] = 0;
  param_1[0x16] = param_2;
  fn_0026009c(param_1,param_2,1);
  fn_003892d8(param_1);
  param_1[0x1e] = iVar1;
  param_1[0x1f] = (int)fVar3;
  param_1[0x20] = iVar4;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return 1;
}


