/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00106510 .. 00124f80.
 */
#include "decompiled.h"
#include "fuzzy_00.h"


void fn_00106510(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_0081d330;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



void fn_00106908(void)

{
  fn_0010b2a4(&DAT_008ebe60);
  return;
}



void fn_001084a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001160fc();
  *puVar1 = DAT_00851418;
  return;
}



void fn_00109230(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00118dcc();
  *puVar1 = DAT_0081d07c;
  return;
}



void fn_0010c414(undefined4 *param_1)

{
  *param_1 = DAT_00858780;
  if (param_1[2] != 0) {
    fn_00116fdc(param_1);
  }
  fn_00117008(param_1);
  return;
}



void fn_0010c880(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_3);
  *(undefined1 *)(puVar1 + 8) = param_2;
  *puVar1 = DAT_00858b1c;
  return;
}



void fn_0010c8e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720();
  *puVar1 = DAT_00858bd8;
  return;
}



void fn_0010d590(void)

{
  fn_0012bc84(0x202,DAT_008bf77c + 0x10);
  fn_0011b34c();
  return;
}



void fn_0010ebe0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_00850fc8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



void fn_001138ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00121128(param_1,1,param_2);
  *puVar1 = DAT_00821968;
  return;
}



void fn_001138cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00121128(param_1,0,param_2);
  *puVar1 = DAT_00821980;
  return;
}



void fn_00113928(undefined4 *param_1)

{
  *param_1 = DAT_0082230c;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_00113a08(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_00826360;
  param_1[2] = 0;
  return;
}



undefined4 fn_00113ca8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar1 == 7 || iVar1 == 8) || (iVar1 == 9 || iVar1 == 10)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_00113ce4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar1 == 3 || iVar1 == 4) || (iVar1 == 5 || iVar1 == 6)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0011435c(undefined4 *param_1)

{
  *param_1 = DAT_00852720;
  return;
}



void fn_0011609c(int param_1)

{
  fn_00127888();
  *(undefined4 *)(param_1 + 0x610) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0;
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined1 *)(param_1 + 0x61c) = 1;
  *(undefined1 *)(param_1 + 0x61d) = 1;
  *(undefined1 *)(param_1 + 0x61e) = 7;
  *(undefined1 *)(param_1 + 0x61f) = 7;
  *(undefined2 *)(param_1 + 0x628) = 1;
  *(undefined1 *)(param_1 + 0x62a) = 1;
  fn_0017821c(param_1 + 0x62c,DAT_007d859c,0x60);
  return;
}



void fn_00117114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = fn_00145ac0(*(undefined4 *)(iVar2 + 4));
  fn_0013b36c(iVar2 + 8,uVar1,0,0xffffffff);
  fn_0014524c(iVar2 + 8,iVar2 + 0x128f0,(char *)DAT_00127d14);
  fn_0014524c(iVar2 + 8,iVar2 + 0x128f8,(char *)DAT_00127d20);
  return;
}



void fn_00120ca8(undefined4 *param_1)

{
  *param_1 = DAT_0081d0cc;
  return;
}



void fn_00120f74(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = fn_00156024(param_1,(char *)DAT_0012f1f8);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = fn_00156024(param_1,(char *)DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



void fn_00121084(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = fn_00156024(param_1,(char *)DAT_0012f1f8);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = fn_00156024(param_1,(char *)DAT_0012f194);
    fn_0014720c(uVar1,*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



void fn_00121118(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 4),param_2,0xc88);
  return;
}



void fn_00122320(void)

{
  fn_0013af30(DAT_008977d4,0);
  fn_0013a624(DAT_008977d4);
  return;
}



void fn_00122ae4(undefined4 *param_1)

{
  *param_1 = DAT_00822518;
  return;
}



void fn_00122c28(void)

{
  fn_0012d73c(DAT_00896ca4);
  DAT_00896ca4 = 0;
  return;
}



void fn_00122c7c(void)

{
  fn_0012d73c(DAT_00896ca0);
  DAT_00896ca0 = 0;
  return;
}



void fn_00124f80(undefined4 param_1)

{
  fn_0013d6ec(&DAT_008ef56c,param_1);
  return;
}

