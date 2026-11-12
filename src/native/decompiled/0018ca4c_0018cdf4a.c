#include "0018ca4c_0018cdf4a.h"



void fn_0018cbc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_1c = 0;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  fn_00192f64(&local_50,0x40,param_3,(int)*(char *)(param_1 + 0x1c),param_4);
  fn_0019ba04(param_2,*(undefined4 *)(param_1 + 0x18),&local_50,0,0);
  return;
}



void fn_0018cb08(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = param_1 + param_2 * 4;
  puVar4 = *(uint **)(iVar1 + 0x10);
  if (puVar4 != (uint *)0x0) {
    fn_00196764(puVar4);
    uVar2 = puVar4[0x13];
    uVar3 = uVar2;
    if (puVar4[0x14] < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != puVar4[0x14]);
    }
    fn_001008c4(uVar2,(int)(puVar4[0x15] - uVar2) >> 2,0);
    uVar2 = *puVar4;
    uVar3 = uVar2;
    if (puVar4[1] < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != puVar4[1]);
    }
    fn_001008c4(uVar2,(int)(puVar4[2] - uVar2) >> 2,0);
    fn_002feef8(puVar4);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if (*(char *)(param_1 + 0x2a) != '\0') {
      *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + -1;
    }
  }
  return;
}



void fn_0018ca4c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < uVar2) {
    if (uVar3 + param_2 <= uVar2) {
      *(uint *)(param_1 + 0x10) = uVar3 + param_2;
      return;
    }
    param_2 = param_2 - (uVar2 - uVar3);
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  fVar5 = *(float *)(param_1 + 4);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar5 < 0.0) << 0x1f | (uint)(fVar5 == 0.0) << 0x1e;
  bVar1 = (byte)(uVar2 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == NAN(fVar5)) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0xe),(byte)(uVar2 >> 0x16) & 3)
      ;
      *(float *)(param_1 + 0x14) = fVar4 * 0.007874016;
    }
    fVar4 = (float)VectorSignedToFloat(param_2,(byte)(uVar2 >> 0x16) & 3);
    fVar5 = *(float *)(param_1 + 0x14) + fVar5 * fVar4 * 0.001;
    *(float *)(param_1 + 0x14) = fVar5;
    if ((int)fVar5 < 0x3f800000) {
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    fVar4 = (float)VectorSignedToFloat((int)fVar5,(byte)(uVar2 >> 0x16) & 3);
    *(float *)(param_1 + 0x14) = fVar5 - fVar4;
  }
  return;
}


