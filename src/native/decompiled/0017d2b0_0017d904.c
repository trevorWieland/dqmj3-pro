#include "0017d2b0_0017d904.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0017d904(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = *param_1 + -1;
  *(int *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}



undefined4 fn_0017d8a4(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  
  if (param_2 != 0 && param_3 != 0) {
    if (param_1 != 2) {
      return 0xfffffffb;
    }
    pcVar2 = (char *)fn_0018a34c(param_2);
    if ((pcVar2 != (char *)0x0) &&
       (cVar1 = *pcVar2, piVar3 = (int *)fn_002fea64(),
       (*(byte *)(*piVar3 + (int)cVar1) & 0x38) == 0)) {
      return 1;
    }
  }
  return 0;
}



int fn_0017d82c(int param_1,undefined1 *param_2,int param_3,uint param_4)

{
  if (((param_2 == (undefined1 *)0x0 || param_3 == 0) || (param_1 != 2)) || (param_4 < 0x10)) {
    return 0;
  }
  fn_00191564(param_3,param_4,(char *)&DAT_0017d898,*param_2,param_2[1],param_2[2],param_2[3]);
  return param_3;
}



int fn_0017d80c(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint local_24 [4];
  
  iVar2 = DAT_008c035c;
  if (DAT_008c035c == 0) {
    return 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = DAT_008c035c + 0x3788;
  fn_00170704(iVar4);
  piVar5 = (int *)(iVar2 + 0x1b04);
  iVar3 = *piVar5;
  *piVar5 = iVar3 + 1;
  if (0 < iVar3 + 1) {
    *piVar5 = 0;
  }
  local_24[2] = 0;
  iVar3 = fn_002febd8(param_1);
  local_24[0] = iVar3 + 1U;
  local_24[1] = 0x100;
  puVar1 = local_24;
  if (0x100 < iVar3 + 1U) {
    puVar1 = local_24 + 1;
  }
  iVar3 = fn_001946e8(local_24 + 2,param_1,*puVar1,iVar2 + *piVar5 * 0x1a88 + 0x14,0x1a88);
  if (iVar3 < 0) {
    iVar2 = *piVar5;
  }
  else {
    if (local_24[2] == 0) {
      fn_00194464(iVar2);
      iVar3 = *piVar5;
      fn_001707b4(iVar4);
      return iVar2 + iVar3 * 0x10 + 4;
    }
    iVar2 = *piVar5;
  }
  if (iVar2 != 0) {
    *piVar5 = iVar2 + -1;
  }
  fn_001707b4(iVar4);
  return 0;
}



int fn_0017d7e4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0017d77c(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar3 = *param_1;
  if (param_3 != 0) {
    pbVar2 = param_2 + -1;
    if ((param_3 & 1) != 0) {
      bVar3 = param_1[(bVar3 ^ *param_2) + 1];
      pbVar2 = param_2;
    }
    for (param_3 = param_3 >> 1; param_3 != 0; param_3 = param_3 - 1) {
      pbVar1 = pbVar2 + 1;
      pbVar2 = pbVar2 + 2;
      bVar3 = param_1[(param_1[(bVar3 ^ *pbVar1) + 1] ^ *pbVar2) + 1];
    }
  }
  *param_1 = bVar3;
  return;
}



void fn_0017d694(uint *param_1)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_1c = (float)param_1[0x1a];
  local_38 = (float)param_1[0x12] * local_1c;
  local_48 = (float)param_1[0xe] * local_1c;
  local_28 = (float)param_1[0x16] * local_1c;
  local_44 = (float)param_1[0xf] * local_1c;
  local_34 = (float)param_1[0x13] * local_1c;
  local_24 = (float)param_1[0x17] * local_1c;
  local_40 = (float)param_1[0x10] * local_1c;
  local_30 = (float)param_1[0x14] * local_1c;
  local_20 = (float)param_1[0x18] * local_1c;
  local_3c = (float)param_1[0x11] * local_1c;
  local_2c = (float)param_1[0x15] * local_1c;
  local_1c = (float)param_1[0x19] * local_1c;
  fn_0018a260(&DAT_008ef5bc,*param_1 & 0xff,&local_48);
  return;
}



undefined4
fn_0017d608(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
            undefined2 param_6,undefined2 param_7)

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
  *(undefined2 *)(puVar2 + 0x10) = param_7;
  *(undefined2 *)((int)puVar2 + 0x42) = param_6;
  *(undefined2 *)(puVar2 + 0x11) = param_5;
  *(undefined2 *)((int)puVar2 + 0x46) = param_4;
  *(undefined2 *)(puVar2 + 0x12) = param_3;
  *puVar2 = *puVar2 | 0x1000000;
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



undefined4 fn_0017d494(int param_1,int param_2,undefined4 param_3)

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
  fn_00301a9c(*(undefined4 *)
                (param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 0x60 + param_2 * 4 + 0x1234),
               param_3,0x20);
  *puVar2 = *puVar2 | 4;
  fn_00193380();
  return 1;
}



undefined4 fn_0017d328(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar3 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  if ((*param_3 & 1) != 0) {
    *(ushort *)((int)puVar3 + param_2 * 0x34 + 0x56) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    iVar1 = param_2 * 0x34;
    *(ushort *)((int)puVar3 + iVar1 + 0x5a) = param_3[3];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1c) = param_3[0xe];
    *(ushort *)((int)puVar3 + iVar1 + 0x72) = param_3[0xf];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1d) = param_3[0x10];
    *(ushort *)((int)puVar3 + iVar1 + 0x76) = param_3[0x11];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1e) = param_3[0x12];
    *(ushort *)((int)puVar3 + iVar1 + 0x7a) = param_3[0x13];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1f) = param_3[0x14];
    *(ushort *)((int)puVar3 + iVar1 + 0x7e) = param_3[0x15];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x20) = param_3[0x16];
    *(ushort *)((int)puVar3 + iVar1 + 0x82) = param_3[0x17];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x21) = param_3[0x18];
    *(ushort *)((int)puVar3 + iVar1 + 0x86) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    puVar3[param_2 * 0xd + 0x17] = *(uint *)(param_3 + 4);
    puVar3[param_2 * 0xd + 0x18] = *(uint *)(param_3 + 6);
    puVar3[param_2 * 0xd + 0x19] = *(uint *)(param_3 + 8);
    puVar3[param_2 * 0xd + 0x1a] = *(uint *)(param_3 + 10);
    puVar3[param_2 * 0xd + 0x1b] = *(uint *)(param_3 + 0xc);
  }
  *(ushort *)(puVar3 + param_2 * 0xd + 0x15) = *param_3 | (ushort)puVar3[param_2 * 0xd + 0x15];
  if (param_2 == 0) {
    uVar2 = *puVar3 | 0x1000;
  }
  else {
    if (param_2 != 1) goto code_r0x0017d480;
    uVar2 = *puVar3 | 0x2000;
  }
  *puVar3 = uVar2;
code_r0x0017d480:
  fn_00193380();
  return 1;
}



void fn_0017d2b0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_s0;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
    puVar2[param_2 + 2] = in_s0;
    if (param_2 == 0) {
      uVar3 = *puVar2 | 0x1000000;
    }
    else {
      if (param_2 != 1) goto LAB_0017d318;
      uVar3 = *puVar2 | 0x2000000;
    }
    *puVar2 = uVar3;
  }
LAB_0017d318:
  fn_00193380();
  return;
}


