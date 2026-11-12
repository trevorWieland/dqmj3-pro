#include "005055c4_0050d470a.h"



undefined4 fn_00507a50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 100) == 0) {
    *(uint *)(param_1 + 0x74) = (uint)*(byte *)(DAT_008bf4e0 + 99);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(uint *)(param_1 + 0x7c) = (uint)*(byte *)(DAT_008bf4e0 + 0x62);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  else {
    uVar1 = fn_006db878(DAT_008c06a0,*(undefined4 *)(DAT_008bf4cc + 0xa4));
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar1 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
    uVar1 = fn_006db878(DAT_008c06a0,uVar1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    if ((*(int *)(param_1 + 100) == 0) || (*(char *)(param_1 + 0x71) != '\x04')) {
      *(undefined4 *)(param_1 + 0x7c) = uVar1;
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x84) = uVar1;
      *(undefined4 *)(param_1 + 0x88) = 0;
      uVar1 = (**(code **)(**(int **)(param_1 + (uint)*(byte *)(param_1 + 0xb5) * 4 + 0xb8) + 0x90))
                        ();
      *(undefined4 *)(param_1 + 0x7c) = uVar1;
      *(undefined4 *)(param_1 + 0x80) = 0;
      local_28 = 0;
      local_24 = 0;
      iVar2 = fn_006d9cd0(*(undefined4 *)(DAT_008bf4d4 + 0x7c),&local_28,
                           *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
      if ((iVar2 < 0) ||
         (iVar2 = fn_006d9cd0(*(undefined4 *)(DAT_008bf4d4 + 0x7c),&local_28,
                               *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88)),
         iVar2 < 0)) {
        return 0;
      }
      iVar2 = fn_006d8e38(*(undefined4 *)(DAT_008bf4e8 + 100),&local_28,local_30);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = local_30[0];
      }
      *(undefined4 *)(param_1 + 0xfc) = uVar1;
    }
  }
  return 1;
}



undefined4 fn_005079c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_008bf4e8 + 100) == 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    *(uint *)(param_1 + 0x74) = (uint)bVar1;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(uint *)(param_1 + 0x7c) = (uint)bVar1;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x78);
  }
  else {
    uVar2 = fn_006db878(DAT_008c06a0,*(undefined4 *)(DAT_008bf4cc + 0xa4));
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x78);
  }
  return 1;
}



void fn_005075d8(void)

{
  fn_005059c0(DAT_008bf4e0);
  return;
}



void fn_005059c0(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  fn_004f2a00();
  return;
}



undefined4 fn_005055c4(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_60 [24];
  int local_48;
  int local_20;
  
  if ((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x61) != '\0')) {
    return 2;
  }
  if (*(ushort *)(param_1 + 0x5c) < *(ushort *)(param_1 + 0x5e)) {
    uVar3 = 1;
    uVar2 = 0;
    do {
      if ((*(uint *)(param_1 + 0x6c) & uVar3) == 0) {
        if ((uVar2 & 0xff) == 0xfd) {
          return 0;
        }
        if (*(char *)(DAT_008bf4d4 + 0x80) != '\0') {
          fn_00124e48(auStack_60);
          iVar1 = fn_006db908(DAT_008c06a0,param_2,auStack_60);
          if (iVar1 < 0) {
            fn_0051811c(auStack_60);
            return 2;
          }
          bVar4 = local_48 == 0;
          if (bVar4) {
            local_48 = local_20;
          }
          if (((bVar4 && local_48 == 0) ||
              (iVar1 = fn_006d9e60(*(undefined4 *)(DAT_008bf4d4 + 0x7c),local_48), iVar1 == 0)) &&
             ((uVar3 = fn_006d9c3c(*(undefined4 *)(DAT_008bf4d4 + 0x7c)),
              *(uint *)(DAT_008bf4d4 + 0x30) <= uVar3 ||
              (iVar1 = *(int *)(DAT_008bf4d4 + 0x7c), uVar3 = fn_006d9c3c(iVar1),
              *(uint *)(iVar1 + 0x34) <= uVar3)))) {
            fn_0051811c(auStack_60);
            return 0;
          }
          fn_0051811c(auStack_60);
        }
        return 0xff;
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 << 1;
    } while (uVar2 < 0xc);
  }
  return 0;
}


