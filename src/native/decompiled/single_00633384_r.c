#include "single_00633384_r.h"


extern undefined4 _local_10;

void fn_00633384(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool local_10;
  bool local_f;
  undefined2 uStack_e;
  
  bVar2 = false;
  bVar1 = false;
  if (((((0 < *(short *)(param_2 + 0x182548)) && (*(char *)(param_2 + 0x18295c) != '\0')) ||
       ((0 < *(short *)((int)&DAT_00182960 + param_2) && (*(char *)(param_2 + 0x182d74) != '\0'))))
      || ((0 < *(short *)(param_2 + 0x182d78) && (*(char *)(param_2 + 0x18318c) != '\0')))) ||
     ((0 < *(short *)(param_2 + 0x183190) && (*(char *)(param_2 + 0x1835a4) != '\0')))) {
    bVar2 = true;
  }
  if ((((0 < *(short *)(param_2 + 0x1835a8)) && (*(char *)(param_2 + 0x1839bc) != '\0')) ||
      ((0 < *(short *)(param_2 + 0x1839c0) && (*(char *)(param_2 + 0x183dd4) != '\0')))) ||
     (((0 < *(short *)(param_2 + 0x183dd8) && (*(char *)(param_2 + 0x1841ec) != '\0')) ||
      ((0 < *(short *)(param_2 + 0x1841f0) && (*(char *)(param_2 + 0x184604) != '\0')))))) {
    bVar1 = true;
  }
  if (bVar2 || bVar1) {
    uStack_e = (undefined2)((uint)param_4 >> 0x10);
    _local_10 = CONCAT11(bVar1,bVar2);
    fn_0063adb4(&local_10,param_2);
    fn_0062c1c8(param_2 + 0x180388,&local_10,param_2);
  }
  return;
}


