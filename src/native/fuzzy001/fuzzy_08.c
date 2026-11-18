/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00242bd4 .. 0026b458.
 */
#include "decompiled.h"
#include "fuzzy_08.h"


int fn_00242bd4(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 2;
}



bool fn_00242c6c(int param_1)

{
  return *(char *)(DAT_0089280c + param_1) != '\0';
}



void fn_0024405c(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x148);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 0x140);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002440a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  return;
}



void fn_0024487c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00244dc4(iVar1,param_1);
  return;
}



undefined1 fn_002473c0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 < 4000) {
      uVar1 = 1;
    }
    else if (param_1 < 8000) {
      uVar1 = 2;
    }
    else if (param_1 < 12000) {
      uVar1 = 3;
    }
    else if (param_1 < 18000) {
      uVar1 = 4;
    }
    else if (param_1 < 32000) {
      uVar1 = 5;
    }
    else if (param_1 < 46000) {
      uVar1 = 6;
    }
    else if (param_1 < 74000) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
  }
  return uVar1;
}



void fn_002525fc(void)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_0028b148(uVar1);
  fn_0028b3b0(uVar1);
  fn_00204404(DAT_00897840);
  fn_002fa49c();
  return;
}



void fn_00252638(void)

{
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  return;
}



void fn_0025265c(void)

{
  fn_002044a0(DAT_00897840);
  return;
}



int fn_002530c4(int param_1)

{
  return (int)*(short *)(DAT_008923ac + param_1 * 4 + 2);
}



int fn_002530dc(int param_1)

{
  return (int)*(short *)(DAT_008923ac + param_1 * 4);
}



void fn_00259a50(int param_1)

{
  fn_00698fb8(DAT_008977e0,1);
  fn_003b674c(*(undefined4 *)(param_1 + 0x2c),0x80ea);
  return;
}



void fn_0025a360(int param_1)

{
  fn_0011050c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(DAT_008977e0 + 0x10),
               *(undefined4 *)(DAT_008977e0 + 0x14));
  return;
}



void fn_0025adb4(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  fn_00304018();
  return;
}



void fn_0025adc8(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  fn_00304084();
  return;
}


void fn_0025b504(int param_1,int param_2)

{int iVar2;

  byte bVar1;
  
  
  iVar2 = *(int *)(param_1 + 4);
  bVar1 = *(byte *)(iVar2 + 0x261);
  if (bVar1 != 0) {
    if (param_2 < (int)(uint)bVar1) {
      *(byte *)(iVar2 + 0x261) = bVar1 - (char)param_2;
    }
    else {
      *(undefined1 *)(iVar2 + 0x261) = 0;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x262) = 0;
    }
  }
  return;
}

undefined1 fn_0025be70(int param_1)

{
  return *(undefined1 *)(DAT_00892814 + param_1);
}



void fn_0025d22c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0025d744(iVar1,param_1);
  return;
}



void fn_0025ecd0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001caa80();
  *puVar1 = DAT_0081dc08;
  *(undefined1 *)(puVar1 + 0x39) = 0xff;
  *(undefined1 *)((int)puVar1 + 0xe5) = 0;
  *(undefined1 *)((int)puVar1 + 0xe6) = 0;
  *(undefined1 *)((int)puVar1 + 0xe7) = 0;
  return;
}



void fn_0025f31c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001caa80();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0081dce8;
  return;
}



void fn_0025fb7c(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = DAT_00851a30;
  param_1[2] = 0xffffffff;
  return;
}



undefined4 * fn_0025fbc8(undefined4 *param_1)

{
  *param_1 = DAT_0081ddd8;
  fn_00675f54(param_1[1],param_1);
  return param_1;
}



void fn_0025fc8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00676150();
  *puVar1 = DAT_0081ddfc;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}



void fn_00260b38(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_0081de94;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}



void fn_00260b60(undefined4 *param_1)

{
  *param_1 = DAT_0081de94;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_00264afc(undefined4 param_1)

{
  fn_00264f50(param_1,0x81,L"rom:/data/Race/Obj/o_rac_22.bch",0,0);
  return;
}



void fn_00264c20(undefined4 param_1)

{
  fn_00264f50(param_1,0x44,L"rom:/data/Race/Obj/o_rac_21.bch",0,0);
  return;
}



void fn_0026561c(undefined4 param_1)

{
  fn_00264f50(param_1,0x43,L"rom:/data/Race/Obj/o_rac_19.bch",0,0);
  return;
}



void fn_0026b458(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_00166804(param_1);
  if (iVar1 != 0) {
    fn_0028ad18(uVar2,*param_2);
  }
  iVar1 = fn_001667f0(param_1);
  if (iVar1 == 0) {
    return;
  }
  fn_0028b674(uVar2,*param_2);
  return;
}

