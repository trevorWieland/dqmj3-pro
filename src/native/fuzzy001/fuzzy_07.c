/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0022d3ac .. 00242b6c.
 */
#include "decompiled.h"
#include "fuzzy_07.h"


void fn_0022d3ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e5bc0();
  *puVar1 = DAT_0081ce34;
  return;
}



void fn_00235c3c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = DAT_00851930;
  return;
}



void fn_00239494(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_0081d134;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



undefined4 fn_0023c2a8(void)

{
  return *(undefined4 *)(DAT_00897830 + 0x94c);
}



bool fn_0023c2bc(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  return iVar1 == 2;
}



void fn_0023cd94(undefined4 param_1)

{
  fn_006bc448(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023cdac(undefined4 param_1,undefined4 param_2)

{
  fn_002e2918(*(undefined4 *)(DAT_00897804 + 0x58),param_1,param_2);
  return;
}



void fn_0023d0d4(undefined4 param_1)

{
  fn_006bc458(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d0ec(undefined4 param_1)

{
  fn_006bc46c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d104(undefined4 param_1)

{
  fn_006bc47c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d11c(undefined4 param_1,undefined4 param_2)

{
  fn_002e297c(*(undefined4 *)(DAT_00897804 + 0x58),param_1,param_2);
  return;
}



void fn_0023d13c(void)

{
  fn_002e29fc(*(undefined4 *)(DAT_00897804 + 0x58));
  return;
}



void fn_0023d150(undefined4 param_1)

{
  fn_006bc4a0(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}


void fn_0023d270(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x58);
  uVar1 = fn_006bc47c(uVar2,param_1);
  if (param_2 > uVar1) {
    fn_002e2990(uVar2,param_1,param_2);
    return;
  }
  return;
}

void fn_0023d2b8(void)

{
  fn_006bc43c(*(undefined4 *)(DAT_00897804 + 0x58));
  return;
}



void fn_0023d2cc(undefined4 param_1)

{
  fn_002e290c(*(undefined4 *)(DAT_00897804 + 0x58),param_1);
  return;
}



void fn_0023d3d0(undefined4 param_1)

{
  fn_0026a494(DAT_00897818,param_1,1);
  return;
}



void fn_0023d424(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x30))(piVar1,param_3);
  return;
}



void fn_0023e508(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x3c))(piVar1,param_3);
  return;
}



void fn_0023fd64(int param_1)

{
  fn_00698fb8(DAT_008977e0,1);
  fn_003b674c(*(undefined4 *)(param_1 + 0x2c),0x80eb);
  return;
}



void fn_00241bd4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = fn_00156024(param_1,(char *)DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



int fn_00242910(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x18;
}



int fn_00242930(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x34;
}



int fn_00242984(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x38;
}



bool fn_002429a4(int param_1)

{
  return *(char *)(DAT_00892844 + param_1 * 0x58 + 0x53) == '\0';
}



int fn_002429d0(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x44;
}



int fn_00242a10(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x48;
}



int fn_00242a30(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0xf;
}



int fn_00242a70(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x12;
}



bool fn_00242a90(int param_1)

{
  return *(char *)(DAT_00892844 + param_1 * 0x58 + 0x54) == '\x01';
}



int fn_00242ab8(int param_1)

{
  return (int)*(short *)(DAT_00892844 + param_1 * 0x58 + 0x30);
}



undefined1 fn_00242aec(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58 + 0x50);
}



undefined1 fn_00242b0c(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58 + 1);
}



undefined2 fn_00242b2c(int param_1)

{
  return *(undefined2 *)(DAT_00892844 + param_1 * 0x58 + 0x32);
}



int fn_00242b4c(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 0x28;
}



undefined1 fn_00242b6c(int param_1)

{
  return *(undefined1 *)(DAT_00892844 + param_1 * 0x58);
}

