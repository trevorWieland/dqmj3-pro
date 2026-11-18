/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00244dc4 .. 00292f20.
 */
#include "decompiled.h"
#include "fuzzy_09.h"


void fn_00244dc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_0081d450;
  puVar1[0x2e] = 0;
  return;
}



void fn_0026bb64(undefined4 *param_1)

{
  *param_1 = DAT_0081e02c;
  return;
}



int fn_0026cdd0(int param_1)

{
  return (int)*(short *)(DAT_008924bc + param_1 * 6);
}



void fn_0026f904(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}



void fn_00278778(undefined4 param_1)

{
  fn_00279ae4(param_1,0x1cd);
  return;
}



void fn_0027921c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x1b9;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x187 < iVar1);
  return;
}



void fn_00279524(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x1eb;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x1cf < iVar1);
  return;
}



void fn_00279878(undefined4 param_1)

{
  fn_00279ae4(param_1,0x1c5);
  fn_00279ae4(param_1,0x1c6);
  return;
}



undefined4 fn_0027e840(void)

{
  int iVar1;
  
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    fn_002277d8(DAT_00897894,0);
    fn_00682a8c();
  }
  return 0;
}



undefined4 fn_0028064c(void)

{
  int iVar1;
  
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    fn_00227ba0(DAT_00897894,0);
    fn_00682a8c();
  }
  return 0;
}



undefined4 fn_00281498(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_006f751c(DAT_008977e0);
  uVar1 = fn_00341930();
  fn_001580cc(param_1,uVar1);
  return 1;
}



undefined4 fn_00283cf4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006f751c(DAT_008977e0);
  fn_001580cc(param_1,*(undefined4 *)(iVar1 + 0x2c));
  return 1;
}



undefined4 fn_00285674(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f751c(DAT_008977e0);
  uVar2 = 1;
  if (*(int *)(iVar1 + 0x3c) != 0) {
    uVar2 = fn_00341bf0(*(int *)(iVar1 + 0x3c),1);
  }
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_002884d0(undefined4 param_1)

{
  short sVar1;
  
  sVar1 = fn_006ad6cc(DAT_00898898);
  fn_001580cc(param_1,(int)sVar1);
  return 1;
}



void fn_00288ab8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  return;
}



void fn_00289500(undefined4 param_1)

{
  fn_002e2c10(*(undefined4 *)(DAT_00897804 + 0x2c),param_1);
  return;
}



undefined4 * fn_00289c84(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00145b00(0x10,DAT_00812c8c);
  *param_1 = uVar1;
  return param_1;
}



void fn_0028bbc0(undefined4 param_1)

{
  fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_1);
  return;
}



undefined4 fn_0028bc24(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_002e31e4();
  if ((iVar1 == 0) &&
     ((iVar1 = fn_002e3204(param_1), iVar1 == 0 ||
      (iVar1 = fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),param_1), iVar1 != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined1 fn_0028bde4(int param_1)

{
  return *(undefined1 *)(DAT_00892824 + param_1 * 6);
}



int fn_0028be14(int param_1)

{
  return (int)*(short *)(DAT_00892824 + param_1 * 6 + 4);
}



int fn_0028be30(int param_1)

{
  return (int)*(short *)(DAT_00892824 + param_1 * 6 + 2);
}



void fn_0028f908(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2d] = 0;
  *puVar1 = DAT_0081e258;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  return;
}



void fn_0029052c(undefined4 param_1)

{
  fn_002e2e20(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



void fn_002906e0(undefined4 param_1)

{
  fn_002e2d98(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



uint fn_002906f8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = fn_006bc5dc(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return uVar1 ^ 1;
}



void fn_0029071c(undefined4 param_1)

{
  fn_002e2ea4(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



void fn_00290834(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_00301f50(param_1,0x3c4);
  iVar2 = fn_006b83e4(uVar5);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_0028b0a0(uVar5,iVar4);
      fn_0017821c(param_1 + iVar4 * 0xf0,uVar3,0xf0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar1 = fn_006b8574(uVar5);
  *(undefined1 *)(param_1 + 0x3c0) = uVar1;
  uVar1 = fn_006b8668(uVar5);
  *(undefined1 *)(param_1 + 0x3c1) = uVar1;
  uVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  *(undefined1 *)(param_1 + 0x3c2) = uVar1;
  return;
}



bool fn_00291ae4(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    fn_002d6900(DAT_00897820);
  }
  return iVar1 == 2;
}



undefined4 fn_00292f20(void)

{
  return *(undefined4 *)(DAT_00897820 + 0x28);
}

