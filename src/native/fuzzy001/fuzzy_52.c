/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 006caef8 .. 006f96a0.
 */
#include "decompiled.h"
#include "fuzzy_52.h"


void fn_006caef8(void)

{
  fn_006b6464(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006caf0c(void)

{
  fn_006b62ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



int fn_006cd734(int param_1,short param_2)

{
  return param_1 + param_2 * 0x1454 + 0xaa28;
}



int fn_006cd878(int param_1,short param_2)

{
  return param_1 + param_2 * 0xdd4 + 0x26cc;
}



int fn_006cd9b0(int param_1,short param_2)

{
  return param_1 + param_2 * 0x19998 + 0xdad8;
}



bool fn_006cdaec(int param_1)

{
  return *(char *)(param_1 + 8) == '\0';
}



undefined1 fn_006d07d8(undefined4 param_1)

{
  undefined1 uVar1;
  
  uVar1 = fn_006d0810(param_1,DAT_007d9e30,0);
  return uVar1;
}



void fn_006d09d4(undefined4 param_1)

{
  fn_006d0810(param_1,DAT_007d9e38,0);
  return;
}



void fn_006d09e4(undefined4 param_1)

{
  fn_006d0810(param_1,DAT_007d9e40,0);
  return;
}



void fn_006d3ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 2) == '\x04') {
    uVar1 = *param_2;
    *param_1 = DAT_00855a94;
    fn_0015e6f0(param_1 + 1,uVar1);
    return;
  }
  *param_1 = DAT_00855a94;
  fn_0015e6f0(param_1 + 1,DAT_007db524);
  return;
}



int fn_006d6510(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006d58dc(DAT_008bf504);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    return 200 - iVar1;
  }
  return *(int *)(*(int *)(DAT_008bf504 + 0x18) + 0x3c);
}



undefined1 fn_006d6604(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 8) - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 8) + 6);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006d690c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  fn_001694e4(param_2,*(int *)(param_1 + 0x38) + param_3,param_4);
  return;
}



void fn_006d6c48(void)

{
  fn_006d6690(*(undefined4 *)(DAT_008bf504 + 0x14),1);
  return;
}



undefined4 fn_006d9250(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xd8a148f8;
  }
  return uVar1;
}



bool fn_006db038(int param_1)

{
  return *(int *)(param_1 + 4) != DAT_008c067c;
}



void fn_006e1ee8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e1f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0);
  return;
}



void fn_006e2c8c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x87];
  if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2), iVar2 == 0))
     && (iVar2 = fn_006e3c70(param_1 + 3,param_2), iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x006e2ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    return;
  }
  return;
}



int fn_006e8230(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) + param_2 * 0xa88;
}


bool fn_006f23d4(undefined4 param_1,int param_2)

{
  
  
  return (fn_00176dc0(param_2)) == *(short *)(param_2 + 0x1c);
}
bool fn_006f2400(undefined4 param_1,int param_2)

{
  
  
  return (fn_00176e70(param_2)) == *(short *)(param_2 + 0x1e);
}

undefined4 fn_006f5418(void)

{
  int iVar1;
  
  iVar1 = fn_006cf94c(DAT_008c06e0 + 0x24);
  return *(undefined4 *)(iVar1 + 100);
}



void fn_006f5d6c(undefined4 param_1,int param_2)

{
  fn_006e9e24(*(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18),param_2 != 0);
  return;
}



int fn_006f5d90(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1 + param_2 * 0x1528;
  if (*(char *)(iVar1 + 0x1524) == '\0') {
    iVar1 = 0;
  }
  return iVar1;
}



bool fn_006f6290(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
  return iVar1 == 0;
}



void fn_006f637c(void)

{
  fn_006afa24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  return;
}



void fn_006f7134(void)

{
  fn_0028c5e0(*(undefined4 *)(DAT_008977e0 + 0x28));
  return;
}



undefined4 fn_006f7154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00660ec0((int)*(short *)(param_1 + 0x16a));
  if (iVar1 == 0x22) {
    uVar2 = fn_006b4ff0(*(undefined4 *)(DAT_00897804 + 0x18));
    return uVar2;
  }
  return 0;
}



void fn_006f7358(void)

{
  fn_006af880(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  return;
}



void fn_006f7580(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4);
  fn_002240d8(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),1);
  return;
}



void fn_006f94e0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return;
}



undefined4 fn_006f9688(void)

{
  return *(undefined4 *)(*(int *)(DAT_008bf798 + 8) + 0xc);
}



undefined4 fn_006f96a0(void)

{
  return *(undefined4 *)(*(int *)(DAT_008bf798 + 8) + 0x1c);
}

