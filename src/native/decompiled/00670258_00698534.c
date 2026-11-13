#include "00670258_00698534.h"



undefined4 fn_00698534(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 0:
    if (*(char *)(param_1 + 0x16c) == '\a') {
LAB_006985c4:
      fn_0068326c(*(undefined4 *)(param_1 + 0x3c));
    }
    else {
      iVar4 = *(int *)(param_1 + 0xe0);
      bVar6 = iVar4 < 0;
      if (!bVar6) {
        iVar4 = (int)*(char *)(param_1 + 0x108);
      }
      if ((bVar6 || iVar4 < 0) ||
         (iVar4 = fn_006f612c(*(undefined4 *)(param_1 + 0x3c)), iVar4 != 0)) goto LAB_006985c4;
    }
    uVar5 = fn_001603f8(&local_48,0xff);
    fn_00163988(DAT_00897808,uVar5,0x14);
    uVar5 = fn_001603f8(&local_48,0xff);
    fn_00163988(DAT_0089780c,uVar5,0x14);
    *(undefined4 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 4) + 0x3f0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x174) = 1;
    break;
  case 1:
    iVar4 = fn_006f73a0(param_1,1);
    if (iVar4 == 0) {
      return 0;
    }
    fn_00219400(*(undefined4 *)
                  (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x84) * 4),0);
    uVar5 = fn_001603f8(auStack_34,0);
    fn_00163988(DAT_0089780c,uVar5,1);
    if ((DAT_00897850 == 0) || (iVar4 = fn_0066eb04(), iVar4 == 0)) {
      *(undefined4 *)(param_1 + 0x174) = 3;
      return 0;
    }
    fn_001296e8(DAT_00898840);
    fn_005f3c7c(0);
    puVar1 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0x28),0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_00698704;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_00698704:
    uVar5 = fn_0022f584((char *)&DAT_0069888c,0);
    local_40 = 0;
    local_44 = 1;
    local_3c = 0;
    uStack_38 = 1;
    local_48 = 1;
    fn_0036c5f4(puVar1,uVar5,1,0);
    *(undefined1 *)((int)puVar1 + 0x51) = 1;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    fn_001f749c(*(undefined4 *)(param_1 + 0x28),0x48,0,1);
    uVar5 = 2;
    goto LAB_00698758;
  case 2:
    puVar1 = (undefined4 *)fn_001f751c(*(undefined4 *)(param_1 + 0x28),0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_006987b4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_006987b4:
    if ((0x1e < (uint)puVar1[0x16]) && (iVar4 = fn_001296d0(DAT_00898840), iVar4 == 0)) {
      fn_0036c340(puVar1);
      *(undefined4 *)(param_1 + 0x174) = 3;
    }
    break;
  case 3:
    iVar3 = fn_00145b00(8,&DAT_00812c8c);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = fn_00303fd0(iVar3,*(undefined4 *)(param_1 + 0x28));
    }
    iVar3 = *(int *)(param_1 + 0x224);
    if (iVar3 != iVar4) {
      if (iVar3 != 0) {
        fn_002feef8(iVar3);
      }
      *(int *)(param_1 + 0x224) = iVar4;
    }
    fn_00303f80(*(undefined4 *)(param_1 + 0x224));
    *(undefined4 *)(param_1 + 0x174) = 4;
    break;
  case 4:
    iVar4 = fn_00303edc(*(undefined4 *)(param_1 + 0x224));
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = fn_006bd958(*(undefined4 *)(param_1 + 0x224));
    if (iVar4 != 0) {
      return 0;
    }
    uVar5 = 5;
LAB_00698758:
    *(undefined4 *)(param_1 + 0x174) = uVar5;
    break;
  case 5:
    if (*(int *)(param_1 + 0x224) != 0) {
      fn_002feef8(*(int *)(param_1 + 0x224));
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    fn_001e33e8(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    fn_00694a10(param_1);
    return 1;
  }
  return 0;
}



undefined4 fn_00670258(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x12];
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0x13) & 4) != 0) {
      (**(code **)(*DAT_008bf4f4 + 0x20))();
      (**(code **)(*param_1 + 0x34))(param_1,1);
      return 0;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = fn_00673be8(param_1);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x30))(param_1,0);
        return 0;
      }
      return 0;
    }
    iVar1 = (**(code **)(*DAT_008bf4f4 + 0x18))();
    if (iVar1 == 0) {
      fn_004f121c(DAT_008bf49c,0);
      return 0;
    }
    (**(code **)(*DAT_008bf4f4 + 0x24))();
    (**(code **)(*DAT_008bf4f4 + 0xc))();
    param_1[0x13] = param_1[0x13] & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x34))(param_1,2);
  return 0;
}


