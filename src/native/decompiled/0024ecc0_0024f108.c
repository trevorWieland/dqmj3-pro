#include "0024ecc0_0024f108.h"



void fn_0024f108(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    return;
  }
  uVar1 = *(uint *)(DAT_0088fcd8 + *(short *)(param_1 + 0x1c) * 4);
  if (uVar1 == 0) {
    uVar1 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  if (uVar1 == 0) {
    return;
  }
  uVar2 = fn_0024e96c(param_1);
  fn_002505dc(param_1,uVar2 ^ uVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0024f10c) */

void fn_0024ef64(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(short *)(param_1 + 7) = (short)param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = fn_00661770(param_2);
  *(undefined2 *)((int)param_1 + 0x22) = uVar1;
  *(undefined2 *)((int)param_1 + 0x1e) = uVar1;
  uVar1 = fn_0066178c(param_2);
  *(undefined2 *)(param_1 + 9) = uVar1;
  *(undefined2 *)(param_1 + 8) = uVar1;
  uVar1 = fn_006612ec(param_2);
  *(undefined2 *)((int)param_1 + 0x26) = uVar1;
  uVar1 = fn_006613b4(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  uVar1 = fn_00661270(param_2);
  *(undefined2 *)((int)param_1 + 0x2a) = uVar1;
  uVar1 = fn_006610b0(param_2);
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  *(undefined1 *)((int)param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x10] = param_1[0x10] & 0xff0007fc;
  do {
    uVar1 = fn_0066128c(param_2);
    iVar5 = 1;
    *(undefined2 *)(param_1 + 0x11) = uVar1;
    do {
      iVar2 = fn_0066173c(param_2);
      if (iVar2 < iVar5 + -1) {
        *(undefined2 *)((int)param_1 + iVar5 * 2 + 0x44) = 0;
      }
      else {
        uVar1 = fn_006616f4(param_2);
        *(undefined2 *)((int)param_1 + iVar5 * 2 + 0x44) = uVar1;
      }
      iVar5 = iVar5 + 1;
      if (8 < iVar5) {
        do {
          uVar1 = fn_006617a8(param_2);
          *(undefined2 *)((int)param_1 + 0x56) = uVar1;
          *(undefined2 *)(param_1 + 0x16) = 0;
          uVar4 = 1;
          do {
            uVar3 = uVar4 + 1;
            *(undefined2 *)((int)param_1 + uVar4 * 4 + 0x56) = 0;
            *(undefined2 *)(param_1 + uVar4 + 0x16) = 0;
            if (6 < uVar3) {
              *(undefined2 *)(param_1 + 0x21) = 0;
              *(undefined2 *)((int)param_1 + 0x86) = 0;
              *(undefined2 *)(param_1 + 0x22) = 0;
              *(undefined2 *)((int)param_1 + 0x8a) = 0;
              *(undefined2 *)(param_1 + 0x23) = 0;
              *(undefined2 *)((int)param_1 + 0x8e) = 0;
              iVar5 = 0;
              do {
                iVar2 = iVar5 + 1;
                *(undefined2 *)(param_1 + iVar5 * 8 + 0x24) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x92) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x96) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x9a) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0x9e) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0xa2) = 0;
                *(undefined4 *)((int)param_1 + iVar5 * 0x20 + 0xa6) = 0;
                *(undefined2 *)((int)param_1 + iVar5 * 0x20 + 0xaa) = 0;
                *(undefined2 *)(param_1 + iVar5 * 8 + 0x2b) = 0;
                iVar5 = iVar2;
              } while (iVar2 < 2);
              uVar4 = *(uint *)(DAT_0088fcd8 + *(short *)(param_1 + 7) * 4);
              if (uVar4 == 0) {
                uVar4 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
              }
              if (uVar4 == 0) {
                return;
              }
              uVar3 = fn_0024e96c(param_1);
              fn_002505dc(param_1,uVar3 ^ uVar4);
              return;
            }
            uVar4 = uVar3;
          } while (uVar3 != 0);
        } while( true );
      }
    } while (iVar5 != 0);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x0024ef04) */

bool fn_0024eecc(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = *param_1;
  bVar2 = *(byte *)((int)param_1 + 7);
  uVar4 = local_20 & 1;
  bVar3 = *(byte *)((int)param_1 + 0xe);
  uVar1 = ~local_20;
  local_1c = (int)(short)param_1[1];
  local_18 = (uint)*(byte *)((int)param_1 + 6);
  local_14 = (int)(short)param_1[2];
  local_10 = (int)*(short *)((int)param_1 + 10);
  local_c = (int)(short)param_1[3];
  uVar5 = fn_005f5c50(0x259be9d4,&local_20,0x18);
  return (((uint)bVar3 << ((uVar1 & 1) << 3)) + ((uint)bVar2 << (uVar4 << 3) & 0xffff) & 0xffff) !=
         uVar5 >> 0x10;
}



undefined4
fn_0024ecc0(uint param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
            int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_b4 [16];
  ushort local_a4;
  undefined1 auStack_a0 [16];
  ushort local_90;
  undefined1 auStack_8c [16];
  ushort local_7c;
  ushort local_68;
  ushort local_54;
  short local_50 [4];
  uint local_48;
  uint local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  int local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  uStack_34 = param_1;
  if (param_2 == 0) {
    if (param_9 == 0 && (((param_6 == 0 && param_4 == 0) && param_5 == 0) && param_8 == 0)) {
      return 1;
    }
  }
  else if (param_6 == 0) {
    if (param_9 == 0 && (((param_4 == 0 && param_2 == 0) && param_5 == 0) && param_8 == 0)) {
      return 1;
    }
  }
  else {
    if (param_4 == 0) {
      if (param_5 != 0) {
        return 0;
      }
    }
    else if (param_5 == 0) {
      return 0;
    }
    if (param_8 == 0) {
      if (param_9 == 0) goto LAB_0024ed18;
    }
    else if (param_9 != 0) {
LAB_0024ed18:
      uVar4 = 0;
      iVar3 = 0;
      local_44 = param_2 & 0xffff;
      local_48 = param_6 & 0xffff;
      local_50[0] = 0;
      local_50[1] = 0x19;
      local_50[2] = 0x32;
      local_50[3] = 100;
      do {
        if (param_3 != 0) {
          uVar1 = param_3 - 1;
          goto LAB_0024edcc;
        }
        while( true ) {
          uVar1 = (uint)local_50[uVar4];
LAB_0024edcc:
          if (param_7 == 0) {
            uVar2 = (uint)local_50[iVar3];
          }
          else {
            uVar2 = param_7 - 1;
          }
          fn_00301f50(auStack_b4,100);
          local_68 = (ushort)local_44;
          local_54 = (ushort)local_48;
          fn_0020e42c(auStack_b4,auStack_a0,auStack_8c,local_30,param_6,uVar1 & 0xff,uVar2 & 0xff);
          uVar1 = (uint)local_a4;
          bVar5 = uVar1 == param_1;
          if (!bVar5) {
            uVar1 = (uint)local_90;
          }
          if (bVar5 || uVar1 == param_1) {
            return 1;
          }
          uVar1 = (uint)local_7c;
          bVar5 = uVar1 == param_1;
          if (!bVar5) {
            uVar1 = (uint)local_68;
          }
          bVar6 = uVar1 == param_1;
          if (!bVar5 && !bVar6) {
            uVar1 = (uint)local_54;
          }
          if ((bVar5 || bVar6) || uVar1 == param_1) {
            return 1;
          }
          if ((param_7 == 0) && (iVar3 = iVar3 + 1, iVar3 < 4)) break;
          if ((param_3 != 0) || (uVar4 = uVar4 + 1, 3 < uVar4)) {
            local_40 = (undefined2)local_28;
            local_3e = (undefined2)param_5;
            local_3c = (undefined2)param_8;
            local_3a = (undefined2)param_9;
            uVar4 = fn_0020e260(&local_40);
            if (param_1 == uVar4) {
              return 1;
            }
            return 0;
          }
          iVar3 = 0;
        }
      } while( true );
    }
  }
  return 0;
}


