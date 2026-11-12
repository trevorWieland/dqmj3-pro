#include "00104a3c_00104ccc.h"

static void svc_0x3(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x3 }
#endif
}


void fn_00104cac(void)

{
  fn_00106a0c();
  fn_00104d3c(0);
  fn_00104ccc(0);
  fn_001069c8();
  return;
}



int fn_00104ccc(uint param_1)

{
  int iVar1;
  
  iVar1 = fn_00106bf4();
  if (iVar1 == 0) {
    DAT_0089a543 = 1;
    fn_00106ad4(&DAT_008e31f4,0x100);
    iVar1 = fn_00106c04(0x300,param_1 & 0xfffffff8,0xf);
    if (-1 < iVar1) {
      fn_00125694();
      fn_00106f3c(0);
      fn_001257a8();
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_00104c58(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00300190(0,0x4000027);
  iVar2 = fn_001054b0(0);
  *(int *)(iVar1 + 4) = iVar2 + 1;
  uVar3 = fn_00177494(0);
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104c38) */

void fn_00104c24(void)

{
  return;
}



int fn_00104bd4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00105330();
  iVar2 = fn_001076e4();
  if (iVar2 == 0) {
    fn_00104d4c();
  }
  fn_001053d0();
  iVar2 = fn_0010be8c();
  if ((iVar2 == 0) && (iVar2 = fn_0010bb8c(), iVar2 == 0)) {
    return 0;
  }
  uVar1 = DAT_0089a54c;
  iVar2 = fn_0010be8c();
  if ((iVar2 == 0) && (iVar2 = fn_0010bb8c(), iVar2 == 0)) {
    fn_00146594();
  }
  iVar2 = fn_00114808();
  if (iVar2 != 9) {
    fn_00115e64(0,0);
    fn_00114818(9);
    while( true ) {
      fn_00125694();
      iVar2 = fn_0010c194(1);
      fn_001257a8();
      if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
      fn_0012d6a4(10000000,0);
    }
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x106e58);
    }
  }
  fn_0010ba74(1);
  fn_001150b0(0);
  while( true ) {
    fn_00125694();
    iVar2 = fn_0010c140(0,0,uVar1);
    fn_001257a8();
    if ((iVar2 != -0x375f3010 && iVar2 != -0x1f5f33f8) && iVar2 != -0x375f33fe) break;
    fn_0012d6a4(10000000,0);
  }
  if (iVar2 < 0) {
    fn_0015e590(iVar2,0x106eb0);
  }
  fn_0011509c();
  svc_0x3();
  return iVar2;
}



void fn_00104bcc(void)

{
  svc_0x3();
  return;
}



void fn_00104b00(int *param_1,int param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}



uint fn_00104acc(int *param_1,ushort param_2)

{
  uint uVar1;
  ushort *puVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1c) < 0) {
    puVar2 = (ushort *)param_1[9];
    if (param_1[10] - (int)puVar2 >> 1 != 0) {
      param_1[9] = (int)(puVar2 + 1);
      *puVar2 = param_2;
      return (uint)param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00104af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



void fn_00104aba(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) | 4;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



void fn_00104aa8(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) | 2;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



void fn_00104a92(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}



uint fn_00104a60(int *param_1,byte param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((int)((uint)*(byte *)(param_1 + 1) << 0x1c) < 0) {
    pbVar2 = (byte *)param_1[9];
    if ((byte *)param_1[10] != pbVar2) {
      param_1[9] = (int)(pbVar2 + 1);
      *pbVar2 = param_2;
      return (uint)param_2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00104a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



void fn_00104a4e(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffb;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) | 4;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}



void fn_00104a3c(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10) | 2;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}


