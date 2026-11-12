#include "0054e5b8_0054f1dcaa.h"



uint * fn_0054e5b8(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  uint uVar7;
  int local_48 [9];
  
  bVar2 = false;
  if ((*(ushort *)(param_3 + 0x74) & 0xc00) == 0) {
    if (*(char *)(param_1 + 0x61c) == '\0') {
      puVar3 = (undefined4 *)fn_0054de6c(param_1);
      *(undefined1 *)(param_1 + 0x61c) = 1;
      puVar3[1] = 0xf0111;
      puVar6 = puVar3 + 2;
      *puVar3 = 1;
      bVar2 = true;
      if (*(char *)(param_1 + 0x62a) == '\0') {
        *(undefined1 *)(param_1 + 0x62a) = 1;
        fn_0017821c(puVar6,&DAT_007d8764,0x10);
        puVar6 = puVar3 + 6;
      }
      fn_0017821c(puVar6,&DAT_007d8754,0x10);
      param_2 = puVar6 + 4;
    }
  }
  else {
    puVar3 = (undefined4 *)fn_0054de6c(param_1);
    *(undefined1 *)(param_1 + 0x61c) = 0;
    *puVar3 = 1;
    puVar3[1] = 0xf0111;
    bVar2 = true;
    param_2 = (uint *)fn_0054e9b4(param_1,puVar3 + 2,param_3);
  }
  if ((*(ushort *)(param_3 + 0x74) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x61d) != '\0') {
      return param_2;
    }
    puVar4 = (uint *)fn_0054de6c(param_1);
    *(undefined1 *)(param_1 + 0x61d) = 1;
    if (!bVar2) {
      *puVar4 = 1;
      puVar4[1] = 0xf0111;
      puVar4 = puVar4 + 2;
    }
    uVar7 = 0;
  }
  else {
    puVar4 = (uint *)fn_0054de6c(param_1);
    *(undefined1 *)(param_1 + 0x61d) = 0;
    if (!bVar2) {
      *puVar4 = 1;
      puVar4[1] = 0xf0111;
      puVar4 = puVar4 + 2;
    }
    uVar1 = *(ushort *)(param_3 + 0x74);
    pbVar5 = (byte *)(*(int *)(param_3 + 0x78) +
                     (uVar1 >> 1 & 0x18) + (uVar1 & 3) * 0x20 + ((uVar1 & 0xf) >> 2) * 0x14);
    local_48[7] = 1;
    local_48[0] = 0;
    local_48[1] = 4;
    uVar7 = VectorFloatToUnsigned(*(float *)(pbVar5 + 4) * 255.0 + 0.5,3);
    local_48[2] = 5;
    local_48[3] = 2;
    local_48[4] = 3;
    local_48[5] = 7;
    local_48[6] = 6;
    uVar7 = local_48[*pbVar5] << 4 | (uVar7 & 0xff) << 8 | 1;
  }
  *puVar4 = uVar7;
  puVar4[1] = 0xf0104;
  return puVar4 + 2;
}


