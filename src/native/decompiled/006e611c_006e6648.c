#include "006e611c_006e6648.h"



int fn_006e6648(int param_1)

{
  int iVar1;
  char acStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = ((int)*(char *)(DAT_00897840 + 4) / 2) * 0xc + -0x30;
  if ((*(byte *)(DAT_00897840 + 4) & 1) == 0) {
    local_30 = 2;
    uStack_2c = 4;
    uStack_28 = 6;
    uStack_24 = 0;
    uStack_20 = 6;
    uStack_1c = 4;
    uStack_18 = 6;
    uStack_14 = 0;
    local_10 = 2;
    uStack_c = 4;
    local_8 = 2;
    uStack_4 = 0;
    return (int)acStack_34[*(char *)(param_1 + 1) * 4 + iVar1 + 0x30];
  }
  local_30 = 3;
  uStack_2c = 5;
  uStack_28 = 7;
  uStack_24 = 1;
  uStack_20 = 7;
  uStack_1c = 5;
  uStack_18 = 7;
  uStack_14 = 1;
  local_10 = 3;
  uStack_c = 5;
  local_8 = 3;
  uStack_4 = 1;
  return (int)acStack_34[*(char *)(param_1 + 1) * 4 + iVar1 + 0x30];
}



int fn_006e65bc(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  char acStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = ((int)param_2 / 2) * 0xc + -0x30;
  if ((param_2 & 1) == 0) {
    local_30 = 2;
    uStack_2c = 4;
    uStack_28 = 6;
    uStack_24 = 0;
    uStack_20 = 6;
    uStack_1c = 4;
    uStack_18 = 6;
    uStack_14 = 0;
    local_10 = 2;
    local_c = 4;
    local_8 = 2;
    local_4 = 0;
    cVar2 = acStack_34[*(char *)(param_1 + 1) * 4 + iVar1 + 0x30];
  }
  else {
    local_30 = 3;
    uStack_2c = 5;
    uStack_28 = 7;
    uStack_24 = 1;
    uStack_20 = 7;
    uStack_1c = 5;
    uStack_18 = 7;
    uStack_14 = 1;
    local_10 = 3;
    local_c = 5;
    local_8 = 3;
    local_4 = 1;
    cVar2 = acStack_34[*(char *)(param_1 + 1) * 4 + iVar1 + 0x30];
  }
  return (int)cVar2;
}



int fn_006e65a0(byte *param_1,char param_2)

{
  if ((*param_1 & 1) == 0) {
    param_2 = param_2 << 1;
  }
  else {
    param_2 = param_2 * '\x02' + '\x01';
  }
  return (int)param_2;
}



void fn_006e6544(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  if (iVar1 == 1) {
    puVar2 = &LAB_00561524;
  }
  else if (iVar1 == 2) {
    puVar2 = &LAB_005614ec;
  }
  else if (iVar1 == 3) {
    puVar2 = &LAB_005615a4;
  }
  *param_1 = 0;
  param_1[1] = puVar2;
  param_1[2] = 0;
  return;
}



void fn_006e63f8(int param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  short extraout_r1;
  undefined4 extraout_r1_00;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  pbVar8 = *(byte **)(*(int *)(param_1 + 0xc) + 0xc);
  iVar5 = fn_00169f1c(param_3,(uint)*(ushort *)(pbVar8 + 0xc) * (uint)*(ushort *)(pbVar8 + 0xe));
  *param_2 = *(int *)(pbVar8 + 4) * iVar5 + *(int *)(pbVar8 + 0x14);
  iVar7 = *(int *)(param_1 + 0xc);
  puVar6 = *(ushort **)(iVar7 + 0x10);
  do {
    if (puVar6 == (ushort *)0x0) {
LAB_006e6484:
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar7 + 8);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(iVar7 + 10);
      param_2[5] = param_1 + 0x10;
      *(short *)((int)param_2 + 0x12) = (short)iVar5;
      uVar3 = *(ushort *)(pbVar8 + 0xc);
      fn_00169f1c(param_3,(uint)uVar3 * (uint)*(ushort *)(pbVar8 + 0xe));
      sVar4 = fn_00169f1c(extraout_r1_00,(uint)uVar3);
      bVar1 = pbVar8[1];
      bVar2 = *pbVar8;
      *(byte *)((int)param_2 + 7) = bVar1;
      *(char *)(param_2 + 4) = (char)*(undefined2 *)(pbVar8 + 10);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pbVar8 + 0x10);
      *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(pbVar8 + 0x12);
      *(ushort *)(param_2 + 3) = (bVar2 + 1) * extraout_r1 + 1;
      *(ushort *)((int)param_2 + 0xe) = (bVar1 + 1) * sVar4 + 1;
      return;
    }
    bVar10 = param_3 <= *puVar6;
    bVar9 = *puVar6 == param_3;
    if (!bVar10 || bVar9) {
      bVar10 = puVar6[1] <= param_3;
      bVar9 = param_3 == puVar6[1];
    }
    if (!bVar10 || bVar9) {
      iVar7 = (int)puVar6 + (param_3 - *puVar6) * 3;
      goto LAB_006e6484;
    }
    puVar6 = *(ushort **)(puVar6 + 2);
  } while( true );
}



void fn_006e63c0(int param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  short extraout_r1;
  undefined4 extraout_r1_00;
  int iVar8;
  undefined4 unaff_r4;
  byte *pbVar9;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  bool bVar10;
  bool bVar11;
  
  uVar5 = fn_006e62b4(param_1,param_3);
  if (uVar5 == 0xffff) {
    uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 6);
  }
  pbVar9 = *(byte **)(*(int *)(param_1 + 0xc) + 0xc);
  iVar6 = fn_00169f1c(uVar5,(uint)*(ushort *)(pbVar9 + 0xc) * (uint)*(ushort *)(pbVar9 + 0xe));
  *param_2 = *(int *)(pbVar9 + 4) * iVar6 + *(int *)(pbVar9 + 0x14);
  iVar8 = *(int *)(param_1 + 0xc);
  puVar7 = *(ushort **)(iVar8 + 0x10);
  do {
    if (puVar7 == (ushort *)0x0) {
LAB_006e6484:
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(iVar8 + 8);
      *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(iVar8 + 10);
      param_2[5] = param_1 + 0x10;
      *(short *)((int)param_2 + 0x12) = (short)iVar6;
      uVar3 = *(ushort *)(pbVar9 + 0xc);
      fn_00169f1c(uVar5,(uint)uVar3 * (uint)*(ushort *)(pbVar9 + 0xe),iVar6,param_1 + 0x10,unaff_r4
                   ,unaff_r5,unaff_r6);
      sVar4 = fn_00169f1c(extraout_r1_00,(uint)uVar3);
      bVar1 = pbVar9[1];
      bVar2 = *pbVar9;
      *(byte *)((int)param_2 + 7) = bVar1;
      *(char *)(param_2 + 4) = (char)*(undefined2 *)(pbVar9 + 10);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(pbVar9 + 0x10);
      *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(pbVar9 + 0x12);
      *(ushort *)(param_2 + 3) = (bVar2 + 1) * extraout_r1 + 1;
      *(ushort *)((int)param_2 + 0xe) = (bVar1 + 1) * sVar4 + 1;
      return;
    }
    bVar11 = uVar5 <= *puVar7;
    bVar10 = *puVar7 == uVar5;
    if (!bVar11 || bVar10) {
      bVar11 = puVar7[1] <= uVar5;
      bVar10 = uVar5 == puVar7[1];
    }
    if (!bVar11 || bVar10) {
      iVar8 = (int)puVar7 + (uVar5 - *puVar7) * 3;
      goto LAB_006e6484;
    }
    puVar7 = *(ushort **)(puVar7 + 2);
  } while( true );
}



uint fn_006e623c(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = fn_006e62b4();
  iVar3 = *(int *)(param_1 + 0xc);
  bVar4 = uVar1 == 0xffff;
  if (bVar4) {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  puVar2 = *(ushort **)(iVar3 + 0x10);
  if (bVar4) {
    uVar1 = (uint)*(ushort *)(uVar1 + 6);
  }
  do {
    if (puVar2 == (ushort *)0x0) {
LAB_006e62a4:
      return (uint)*(uint3 *)(iVar3 + 8);
    }
    bVar5 = uVar1 <= *puVar2;
    bVar4 = *puVar2 == uVar1;
    if (!bVar5 || bVar4) {
      bVar5 = puVar2[1] <= uVar1;
      bVar4 = uVar1 == puVar2[1];
    }
    if (!bVar5 || bVar4) {
      iVar3 = (uVar1 - *puVar2) * 3 + (int)puVar2;
      goto LAB_006e62a4;
    }
    puVar2 = *(ushort **)(puVar2 + 2);
  } while( true );
}



uint fn_006e62b4(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = 0xffff;
  puVar3 = *(ushort **)(*(int *)(param_1 + 0xc) + 0x14);
  if (puVar3 != (ushort *)0x0) {
    while( true ) {
      bVar7 = param_2 <= *puVar3;
      bVar6 = *puVar3 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = puVar3[1] <= param_2;
        bVar6 = param_2 == puVar3[1];
      }
      if (!bVar7 || bVar6) break;
      puVar3 = *(ushort **)(puVar3 + 4);
      if (puVar3 == (ushort *)0x0) {
        return 0xffff;
      }
    }
    uVar1 = puVar3[2];
    if (uVar1 == 0) {
      return (uint)puVar3[6] + (param_2 - *puVar3) & 0xffff;
    }
    if (uVar1 == 1) {
      return (uint)puVar3[(param_2 - *puVar3) + 6];
    }
    if (uVar1 == 2) {
      puVar5 = puVar3 + 7;
      puVar3 = puVar3 + 6 + (uint)puVar3[6] * 2 + -1;
      if (puVar5 <= puVar3) {
        while( true ) {
          puVar4 = puVar5 + (((int)puVar3 - (int)puVar5 >> 2) - ((int)puVar3 - (int)puVar5 >> 0x1f)
                            >> 1) * 2;
          uVar2 = (uint)*puVar4;
          if (uVar2 >= param_2 && uVar2 != param_2) {
            puVar3 = puVar4 + -2;
          }
          if (uVar2 < param_2) {
            puVar5 = puVar4 + 2;
          }
          if (uVar2 == param_2) break;
          if (puVar3 < puVar5) {
            return 0xffff;
          }
        }
        uVar2 = (uint)puVar4[1];
      }
    }
  }
  return uVar2;
}



uint fn_006e6220(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x40))();
  return (uVar1 & 0xffffff) >> 0x10;
}



int fn_006e611c(undefined4 param_1,int param_2)

{
  fn_0017821c(param_2,&DAT_007d816c,0x40);
  return param_2 + 0x40;
}


