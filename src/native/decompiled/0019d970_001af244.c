#include "0019d970_001af244.h"



undefined4 fn_001af244(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar2 = fn_00191f08();
  puVar1 = DAT_008bf51c;
  if (iVar2 != 0) {
    if (DAT_008bf51c != (undefined4 *)0x0) {
      fn_001af0f4((char *)&DAT_001af420);
      iVar2 = fn_00192114();
      *(uint *)(iVar2 + 0xc4) = *(uint *)(iVar2 + 0xc4) & 4;
      *puVar1 = 0x474f4643;
      puVar1[1] = puVar1[1] & 0x1ff | 0x100;
      *(undefined1 *)(puVar1 + 1) = 0;
      fn_00301f50(puVar1 + 2,0x23f0);
      puVar3 = puVar1 + 0x8fe;
      *puVar3 = 0x45484643;
      *(undefined2 *)(puVar1 + 0x8ff) = 0xffff;
      *(undefined2 *)((int)puVar1 + 0x23fe) = 0xffff;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        *(undefined4 *)((int)puVar3 + iVar2 * 0xe + 8) = 0;
        *(undefined4 *)((int)puVar3 + iVar2 * 0xe + 0xc) = 0;
        *(undefined4 *)((int)puVar3 + iVar2 * 0xe + 0x10) = 0;
        *(undefined2 *)((int)puVar3 + iVar2 * 0xe + 0x14) = 0;
        *(ushort *)((int)puVar3 + iVar2 * 0xe + 0x12) =
             *(ushort *)((int)puVar3 + iVar2 * 0xe + 0x12) | 0x7fff;
        *(undefined2 *)((int)puVar3 + iVar2 * 0xe + 0x14) = 0x7fff;
        iVar2 = iVar4;
      } while (iVar4 < 3000);
      fn_00301f50(puVar1 + 0x3204,0xe);
      fn_0018513c(0,puVar1,0xc820);
      puVar3 = puVar1 + 0x3208;
      fn_00301f50(puVar3,0x1ca0);
      *puVar3 = 0x41524643;
      fn_0018513c(0,puVar3,0x1ca0);
      puVar1[0x3933] = param_1;
      puVar1[0x3937] = fn_001c0508;
      iVar2 = fn_00191f08();
      if (iVar2 != 0) {
        iVar2 = fn_00192114();
        *(undefined1 *)(iVar2 + 0xc0) = 1;
        iVar2 = fn_00192114();
        *(undefined4 *)(iVar2 + 200) = 10;
      }
      DAT_008bf51c[0x3934] = fn_001c055c;
      iVar2 = DAT_008bf514;
      *(undefined1 *)(DAT_008bf514 + 0x12) = 1;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      *(undefined1 **)(iVar2 + 0x28) = &LAB_001c1274;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined1 *)(iVar2 + 0x10) = 0;
      *(code **)(iVar2 + 0xc) = fn_001bbf50;
      fn_001bbf50(iVar2,0);
      uVar5 = fn_001851bc();
    }
  }
  return uVar5;
}



void fn_001a2b2c(int *param_1)

{
  if ((*param_1 != 0x1000001) && (*param_1 != 0x5000002)) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(param_1);
  }
  return;
}



void fn_0019d970(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_6c [4];
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  uint local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  int local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  int local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  piStack_2c = param_2;
  uStack_28 = param_3;
  if ((uint)param_2[0x1b] <= (uint)param_2[0x1a]) {
    iVar11 = param_2[0x1a] << 1;
    if (iVar11 == 0) {
      iVar11 = 4;
    }
    iVar4 = fn_0018388c(param_2[0x19],param_2[0x1b] << 3,iVar11 << 3);
    param_2[0x19] = iVar4;
    param_2[0x1b] = iVar11;
  }
  puVar5 = (uint *)(param_2[0x19] + param_2[0x1a] * 8);
  param_2[0x1a] = param_2[0x1a] + 1;
  if (puVar5 != (uint *)0x0) {
    puVar5[1] = 0xffffffff;
    *puVar5 = (uint)param_1 & 0xff000000;
  }
  *(undefined1 *)(param_2[0x19] + param_2[0x1a] * 8 + -8) = 0;
  *(char *)(param_2[0x1a] * 8 + param_2[0x19] + -7) = (char)param_3;
  fn_001a3530(param_2);
  if (*param_2 == 0x10f) {
    iVar11 = fn_001a9704(param_2[1]);
    iVar4 = fn_001a72b0(param_2[1],0xffffffff);
    uVar2 = (undefined1)iVar4;
    local_54 = 0x2c;
    local_58 = 0;
    local_52 = (undefined1)iVar11;
    local_51 = 0;
    local_53 = uVar2;
    fn_001a759c(param_2[1],&local_58);
    iVar13 = *(int *)(param_2[1] + 100) + -1;
    if (iVar4 != iVar11) {
      local_4c = 10;
      local_4a = 0;
      local_49 = 0;
      local_50 = iVar11;
      local_4b = uVar2;
      fn_001a759c(param_2[1],&local_50);
    }
    iVar11 = fn_001a9c90(param_2 + 4);
    *param_2 = iVar11;
    fn_0019e0c4(param_2);
    *(undefined1 *)(param_2[1] + 0xd8) = 0;
    iVar11 = fn_001a9704(param_2[1]);
    if (iVar4 != iVar11) {
      local_44 = 10;
      local_42 = 0;
      local_41 = 0;
      local_48 = iVar11;
      local_43 = uVar2;
      fn_001a759c(param_2[1],&local_48);
    }
    *(undefined1 *)(param_2[1] + 0xd8) = 0;
    fn_001a7908(param_2[1],iVar13,1,(*(int *)(param_2[1] + 100) - iVar13) + -1);
  }
  iVar11 = *param_2;
  if (iVar11 != 0x122) {
    if (iVar11 < 0x122) {
      if (iVar11 != 0x3d) {
        if (iVar11 == 0x3f) {
          iVar11 = fn_001a9c90(param_2 + 4);
          *param_2 = iVar11;
          iVar11 = param_2[1];
          local_3b = fn_001a9704();
          local_3c = 0x1a;
          local_3a = 0;
          local_40 = 0;
          local_39 = 0;
          fn_001a759c(iVar11,&local_40);
          iVar13 = *(int *)(param_2[1] + 100) + -1;
          iVar11 = fn_001a72b0(param_2[1],0xffffffff);
          fn_0019d970(&local_68,param_2,0);
          iVar4 = fn_001a9704(param_2[1]);
          if (iVar11 != iVar4) {
            local_4c = 10;
            local_4a = 0;
            local_49 = 0;
            local_50 = iVar4;
            local_4b = (char)iVar11;
            fn_001a759c(param_2[1],&local_50);
          }
          iVar7 = *(int *)(param_2[1] + 100);
          local_48 = 0;
          local_44 = 0x18;
          local_43 = 0;
          local_42 = 0;
          local_41 = 0;
          fn_001a759c(param_2[1],&local_48);
          fn_001a8854(&local_68,param_2,0x3a);
          iVar12 = *(int *)(param_2[1] + 100) + -1;
          fn_0019d970(auStack_38,param_2,0);
          iVar4 = fn_001a9704(param_2[1]);
          if (iVar11 != iVar4) {
            local_54 = 10;
            local_52 = 0;
            local_51 = 0;
            local_58 = iVar4;
            local_53 = (char)iVar11;
            fn_001a759c(param_2[1],&local_58);
          }
          fn_001a7908(param_2[1],iVar12,1,(*(int *)(param_2[1] + 100) - iVar12) + -1);
          fn_001a7908(param_2[1],iVar13,1,iVar7 - iVar13);
          *(undefined1 *)(param_2[1] + 0xd8) = 0;
          goto LAB_0019e098;
        }
        if (iVar11 != 0x119 && iVar11 != 0x121) goto LAB_0019e098;
      }
    }
    else if ((iVar11 != 0x13d && iVar11 != 0x13e) && iVar11 != 0x13f) goto LAB_0019e098;
  }
  iVar4 = param_2[0x1a] * 8 + -4;
  iVar13 = *(int *)(param_2[0x19] + iVar4);
  cVar1 = *(char *)(param_2[0x19] + param_2[0x1a] * 8 + -6);
  if (iVar13 == -1) {
    fn_00102cc8(&DAT_008f9d08,"can\'t assign expression",auStack_6c,iVar4,
                 "can\'t assign expression");
    param_2[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
    fn_001a5350(param_2 + 0x1e,1);
  }
  iVar4 = fn_001a9c90(param_2 + 4);
  *param_2 = iVar4;
  fn_0019d970(&local_60,param_2,0);
  if (iVar11 == 0x122) {
LAB_0019dd88:
    if (iVar11 == 0x13d) {
      uVar2 = 0x2a;
    }
    else if (iVar11 < 0x13d) {
      if (iVar11 == 0x121) {
        uVar2 = 0x2b;
      }
      else {
        if (iVar11 != 0x122) {
code_r0x0019dde8:
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        uVar2 = 0x2d;
      }
    }
    else if (iVar11 == 0x13e) {
      uVar2 = 0x2f;
    }
    else {
      if (iVar11 != 0x13f) goto code_r0x0019dde8;
      uVar2 = 0x25;
    }
    if (iVar13 != -2) {
      uVar3 = fn_001a9704(param_2[1]);
      uVar6 = fn_001a9704(param_2[1]);
      iVar11 = param_2[1];
      local_63 = fn_001a72b0(iVar11,0xffffffff);
      local_64 = 0x23;
      local_68 = uVar6;
      local_62 = uVar3;
      local_61 = uVar2;
      fn_001a759c(iVar11,&local_68);
      goto LAB_0019e098;
    }
    uVar6 = fn_001a9704(param_2[1]);
    uVar3 = fn_001a9704(param_2[1]);
    iVar4 = fn_001a9704(param_2[1]);
    iVar11 = param_2[1];
    local_5b = fn_001a72b0(iVar11,0xffffffff);
    local_5c = 0x22;
    local_60 = uVar6 | iVar4 << 0x10;
    puVar5 = &local_60;
    local_5a = uVar3;
    local_59 = uVar2;
  }
  else {
    if (0x121 < iVar11) {
      if ((iVar11 != 0x13d && iVar11 != 0x13e) && iVar11 != 0x13f) goto LAB_0019e098;
      goto LAB_0019dd88;
    }
    if (iVar11 == 0x3d) {
      if (cVar1 != '\0') {
LAB_0019dcc8:
        fn_00102cc8(&DAT_008f9d08,(char *)&DAT_0019dfd8,auStack_6c);
        param_2[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_2 + 0x1e,1);
      }
      if (iVar13 == -2) {
        uVar2 = fn_001a9704(param_2[1]);
        uVar3 = fn_001a9704(param_2[1]);
        uVar6 = fn_001a9704(param_2[1]);
        iVar11 = param_2[1];
        local_5b = fn_001a72b0(iVar11,0xffffffff);
        local_5c = 0xd;
        puVar5 = &local_60;
        local_60 = uVar6;
        local_5a = uVar3;
        local_59 = uVar2;
        goto LAB_0019dd80;
      }
      uVar6 = fn_001a9704(param_2[1]);
      local_63 = fn_001a9808(param_2[1]);
      iVar11 = param_2[1];
      local_64 = 10;
      local_62 = 0;
      puVar5 = &local_68;
      local_61 = 0;
      local_68 = uVar6;
    }
    else {
      if (iVar11 != 0x119) {
        if (iVar11 != 0x121) goto LAB_0019e098;
        goto LAB_0019dd88;
      }
      if (cVar1 != '\0') goto LAB_0019dcc8;
      if (iVar13 != -2) {
        fn_00102cc8(&DAT_008f9d08,"can\'t \'create\' a local slot",auStack_6c);
        param_2[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_2 + 0x1e,1);
      }
      uVar2 = fn_001a9704(param_2[1]);
      uVar3 = fn_001a9704(param_2[1]);
      uVar6 = fn_001a9704(param_2[1]);
      iVar11 = param_2[1];
      local_63 = fn_001a72b0(iVar11,0xffffffff);
      local_64 = 0xb;
      puVar5 = &local_68;
      local_68 = uVar6;
      local_62 = uVar3;
      local_61 = uVar2;
LAB_0019dd80:
    }
  }
  fn_001a759c(iVar11,puVar5);
LAB_0019e098:
  puVar9 = (undefined4 *)(param_2[0x1a] * 8 + -8 + param_2[0x19]);
  uVar8 = *puVar9;
  uVar10 = puVar9[1];
  param_2[0x1a] = param_2[0x1a] + -1;
  *local_30 = uVar8;
  local_30[1] = uVar10;
  return;
}


