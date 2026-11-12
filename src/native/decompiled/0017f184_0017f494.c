#include "0017f184_0017f494.h"



void fn_0017f494(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  int local_48;
  int local_44;
  int local_40 [3];
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uStack_2c = param_3;
  local_30 = param_2;
  piStack_34 = param_1;
  puVar11 = (uint *)(param_1 + 1);
  local_48 = 1;
  local_28 = param_4;
  if (param_1[3] - param_1[1] >> 2 == 0) {
    uVar7 = param_1[2] - param_1[1] >> 2;
    local_40[2] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if ((uint)local_40[2] < uVar7 + 0x20) {
      local_40[2] = uVar7 + 0x20;
    }
    piVar8 = local_40 + 2;
    if ((uint)local_40[2] < 2) {
      piVar8 = &local_48;
    }
    iVar12 = *piVar8;
    puVar2 = (undefined4 *)fn_00100fc6(iVar12 << 2,0);
    puVar10 = (undefined4 *)param_1[2];
    puVar3 = puVar2;
    for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar11;
    uVar7 = uVar4;
    if ((uint)param_1[2] <= uVar4) {
      for (; uVar7 != param_1[2]; uVar7 = uVar7 + 4) {
      }
    }
    fn_001008c4(uVar4,(int)(param_1[3] - uVar4) >> 2,0);
    uVar7 = *puVar11;
    param_1[1] = (int)puVar2;
    param_1[2] = (param_1[2] - uVar7 & 0xfffffffc) + (int)puVar2;
    param_1[3] = (int)(puVar2 + iVar12);
  }
  puVar11 = (uint *)(param_1 + 4);
  local_48 = 1;
  if (param_1[6] - param_1[4] >> 2 == 0) {
    uVar7 = param_1[5] - param_1[4] >> 2;
    local_40[2] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if ((uint)local_40[2] < uVar7 + 0x20) {
      local_40[2] = uVar7 + 0x20;
    }
    piVar8 = local_40 + 2;
    if ((uint)local_40[2] < 2) {
      piVar8 = &local_48;
    }
    iVar12 = *piVar8;
    puVar2 = (undefined4 *)fn_00100fc6(iVar12 << 2,0);
    puVar10 = (undefined4 *)param_1[5];
    puVar3 = puVar2;
    for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar11;
    uVar7 = uVar4;
    if ((uint)param_1[5] < uVar4) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != param_1[5]);
    }
    fn_001008c4(uVar4,(int)(param_1[6] - uVar4) >> 2,0);
    uVar7 = *puVar11;
    *puVar11 = (uint)puVar2;
    param_1[5] = (param_1[5] - uVar7 & 0xfffffffc) + (int)puVar2;
    param_1[6] = (int)(puVar2 + iVar12);
  }
  puVar11 = (uint *)(param_1 + 8);
  local_48 = 1;
  if (param_1[10] - param_1[8] >> 2 == 0) {
    uVar7 = param_1[9] - param_1[8] >> 2;
    local_40[2] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if ((uint)local_40[2] < uVar7 + 0x20) {
      local_40[2] = uVar7 + 0x20;
    }
    piVar8 = local_40 + 2;
    if ((uint)local_40[2] < 2) {
      piVar8 = &local_48;
    }
    iVar12 = *piVar8;
    puVar2 = (undefined4 *)fn_00100fc6(iVar12 << 2,0);
    puVar10 = (undefined4 *)param_1[9];
    puVar3 = puVar2;
    for (puVar6 = (undefined4 *)*puVar11; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar11;
    uVar7 = uVar4;
    if ((uint)param_1[9] < uVar4) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != param_1[9]);
    }
    fn_001008c4(uVar4,(int)(param_1[10] - uVar4) >> 2,0);
    uVar7 = *puVar11;
    *puVar11 = (uint)puVar2;
    param_1[9] = (param_1[9] - uVar7 & 0xfffffffc) + (int)puVar2;
    param_1[10] = (int)(puVar2 + iVar12);
  }
  iVar5 = fn_00145b00(0xa4,&DAT_00812c8c);
  iVar12 = 0;
  if (iVar5 != 0) {
    iVar12 = fn_0018a6d4();
  }
  param_1[7] = iVar12;
  iVar12 = fn_00145b00(0x100,&DAT_00812c8c);
  local_44 = 0;
  if (iVar12 != 0) {
    local_44 = fn_0018a9fc(iVar12,local_30);
  }
  iVar12 = fn_00145b00(0xd8,&DAT_00812c8c);
  local_40[0] = 0;
  if (iVar12 != 0) {
    local_40[0] = fn_0018a84c(iVar12,param_3);
  }
  fn_0018a69c(param_1[7],local_40[0]);
  fn_0018a69c(param_1[7],local_44);
  *(byte *)(param_1[7] + 0x44) = *(byte *)(param_1[7] + 0x44) & 0xfe | 1;
  *(byte *)(local_40[0] + 0x44) = *(byte *)(local_40[0] + 0x44) & 0xfe | 1;
  *(byte *)(local_44 + 0x44) = (byte)param_6 ^ 1 | *(byte *)(local_44 + 0x44) & 0xfe;
  fn_0018a69c(local_28,param_1[7]);
  if (param_6 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  local_40[1] = 0;
  (**(code **)(*param_1 + 8))(param_1,local_44,param_5,local_40 + 1);
  fn_00191a4c(param_1 + 1,&local_44);
  fn_00191894(param_1 + 4,local_40);
  fn_00191c04(param_1 + 8,local_40 + 1);
  iVar12 = param_1[5] - param_1[4] >> 2;
  if (iVar12 == 0) {
    local_48 = iVar12;
    fn_002ff628(9,&DAT_008c7665);
  }
  iVar12 = *(int *)param_1[4];
  iVar5 = *(int *)(iVar12 + 0x1c);
  iVar9 = *(int *)(iVar12 + 0x20);
  iVar12 = *(int *)(iVar12 + 0x24);
  param_1[0xf] = iVar5;
  param_1[0x10] = iVar9;
  param_1[0x11] = iVar12;
  param_1[0xc] = iVar5;
  param_1[0xd] = iVar9;
  param_1[0xe] = iVar12;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x12) = 1;
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}



void fn_0017f464(undefined4 param_1,char *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)*param_2;
  uVar2 = iVar1 - 0x10;
  if (3 < uVar2) {
    param_4 = iVar1 - 0x18;
  }
  if ((3 < uVar2 && 3 < param_4) && (iVar1 != 0x20 && iVar1 != 0x22)) {
    return;
  }
  fn_0018cb08(param_1,(int)(char)uVar2);
  return;
}



void fn_0017f45c(int param_1,char *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)*param_2;
  uVar2 = iVar1 - 0x10;
  if (3 < uVar2) {
    param_4 = iVar1 - 0x18;
  }
  if ((3 < uVar2 && 3 < param_4) && (iVar1 != 0x20 && iVar1 != 0x22)) {
    return;
  }
  fn_0018cb08(*(undefined4 *)(param_1 + 0x74),(int)(char)uVar2);
  return;
}



undefined4 fn_0017f184(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar5 = *(char *)(param_1 + 5) == '\0';
  iVar1 = fn_00182988(DAT_008977e4);
  local_28 = *(undefined4 *)(iVar1 + 0x244);
  uStack_24 = *(undefined4 *)(iVar1 + 0x248);
  uStack_20 = *(undefined4 *)(iVar1 + 0x24c);
  uStack_1c = *(undefined4 *)(iVar1 + 0x250);
  iVar1 = fn_00190ea4(&local_28,bVar5);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      *(byte *)(*(int *)(param_1 + 0x88) + 0x44) = *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe
      ;
      return 0;
    }
    *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x88) + 0x44) = *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe;
    iVar3 = fn_00190eb0(&local_28,bVar5);
    *(int *)(param_1 + 8) = iVar3;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar3 = iVar3 + iVar1;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = fn_001911c4(param_1,iVar1);
    iVar1 = 0;
    do {
      if (uVar2 == 0) {
        iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x70);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      else {
        if (*(char *)(param_1 + 0x1c) == '\0') {
          iVar4 = param_1 + iVar1 * 4;
          iVar3 = *(int *)(iVar4 + 0x70);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
          fn_0018cbc4(param_1,*(undefined4 *)(iVar4 + 0x70),2,uVar2 % 10);
        }
        else if (iVar1 == 0) {
          fn_0018cbc4(param_1,*(undefined4 *)(param_1 + 0x70),2,uVar2 % 10);
        }
        else {
          iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x70);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
        }
        uVar2 = uVar2 / 10;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x88) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe;
    iVar1 = fn_00190eb0(&local_28,bVar5);
    *(int *)(param_1 + 8) = iVar1;
    *(int *)(param_1 + 0x24) = iVar1 + *(int *)(param_1 + 0x20);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = fn_001911c4(param_1);
    iVar1 = 0;
    do {
      if (uVar2 == 0) {
        iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x28);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      else {
        if (*(char *)(param_1 + 0x1c) == '\0') {
          iVar4 = param_1 + iVar1 * 4;
          iVar3 = *(int *)(iVar4 + 0x28);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
          fn_0018cbc4(param_1,*(undefined4 *)(iVar4 + 0x28),0,uVar2 % 10);
        }
        else if (iVar1 == 0) {
          fn_0018cbc4(param_1,*(undefined4 *)(param_1 + 0x28),0,uVar2 % 10);
        }
        else {
          iVar3 = *(int *)(param_1 + iVar1 * 4 + 0x28);
          *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
        }
        uVar2 = uVar2 / 10;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
  }
  return 1;
}


