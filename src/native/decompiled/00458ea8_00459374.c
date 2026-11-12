#include "00458ea8_00459374.h"



void fn_00459374(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_008b6514;
  uVar4 = param_1[0x22];
  if (uVar4 == 0 && param_1[0x23] == 0) {
    param_1[0x22] = DAT_008b6510;
    param_1[0x23] = iVar2;
  }
  else {
    uVar5 = DAT_008b6510 - uVar4;
    iVar1 = DAT_008b6514 - (param_1[0x23] + (uint)(DAT_008b6510 < uVar4));
    if ((int)-(iVar1 + (uint)(0x19 < uVar5)) < 0 !=
        (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(0x19 < uVar5)))) {
      param_1[0x22] = DAT_008b6510;
      param_1[0x23] = iVar2;
      fn_0047283c(param_1 + 5,0x19 - uVar5);
      iVar1 = fn_001249d0();
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
      }
      piVar3 = (int *)(iVar2 + 0x50);
      (**(code **)(*piVar3 + 8))();
      (**(code **)(*param_1 + 0x44))(param_1);
      iVar2 = *(int *)(param_1[0x19] + 8);
      if (iVar2 != param_1[0x19]) {
        do {
          fn_00460c78(*(undefined4 *)(iVar2 + 0x34));
          iVar1 = *(int *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) == 0) {
            iVar1 = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(iVar1 + 0xc)) {
              do {
                iVar2 = iVar1;
                iVar1 = *(int *)(iVar2 + 4);
              } while (iVar2 == *(int *)(iVar1 + 0xc));
            }
            if (*(int *)(iVar2 + 0xc) != iVar1) {
              iVar2 = iVar1;
            }
          }
          else {
            do {
              iVar2 = iVar1;
              iVar1 = *(int *)(iVar2 + 8);
            } while (*(int *)(iVar2 + 8) != 0);
          }
        } while (iVar2 != param_1[0x19]);
      }
      (**(code **)(*param_1 + 0x48))(param_1);
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  fn_00458500(param_1,0);
  return;
}



void fn_004591b0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r10;
  bool bVar6;
  undefined1 auStack_4c [16];
  undefined4 local_3c;
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  *(byte *)(param_4 + 0x25) = *(byte *)(param_1 + 4) | (char)param_1[1] << 4;
  *(byte *)(param_4 + 0x26) = (byte)param_3 | (char)param_1[1] << 4;
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  (**(code **)(*param_1 + 0x44))(param_1);
  piVar3 = (int *)fn_0047edec(param_1 + 0x15,param_4 + 0xdc);
  (**(code **)(*param_1 + 0x48))(param_1);
  if (piVar3 == (int *)0x0) {
    iVar5 = (**(code **)(*(int *)param_1[0x3c] + 0x10))
                      ((int *)param_1[0x3c],param_4,(char)param_1[1]);
  }
  else {
    if (param_5 != 0) {
      unaff_r10 = 1;
    }
    *(char *)(param_4 + 0x24) = (char)piVar3[0x53];
    if (param_5 == 0) {
      unaff_r10 = 0;
    }
    iVar5 = param_1[1];
    uVar2 = *(ushort *)(param_4 + 0x3c) & 0xf;
    bVar6 = uVar2 == 1;
    if (bVar6) {
      uVar2 = (ushort)*(byte *)(piVar3 + 0x53);
    }
    if ((bVar6 && uVar2 == 1) &&
       (uVar4 = (**(code **)(*piVar3 + 0x7c))(piVar3), (uVar4 & 0x2000000) == 0)) {
      iVar5 = 4;
    }
    else {
      iVar5 = (**(code **)(*(int *)piVar3[0x7f] + 0x10))
                        ((int *)piVar3[0x7f],param_4,(char)iVar5,unaff_r10);
    }
  }
  if (iVar5 != 1) {
    local_3c = 0;
    iVar5 = (**(code **)(*(int *)param_1[0x3c] + 8))((int *)param_1[0x3c],param_4);
    uVar1 = local_3c;
    if (iVar5 == 0) {
      return;
    }
    fn_0017821c(param_4 + 0x28,auStack_4c,local_3c);
    *(undefined4 *)(param_4 + 0x38) = uVar1;
  }
  (**(code **)(*(int *)param_1[3] + 0x20))
            ((int *)param_1[3],local_30,(char)param_1[1],(char)param_1[4],param_3,param_4,
             (int)DAT_008b639c);
  return;
}



undefined4 fn_00459074(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0xbc);
  local_20 = iVar1;
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      local_20 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((local_20 == iVar1) || (param_2 < *(uint *)(local_20 + 0x10))) {
    local_20 = iVar1;
  }
  while ((local_20 != iVar1 && (*(uint *)(local_20 + 0x10) == param_2))) {
    if (*(int *)(local_20 + 0x14) == param_3) {
      fn_00779a60(auStack_1c,param_1 + 0xac,&local_20);
      (**(code **)(*piVar3 + 0xc))(piVar3);
      return 1;
    }
    iVar2 = *(int *)(local_20 + 0xc);
    if (*(int *)(local_20 + 0xc) == 0) {
      iVar2 = *(int *)(local_20 + 4);
      if (local_20 == *(int *)(iVar2 + 0xc)) {
        do {
          local_20 = iVar2;
          iVar2 = *(int *)(local_20 + 4);
        } while (local_20 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(local_20 + 0xc) != iVar2) {
        local_20 = iVar2;
      }
    }
    else {
      do {
        local_20 = iVar2;
        iVar2 = *(int *)(local_20 + 8);
      } while (*(int *)(local_20 + 8) != 0);
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 0;
}



undefined4 fn_00458ea8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  int *piVar8;
  int local_20;
  undefined1 auStack_1c [8];
  
  piVar6 = &local_20;
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar8 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar8 + 8))(piVar8);
  iVar2 = *(int *)(param_1 + 0xd8);
  local_20 = iVar2;
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      local_20 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((local_20 == iVar2) || (param_2 < *(uint *)(local_20 + 0x10))) {
    local_20 = iVar2;
  }
  while ((local_20 != iVar2 && (*(uint *)(local_20 + 0x10) == param_2))) {
    if (*(int *)(local_20 + 0x14) == param_3) {
      puVar7 = *(undefined1 **)(local_20 + 0x10);
      fn_00779a60(auStack_1c,param_1 + 200);
      piVar3 = *(int **)(param_1 + 0xe8);
      piVar4 = *(int **)(param_1 + 0xe4);
      while( true ) {
        if (piVar4 != piVar3) {
          piVar6 = (int *)*piVar4;
        }
        if (piVar4 == piVar3 || piVar6 == (int *)puVar7) break;
        piVar4 = piVar4 + 1;
      }
      if (*(int **)(param_1 + 0xe4) != piVar3) {
        piVar6 = piVar4 + 1;
        if ((piVar3 != piVar6) && (iVar1 = (int)piVar3 - (int)piVar6, 0 < iVar1 >> 2)) {
          piVar3 = piVar4;
          piVar5 = piVar4 + -1;
          if (iVar1 * 0x20000000 < 0) {
            *piVar4 = *piVar6;
            piVar3 = piVar6;
            piVar5 = piVar4;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            piVar5[1] = piVar3[1];
            piVar3 = piVar3 + 2;
            piVar5 = piVar5 + 2;
            *piVar5 = *piVar3;
          }
        }
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -4;
      }
      (**(code **)(*piVar8 + 0xc))(piVar8);
      return 1;
    }
    iVar1 = *(int *)(local_20 + 0xc);
    if (*(int *)(local_20 + 0xc) == 0) {
      iVar1 = *(int *)(local_20 + 4);
      if (local_20 == *(int *)(iVar1 + 0xc)) {
        do {
          local_20 = iVar1;
          iVar1 = *(int *)(local_20 + 4);
        } while (local_20 == *(int *)(iVar1 + 0xc));
      }
      if (*(int *)(local_20 + 0xc) != iVar1) {
        local_20 = iVar1;
      }
    }
    else {
      do {
        local_20 = iVar1;
        iVar1 = *(int *)(local_20 + 8);
      } while (*(int *)(local_20 + 8) != 0);
    }
  }
  (**(code **)(*piVar8 + 0xc))(piVar8);
  return 0;
}


