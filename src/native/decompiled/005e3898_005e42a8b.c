#include "005e3898_005e42a8b.h"



void fn_005e42a8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(**(int **)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 4) * 0x278 + 0x234) =
       *param_2;
  return;
}



void fn_005e4218(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18 [3];
  
  if ((*(int *)(param_1 + 8) == 0) || (iVar1 = fn_006ebd98(), iVar1 == 0)) {
    return;
  }
  iVar2 = fn_006eb9b4(iVar1);
  if (iVar2 != 0) {
    fn_006eb6a0(local_18,iVar1);
    *(undefined4 *)(**(int **)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 4) * 0x278 + 0x234) =
         local_18[0];
  }
  fn_005e6d00(*(undefined4 *)(param_1 + 8));
  return;
}



undefined4 * fn_005e40b4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if (puVar4 != (uint *)0x0) {
    fn_002feef8(puVar4[0xf]);
    fn_002feef8(puVar4[0xe]);
    fn_002feef8(puVar4[0xd]);
    fn_002feef8(puVar4[0xc]);
    uVar1 = puVar4[9];
    uVar2 = uVar1;
    if (puVar4[10] < uVar1) {
      do {
        uVar2 = uVar2 + 0x1c;
      } while (uVar2 != puVar4[10]);
    }
    iVar3 = (int)((longlong)(int)(puVar4[0xb] - uVar1) * -0x6db6db6d +
                  ((ulonglong)(puVar4[0xb] - uVar1) << 0x20) >> 0x20);
    fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
    uVar1 = puVar4[6];
    uVar2 = uVar1;
    if (puVar4[7] < uVar1) {
      do {
        uVar2 = uVar2 + 0x1c;
      } while (uVar2 != puVar4[7]);
    }
    iVar3 = (int)((longlong)(int)(puVar4[8] - uVar1) * -0x6db6db6d +
                  ((ulonglong)(puVar4[8] - uVar1) << 0x20) >> 0x20);
    fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
    uVar1 = puVar4[3];
    uVar2 = uVar1;
    if (puVar4[4] < uVar1) {
      do {
        uVar2 = uVar2 + 0x1c;
      } while (uVar2 != puVar4[4]);
    }
    iVar3 = (int)((longlong)(int)(puVar4[5] - uVar1) * -0x6db6db6d +
                  ((ulonglong)(puVar4[5] - uVar1) << 0x20) >> 0x20);
    fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
    uVar1 = *puVar4;
    uVar2 = uVar1;
    if (puVar4[1] < uVar1) {
      do {
        uVar2 = uVar2 + 0x1c;
      } while (uVar2 != puVar4[1]);
    }
    iVar3 = (int)((longlong)(int)(puVar4[2] - uVar1) * -0x6db6db6d +
                  ((ulonglong)(puVar4[2] - uVar1) << 0x20) >> 0x20);
    fn_001008c4(uVar1,(iVar3 >> 4) - (iVar3 >> 0x1f),0);
    fn_002feef8(puVar4);
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x005e4004) */
/* WARNING: Removing unreachable block (ram,0x005e3fc0) */
/* WARNING: Removing unreachable block (ram,0x005e3f7c) */
/* WARNING: Removing unreachable block (ram,0x005e3f2c) */
/* WARNING: Removing unreachable block (ram,0x005e4038) */
/* WARNING: Removing unreachable block (ram,0x005e4058) */
/* WARNING: Removing unreachable block (ram,0x005e4078) */
/* WARNING: Removing unreachable block (ram,0x005e4098) */

int * fn_005e3e48(int *param_1,uint param_2,uint param_3,uint param_4,char param_5,uint param_6,
                  uint param_7,char param_8,uint param_9,uint param_10,char param_11,uint param_12,
                  uint param_13)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x58,&DAT_00812c8c,param_3,param_4,param_1,param_2,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  *param_1 = (int)puVar1;
  fn_00795ce8(puVar1,0x80);
  fn_00795ce8(*param_1 + 0xc,0x80);
  fn_00795ce8(*param_1 + 0x18,0x10);
  fn_00795ce8(*param_1 + 0x24,0x10);
  if ((param_2 & 0xff) == 0) {
    fn_005e37c8(param_1,param_3 & 0xff);
  }
  else {
    fn_005e37f8(param_1,param_3,param_4 & 0xff,(param_4 & 0xffff) >> 8);
  }
  if (param_5 == '\0') {
    fn_005e3868(param_1,param_6 & 0xff);
  }
  else {
    fn_005e3898(param_1,param_6,param_7 & 0xff,(param_7 & 0xffff) >> 8);
  }
  if (param_8 == '\0') {
    fn_005e3728(param_1,param_9 & 0xff);
  }
  else {
    fn_005e3758(param_1,param_9,param_10 & 0xff,(param_10 & 0xffff) >> 8);
  }
  if (param_11 == '\0') {
    fn_005e3688(param_1,param_12 & 0xff);
  }
  else {
    fn_005e36b8(param_1,param_12,param_13 & 0xff,(param_13 & 0xffff) >> 8);
  }
  return param_1;
}


