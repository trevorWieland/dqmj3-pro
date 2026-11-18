/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0057ec1c .. 005aae20.
 */
#include "decompiled.h"
#include "fuzzy_35.h"


void fn_0057ec1c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005b81a0();
  *puVar1 = DAT_00841fe8;
  return;
}



void fn_005810a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008424c0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}



void fn_00583ef0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c7464,1);
  *puVar1 = DAT_00842ce4;
  return;
}



void fn_00583fb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_00894d88,7);
  *puVar1 = DAT_00842dfc;
  return;
}



void fn_00584048(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_00842f14;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



void fn_005840dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  puVar1[5] = 0xffffffff;
  *puVar1 = DAT_00842f2c;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



void fn_00584144(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00842f44;
  *(undefined1 *)(puVar1 + 3) = 1;
  return;
}



void fn_005841bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00842f58;
  return;
}



void fn_00584404(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584434(iVar1,param_1);
  return;
}



void fn_005844dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058450c(iVar1,param_1);
  return;
}



void fn_00584554(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584584(iVar1,param_1);
  return;
}



void fn_00584ef0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584f20(iVar1,param_1);
  return;
}



void fn_00585558(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005856e0(iVar1,param_1);
  return;
}



void fn_00585dc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00585df8(iVar1,param_1);
  return;
}



void fn_00585f04(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005871e0(iVar1,param_1);
  return;
}



void fn_00587a78(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  uVar1 = fn_001287d4(param_2 * 0x28,DAT_00812c8c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_00587b00(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00587b30(iVar1,param_1);
  return;
}



void fn_00588ec0(int param_1)

{
  fn_0031dacc();
                    /* WARNING: Could not recover jumptable at 0x00588ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(*(int **)(param_1 + 0x2c),0);
  return;
}



void fn_00589168(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00589198(iVar1,param_1);
  return;
}



void fn_0058953c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,8);
  puVar1[0x16] = 0;
  *puVar1 = DAT_008437d4;
  return;
}



void fn_0058aec4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = DAT_008438a0;
  return;
}



void fn_0058b3b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b420(iVar1,param_1);
  return;
}



void fn_0058b450(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b480(iVar1,param_1);
  return;
}



void fn_0058b4b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b4e4(iVar1,param_1);
  return;
}



void fn_0058b518(int param_1)

{
  fn_00301f50(param_1 + 0xc,0x8d8);
  *(undefined1 *)(param_1 + 0x8e4) = 0;
  *(undefined1 *)(param_1 + 0x8e5) = 0;
  return;
}



void fn_0058b540(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9f0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058b570(iVar1,param_1);
  return;
}



void fn_005aae20(undefined4 param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,0xd5,0,1);
  fn_0068ab44(param_1,0x100094c);
  return;
}

