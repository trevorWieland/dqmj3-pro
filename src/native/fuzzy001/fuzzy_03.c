/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0015cca0 .. 001828f0.
 */
#include "decompiled.h"
#include "fuzzy_03.h"


void fn_0015cca0(int param_1)

{
  *(undefined1 *)(param_1 + 0x89) = 0;
  return;
}



void fn_0015ccac(int param_1)

{
  *(undefined1 *)(param_1 + 0x89) = 1;
  return;
}



undefined4 fn_0015f3f8(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  if (0x8000 < param_2) {
    param_2 = 0x8000;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(short *)((int)puVar2 + 0x22) = (short)param_2;
  *puVar2 = *puVar2 | 0x80000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015f4c0(int param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(short *)(puVar2 + 7) = (short)param_2;
  *puVar2 = *puVar2 | 0x20000000;
  fn_00193380();
  return 1;
}



undefined4 fn_0015f5b8(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)((int)puVar2 + 0x16) = param_2;
  *puVar2 = *puVar2 | 0x4000000;
  fn_00193380();
  return 1;
}



void fn_0015f618(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)(puVar2 + 4) = param_2;
  *puVar2 = *puVar2 | 0x8000;
  fn_00193380();
  return;
}



void fn_00160094(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



void fn_00161bac(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_00857fd4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



int fn_00161d0c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00172d60();
  *puVar1 = DAT_008580b4;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = fn_0017348c(puVar1 + 0x4a);
  return iVar2 + -0x128;
}



int fn_00162750(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00172d60();
  *puVar1 = DAT_008584a8;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = fn_00173340(puVar1 + 0x49);
  return iVar2 + -0x124;
}



void fn_0016278c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,0,param_3);
  *puVar1 = DAT_008412d0;
  return;
}



void fn_0016397c(int param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



void fn_00163d44(undefined4 param_1)

{
  fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),param_1);
  return;
}



void fn_00163d68(undefined4 param_1,undefined4 param_2)

{
  fn_0016ba24(*(undefined4 *)(DAT_00897804 + 8),param_1,param_2);
  return;
}



int fn_001645e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return (int)*(short *)(iVar1 + param_2 * 0x418 + -0x4064);
}



void fn_0016ba78(int param_1)

{
  *(undefined1 *)(param_1 + 0x958) = 1;
  return;
}



void fn_0016dc88(int param_1,uint param_2,int param_3)

{
  *(int *)(param_1 + (param_2 ^ 1) * 4) = param_3 + *(int *)(param_1 + (param_2 ^ 1) * 4);
  return;
}



void fn_001710c8(undefined4 param_1)

{
  fn_0017ce68(&DAT_008ef56c,param_1);
  return;
}



void fn_001714f4(undefined4 param_1)

{
  fn_0017cee0(&DAT_008ef56c,param_1);
  return;
}



uint fn_00172f98(void)

{
  DAT_008c3594 = DAT_008c3594 * 0x19660d + 0x3c6ef35f;
  return DAT_008c3594 >> 0x10;
}



int fn_001746dc(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x16);
}



void fn_00174b78(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  fn_001667f0(iVar1 + param_2 * 0x418 + -0x4080);
  return;
}



void fn_00175518(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  fn_00166804(iVar1 + param_2 * 0x418 + -0x4080);
  return;
}



undefined4 fn_0017d520(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined2 *)((int)puVar2 + 0x3a) = param_3;
  *puVar2 = *puVar2 | 0x400000;
  fn_00193380();
  return 1;
}



undefined4 fn_0017d590(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined2 *)(puVar2 + 0xf) = param_3;
  *(undefined2 *)((int)puVar2 + 0x3e) = param_4;
  *puVar2 = *puVar2 | 0x800000;
  fn_00193380();
  return 1;
}



undefined4 * fn_0017e758(undefined4 *param_1)

{
  *param_1 = DAT_0085828c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  fn_0014ddb8(param_1 + 3,1);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  fn_0015dfc0(param_1 + 3);
  return param_1;
}



void fn_001828f0(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00182900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10),param_2,1);
  return;
}

