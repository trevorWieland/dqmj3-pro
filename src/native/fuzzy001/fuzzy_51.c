/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 006b62ec .. 006cd6d0.
 */
#include "decompiled.h"
#include "fuzzy_51.h"


undefined2 fn_006b62ec(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x268);
}



undefined2 fn_006b6464(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x266);
}



undefined4 fn_006b7aa0(void)

{
  return 0;
}



int fn_006be0f4(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x2c) + param_2 * 0xa88;
}



bool fn_006c0334(undefined4 *param_1)

{
  return *(int *)*param_1 == -0x1194d800;
}


bool fn_006c0e58(int param_1)

{
  
  
  return (fn_006c0d5c()) != *(int *)(param_1 + 0x10);
}

char * fn_006c4478(char *param_1)

{
  char *pcVar1;
  
  if ((*param_1 != '\x06') || (param_1[0xc] == '\0')) {
    return "free";
  }
  if (param_1[0xc] == '\x01') {
    pcVar1 = "seigennari";
  }
  else {
    pcVar1 = "";
  }
  return pcVar1;
}



char * fn_006c4568(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
LAB_006c45b8:
    return "second30";
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
LAB_006c45c0:
      return "limitless";
    }
    if (cVar1 == '\x03') goto LAB_006c45b8;
    if (cVar1 != '\x04' && cVar1 != '\x05') {
      cVar1 = param_1[7];
      if (cVar1 == '\0') goto LAB_006c45c0;
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          return "";
        }
        goto LAB_006c45b8;
      }
    }
  }
  return "second15";
}



undefined4 fn_006c4918(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = param_1[2];
  uVar2 = 1;
  bVar3 = iVar1 != 0x50435042;
  if (!bVar3) {
    iVar1 = param_1[3];
  }
  if ((bVar3 || iVar1 != 0x1000) ||
     (iVar1 = fn_0025097c(*param_1,param_1[1],*(undefined4 *)(DAT_00895bbc + param_1[6] * 4),0x20)
     , iVar1 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006c8304(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar1;
}



void fn_006caa04(void)

{
  fn_006b641c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cab18(void)

{
  fn_006b6428(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cabf0(void)

{
  fn_006b6210(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cac88(void)

{
  fn_006b63ac(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cad54(void)

{
  fn_006b63e0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cad68(void)

{
  fn_006b63b8(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



undefined2 fn_006cae20(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *puVar1;
}



void fn_006cae40(void)

{
  fn_006b63ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



undefined4 fn_006cae54(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined4 *)fn_002b0a98(*(undefined4 *)(DAT_00897804 + 100));
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}



undefined4 fn_006caea4(void)

{
  int iVar1;
  
  iVar1 = fn_006bc48c(*(undefined4 *)(DAT_00897804 + 0x58));
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006caec4(void)

{
  int iVar1;
  
  iVar1 = fn_006bc48c(*(undefined4 *)(DAT_00897804 + 0x58));
  return *(undefined4 *)(iVar1 + 8);
}



void fn_006caee4(void)

{
  fn_006b7eb4(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



void fn_006caf74(void)

{
  fn_006b6410(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006cafbc(void)

{
  fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



void fn_006cafd0(void)

{
  fn_006b8068(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



undefined4 fn_006cb054(void)

{
  int iVar1;
  
  iVar1 = fn_006b8718(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_006cb09c(void)

{
  int iVar1;
  
  iVar1 = fn_006b873c(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined4 *)(iVar1 + 4);
}



undefined2 fn_006cb974(void)

{
  int iVar1;
  
  iVar1 = fn_006b86f4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined2 *)(iVar1 + 2);
}



bool fn_006cd5a0(void)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,5);
  return *(int *)(iVar1 + 0x70) == -0x134;
}



int fn_006cd684(int param_1,short param_2,int param_3)

{
  return param_1 + param_2 * 0x19998 + param_3 * 0x808 + 0xe2e0;
}



int fn_006cd6a8(int param_1,short param_2)

{
  return param_1 + param_2 * 0xdd4 + 0x5048;
}



int fn_006cd6d0(int param_1,short param_2)

{
  return param_1 + param_2 * 0x19998 + 0xd2d0;
}

