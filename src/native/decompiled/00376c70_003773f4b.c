#include "00376c70_003773f4b.h"



void fn_003773f4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)(int)*(char *)(param_1 + 0x80) < 3) {
    fn_00190cdc(*(undefined4 *)(param_1 + *(char *)(param_1 + 0x80) * 4 + 0x70),0);
    *(undefined1 *)(param_1 + 0x80) = 0xff;
  }
  uVar2 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + 0x10);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  do {
    fn_004221b0(param_1 + uVar2 * 0x80 + 0x84);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  *(undefined1 *)(param_1 + 0x284) = 0;
  return;
}



void fn_003772b0(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_0026a960(param_2);
    if ((iVar1 == 0) || (param_3 + -0x14 != iVar2)) {
      fn_00421b00(param_1 + iVar2 * 0x80 + 0x84,0);
    }
    else {
      fn_00421b00(param_1 + iVar2 * 0x80 + 0x84,1);
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while (iVar2 < 4);
  return;
}



void fn_0037720c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00163cbc(param_3);
  iVar2 = 0;
  do {
    if (((param_3 - 1U < 699) && (iVar1 != 1 && iVar1 != 2)) &&
       ((iVar1 != 3 && iVar1 != 4) && iVar1 != 0xb)) {
      iVar3 = param_1 + iVar2 * 0x80;
      fn_00421cdc(iVar3 + 0x84,param_2,param_3);
      if (param_4 != 0) {
        fn_00421c7c(iVar3 + 0x84);
      }
    }
    else {
      fn_00421b00(param_1 + iVar2 * 0x80 + 0x84,0);
    }
    iVar2 = (int)(char)((char)iVar2 + '\x01');
  } while (iVar2 < 4);
  return;
}



void fn_00377188(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008288dc;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x19) = 6;
  puVar1[0x1a] = 0;
  puVar1[0x1a] = 0x3f800000;
  puVar1[0x1b] = 0;
  puVar1[0x1b] = 0x3f800000;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 6;
  puVar1[0x20] = 0;
  puVar1[0x20] = 0x3f800000;
  puVar1[0x21] = 0;
  puVar1[0x21] = 0x3f800000;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return;
}



void fn_00377140(undefined4 param_1,int param_2)

{
  byte bVar1;
  float in_s0;
  
  if (param_2 != 0) {
    if (in_s0 <= 0.0) {
      bVar1 = *(byte *)(param_2 + 0x44) & 0xfe;
    }
    else {
      *(float *)(param_2 + 0x34) = in_s0;
      *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
      bVar1 = *(byte *)(param_2 + 0x44) & 0xee | 0x11;
    }
    *(byte *)(param_2 + 0x44) = bVar1;
  }
  return;
}


