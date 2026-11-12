#include "005fd484_005fdb24.h"



/* WARNING: Removing unreachable block (ram,0x005fdb64) */

void fn_005fdabc(int param_1)

{
  int *piVar1;
  short asStack_20 [2];
  int iStack_1c;
  undefined4 uStack_18;
  int aiStack_14 [2];
  
  fn_005fdb24(param_1,0,(int)*(short *)(param_1 + 0x1e));
  fn_005fdb24(param_1,1,(int)*(short *)(param_1 + 0x20));
  fn_005fdb24(param_1,2,(int)*(short *)(param_1 + 0x26));
  fn_005fdb24(param_1,3,(int)*(short *)(param_1 + 0x28));
  fn_005fdb24(param_1,4,(int)*(short *)(param_1 + 0x2a));
  aiStack_14[0] = (int)*(short *)(param_1 + 0x2c);
  uStack_18 = 5;
  iStack_1c = param_1;
  asStack_20[0] = fn_005fe134(param_1,5,0);
  piVar1 = aiStack_14;
  if (asStack_20[0] < (short)aiStack_14[0]) {
    piVar1 = (int *)asStack_20;
  }
  *(short *)(param_1 + 0x2c) = (short)*piVar1;
  return;
}



void fn_005fdb24(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  short *psVar2;
  short local_20 [2];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  iStack_1c = param_1;
  uStack_18 = param_2;
  local_14 = param_3;
  local_20[0] = fn_005fe134(param_1,param_2,0);
  psVar2 = (short *)&local_14;
  if (local_20[0] < (short)local_14) {
    psVar2 = local_20;
  }
  uVar1 = *psVar2;
  switch(param_2) {
  case 0:
    *(undefined2 *)(param_1 + 0x1e) = uVar1;
    *(undefined2 *)(param_1 + 0x22) = uVar1;
    break;
  case 1:
    *(undefined2 *)(param_1 + 0x20) = uVar1;
    *(undefined2 *)(param_1 + 0x24) = uVar1;
    return;
  case 2:
    *(undefined2 *)(param_1 + 0x26) = uVar1;
    return;
  case 3:
    *(undefined2 *)(param_1 + 0x28) = uVar1;
    return;
  case 4:
    *(undefined2 *)(param_1 + 0x2a) = uVar1;
    return;
  case 5:
    *(undefined2 *)(param_1 + 0x2c) = uVar1;
    return;
  }
  return;
}



undefined1 * fn_005fd65c(int *param_1,int param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  short sVar7;
  uint uVar8;
  byte **ppbVar9;
  short *psVar10;
  short sVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  int *local_68;
  int *local_64;
  int *local_60;
  short local_50 [4];
  byte *local_48 [2];
  short local_40 [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  byte *local_30;
  byte *local_2c [2];
  
  fn_0020bbc4(auStack_38);
  iVar14 = 0;
  iVar3 = fn_006bfe90(auStack_34);
  sVar1 = *(short *)(&DAT_007c4278 + iVar3 * 2);
  pbVar13 = (byte *)param_1[1];
  for (pbVar12 = (byte *)*param_1; pbVar12 != pbVar13; pbVar12 = pbVar12 + 6) {
    iVar4 = fn_006bfe90(auStack_34);
    uVar8 = (uint)*pbVar12;
    sVar11 = 0;
    iVar3 = (int)*(short *)(pbVar12 + 2);
    if ((int)*(short *)(&UNK_007c4282 + iVar4 * 2 + uVar8 * 10) < (int)*(short *)(pbVar12 + 2)) {
      iVar3 = (int)*(short *)(&UNK_007c4282 + iVar4 * 2 + uVar8 * 10);
    }
    sVar7 = (short)iVar3;
    *(short *)(pbVar12 + 2) = sVar7;
    switch(uVar8) {
    case 0:
    case 2:
      sVar11 = (short)(iVar3 << 1);
      break;
    case 1:
    case 3:
    case 4:
    case 5:
      sVar11 = sVar7;
    }
    iVar14 = (int)(short)(sVar11 + (short)iVar14);
    switch(uVar8) {
    case 0:
      *(short *)(param_2 + 0x84) = sVar7;
      break;
    case 1:
      *(short *)(param_2 + 0x86) = sVar7;
      break;
    case 2:
      *(short *)(param_2 + 0x88) = sVar7;
      break;
    case 3:
      *(short *)(param_2 + 0x8a) = sVar7;
      break;
    case 4:
      *(short *)(param_2 + 0x8c) = sVar7;
      break;
    case 5:
      *(short *)(param_2 + 0x8e) = sVar7;
    }
  }
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = (int *)0x0;
  do {
    if (iVar14 <= sVar1) {
      piVar5 = local_68;
      if (local_64 < local_68) {
        do {
          piVar5 = piVar5 + 1;
        } while (piVar5 != local_64);
      }
      fn_001008c4(local_68,(int)local_60 - (int)local_68 >> 2,0);
      return auStack_38;
    }
    if (local_68 != local_64) {
      piVar5 = local_68;
      if (local_64 < local_68) {
        do {
          piVar5 = piVar5 + 1;
        } while (piVar5 != local_64);
      }
      local_64 = (int *)((int)local_64 - ((int)local_64 - (int)local_68 & 0xfffffffcU));
    }
    for (pbVar12 = (byte *)*param_1;
        (pbVar12 != (byte *)param_1[1] && (*(short *)(pbVar12 + 4) < 1)); pbVar12 = pbVar12 + 6) {
    }
    if (param_3 == 0) {
      pbVar12 = (byte *)(*param_1 + 6);
    }
    local_30 = pbVar12;
    if (local_64 == local_60) {
      fn_00799a90(&local_68,local_64,&local_30);
      piVar5 = local_64;
    }
    else {
      piVar5 = local_64 + 1;
      if (local_64 != (int *)0x0) {
        *local_64 = (int)pbVar12;
      }
    }
    for (; local_64 = piVar5, pbVar12 != pbVar13; pbVar12 = pbVar12 + 6) {
      sVar11 = *(short *)(pbVar12 + 4);
      if (0 < sVar11) {
        if (sVar11 < *(short *)(*local_68 + 4)) {
          if (local_68 != local_64) {
            piVar5 = local_68;
            if (local_64 <= local_68) {
              for (; piVar5 != local_64; piVar5 = piVar5 + 1) {
              }
            }
            local_64 = (int *)((int)local_64 - ((int)local_64 - (int)local_68 & 0xfffffffcU));
          }
          piVar5 = local_64;
          local_2c[0] = pbVar12;
          if (local_64 == local_60) {
            ppbVar9 = local_2c;
LAB_005fd8c4:
            fn_00799a90(&local_68,local_64,ppbVar9);
          }
          else {
joined_r0x005fd958:
            local_64 = piVar5 + 1;
            if (piVar5 != (int *)0x0) {
              *piVar5 = (int)pbVar12;
            }
          }
        }
        else if (sVar11 == *(short *)(*local_68 + 4)) {
          local_48[0] = pbVar12;
          piVar5 = local_64;
          if (local_64 == local_60) {
            ppbVar9 = local_48;
            goto LAB_005fd8c4;
          }
          goto joined_r0x005fd958;
        }
      }
      piVar5 = local_64;
    }
    if ((uint)((int)local_64 - (int)local_68 >> 2) < 2) {
      puVar6 = (undefined1 *)*local_68;
    }
    else {
      iVar3 = fn_00163868();
      puVar6 = (undefined1 *)local_68[iVar3];
    }
    sVar11 = *(short *)(puVar6 + 4);
    switch(*puVar6) {
    case 0:
    case 2:
      local_40[0] = 1;
      local_50[0] = (short)((iVar14 - sVar1) / 2);
      psVar10 = local_40;
      if (0 < local_50[0]) {
        psVar10 = local_50;
      }
      *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) - *psVar10;
      break;
    case 1:
    case 3:
    case 4:
    case 5:
      *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) - ((short)iVar14 - sVar1);
    }
    if (*(short *)(puVar6 + 2) < 0) {
      *(undefined2 *)(puVar6 + 2) = 0;
    }
    uVar2 = *(undefined2 *)(puVar6 + 2);
    switch(*puVar6) {
    case 0:
      *(undefined2 *)(param_2 + 0x84) = uVar2;
      break;
    case 1:
      *(undefined2 *)(param_2 + 0x86) = uVar2;
      break;
    case 2:
      *(undefined2 *)(param_2 + 0x88) = uVar2;
      break;
    case 3:
      *(undefined2 *)(param_2 + 0x8a) = uVar2;
      break;
    case 4:
      *(undefined2 *)(param_2 + 0x8c) = uVar2;
      break;
    case 5:
      *(undefined2 *)(param_2 + 0x8e) = uVar2;
    }
    sVar7 = 0;
    switch(*puVar6) {
    case 0:
    case 2:
      sVar7 = *(short *)(puVar6 + 2) << 1;
      break;
    case 1:
    case 3:
    case 4:
    case 5:
      sVar7 = *(short *)(puVar6 + 2);
    }
    *(short *)(puVar6 + 4) = sVar7;
    iVar14 = (int)(short)((short)iVar14 - (sVar11 - sVar7));
  } while( true );
}



undefined1 * fn_005fd484(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  fn_0020bbc4(auStack_28,param_1);
  fn_006bfe90(auStack_24);
  iVar2 = fn_0066158c();
  iVar4 = 1;
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar5);
      if (iVar3 != 0) {
        iVar6 = iVar4 * 2;
        iVar4 = iVar4 + 1;
        *(short *)(param_1 + iVar6 + 0x44) = (short)iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  bVar1 = *(byte *)(param_1 + 0x3c);
  if (bVar1 < 100) {
    if (bVar1 < 0x32) {
      if (bVar1 < 0x19) goto LAB_005fd548;
      iVar5 = 6;
    }
    else {
      iVar5 = 7;
    }
    iVar2 = 5;
  }
  else {
    iVar5 = 8;
    iVar2 = 5;
  }
  do {
    iVar3 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar2);
    if (iVar3 != 0) {
      iVar6 = iVar4 * 2;
      iVar4 = iVar4 + 1;
      *(short *)(param_1 + iVar6 + 0x44) = (short)iVar3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar5);
LAB_005fd548:
  if (0 < 9 - iVar4) {
    iVar5 = 0;
    iVar3 = 0;
    iVar2 = (9 - iVar4) % 9;
    if (0 < iVar2) {
      do {
        iVar6 = iVar4 + iVar5;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 1;
        *(undefined2 *)(param_1 + iVar6 * 2 + 0x44) = 0;
      } while (iVar3 < iVar2);
    }
    for (; iVar2 < 9 - iVar4; iVar2 = iVar2 + 9) {
      *(undefined2 *)(param_1 + (iVar4 + iVar5) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 1) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 2) * 2 + 0x44) = 0;
      iVar3 = iVar5 + 8;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 3) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 4) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 5) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 6) * 2 + 0x44) = 0;
      *(undefined2 *)(param_1 + (iVar4 + iVar5 + 7) * 2 + 0x44) = 0;
      iVar5 = iVar5 + 9;
      *(undefined2 *)(param_1 + (iVar4 + iVar3) * 2 + 0x44) = 0;
    }
  }
  return auStack_28;
}


