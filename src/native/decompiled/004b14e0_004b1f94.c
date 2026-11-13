#include "004b14e0_004b1f94.h"



void fn_004b1f94(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_008556e8;
  local_14 = param_1[0x14];
  local_18 = *(undefined4 *)(local_14 + 8);
  fn_0076e8fc(auStack_10,param_1 + 0x10,&local_18,&local_14);
  piVar3 = param_1 + 0x10;
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = iVar1;
    fn_0076e8fc(auStack_10,piVar3,&local_18,&local_14);
    iVar1 = param_1[0x14];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x11];
    param_1[0x11] = iVar1;
    piVar2 = (int *)*piVar3;
    while (piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      fn_0014f1bc(piVar2[2]);
      fn_0014f1bc(piVar2);
      piVar2 = (int *)*piVar3;
    }
  }
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar1 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar1 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar1 + -8) = 0;
  return;
}



undefined4 * fn_004b1e54(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  uVar1 = fn_0013d3e8(auStack_30,L"<unknown>");
  puVar2 = (undefined4 *)fn_0047a4a4(param_1,uVar1);
  fn_00170f54(auStack_30);
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 1;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  piVar6 = puVar2 + 0x10;
  *puVar2 = &DAT_008556e8;
  *piVar6 = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  *(undefined1 *)(puVar2 + 0x16) = 0;
  *(undefined1 *)((int)puVar2 + 0x59) = 0xe8;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x280);
  piVar3[2] = iVar4;
  *piVar3 = *piVar6;
  piVar3[1] = 0x20;
  *piVar6 = (int)piVar3;
  puVar5 = (undefined1 *)piVar3[2];
  puVar2[0x12] = puVar5;
  puVar2[0x13] = puVar5 + 0x280;
  puVar2[0x12] = puVar5 + 0x14;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  *puVar5 = 0;
  puVar2[0x14] = puVar5;
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)(puVar2[0x14] + 8) = puVar2[0x14];
  *(undefined4 *)(puVar2[0x14] + 0xc) = puVar2[0x14];
  puVar2[0x17] = param_2;
  puVar2[0xb] = puVar2[0xb] | 8;
  uVar1 = fn_0013d3e8(auStack_28,L"NintendoNotificationEventManager");
  fn_0047a2e4(puVar2,uVar1);
  fn_00170f54(auStack_28);
  return puVar2;
}



void fn_004b1da8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b1dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_2);
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  while (iVar3 != *(int *)(param_1 + 0x50)) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),param_2);
    iVar2 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar2 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar2 + 0xc)) {
        do {
          iVar3 = iVar2;
          iVar2 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  }
  return;
}



undefined4 fn_004b1820(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_60 [68];
  
  fn_004b73b0(auStack_60);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_60,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_60,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return 0;
  }
  fn_004ba7ac(auStack_60,0x29);
  fn_0015ef4c(auStack_60,param_3,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_4);
  }
  DAT_008e6818 = fn_004b1b4c;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_60);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_60);
  fn_004b7520(auStack_60);
  return uVar4;
}



void fn_004b1b4c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_b8 [176];
  
  iVar1 = fn_0048cbf8(param_2,0);
  if (iVar1 == 0) {
    fn_00101a1c(auStack_b8,fn_0047e0b0,0xb0,1);
    fn_00493134(param_1,auStack_b8);
    fn_00100414(auStack_b8,&LAB_0047e188,0xb0,1);
    return;
  }
  fn_00493134(param_1,iVar1);
  return;
}



void fn_004b14e0(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_150 [112];
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [4];
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *puStack_64;
  int *local_60;
  int local_5c;
  int local_50 [3];
  int local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c [4];
  
  iVar2 = fn_0048cbf8(param_2,0);
  if (iVar2 != 0) {
    piVar7 = *(int **)(iVar2 + 0x10);
    piVar10 = (int *)*piVar7;
    iVar11 = local_44;
    while (local_44 = (int)piVar10, (int *)local_44 != piVar7) {
      fn_00786e84(&local_30,iVar2,&local_44);
      piVar10 = local_30;
      iVar11 = local_44;
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar3 + 0x10) - iVar5) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      uVar8 = 0;
      puVar4 = (uint *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + iVar5);
      uVar6 = *puVar4;
      bVar1 = *(byte *)((int)puVar4 + 3);
      *(int *)(param_1 + 0xc) = iVar5 + 4;
      local_44 = iVar11;
      while ((uVar8 < (uVar6 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0')))
      {
        fn_00124930(auStack_150);
        fn_004a1fa4(param_1,auStack_150);
        if (*(char *)(param_1 + 4) != '\0') {
          piVar7 = *(int **)(iVar2 + 0x10);
          piVar10 = (int *)*piVar7;
          iVar11 = local_40;
          while (local_40 = (int)piVar10, (int *)local_40 != piVar7) {
            fn_00786e84(local_2c,iVar2,&local_40);
            piVar10 = local_2c[0];
            iVar11 = local_40;
          }
          local_40 = iVar11;
          fn_004a2158(auStack_150);
          return;
        }
        piVar10 = *(int **)(iVar2 + 4);
        iVar11 = *(int *)(iVar2 + 0x10);
        if (piVar10 == (int *)0x0) {
          if (*(int *)(iVar2 + 8) == *(int *)(iVar2 + 0xc)) {
            fn_00786da0(iVar2,0);
          }
          piVar10 = *(int **)(iVar2 + 8);
          *(int **)(iVar2 + 8) = piVar10 + 0x1e;
        }
        else {
          *(int *)(iVar2 + 4) = *piVar10;
        }
        if (piVar10 + 2 != (int *)0x0) {
          fn_0048c758(piVar10 + 2,auStack_150);
        }
        *piVar10 = iVar11;
        piVar10[1] = *(int *)(iVar11 + 4);
        **(undefined4 **)(iVar11 + 4) = piVar10;
        *(int **)(iVar11 + 4) = piVar10;
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        fn_004a2158(auStack_150);
        uVar8 = uVar8 + 1;
      }
    }
    return;
  }
  fn_00101a1c(auStack_70,fn_004b5170,0x18,1);
  piVar10 = local_60;
  piVar7 = (int *)*local_60;
  iVar2 = local_50[0];
  while (local_50[0] = (int)piVar7, (int *)local_50[0] != piVar10) {
    fn_00786e84(&local_38,auStack_70,local_50);
    piVar7 = local_38;
    iVar2 = local_50[0];
  }
  iVar11 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  local_50[0] = iVar2;
  if ((uint)(*(int *)(iVar11 + 0x10) - iVar3) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar8 = 0;
    puVar4 = (uint *)(*(int *)(iVar11 + 0x18) + *(int *)(iVar11 + 0xc) + iVar3);
    uVar6 = *puVar4;
    bVar1 = *(byte *)((int)puVar4 + 3);
    *(int *)(param_1 + 0xc) = iVar3 + 4;
    while ((uVar8 < (uVar6 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0'))) {
      fn_00124930(auStack_e0);
      fn_004a1fa4(param_1,auStack_e0);
      piVar10 = local_60;
      if (*(char *)(param_1 + 4) != '\0') {
        piVar7 = (int *)*local_60;
        piVar10 = local_3c;
        while (local_3c = piVar7, local_3c != local_60) {
          fn_00786e84(&local_34,auStack_70,&local_3c);
          piVar7 = local_34;
          piVar10 = local_3c;
        }
        local_3c = piVar10;
        fn_004a2158(auStack_e0);
        break;
      }
      if (local_6c == (undefined4 *)0x0) {
        if (local_68 == puStack_64) {
          fn_00786da0(auStack_70,0);
        }
        puVar9 = local_68;
        local_68 = local_68 + 0x1e;
      }
      else {
        puVar9 = local_6c;
        local_6c = (undefined4 *)*local_6c;
      }
      if (puVar9 + 2 != (undefined4 *)0x0) {
        fn_0048c758(puVar9 + 2,auStack_e0);
      }
      *puVar9 = piVar10;
      puVar9[1] = piVar10[1];
      *(undefined4 **)piVar10[1] = puVar9;
      piVar10[1] = (int)puVar9;
      local_5c = local_5c + 1;
      fn_004a2158(auStack_e0);
      uVar8 = uVar8 + 1;
    }
  }
  fn_00100414(auStack_70,fn_004b51c4,0x18,1);
  return;
}


