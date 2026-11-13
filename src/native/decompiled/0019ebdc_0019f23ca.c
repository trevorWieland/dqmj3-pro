#include "0019ebdc_0019f23ca.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}


undefined4 fn_0019f00c(int param_1,int param_2)

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
  *(ushort *)(puVar2 + 0x28) = (ushort)puVar2[0x28] & 0xff00;
  *puVar2 = *puVar2 | 0x10000;
  fn_00193380();
  return 1;
}



void fn_0019ed84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  fn_00193374();
  fn_00170704(param_1 + 8);
  iVar1 = fn_00189e18();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x131c) != '\0')) {
    uVar2 = fn_00189e28();
    iVar1 = param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 8;
    uVar4 = *(undefined4 *)(iVar1 + 0x12f4);
    uVar5 = *(undefined4 *)(iVar1 + 0x12f8);
    if (*(char *)(param_1 + 0x15b0) != '\0') {
      fn_0019ea78(&DAT_008ef56c,0,uVar4);
      fn_0019ea78(&DAT_008ef56c,1,uVar5);
    }
    fn_001a3b08(&DAT_008ef56c,0,uVar4);
    fn_001a3b08(&DAT_008ef56c,1,uVar5);
    fn_001a38a8(&DAT_008f0bc0);
    fn_001a3a54(&DAT_008f0bc0);
    iVar6 = *(int *)(param_1 + 0x1324);
    iVar1 = fn_001a3a88(&DAT_008ef56c);
    iVar3 = fn_001a3834(uVar2);
    fn_001a38dc(&DAT_008f0bc0,(iVar6 - iVar1) - iVar3,*(undefined4 *)(param_1 + 0x1328));
    **(undefined2 **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x109c) =
         *(undefined2 *)(param_1 + 0x131e);
    *(short *)(param_1 + 0x131e) = *(short *)(param_1 + 0x131e) + 1;
    svc_0x18();
    if (*(int *)(param_1 + 4) < 0) {
      fn_0015e294();
    }
    *(ushort *)(param_1 + 0x1322) = *(ushort *)(param_1 + 0x131e) & 1;
    *(char *)(param_1 + 0x131d) = *(char *)(param_1 + 0x131d) + '\x01';
  }
  fn_001707b4(param_1 + 8);
  fn_00193380();
  return;
}



void fn_0019ed20(int param_1,int param_2,undefined1 param_3)

{
  fn_00170704(param_1 + 0x34);
  *(undefined1 *)(param_1 + param_2 + 0x30) = param_3;
  fn_0017d024(&DAT_008ef5bc,param_2);
  fn_001707b4(param_1 + 0x34);
  return;
}



void fn_0019ebdc(void)

{
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = DAT_008ef5d0 + 1;
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
  DAT_008ef5d0 = iVar2;
  if (DAT_008c034e != '\0') {
    iVar2 = fn_0019f0e8(&DAT_008ef5bc,iVar2,0x952b80,0,iVar2);
    if (iVar2 != 0) {
      fn_0019eee8(&DAT_008ef5bc);
      DAT_008c0351 = 0;
      do {
        bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
      } while (!bVar1);
      goto LAB_0019ec58;
    }
    DAT_008c034d = '\x01';
  }
  if (DAT_008c034d != '\0') {
    do {
      bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
    } while (!bVar1);
    DAT_008ef5d0 = DAT_008ef5d0 + -1;
    fn_0015def0(&DAT_008c0354);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
    } while (!bVar1);
    DAT_008ef5d0 = DAT_008ef5d0 + 1;
    fn_0013c428(&DAT_008c0354);
  }
  if (DAT_008c034f == '\0') {
    fn_0019f158(&DAT_008ef5bc);
    fn_0019eee8(&DAT_008ef5bc);
    DAT_008c0351 = 0;
  }
  else {
    fn_0012d6a4(0x4a95c0,0);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
LAB_0019ec58:
  DAT_008ef5d0 = DAT_008ef5d0 + -1;
  return;
}



void fn_0019eee8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  uint extraout_r1;
  uint uVar4;
  
  fn_00193374();
  fn_00170704();
  iVar2 = fn_00189e18();
  if ((iVar2 != 0) && (*(char *)(param_1 + 0x131c) != '\0')) {
    uVar3 = 1;
    sVar1 = **(short **)(param_1 + (~(uint)*(ushort *)(param_1 + 0x131e) & 1) * 4 + 0x109c);
    if (sVar1 != 0) {
      uVar4 = 0;
      if (sVar1 == -1) {
        uVar3 = 2;
      }
      *(short *)(param_1 + 0x131e) = sVar1 + 1;
      if (sVar1 == -1) {
        *(undefined2 *)(param_1 + 0x131e) = uVar3;
      }
      *(ushort *)(param_1 + 0x1320) = *(ushort *)(param_1 + 0x131e) & 1;
      do {
        fn_001a812c(&DAT_008f0bc0,uVar4,
                     *(undefined4 *)
                      (param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 0x60 + (uVar4 & 0xff) * 4 +
                      0x1174));
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 0x18);
      fn_0017821c(param_1 + 0x1328,
                   *(undefined4 *)(param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 4 + 0x1314),0x260
                  );
      iVar2 = *(int *)(param_1 + 0x18);
      uVar4 = extraout_r1;
      if (iVar2 != 0) {
        uVar4 = (uint)*(byte *)(iVar2 + 0x10);
      }
      if (iVar2 != 0 && uVar4 != 0) {
        fn_001a3ba8(iVar2,*(undefined4 *)
                            (param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 4 + 0x1304),0xa0);
      }
      fn_001a3b7c(&DAT_008ef56c);
    }
  }
  fn_001707b4(param_1 + 8);
  fn_00193380();
  return;
}


