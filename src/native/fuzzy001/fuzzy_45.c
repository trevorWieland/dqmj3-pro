/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00604d98 .. 00656e14.
 */
#include "decompiled.h"
#include "fuzzy_45.h"


void fn_00604d98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d2b28();
  puVar1[0x154] = 0;
  *puVar1 = DAT_0084f3d0;
  return;
}



int fn_00606564(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00397f10();
  *puVar1 = DAT_0084f42c;
  iVar2 = fn_00117074(puVar1 + 0x34);
  *(undefined1 *)(iVar2 + 0x4b8) = 0;
  return iVar2 + -0xd0;
}



void fn_00607ae4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d68e0(param_1,param_2,0xe6,0);
  *puVar1 = DAT_0084f694;
  return;
}



void fn_006082f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c7b04,3);
  *puVar1 = DAT_0084f94c;
  return;
}



void fn_00608354(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = DAT_0084fa64;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}



void fn_006083c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0084fa7c;
  return;
}



void fn_0060a288(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = DAT_0084fab8;
  *(undefined1 *)(puVar1 + 0x42) = 0xff;
  return;
}



void fn_0060a5c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060a8c4(iVar1,param_1);
  return;
}



void fn_0060bc5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060bc8c(iVar1,param_1);
  return;
}



void fn_0060c104(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060c134(iVar1,param_1);
  return;
}



void fn_0060e598(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060e5c8(iVar1,param_1);
  return;
}



void fn_0061138c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006113bc(iVar1,param_1);
  return;
}



undefined4 fn_00614de8(int param_1)

{
  int *piVar1;
  
  fn_00613c58(*(undefined4 *)(param_1 + 0x14));
  piVar1 = (int *)fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar1 + 0x58))(piVar1,1);
  return 1;
}



void fn_006157a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006157d8(iVar1,param_1);
  return;
}



void fn_006159f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x478,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00615a24(iVar1,param_1);
  return;
}



void fn_00615a4c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00615a7c(iVar1,param_1);
  return;
}



void fn_00615ba8(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x19c));
  return;
}



undefined4 fn_00615bd0(int param_1)

{
  fn_002113c8();
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x19c));
  fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x19c));
  return 1;
}



void fn_0062a720(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  fn_0017821c(param_2 + (short)(ushort)*param_2 * 0x266c + 4,param_3,0x266c);
  *param_2 = *param_2 + 1;
  return;
}


bool fn_0064df1c(byte *param_1,undefined4 param_2)

{
  
  
  return (fn_00163cbc(param_2)) == *param_1;
}
bool fn_0064f50c(byte *param_1,undefined4 param_2)

{
  
  
  return (fn_00163a00(param_2)) == *param_1;
}
bool fn_00652378(int *param_1,undefined4 param_2)

{
  
  
  return *param_1 <= (fn_006f358c(param_2));
}
bool fn_00652e4c(int *param_1,undefined4 param_2)

{
  
  
  return *param_1 <= (fn_006f3da8(param_2));
}

void fn_00654ce4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5a) = param_2;
  return;
}



void fn_00655554(void)

{
  fn_0026984c();
  fn_0025ff50();
  fn_00388954();
  fn_003e6b10();
  fn_00227344();
  fn_0065e50c();
  fn_006917f4();
  fn_006914ec();
  fn_00661028();
  fn_00660ce8();
  fn_00692584();
  return;
}



void fn_006565b8(undefined4 *param_1)

{
  *param_1 = DAT_00859628;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  return;
}



void fn_00656b7c(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f5438(DAT_008c06d0,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
  return;
}



void fn_00656e14(undefined4 param_1,int *param_2)

{
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)fn_006f5418(DAT_008c06d0), param_2 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,4);
  return;
}

