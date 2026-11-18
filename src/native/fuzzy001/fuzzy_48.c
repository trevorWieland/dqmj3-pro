/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0066eb64 .. 0069decc.
 */
#include "decompiled.h"
#include "fuzzy_48.h"


void fn_0066eb64(void)

{
  fn_00671538(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



void fn_0066eb90(void)

{
  fn_0067411c(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  fn_00671598(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



undefined * fn_00670620(void)

{
  undefined4 uVar1;
  
  fn_0066eb80(DAT_00898840,3);
  uVar1 = fn_0066b1ac();
  fn_004d5518(uVar1,DAT_008cfeb8);
  return DAT_008cfeb8;
}



void fn_00670f84(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x80) = param_3;
  return;
}



void fn_006718fc(int *param_1,undefined4 param_2)

{
  fn_00301a9c(param_1 + 0x3a,param_2,0x100);
                    /* WARNING: Could not recover jumptable at 0x00671924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,5);
  return;
}



void fn_00671e8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00301a9c(param_1 + 0x385);
  *(undefined4 *)(param_1 + 0x450) = param_3;
  return;
}



void fn_006729ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc48) = param_2;
  return;
}



void fn_006729b4(void)

{
  fn_004de544(DAT_008bf504,1);
  return;
}



void fn_006729c8(void)

{
  fn_004dec0c(DAT_008bf504);
  return;
}



undefined4 fn_00673914(void)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,2);
  return *(undefined4 *)(iVar1 + 0x340);
}



int fn_006739a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,2);
  return iVar1 + param_2 * 0x50 + 0xc0;
}



void fn_006739cc(void)

{
  fn_0066eb80(DAT_00898840,2);
  fn_0066f080();
  return;
}



undefined4 fn_00676624(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((DAT_008bf4d4 != 0) && ((*(uint *)(DAT_008bf4d4 + 0x38) & 0x80000000) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00677a50(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  fn_0013d438(param_1 + 0x68,DAT_008c6e36);
  return;
}



void fn_00677a78(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066eb80(DAT_00898840,3);
  fn_00669d8c(uVar1,param_1 + 100);
  return;
}



void fn_0067b95c(int *param_1)

{
  fn_0066e458(DAT_00898840,2,0);
  *(int **)(param_1[0x26] + 100) = param_1 + 0x27;
                    /* WARNING: Could not recover jumptable at 0x0067b998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_006863a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  return;
}



void fn_00686554(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1dc) = param_2;
  return;
}



void fn_0068655c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  *(undefined4 *)(param_1 + 0x1e0) = param_3;
  return;
}



void fn_00688634(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 4),param_2,0x37af0);
  return;
}



void fn_00689210(int *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0068921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,param_2,1);
  return;
}



void fn_00689c30(int param_1)

{
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_0068a4f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0068ab5c(iVar1,param_1);
  return;
}



void fn_0068af70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = DAT_00851134;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 1;
  puVar1[3] = 0;
  return;
}



bool fn_0068c528(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_0068c694(DAT_008977e8);
  iVar2 = fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
  bVar3 = iVar2 == 0;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x58);
  }
  return bVar3 && iVar2 == 0;
}



void fn_0068c570(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_006ebf84(*(undefined4 *)(iVar2 + 0x24),uVar1);
  return;
}



void fn_0068c604(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  *puVar1 = DAT_008511c0;
  *(undefined1 *)((int)puVar1 + 0x53) = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  return;
}



void fn_0068c764(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 100,param_2,0x25d);
  return;
}



undefined4 fn_0069311c(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = *(int **)(DAT_008977e0 + 0x40);
  if ((*piVar2 != 0) && (*(char *)(*piVar2 + 4) == '\x03')) {
    iVar4 = piVar2[1];
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x20);
    }
    if (iVar4 != 0 && cVar1 != '\x01') {
      uVar3 = fn_006b8e04(piVar2[4]);
      return uVar3;
    }
  }
  return 0;
}



void fn_0069d394(int param_1)

{
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_1 + 0x20);
  return;
}



void fn_0069decc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(char *)(param_1 + 0xd6) = (char)param_2;
  if (*(char *)(param_1 + 0x54) == '\0') {
    return;
  }
  uVar1 = fn_00156f24(DAT_008987bc,*(undefined4 *)(param_1 + 0x58));
  fn_002028d0(uVar1,*(undefined4 *)(DAT_007c68c0 + param_2 * 4));
  return;
}

