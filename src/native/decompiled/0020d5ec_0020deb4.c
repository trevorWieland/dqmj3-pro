#include "0020d5ec_0020deb4.h"



void fn_0020deb4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  int local_2c;
  
  fn_00301f50(param_1,0x104);
  local_30 = 0;
  local_2c = 0;
  local_30 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_2);
  local_2c = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  param_1[0x100] = 0;
  if ((*(byte *)(local_30 + 0x2e) < 10) || (*(byte *)(local_2c + 0x2e) < 10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[0x101] = uVar1;
  uVar2 = fn_005fdbd0(&local_30,param_4,param_5,param_6);
  fn_005fdf34(param_1,param_2,param_3,&local_30,uVar2,1);
  iVar3 = fn_001a46f4(uVar2);
  if (iVar3 != 0) {
    fn_005fccf4(param_1 + 0x10,&local_30,*param_1,0);
  }
  return;
}



undefined4 fn_0020de2c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = &local_40;
  fn_0020bbc4(auStack_18,param_1);
  iVar1 = fn_006bf0fc(auStack_14,0);
  iVar2 = fn_006bf184(auStack_14);
  uVar4 = iVar1 - 0x46;
  local_40 = 0x1e;
  uStack_3c = 0x1e;
  uStack_38 = 0x28;
  uStack_34 = 0x2d;
  uStack_30 = 0x32;
  local_2c = 0x24;
  uStack_28 = 0x24;
  uStack_24 = 0x30;
  uStack_20 = 0x36;
  uStack_1c = 0x3c;
  if (((int)uVar4 < 0) || (4 < uVar4)) {
    uVar5 = 0;
  }
  else {
    if (iVar2 != 0) {
      puVar3 = &local_2c;
    }
    uVar5 = puVar3[uVar4];
  }
  return uVar5;
}



undefined4 fn_0020de08(short *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || ((ushort)param_1[1] < 0x32)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



uint fn_0020dbb4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_50;
  int local_4c;
  uint local_48;
  undefined1 auStack_44 [2];
  undefined2 auStack_42 [9];
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_48 = 0;
  puVar2 = (undefined4 *)fn_00101a1c(auStack_44,&LAB_0020cd8c,4,5);
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_4);
  puVar2[-3] = uVar3;
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_5);
  puVar2[-2] = uVar3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  fn_0020ccdc(&local_50,0);
  local_30 = *(undefined2 *)(local_50 + 0x90);
  local_2e = *(undefined2 *)(local_50 + 0xb0);
  local_2c = *(undefined2 *)(local_4c + 0x90);
  local_2a = *(undefined2 *)(local_4c + 0xb0);
  uVar1 = fn_0020e260(&local_30);
  iVar4 = fn_001a46f4();
  if (iVar4 != 0) {
    auStack_44[local_48 * 4] = 2;
    auStack_44[local_48 * 4 + 1] = 3;
    auStack_42[local_48 * 2] = uVar1;
    local_48 = local_48 + 1;
  }
  uVar1 = fn_005fcc2c(&local_50);
  iVar4 = fn_001a46f4();
  if (iVar4 != 0) {
    auStack_44[local_48 * 4] = 3;
    auStack_44[local_48 * 4 + 1] = 3;
    auStack_42[local_48 * 2] = uVar1;
    local_48 = local_48 + 1;
  }
  if (local_48 < 3) {
    uVar1 = fn_005fdff8(&local_50);
    iVar4 = fn_001a46f4();
    if (iVar4 != 0) {
      auStack_44[local_48 * 4] = 4;
      auStack_44[local_48 * 4 + 1] = 3;
      auStack_42[local_48 * 2] = uVar1;
      local_48 = local_48 + 1;
    }
  }
  if (local_48 < 2) {
    fn_0020ccdc(&local_50,1);
    fn_0020ccdc(&local_50,2);
  }
  else if (local_48 < 3) {
    fn_0020ccdc(&local_50,1);
  }
  fn_006aedec(&local_50,param_1,0);
  fn_006aedec(&local_50,param_2,1);
  fn_006aedec(&local_50,param_3,2);
  return local_48;
}



/* WARNING: Removing unreachable block (ram,0x0020d7d0) */
/* WARNING: Removing unreachable block (ram,0x0020d7f4) */

void fn_0020d5ec(uint *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint **ppuVar9;
  undefined4 uVar10;
  undefined4 extraout_r1;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_34 = *(undefined4 *)(DAT_00897804 + 0xc);
  local_30 = *(undefined4 *)(DAT_00897804 + 0x24);
  uVar3 = fn_006b8478(local_34);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  fn_0078742c(&local_58,1);
  iVar6 = local_50 + 0xc;
  local_48 = local_50;
  *(int *)local_50 = local_50;
  *(int *)(local_50 + 4) = local_50;
  uVar13 = param_1[1];
  uVar7 = *param_1;
  uVar15 = uVar13 - uVar7;
  iVar16 = (int)((longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20) >> 0x20);
  if ((uint)((iVar16 >> 4) - (iVar16 >> 0x1f)) < 0x3ff) {
    iVar16 = (int)((longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20) >> 0x20);
    iVar16 = 0x3ff - ((iVar16 >> 4) - (iVar16 >> 0x1f));
    if (iVar16 != 0) {
      iVar11 = (int)((longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20) >> 0x20);
      iVar8 = (int)((longlong)(int)(param_1[2] - uVar7) * -0x6db6db6d +
                    ((ulonglong)(param_1[2] - uVar7) << 0x20) >> 0x20);
      local_50 = iVar6;
      if ((uint)((iVar8 >> 4) - (iVar8 >> 0x1f)) <
          (uint)(((iVar11 >> 4) - (iVar11 >> 0x1f)) + iVar16)) {
        iVar6 = (int)((longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20) >> 0x20);
        local_3c = (uint *)(((iVar6 >> 4) - (iVar6 >> 0x1f)) + iVar16);
        iVar6 = (int)((longlong)(int)(param_1[1] - *param_1) * -0x6db6db6d +
                      ((ulonglong)(param_1[1] - *param_1) << 0x20) >> 0x20);
        uVar7 = (iVar6 >> 4) - (iVar6 >> 0x1f);
        local_38 = (uint *)(uVar7 + (uVar7 >> 1) + (uVar7 >> 3));
        if (local_38 < (uint *)(uVar7 + 0x20)) {
          local_38 = (uint *)(uVar7 + 0x20);
        }
        ppuVar9 = &local_38;
        if (local_38 <= local_3c) {
          ppuVar9 = &local_3c;
        }
        puVar4 = *ppuVar9;
        uVar7 = fn_00100fc6((int)puVar4 * 0x1c,0);
        fn_007b5814(*param_1,uVar13,uVar7,param_1);
        iVar6 = (int)((longlong)(int)(uVar13 - *param_1) * -0x6db6db6d +
                      ((ulonglong)(uVar13 - *param_1) << 0x20) >> 0x20);
        fn_007b5fa4(uVar7 + ((iVar6 >> 4) - (iVar6 >> 0x1f)) * 0x1c,iVar16,&local_58,param_1);
        iVar6 = (int)((longlong)(int)(uVar13 - *param_1) * -0x6db6db6d +
                      ((ulonglong)(uVar13 - *param_1) << 0x20) >> 0x20);
        fn_007b5814(uVar13,param_1[1],uVar7 + (((iVar6 >> 4) - (iVar6 >> 0x1f)) + iVar16) * 0x1c,
                     param_1);
        uVar13 = *param_1;
        uVar14 = param_1[1];
        uVar15 = uVar14 - uVar13;
        lVar1 = (longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20);
        uVar10 = (undefined4)lVar1;
        iVar6 = (int)((ulonglong)lVar1 >> 0x20);
        local_2c = (iVar6 >> 4) - (iVar6 >> 0x1f);
        for (; uVar13 != uVar14; uVar13 = uVar13 + 0x1c) {
          fn_007874ac(uVar13,uVar10);
          uVar10 = extraout_r1;
        }
        uVar13 = param_1[2] - *param_1;
        iVar6 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
        fn_001008c4(*param_1,(iVar6 >> 4) - (iVar6 >> 0x1f),0);
        *param_1 = uVar7;
        param_1[1] = uVar7 + local_2c * 0x1c + iVar16 * 0x1c;
        param_1[2] = uVar7 + (int)puVar4 * 0x1c;
        iVar6 = local_50;
      }
      else {
        uVar7 = uVar13 + iVar16 * 0x1c;
        param_1[1] = uVar13 + iVar16 * 0x1c;
        if (uVar7 < uVar13) {
          fn_007b5814(uVar14,uVar13,uVar13,param_1);
          uVar15 = uVar13;
          for (uVar14 = uVar13 + iVar16 * -0x1c; uVar13 != uVar14; uVar14 = uVar14 - 0x1c) {
            fn_0078757c(uVar15 - 0x1c,uVar14 - 0x1c);
            *(undefined1 *)(uVar15 - 4) = *(undefined1 *)(uVar14 - 4);
            uVar15 = uVar15 - 0x1c;
          }
          for (; iVar6 = local_50, uVar13 != uVar7; uVar13 = uVar13 + 0x1c) {
            fn_0078757c(uVar13,&local_58);
            *(undefined1 *)(uVar13 + 0x18) = (undefined1)local_40;
          }
        }
        else {
          fn_007b5fa4(uVar13,iVar16,&local_58,param_1);
          fn_007b5814(uVar13,uVar13,uVar7,param_1);
          iVar6 = local_50;
        }
      }
    }
  }
  else {
    iVar16 = (int)((longlong)(int)uVar15 * -0x6db6db6d + ((ulonglong)uVar15 << 0x20) >> 0x20);
    if (0x3ff < (uint)((iVar16 >> 4) - (iVar16 >> 0x1f))) {
      uVar15 = uVar7 + 0x6fe4;
      if (uVar7 != uVar13) {
        for (; local_50 = iVar6, uVar15 != uVar13; uVar15 = uVar15 + 0x1c) {
          fn_007874ac(uVar15);
          iVar6 = local_50;
        }
        uVar13 = uVar13 - (uVar7 + 0x6fe4);
        iVar6 = (int)((longlong)(int)uVar13 * -0x6db6db6d + ((ulonglong)uVar13 << 0x20) >> 0x20);
        param_1[1] = param_1[1] + ((iVar6 >> 4) - (iVar6 >> 0x1f)) * -0x1c;
        iVar6 = local_50;
      }
    }
  }
  local_50 = iVar6;
  fn_007874ac(&local_58);
  iVar6 = 0;
  do {
    *(undefined1 *)(*param_1 + iVar6 * 0x1c + 0x18) = 0;
    iVar16 = fn_001a46f4((int)(short)iVar6);
    if (iVar16 != 0) {
      uVar13 = *param_1;
      uVar2 = fn_006b7b34(local_30,(int)(short)iVar6);
      *(undefined1 *)(uVar13 + iVar6 * 0x1c + 0x18) = uVar2;
      uVar13 = 0;
      if (uVar3 != 0) {
        do {
          puVar4 = (uint *)fn_0028b074(local_34,uVar13);
          if (((short)puVar4[7] == iVar6) &&
             ((iVar16 = fn_00154ac8(0x19), iVar16 != 0 || ((byte)puVar4[0xf] < 100)))) {
            puVar12 = (uint *)(*param_1 + iVar6 * 0x1c);
            puVar5 = (uint *)puVar12[1];
            uVar7 = puVar12[4];
            if (puVar5 == (uint *)0x0) {
              puVar5 = (uint *)puVar12[2];
              if (puVar5 == (uint *)puVar12[3]) {
                if (*puVar12 == 0) {
                  local_38 = (uint *)&DAT_00000020;
                }
                else {
                  uVar15 = *(uint *)(*puVar12 + 4);
                  local_38 = (uint *)(uVar15 + (uVar15 >> 1) + (uVar15 >> 3));
                  if (local_38 < (uint *)(uVar15 + 0x20)) {
                    local_38 = (uint *)(uVar15 + 0x20);
                  }
                }
                local_3c = (uint *)fn_00100fc6(0xc,0);
                uVar15 = fn_00100fc6((int)local_38 * 0xc,0);
                local_3c[2] = uVar15;
                *local_3c = *puVar12;
                local_3c[1] = (uint)local_38;
                *puVar12 = (uint)local_3c;
                puVar5 = (uint *)local_3c[2];
                puVar12[2] = (uint)puVar5;
                puVar12[3] = (uint)(puVar5 + (int)local_38 * 3);
              }
              puVar12[2] = (uint)(puVar5 + 3);
            }
            else {
              puVar12[1] = *puVar5;
            }
            if (puVar5 + 2 != (uint *)0x0) {
              puVar5[2] = *puVar4;
            }
            *puVar5 = uVar7;
            puVar5[1] = *(uint *)(uVar7 + 4);
            **(undefined4 **)(uVar7 + 4) = puVar5;
            *(uint **)(uVar7 + 4) = puVar5;
            puVar12[5] = puVar12[5] + 1;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar3);
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x3ff);
  return;
}


