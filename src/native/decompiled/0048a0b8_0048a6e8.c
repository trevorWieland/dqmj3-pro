#include "0048a0b8_0048a6e8.h"



void fn_0048a6e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [8];
  int iStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = param_2;
  uStack_1c = param_3;
  iStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  fn_001777e0(auStack_18,param_1 + 0x3c,&local_20);
  return;
}



void fn_0048a4b4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint uStack_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  
  fn_0013d0fc(&local_40);
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  uVar3 = extraout_r1;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  do {
    while( true ) {
      if (uVar4 == *(uint *)(param_1 + 0x30)) {
        puVar5 = local_38;
        if (local_34 != local_38) {
          do {
            iVar1 = fn_001249d0(local_34,uVar3);
            uVar7 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*puVar5);
            uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
            if ((int)uVar7 != 0) {
              fn_00456510();
              uVar3 = extraout_r1_03;
            }
            puVar5 = puVar5 + 1;
          } while (local_34 != puVar5);
        }
        if (local_38 != (undefined4 *)0x0) {
          if ((code *)local_38[-2] == (code *)0x0) {
            fn_0030233c();
            return;
          }
          (*(code *)local_38[-2])();
        }
        return;
      }
      iVar1 = *(int *)(uVar4 + 0x14);
      uVar3 = (uint)*(byte *)(iVar1 + 0x10);
      if (uVar3 == 1) break;
LAB_0048a618:
      uVar2 = *(uint *)(uVar4 + 0xc);
      if (*(uint *)(uVar4 + 0xc) == 0) {
        uVar2 = *(uint *)(uVar4 + 4);
        if (uVar4 == *(uint *)(uVar2 + 0xc)) {
          do {
            uVar4 = uVar2;
            uVar2 = *(uint *)(uVar4 + 4);
          } while (uVar4 == *(uint *)(uVar2 + 0xc));
        }
        uVar3 = *(uint *)(uVar4 + 0xc);
        if (uVar3 != uVar2) {
          uVar4 = uVar2;
        }
      }
      else {
        do {
          uVar4 = uVar2;
          uVar2 = *(uint *)(uVar4 + 8);
        } while (*(uint *)(uVar4 + 8) != 0);
      }
    }
    uVar3 = *(uint *)(iVar1 + 0x58);
    uVar2 = *(uint *)(iVar1 + 0x5c);
    if (uVar3 == 0 && uVar2 == 0) goto LAB_0048a618;
    bVar6 = local_40 <= uVar3;
    uVar3 = uVar3 - local_40;
    if (uStack_3c < uVar2 || uVar2 - uStack_3c < (uint)bVar6) goto LAB_0048a618;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    iVar1 = fn_001249d0(uVar2 - (uStack_3c + !bVar6),uVar3);
    fn_0048a0b8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(*(int *)(uVar4 + 0x14) + 0x44),
                 &local_4c);
    fn_0079da74(&local_38,local_34,local_4c,local_48);
    uVar3 = *(uint *)(uVar4 + 0xc);
    if (*(uint *)(uVar4 + 0xc) == 0) {
      uVar3 = *(uint *)(uVar4 + 4);
      uVar2 = uVar4;
      if (uVar4 == *(uint *)(uVar3 + 0xc)) {
        do {
          uVar2 = uVar3;
          uVar3 = *(uint *)(uVar2 + 4);
        } while (uVar2 == *(uint *)(uVar3 + 0xc));
      }
      if (*(uint *)(uVar2 + 0xc) != uVar3) {
        uVar2 = uVar3;
      }
    }
    else {
      do {
        uVar2 = uVar3;
        uVar3 = *(uint *)(uVar2 + 8);
      } while (*(uint *)(uVar2 + 8) != 0);
    }
    uStack_2c = 0x8001000b;
    puStack_28 = &DAT_007dba44;
    uStack_24 = 0x71;
    fn_00455e8c(*(undefined4 *)(uVar4 + 0x14),3,&uStack_2c,1);
    uVar3 = extraout_r1_00;
    uVar4 = uVar2;
    if (local_4c != 0) {
      if (*(code **)(local_4c + -8) == (code *)0x0) {
        fn_0030233c();
        uVar3 = extraout_r1_02;
      }
      else {
        (**(code **)(local_4c + -8))();
        uVar3 = extraout_r1_01;
      }
    }
  } while( true );
}



void fn_0048a288(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = 0;
  uVar3 = param_2;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x30) + 8);
  while (uVar4 != *(uint *)(param_1 + 0x30)) {
    iVar1 = *(int *)(uVar4 + 0x14);
    uVar3 = (uint)*(byte *)(iVar1 + 0x10);
    if ((uVar3 == 1) &&
       ((uVar3 = *(uint *)(iVar1 + 0x48), uVar3 == param_2 ||
        ((param_3 != 0 && (*(int *)(iVar1 + 0x4c) == param_3)))))) {
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      iVar1 = fn_001249d0();
      fn_0048a0b8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(*(int *)(uVar4 + 0x14) + 0x44),
                   &local_48);
      fn_0079da74(&local_3c,local_38,local_48,local_44);
      uVar3 = *(uint *)(uVar4 + 0xc);
      if (*(uint *)(uVar4 + 0xc) == 0) {
        uVar3 = *(uint *)(uVar4 + 4);
        uVar2 = uVar4;
        if (uVar4 == *(uint *)(uVar3 + 0xc)) {
          do {
            uVar2 = uVar3;
            uVar3 = *(uint *)(uVar2 + 4);
          } while (uVar2 == *(uint *)(uVar3 + 0xc));
        }
        if (*(uint *)(uVar2 + 0xc) != uVar3) {
          uVar2 = uVar3;
        }
      }
      else {
        do {
          uVar2 = uVar3;
          uVar3 = *(uint *)(uVar2 + 8);
        } while (*(uint *)(uVar2 + 8) != 0);
      }
      uStack_30 = 0x80010004;
      puStack_2c = &DAT_007dba44;
      uStack_28 = 0x71;
      fn_00455e8c(*(undefined4 *)(uVar4 + 0x14),3,&uStack_30,1);
      uVar3 = extraout_r1;
      uVar4 = uVar2;
      if (local_48 != 0) {
        if (*(code **)(local_48 + -8) == (code *)0x0) {
          fn_0030233c();
          uVar3 = extraout_r1_01;
        }
        else {
          (**(code **)(local_48 + -8))();
          uVar3 = extraout_r1_00;
        }
      }
    }
    else {
      uVar2 = *(uint *)(uVar4 + 0xc);
      if (*(uint *)(uVar4 + 0xc) == 0) {
        uVar2 = *(uint *)(uVar4 + 4);
        if (uVar4 == *(uint *)(uVar2 + 0xc)) {
          do {
            uVar4 = uVar2;
            uVar2 = *(uint *)(uVar4 + 4);
          } while (uVar4 == *(uint *)(uVar2 + 0xc));
        }
        uVar3 = *(uint *)(uVar4 + 0xc);
        if (uVar3 != uVar2) {
          uVar4 = uVar2;
        }
      }
      else {
        do {
          uVar4 = uVar2;
          uVar2 = *(uint *)(uVar4 + 8);
        } while (*(uint *)(uVar4 + 8) != 0);
      }
    }
  }
  puVar5 = local_3c;
  if (local_38 != local_3c) {
    do {
      iVar1 = fn_001249d0(local_38,uVar3);
      uVar6 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*puVar5);
      uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        fn_00456510();
        uVar3 = extraout_r1_02;
      }
      puVar5 = puVar5 + 1;
    } while (local_38 != puVar5);
  }
  if (local_3c != (undefined4 *)0x0) {
    if ((code *)local_3c[-2] == (code *)0x0) {
      fn_0030233c();
      return;
    }
    (*(code *)local_3c[-2])();
  }
  return;
}



undefined4 fn_0048a200(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  iVar1 = fn_001249d0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  iVar1 = fn_004bdc0c(uVar2,*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 == 0) {
    fn_004b301c(*(undefined4 *)(param_1 + 0x5c),5);
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  puVar5 = (uint *)(piVar3 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar4;
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(piVar3 + 2);
  }
  if (bVar6 && uVar4 == 0) {
    *(undefined1 *)(piVar3 + 2) = 1;
    (**(code **)(*piVar3 + 4))();
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return 1;
}



void fn_0048a0b8(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_10;
  
  iVar3 = param_3[1];
  if (*param_3 != iVar3) {
    param_3[1] = iVar3 - (iVar3 - *param_3 & 0xfffffffcU);
  }
  local_10 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < param_2) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      local_10 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 4);
  while (iVar1 != 0) {
    if (param_2 < *(uint *)(iVar1 + 0x10)) {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  while (local_10 != iVar3) {
    puVar2 = (undefined4 *)param_3[1];
    if (puVar2 == (undefined4 *)param_3[2]) {
      fn_0079d8f8();
    }
    else {
      param_3[1] = (int)(puVar2 + 1);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *(undefined4 *)(local_10 + 0x14);
      }
    }
    iVar1 = *(int *)(local_10 + 0xc);
    if (*(int *)(local_10 + 0xc) == 0) {
      iVar1 = *(int *)(local_10 + 4);
      if (local_10 == *(int *)(iVar1 + 0xc)) {
        do {
          local_10 = iVar1;
          iVar1 = *(int *)(local_10 + 4);
        } while (local_10 == *(int *)(iVar1 + 0xc));
      }
      if (*(int *)(local_10 + 0xc) != iVar1) {
        local_10 = iVar1;
      }
    }
    else {
      do {
        local_10 = iVar1;
        iVar1 = *(int *)(local_10 + 8);
      } while (*(int *)(local_10 + 8) != 0);
    }
  }
  return;
}


