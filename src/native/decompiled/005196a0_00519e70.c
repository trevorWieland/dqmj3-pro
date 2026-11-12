#include "005196a0_00519e70.h"



undefined1 * fn_00519e70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 4) == '\0') {
    uVar1 = *(undefined1 *)(param_2 + 5);
    uVar2 = *(undefined1 *)(param_1 + 0x14);
    iVar4 = fn_0050b080(DAT_008bf4cc,uVar1,0,param_4,param_4);
    if (iVar4 - 0x100000U < 0x3ff00000) {
      if (*(int *)(iVar4 + 0x24) - 0x100000U < 0x3ff00000) {
        puVar3 = (undefined1 *)
                 fn_0051783c(*(int *)(iVar4 + 0x24),*(undefined4 *)(param_1 + 0x10),
                              *(undefined4 *)(param_1 + 0xc),uVar2,uVar1);
        return puVar3;
      }
      puVar3 = &DAT_e0a14827;
    }
    else {
      puVar3 = &DAT_d8814829;
    }
  }
  else if (*(char *)(param_2 + 4) == '\x01') {
    iVar4 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(param_2 + 5),1,param_4,param_4);
    if ((iVar4 - 0x100000U < 0x3ff00000) && (*(int *)(iVar4 + 0x24) - 0x100000U < 0x3ff00000)) {
      fn_005175e4();
    }
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)0xe161482a;
  }
  return puVar3;
}



longlong fn_00519c84(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_28;
  
  uVar3 = *(int *)(param_1 + 0x10) - 0x100000;
  if (0x3fefffff < uVar3) {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    return CONCAT44(uVar3,&DAT_e0a14827);
  }
  local_28 = *(undefined4 *)(param_1 + 0xc);
  puVar1 = (undefined4 *)fn_0050953c(*(int *)(param_1 + 0x10),&local_28);
  uVar6 = (**(code **)(*(int *)*puVar1 + 0x2c))();
  while (uVar3 = (uint)((ulonglong)uVar6 >> 0x20), (int)uVar6 == 0) {
    iVar2 = fn_006d9a38(puVar1);
    uVar7 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(*(int *)(iVar2 + 4) + 1));
    uVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),&DAT_d8814829);
    if (((int)uVar7 != 0) && (iVar5 = *(int *)((int)uVar7 + 0x24), iVar5 - 0x100000U < 0x3ff00000))
    {
      uVar7 = fn_006db038(iVar5);
      uVar6 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),&DAT_e0a14827);
      if ((int)uVar7 != 0) {
        uVar6 = fn_005171e8(iVar5,iVar2);
        iVar2 = (int)uVar6;
        if ((-1 < iVar2) && (DAT_008bf4a0 != 0)) {
          uVar4 = *(undefined4 *)(iVar5 + 0x1c);
          uVar6 = fn_004eea84(DAT_008bf4a0,5);
          fn_004f15b4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,0);
          uVar6 = CONCAT44(extraout_r1,iVar2);
          if (DAT_008bf4a0 != 0) {
            uVar4 = *(undefined4 *)(iVar5 + 0x30);
            uVar6 = fn_004eea84(DAT_008bf4a0,6);
            fn_004f15b4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4,0);
            uVar6 = CONCAT44(extraout_r1_00,iVar2);
          }
        }
      }
    }
    uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
    if (((int)uVar6 < 0) && ((int)uVar6 == -0x279eb7d4)) break;
    uVar6 = (**(code **)(*(int *)*puVar1 + 0x2c))();
  }
  return (ulonglong)uVar3 << 0x20;
}



void fn_00519b1c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0x5c4) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + uVar2 * 4);
        if (iVar1 != 0) {
          fn_00656b0c(iVar1);
          fn_00656b7c(iVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x5c4));
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    fn_00100654(*(undefined4 *)(param_1 + 0x1c),&LAB_004ed7e4);
    fn_004ecfb0();
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



undefined4 fn_00519980(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_28;
  int iStack_24;
  
  local_28 = 0;
  iStack_24 = 0;
  fn_004f01f4(&local_28);
  iVar3 = iStack_24;
  uVar2 = local_28;
  if ((*(int *)(param_1 + 0x24) - 0x100000U < 0x3ff00000) &&
     (uVar9 = 0, *(int *)(param_1 + 0x5c4) != 0)) {
    do {
      if (*(int *)(*(int *)(param_1 + 0xc) + uVar9 * 4) != 0) {
        puVar6 = (uint *)(*(int *)(param_1 + 8) + uVar9 * 8);
        uVar4 = *puVar6;
        uVar7 = puVar6[1];
        if ((uVar4 == 0 && uVar7 == 0) ||
           ((int)(iVar3 - (uVar7 + (uVar2 < uVar4))) < 0 !=
            (SBORROW4(iVar3,uVar7) != SBORROW4(iVar3 - uVar7,(uint)(uVar2 < uVar4))))) {
          puVar6 = (uint *)(*(int *)(param_1 + 4) + uVar9 * 8);
          uVar4 = puVar6[1];
          bVar11 = uVar2 < *puVar6;
          if ((int)(iVar3 - (uVar4 + bVar11)) < 0 ==
              (SBORROW4(iVar3,uVar4) != SBORROW4(iVar3 - uVar4,(uint)bVar11))) {
            bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + uVar9);
            if (bVar1 < 0xc) {
              iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x10))
                                (*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x20) + uVar9 * 4,
                                 bVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar9 * 4));
            }
            else {
              iVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x18))
                                (*(int **)(param_1 + 0x24),*(int *)(param_1 + 0x20) + uVar9 * 4,
                                 *(int *)(param_1 + 0x1c) + uVar9 * 0x10,
                                 *(undefined4 *)(*(int *)(param_1 + 0x14) + uVar9 * 4),0);
            }
            if (iVar5 - 0x100000U < 0x3ff00000) {
              fn_001694d4(iVar5,*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar9 * 4));
              fn_0050a490(*(undefined4 *)(param_1 + 0x24));
              bVar11 = CARRY4(DAT_008c0698,uVar2);
              piVar8 = (int *)(*(int *)(param_1 + 4) + uVar9 * 8);
              iVar5 = DAT_008c069c + iVar3;
              *piVar8 = DAT_008c0698 + uVar2;
              piVar8[1] = iVar5 + (uint)bVar11;
            }
          }
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar9 * 4) = 0;
          puVar10 = (undefined4 *)(*(int *)(param_1 + 8) + uVar9 * 8);
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = (undefined4 *)(*(int *)(param_1 + 4) + uVar9 * 8);
          *puVar10 = 0;
          puVar10[1] = 0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x5c4));
  }
  return 0;
}



undefined4 fn_0051995c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    *(int *)(param_1 + 0x24) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



void fn_00519948(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  **(undefined4 **)(param_1 + 0xc) = 0;
  return;
}



undefined4
fn_00519798(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,undefined1 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint local_48;
  uint uStack_44;
  int iStack_34;
  undefined4 *local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  iVar3 = fn_006d9934(*(undefined4 *)(param_1 + 0x24));
  if (param_4 <= iVar3 - 4U) {
    local_48 = 0;
    uStack_44 = 0;
    fn_004f01f4(&local_48);
    uVar2 = uStack_44;
    uVar1 = local_48;
    if ((param_9 == 0 && param_10 == 0) ||
       ((int)(uStack_44 - (param_10 + (local_48 < param_9))) < 0 !=
        (SBORROW4(uStack_44,param_10) != SBORROW4(uStack_44 - param_10,(uint)(local_48 < param_9))))
       ) {
      uVar4 = *(uint *)(param_1 + 0x5c4);
      uVar6 = 0;
      do {
        bVar7 = *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 4) == 0;
        bVar8 = uVar4 != uVar6;
        bVar9 = uVar6 <= uVar4;
        if (!bVar7 && uVar6 < uVar4) {
          uVar6 = uVar6 + 1;
        }
      } while ((bVar7 || bVar9) && (!bVar7 && bVar8));
      if (uVar4 <= uVar6) {
        return 0xd861482c;
      }
      bVar7 = *(int *)(param_1 + 0x28) == 0;
      if (bVar7) {
        *(uint *)(param_1 + 0x28) = local_48;
      }
      if (bVar7 && local_48 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
      fn_001694e4(*(undefined4 *)(*(int *)(param_1 + 0x10) + uVar6 * 4),local_2c,param_4);
      fn_004ed514(*(int *)(*(int *)(param_1 + 0x10) + uVar6 * 4) + param_4,
                   *(undefined4 *)(param_1 + 0x28));
      *(uint *)(*(int *)(param_1 + 0x14) + uVar6 * 4) = param_4 + 4;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + uVar6) = param_5;
      fn_004ed810(*(int *)(param_1 + 0x1c) + uVar6 * 0x10,param_6);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + uVar6 * 4) = param_7;
      puVar5 = (uint *)(*(int *)(param_1 + 4) + uVar6 * 8);
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5 = (uint *)(*(int *)(param_1 + 8) + uVar6 * 8);
      *puVar5 = param_9;
      puVar5[1] = param_10;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4) = *(undefined4 *)(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
      *local_30 = *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4);
      return 0;
    }
  }
  return 0xe0e14826;
}



undefined4 fn_005196a0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x5c4) != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 4) == param_2) {
        *(undefined4 *)(*(int *)(param_1 + 0xc) + uVar1 * 4) = 0;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 8);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + uVar1 * 8);
        *puVar2 = 0;
        puVar2[1] = 0;
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x5c4));
  }
  return 0;
}


