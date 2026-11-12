#include "005dfc48_005dffcc.h"



void fn_005dffcc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(iVar1 + 2000) = *param_2;
  *(undefined4 *)(iVar1 + 0x7d4) = uVar2;
  *(undefined4 *)(iVar1 + 0x7d8) = uVar3;
  *(undefined4 *)(iVar1 + 0x7dc) = uVar4;
  *(undefined4 *)(iVar1 + 0x7e0) = uVar5;
  *(undefined4 *)(iVar1 + 0x7e4) = uVar6;
  *(undefined4 *)(iVar1 + 0x7e8) = uVar7;
  *(undefined4 *)(iVar1 + 0x7ec) = uVar8;
  uVar6 = param_2[9];
  uVar7 = param_2[10];
  uVar8 = param_2[0xb];
  uVar2 = param_2[0xc];
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  *(undefined4 *)(iVar1 + 0x7f0) = param_2[8];
  *(undefined4 *)(iVar1 + 0x7f4) = uVar6;
  *(undefined4 *)(iVar1 + 0x7f8) = uVar7;
  *(undefined4 *)(iVar1 + 0x7fc) = uVar8;
  *(undefined4 *)(iVar1 + 0x800) = uVar2;
  *(undefined4 *)(iVar1 + 0x804) = uVar3;
  *(undefined4 *)(iVar1 + 0x808) = uVar4;
  *(undefined4 *)(iVar1 + 0x80c) = uVar5;
  return;
}



void fn_005dffa4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(iVar1 + 0x810) = *param_2;
  *(undefined4 *)(iVar1 + 0x814) = uVar2;
  *(undefined4 *)(iVar1 + 0x818) = uVar3;
  *(undefined4 *)(iVar1 + 0x81c) = uVar4;
  *(undefined4 *)(iVar1 + 0x820) = uVar5;
  *(undefined4 *)(iVar1 + 0x824) = uVar6;
  *(undefined4 *)(iVar1 + 0x828) = uVar7;
  *(undefined4 *)(iVar1 + 0x82c) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  uVar5 = param_2[0xc];
  uVar6 = param_2[0xd];
  uVar7 = param_2[0xe];
  uVar8 = param_2[0xf];
  *(undefined4 *)(iVar1 + 0x830) = param_2[8];
  *(undefined4 *)(iVar1 + 0x834) = uVar2;
  *(undefined4 *)(iVar1 + 0x838) = uVar3;
  *(undefined4 *)(iVar1 + 0x83c) = uVar4;
  *(undefined4 *)(iVar1 + 0x840) = uVar5;
  *(undefined4 *)(iVar1 + 0x844) = uVar6;
  *(undefined4 *)(iVar1 + 0x848) = uVar7;
  *(undefined4 *)(iVar1 + 0x84c) = uVar8;
  return;
}



undefined4 * fn_005dfeb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_008588e4;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    *puVar1 = 0;
    iVar2 = fn_00101a1c(puVar1 + 1,&LAB_001ad8ac,0xc,2);
    iVar3 = iVar2 + -4;
    *(undefined1 *)(iVar2 + 0x18) = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 != iVar3) {
    if (iVar2 != 0) {
      fn_005dfbd4();
      fn_00100414(iVar2 + 4,fn_00796448,0xc,2);
      fn_002feef8(iVar2);
    }
    param_1[1] = iVar3;
  }
  return param_1;
}



void fn_005dfc48(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort local_58 [4];
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  
  if ((*(int *)param_1[1] != 0) && (iVar3 = fn_006ec95c(), iVar3 != 0)) {
    iVar3 = param_1[1];
    uVar4 = *(byte *)(iVar3 + 0x1c) ^ 1;
    *(char *)(iVar3 + 0x1c) = (char)uVar4;
    iVar3 = iVar3 + uVar4 * 0xc;
    uVar4 = *(uint *)(iVar3 + 4);
    uVar7 = *(uint *)(iVar3 + 8);
    if (uVar4 != uVar7) {
      uVar5 = uVar4;
      if (uVar7 <= uVar4) {
        do {
          uVar5 = uVar5 + 4;
        } while (uVar5 != uVar7);
      }
      *(uint *)(iVar3 + 8) = uVar7 - (uVar7 - uVar4 & 0xfffffffc);
    }
    puVar6 = (undefined4 *)param_1[1];
    uVar4 = (uint)*(byte *)(puVar6 + 7);
    uVar7 = uVar4 ^ 1;
    fn_006eca08(*puVar6,param_2,puVar6 + uVar4 * 3 + 1);
    puVar8 = (ushort *)puVar6[uVar4 * 3 + 1];
    puVar9 = (ushort *)puVar6[uVar7 * 3 + 1];
    while ((ushort *)puVar6[uVar4 * 3 + 2] != puVar8) {
      if (puVar9 == (ushort *)puVar6[uVar7 * 3 + 2]) {
        fn_006ec970(*(undefined4 *)param_1[1],*puVar8,&local_34);
        local_58[0] = *puVar8;
        local_50 = local_1c;
        local_4c = (undefined1)puVar8[1];
        local_48 = local_34;
        uStack_44 = local_30;
        uStack_40 = uStack_2c;
        local_38 = local_24;
        local_3c = local_28;
        (**(code **)(*param_1 + 8))(param_1,local_58);
        puVar8 = puVar8 + 2;
      }
      else {
        uVar1 = *puVar8;
        uVar2 = *puVar9;
        if (uVar1 < uVar2) {
          fn_006ec970(*(undefined4 *)param_1[1],uVar1,&local_34);
          local_58[0] = *puVar8;
          local_50 = local_1c;
          local_4c = (undefined1)puVar8[1];
          local_48 = local_34;
          uStack_44 = local_30;
          uStack_40 = uStack_2c;
          local_38 = local_24;
          local_3c = local_28;
          (**(code **)(*param_1 + 8))(param_1,local_58);
          puVar8 = puVar8 + 2;
        }
        else {
          if (uVar1 == uVar2) {
            if ((char)puVar8[1] != (char)puVar9[1]) {
              fn_006ec970(*(undefined4 *)param_1[1],uVar1,&local_48);
              local_58[0] = *puVar8;
              local_50 = local_30;
              local_4c = (undefined1)puVar8[1];
              local_4b = (undefined1)puVar9[1];
              (**(code **)(*param_1 + 0x10))(param_1,local_58);
            }
            puVar8 = puVar8 + 2;
          }
          else {
            local_58[0] = uVar2;
            (**(code **)(*param_1 + 0xc))(param_1,local_58);
          }
          puVar9 = puVar9 + 2;
        }
      }
    }
    for (; (ushort *)puVar6[uVar7 * 3 + 2] != puVar9; puVar9 = puVar9 + 2) {
      local_58[0] = *puVar9;
      (**(code **)(*param_1 + 0xc))(param_1,local_58);
    }
  }
  return;
}


