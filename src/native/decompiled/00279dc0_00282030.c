#include "00279dc0_00282030.h"



undefined4 fn_00282030(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = fn_00157f58(param_1,0xffffffff,local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028212c,(char *)&DAT_00282118,(char *)&DAT_007c29c0,0x850)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_006f751c(DAT_008977e0);
  if (iVar1 == 0) {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
      DAT_008f9e2c = 0;
      DAT_008f9e30 = 0;
      DAT_008f9e34 = 0;
    }
    fn_00148a34(param_1,&DAT_008f9e2c);
  }
  else {
    local_14 = *(undefined4 *)(iVar1 + 0x44);
    uStack_10 = *(undefined4 *)(iVar1 + 0x48);
    uStack_c = *(undefined4 *)(iVar1 + 0x4c);
    fn_00148a34(param_1,&local_14);
  }
  return 1;
}



undefined4 fn_00281f58(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18 [4];
  
  iVar1 = fn_00157f58(param_1,0xffffffff,local_18);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00282014,(char *)&DAT_00282000,(char *)&DAT_007c29d5,0x874)
    ;
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar3 = fn_006f751c(DAT_008977e0);
  uVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    uVar2 = local_18[0];
  }
  fn_00163890((int)uVar3,uVar2);
  fn_00158070(param_1);
  return 1;
}



undefined4 fn_002816d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028179c,(char *)&DAT_00281788,(char *)&DAT_007c29ac,0x839);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_002817b8,(char *)&DAT_00281788,(char *)&DAT_007c29ac,0x83c);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00341488(local_10,local_c != 0);
  return 0;
}



undefined4 fn_00281498(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_006f751c(DAT_008977e0);
  uVar1 = fn_00341930();
  fn_001580cc(param_1,uVar1);
  return 1;
}



undefined4 fn_00280894(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0028090c,(char *)&DAT_002808f8,(char *)&DAT_007c2987,0x81f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00341358(local_10);
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_0028064c(void)

{
  int iVar1;
  
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    fn_00227ba0(DAT_00897894,0);
    fn_00682a8c();
  }
  return 0;
}



undefined4 fn_0028057c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_003412c0();
  uVar2 = fn_006f7a84(DAT_008977e0);
  fn_001e55a8(uVar2,uVar1);
  fn_006f7a0c(DAT_008977e0);
  fn_00683dc0();
  return 0;
}



undefined4 fn_0027f8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027f918,(char *)&DAT_0027f904,(char *)&DAT_007c2975,0x813);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_00341260(local_10);
  fn_00158004(param_1,uVar2);
  return 1;
}



undefined4 fn_0027f638(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027f704,(char *)&DAT_0027f6f0,(char *)&DAT_007c299a,0x82a);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027f720,(char *)&DAT_0027f6f0,(char *)&DAT_007c299a,0x82d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  fn_00341378(local_10,local_c != 0);
  return 0;
}



undefined4 fn_0027e840(void)

{
  int iVar1;
  
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    fn_002277d8(DAT_00897894,0);
    fn_00682a8c();
  }
  return 0;
}



undefined4 fn_0027ce14(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_0027ce8c,(char *)&DAT_0027ce78,(char *)&DAT_007c26a5,0x630);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  uVar2 = fn_006f7a5c(DAT_008977e0);
  fn_001d68cc(uVar2,local_10 & 0xff);
  return 0;
}



void fn_0027a144(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x206;
  *param_1 = &DAT_0081e0b4;
  param_1[7] = &DAT_0081e0c4;
  do {
    fn_00279ae4(param_1,iVar3);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar4 = param_1[0xc];
  for (iVar3 = param_1[0xb]; iVar3 != iVar4; iVar3 = iVar3 + 0x14) {
    if (*(undefined4 **)(iVar3 + 0xc) != &DAT_008f9cf4) {
      piVar1 = *(undefined4 **)(iVar3 + 0xc) + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*(int *)(iVar3 + 0xc) + -0xc,*(int *)(*(int *)(iVar3 + 0xc) + -8) + 8,0);
      }
    }
  }
  iVar3 = param_1[0xb];
  fn_001008c4(iVar3,(param_1[0xd] - iVar3) / 0x14,0);
  iVar4 = param_1[9];
  for (iVar3 = param_1[8]; iVar3 != iVar4; iVar3 = iVar3 + 0x14) {
    if (*(undefined4 **)(iVar3 + 0xc) != &DAT_008f9cf4) {
      piVar1 = *(undefined4 **)(iVar3 + 0xc) + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*(int *)(iVar3 + 0xc) + -0xc,*(int *)(*(int *)(iVar3 + 0xc) + -8) + 8,0);
      }
    }
  }
  iVar3 = param_1[8];
  fn_001008c4(iVar3,(param_1[10] - iVar3) / 0x14,0);
  fn_00241ddc(param_1);
  return;
}



undefined4 * fn_0027a08c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_28 [12];
  undefined4 *local_1c [2];
  
  iVar1 = fn_001129d0(param_1,0x207);
  puVar2 = (undefined4 *)fn_0069c2c8(iVar1 + 0x1c);
  puVar2[-7] = &DAT_0081e0b4;
  *puVar2 = &DAT_0081e0c4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  local_1c[0] = &DAT_008f9cf4;
  fn_00279bd4(auStack_28);
  fn_0078ca18(puVar2 + 1,0x207,auStack_28);
  fn_001588d4(local_1c);
  local_1c[0] = &DAT_008f9cf4;
  fn_00279bd4(auStack_28);
  fn_0078ca18(puVar2 + 4,2,auStack_28);
  fn_001588d4(local_1c);
  return puVar2 + -7;
}



undefined4 fn_00279fe4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x1c4;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2350) != 0) {
    uVar1 = 0xffffffff;
  }
  uVar2 = fn_00242bd4(param_2);
  fn_00101a50(auStack_90,0x80,L"patch:/data/Mask/%s.bch",uVar2);
  fn_002775a0(param_1,uVar1,auStack_90,3,0,0x80,0);
  return uVar1;
}



int fn_00279dc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [128];
  
  iVar2 = 0xf;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 0x14) == 0) goto LAB_00279dfc;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x5f);
  iVar2 = -1;
LAB_00279dfc:
  uVar1 = fn_00211cd4(param_2);
  if (iVar2 != -1) {
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Item/%s.bch",uVar1);
    fn_002775a0(param_1,iVar2,auStack_98,0,0,0x80,param_2);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Item/%s_F.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 1,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Item/%s_W.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 2,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Item/%s_S.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 3,auStack_98,4,0,0x80,0);
  }
  return iVar2;
}


