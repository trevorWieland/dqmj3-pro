#include "004bc8d0_004c83a4.h"



undefined4 fn_004c83a4(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [4];
  int local_a4 [2];
  undefined1 auStack_9c [12];
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  int local_7c [2];
  undefined1 auStack_74 [4];
  undefined2 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  bVar1 = false;
  iVar2 = fn_004b7748(param_1 + 8,param_2,0x200,0);
  fn_00124e48(auStack_a8);
  piVar5 = (int *)**(int **)(iVar2 + 0x88);
  if (piVar5 != *(int **)(iVar2 + 0x88)) {
    do {
      uVar3 = fn_006d0c04(piVar5 + 2);
      if ((uVar3 & 2) == 0) {
        fn_00455cf0(*(undefined4 *)(param_1 + 0x8cc),piVar5 + 2);
        fn_00455cf0(*(undefined4 *)(param_1 + 0x8d0),piVar5 + 2);
        uVar6 = *(undefined4 *)(param_1 + 0x8d0);
        fn_004550fc(uVar6,*(undefined1 *)(param_1 + 0x10));
        fn_0045544c(uVar6,*(undefined1 *)(param_1 + 0x11));
        if (*(char *)(param_1 + 0x10) == '\x01') {
          fn_00455344(uVar6,*(undefined2 *)(param_1 + 0xe));
        }
        else {
          fn_00455344(uVar6,*(undefined2 *)(param_1 + 0xaa));
        }
        fn_004d540c(uVar6,local_7c);
        iVar4 = fn_006d6d58(auStack_74);
        if (iVar4 == 0) {
          fn_0013d5c4(&local_50);
          fn_004d540c(uVar6,&local_50);
          fn_0050d178(&local_50,extraout_r1_00,1,0);
          fn_0051811c(auStack_a8);
          return 0xd8a148c1;
        }
        if (*(char *)(param_1 + 0x10) == '\x01') {
          local_70 = *(undefined2 *)(param_1 + 0xe);
        }
        else {
          local_70 = *(undefined2 *)(param_1 + 0xaa);
        }
        (**(code **)(local_7c[0] + 0x14))(local_7c,*(code **)(local_7c[0] + 0x14),0x200,0);
        bVar1 = true;
      }
      else {
        fn_004d540c(piVar5 + 2,local_a4);
        iVar4 = fn_006d6d58(auStack_9c);
        if (iVar4 == 0) {
          fn_0013d5c4(&local_50);
          fn_004d540c(piVar5 + 2,&local_50);
          fn_0050d178(&local_50,extraout_r1,1,0);
          fn_0051811c(auStack_a8);
          return 0xd8a148c1;
        }
        local_81 = *(undefined1 *)(param_1 + 0x10);
        local_80 = *(undefined1 *)(param_1 + 0x11);
        iVar4 = fn_004d5aac(local_a4);
        if (iVar4 != 0) {
          if (DAT_008bf4f0 != '\0') {
            fn_0050d090(local_7c,local_a4);
            local_7f = 3;
            local_57 = 0;
          }
          local_70 = *(undefined2 *)(param_1 + 0xaa);
          (**(code **)(local_7c[0] + 0x14))(local_7c,*(code **)(local_7c[0] + 0x14),0x200,0);
        }
        (**(code **)(local_a4[0] + 0x14))(local_a4,*(code **)(local_a4[0] + 0x14),0x200,0);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(iVar2 + 0x88));
  }
  piVar5 = *(int **)(DAT_008bf4f4 + 8);
  if ((piVar5 + -0x40000 < (int *)0x3ff00000) && (*(char *)(param_1 + 0x8e8) != '\x01' && bVar1)) {
    fn_00456400();
    fn_004b41a8(&local_50,10000);
    *(undefined4 *)(param_1 + 0x930) = local_50;
    *(undefined4 *)(param_1 + 0x934) = uStack_4c;
    local_54 = 0;
    fn_0045616c(param_1 + 0x8d8,&DAT_004d3f7c,&local_54,1);
    (**(code **)(*piVar5 + 0x18))
              (piVar5,param_1 + 0x8d8,*(undefined4 *)(param_1 + 0x8cc),
               *(undefined4 *)(param_1 + 0x8d0));
  }
  local_90 = *(undefined4 *)(*(int *)(*(int *)(DAT_008bf4f4 + 0xc) + 8) + 0xc);
  local_68 = *(undefined4 *)(*(int *)(*(int *)(DAT_008bf4f4 + 0xc) + 8) + 0xc);
  local_8c = *(undefined4 *)(DAT_008bf49c + 0x30);
  local_64 = *(undefined4 *)(DAT_008bf49c + 0x30);
  fn_00518140(DAT_008c06a0 + 4,auStack_a8);
  if (DAT_008bf4f0 == '\0') {
    fn_0050d1a0(*(int *)(param_1 + 0xa0) + 0x1c,local_a4);
  }
  fn_0051811c(auStack_a8);
  return 0;
}



undefined4 * fn_004c68c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [108];
  
  *param_1 = &PTR_FUN_00855ed4;
  puVar1 = (undefined4 *)fn_004823f0(param_1 + 6);
  *puVar1 = &DAT_00856190;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = fn_004ed2e8();
  piVar3 = (int *)fn_00656e14(0x18,uVar2);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar4 = (int *)fn_0015ece0(0xc);
    iVar5 = fn_0015ece0(0x70);
    piVar4[2] = iVar5;
    *piVar4 = *piVar3;
    piVar4[1] = 1;
    *piVar3 = (int)piVar4;
    iVar5 = piVar4[2];
    piVar3[2] = iVar5;
    piVar3[3] = iVar5 + 0x70;
    iVar5 = piVar3[2];
    piVar3[4] = iVar5;
    piVar3[2] = iVar5 + 0x70;
    *(int *)iVar5 = iVar5;
    *(int *)(piVar3[4] + 4) = piVar3[4];
  }
  puVar1[-5] = piVar3;
  uVar2 = fn_0013ce04(auStack_88);
  piVar4 = (int *)piVar3[1];
  iVar5 = piVar3[4];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)piVar3[2];
    if (piVar4 == (int *)piVar3[3]) {
      if (*piVar3 == 0) {
        uVar8 = 0x20;
      }
      else {
        uVar6 = *(uint *)(*piVar3 + 4);
        uVar8 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar8 < uVar6 + 0x20) {
          uVar8 = uVar6 + 0x20;
        }
      }
      piVar4 = (int *)fn_0015ece0(0xc);
      iVar7 = fn_0015ece0(uVar8 * 0x70);
      piVar4[2] = iVar7;
      *piVar4 = *piVar3;
      piVar4[1] = uVar8;
      *piVar3 = (int)piVar4;
      piVar4 = (int *)piVar4[2];
      piVar3[2] = (int)piVar4;
      piVar3[3] = (int)(piVar4 + uVar8 * 0x1c);
    }
    piVar3[2] = (int)(piVar4 + 0x1c);
  }
  else {
    piVar3[1] = *piVar4;
  }
  if (piVar4 + 2 != (int *)0x0) {
    fn_0013cd7c(piVar4 + 2,uVar2);
  }
  *piVar4 = iVar5;
  piVar4[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar4;
  *(int **)(iVar5 + 4) = piVar4;
  piVar3[5] = piVar3[5] + 1;
  fn_0013ce98(auStack_88);
  uVar2 = fn_004ed2e8();
  iVar5 = fn_00656e14(0x68,uVar2);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = fn_0013ce04();
  }
  puVar1[-4] = uVar2;
  uVar2 = fn_004ed2e8();
  iVar5 = fn_00656e14(0x20,uVar2);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = fn_00456a78();
  }
  puVar1[-3] = uVar2;
  uVar2 = fn_004ed2e8();
  iVar5 = fn_00656e14(0x78,uVar2);
  uVar2 = 0;
  if (iVar5 != 0) {
    uVar2 = fn_0048cc04(iVar5,0);
  }
  puVar1[-2] = uVar2;
  puVar1[3] = uVar2;
  puVar1[2] = puVar1 + -6;
  return puVar1 + -6;
}



void fn_004be9cc(undefined4 param_1,int param_2)

{
  fn_0045f3dc(param_1,*(undefined4 *)(param_2 + 4));
  return;
}



undefined4 fn_004bc8d0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int iStack_34;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (param_2 == 0) {
    param_2 = 0xffffffff;
  }
  (**(code **)(*(int *)(param_1 + 0x1ac) + 8))();
  fn_0013d0fc(&local_38);
  *(uint *)(param_1 + 0x1c0) = local_38;
  *(int *)(param_1 + 0x1c4) = iStack_34;
  if (param_2 == 0xffffffff) {
    local_58 = 0;
    local_54 = local_58;
  }
  else if ((int)param_2 < 0) {
    local_58 = local_38 + param_2;
    local_54 = iStack_34 - (((int)-param_2 >> 0x1f) + (uint)(local_38 < -param_2));
  }
  else {
    local_58 = local_38 + param_2;
    local_54 = iStack_34 + ((int)param_2 >> 0x1f) + (uint)CARRY4(local_38,param_2);
  }
  fn_004bc730(param_1,&local_58);
  if ((~(param_3 >> 1) & 1) != 0) {
    while( true ) {
      local_30 = local_58;
      uStack_2c = local_54;
      fn_004bc4e4(param_1,&local_30);
      uVar1 = local_54;
      uVar2 = local_58;
      if (((param_3 & 1) == 0) ||
         ((uVar4 = 0xffffffff, local_58 != 0 || local_54 != 0 &&
          ((fn_0013d0fc(&local_50),
           uVar1 < uStack_4c || uStack_4c - uVar1 < (uint)(uVar2 <= local_50) ||
           (uVar4 = uVar2 - local_50, uVar4 == 0)))))) break;
      (**(code **)(*(int *)(param_1 + 0x78) + 8))();
      if (*(int *)(param_1 + 0x104) != 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x100) + 8);
        local_28 = *(undefined4 *)(iVar3 + 0x10);
        uStack_24 = *(undefined4 *)(iVar3 + 0x14);
        uVar2 = fn_006d3f80(param_1,&local_28);
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
      }
      (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
      fn_006d0e70(param_1 + 0x10,uVar4,&local_40,1);
      uVar1 = local_54;
      uVar2 = local_58;
      if ((local_58 != 0 || local_54 != 0) &&
         ((fn_0013d0fc(&local_50),
          uVar1 < uStack_4c || uStack_4c - uVar1 < (uint)(uVar2 <= local_50) || (uVar2 == local_50))
         )) break;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x78) + 8))();
  uVar5 = *(undefined4 *)(param_1 + 0xd8);
  (**(code **)(*(int *)(param_1 + 0x78) + 0xc))((int *)(param_1 + 0x78));
  local_40 = local_58;
  uStack_3c = local_54;
  iVar3 = fn_006d3f80(param_1,&local_40);
  if (iVar3 != 0) {
    fn_004bc730(param_1,&local_58);
  }
  (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))((int *)(param_1 + 0x1ac));
  return uVar5;
}


