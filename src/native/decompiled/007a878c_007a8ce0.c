#include "007a878c_007a8ce0.h"



/* WARNING: Removing unreachable block (ram,0x007a8e2c) */
/* WARNING: Removing unreachable block (ram,0x007a8e40) */
/* WARNING: Removing unreachable block (ram,0x007a8efc) */
/* WARNING: Removing unreachable block (ram,0x007a8e20) */

void fn_007a8ce0(uint param_1,uint param_2,int param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **ppuVar16;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  
  if ((int)(param_2 - param_1) < 0x1c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      uVar7 = param_2 - param_1;
      if (0x37 < (int)uVar7) {
        iVar3 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
        iVar5 = (iVar3 >> 4) - (iVar3 >> 0x1f);
        iVar3 = (iVar5 + -2) / 2;
        while( true ) {
          iVar6 = param_1 + iVar3 * 0x1c;
          local_40 = *(undefined4 *)(iVar6 + 4);
          local_3c = *(undefined4 *)(iVar6 + 8);
          local_38 = *(undefined4 *)(iVar6 + 0xc);
          local_34 = *(undefined4 *)(iVar6 + 0x10);
          local_30 = *(undefined1 *)(iVar6 + 0x14);
          local_2f = *(undefined1 *)(iVar6 + 0x15);
          local_2c = *(undefined4 *)(iVar6 + 0x18);
          local_44 = &DAT_00851808;
          fn_0079fc10(param_1,iVar3,iVar5,&local_44,param_4,iVar5);
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
        }
      }
      while (0x1c < (int)uVar7) {
        if (param_1 != param_2) {
          local_2f = *(undefined1 *)(param_2 - 7);
          local_30 = *(undefined1 *)(param_2 - 8);
          local_40 = *(undefined4 *)(param_2 - 0x18);
          local_34 = *(undefined4 *)(param_2 - 0xc);
          local_2c = *(undefined4 *)(param_2 - 4);
          local_3c = *(undefined4 *)(param_2 - 0x14);
          local_38 = *(undefined4 *)(param_2 - 0x10);
          *(undefined4 *)(param_2 - 0x18) = *(undefined4 *)(param_1 + 4);
          uVar10 = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(param_2 - 0x14) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(param_2 - 0x10) = uVar10;
          *(undefined4 *)(param_2 - 0xc) = *(undefined4 *)(param_1 + 0x10);
          *(undefined1 *)(param_2 - 8) = *(undefined1 *)(param_1 + 0x14);
          *(undefined1 *)(param_2 - 7) = *(undefined1 *)(param_1 + 0x15);
          *(undefined4 *)(param_2 - 4) = *(undefined4 *)(param_1 + 0x18);
          uVar7 = (param_2 - 0x1c) - param_1;
          iVar3 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
          local_44 = &DAT_00851808;
          fn_0079fc10(param_1,0,(iVar3 >> 4) - (iVar3 >> 0x1f),&local_44,param_4);
        }
        param_2 = param_2 - 0x1c;
        uVar7 = param_2 - param_1;
      }
      return;
    }
    uVar7 = param_2 - 0x1c;
    iVar3 = (int)((longlong)(int)(param_2 - param_1) * -0x6db6db6d +
                  ((ulonglong)(param_2 - param_1) << 0x20) >> 0x20);
    ppuVar16 = &local_60;
    uVar4 = param_1 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * 0x1c;
    iVar3 = (*param_4)(param_1,uVar4);
    if (iVar3 == 0) {
      iVar3 = (*param_4)(param_1,uVar7);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(uVar4,uVar7);
        if (iVar3 != 0) goto LAB_007a9054;
        goto LAB_007a9050;
      }
LAB_007a9028:
      uVar7 = param_1;
    }
    else {
      iVar3 = (*param_4)(uVar4);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(param_1,uVar7);
        if (iVar3 == 0) goto LAB_007a9028;
      }
      else {
LAB_007a9050:
        uVar7 = uVar4;
      }
    }
LAB_007a9054:
    local_5c = *(undefined4 *)(uVar7 + 4);
    local_58 = *(undefined4 *)(uVar7 + 8);
    uStack_54 = *(undefined4 *)(uVar7 + 0xc);
    local_50 = *(undefined4 *)(uVar7 + 0x10);
    local_4c = *(undefined1 *)(uVar7 + 0x14);
    local_4b = *(undefined1 *)(uVar7 + 0x15);
    local_48 = *(undefined4 *)(uVar7 + 0x18);
    uVar7 = param_1;
    uVar4 = param_2;
    local_60 = &DAT_00851808;
    while( true ) {
      iVar3 = (*param_4)(uVar7,ppuVar16);
      uVar8 = uVar7;
      while (iVar3 != 0) {
        uVar8 = uVar8 + 0x1c;
        iVar3 = (*param_4)(uVar8,ppuVar16);
      }
      do {
        uVar9 = uVar4;
        uVar4 = uVar9 - 0x1c;
        iVar3 = (*param_4)(ppuVar16);
      } while (iVar3 != 0);
      if (uVar4 <= uVar8) break;
      uVar1 = *(undefined1 *)(uVar8 + 0x14);
      uVar2 = *(undefined1 *)(uVar8 + 0x15);
      uVar10 = *(undefined4 *)(uVar8 + 4);
      uVar13 = *(undefined4 *)(uVar8 + 0x10);
      uVar14 = *(undefined4 *)(uVar8 + 0x18);
      uVar11 = *(undefined4 *)(uVar8 + 8);
      uVar12 = *(undefined4 *)(uVar8 + 0xc);
      *(undefined4 *)(uVar8 + 4) = *(undefined4 *)(uVar9 - 0x18);
      uVar15 = *(undefined4 *)(uVar9 - 0x10);
      *(undefined4 *)(uVar8 + 8) = *(undefined4 *)(uVar9 - 0x14);
      *(undefined4 *)(uVar8 + 0xc) = uVar15;
      uVar7 = uVar8 + 0x1c;
      *(undefined4 *)(uVar8 + 0x10) = *(undefined4 *)(uVar9 - 0xc);
      *(undefined1 *)(uVar8 + 0x14) = *(undefined1 *)(uVar9 - 8);
      *(undefined1 *)(uVar8 + 0x15) = *(undefined1 *)(uVar9 - 7);
      *(undefined4 *)(uVar8 + 0x18) = *(undefined4 *)(uVar9 - 4);
      *(undefined4 *)(uVar9 - 0x18) = uVar10;
      *(undefined4 *)(uVar9 - 0x14) = uVar11;
      *(undefined4 *)(uVar9 - 0x10) = uVar12;
      *(undefined4 *)(uVar9 - 0xc) = uVar13;
      *(undefined1 *)(uVar9 - 8) = uVar1;
      *(undefined1 *)(uVar9 - 7) = uVar2;
      *(undefined4 *)(uVar9 - 4) = uVar14;
    }
    param_3 = param_3 / 2;
    fn_007a8ce0(uVar8,param_2,param_3,param_4);
    param_2 = uVar8;
    if ((int)(uVar8 - param_1) < 0x1c1) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007a88ac) */
/* WARNING: Removing unreachable block (ram,0x007a88bc) */
/* WARNING: Removing unreachable block (ram,0x007a88d0) */
/* WARNING: Removing unreachable block (ram,0x007a8960) */

void fn_007a878c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *local_dc;
  undefined4 local_d8;
  undefined1 *local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_a4;
  undefined1 auStack_98 [44];
  undefined1 auStack_6c [72];
  
  if ((int)param_2 - (int)param_1 < 0x2c1) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar1 = (int)param_2 - (int)param_1;
      if (0x57 < iVar1) {
        local_d0 = iVar1 / 0x2c;
        iVar11 = (local_d0 + -2) / 2;
        while( true ) {
          iVar2 = fn_001c6ba4(auStack_6c,param_1 + iVar11 * 0xb);
          *(undefined4 *)(iVar2 + 0x28) = (param_1 + iVar11 * 0xb)[10];
          fn_0079fa10(param_1,iVar11,local_d0,iVar2,param_4);
          fn_002fedf4(auStack_6c);
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
        }
      }
      while (0x2c < iVar1) {
        if (param_1 != param_2) {
          iVar1 = fn_001c6ba4(&uStack_c8,param_2 + -0xb);
          *(undefined4 *)(iVar1 + 0x28) = param_2[-1];
          fn_003007d0(param_2 + -0xb,param_1);
          uVar6 = param_1[2];
          uVar7 = param_1[3];
          param_2[-10] = param_1[1];
          param_2[-9] = uVar6;
          param_2[-8] = uVar7;
          uVar6 = param_1[5];
          uVar7 = param_1[6];
          param_2[-7] = param_1[4];
          param_2[-6] = uVar6;
          param_2[-5] = uVar7;
          uVar6 = param_1[8];
          uVar7 = param_1[9];
          param_2[-4] = param_1[7];
          param_2[-3] = uVar6;
          param_2[-2] = uVar7;
          param_2[-1] = param_1[10];
          iVar11 = fn_001c6ba4(auStack_6c,iVar1);
          *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
          fn_0079fa10(param_1,0,((int)param_2 + (-0x2c - (int)param_1)) / 0x2c,iVar11,param_4);
          fn_002fedf4(auStack_6c);
          fn_002fedf4(&uStack_c8);
        }
        param_2 = param_2 + -0xb;
        iVar1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    local_d4 = auStack_98;
    puVar9 = param_2 + -0xb;
    puVar8 = param_1 + (((int)param_2 - (int)param_1) / 0x58) * 0xb;
    iVar1 = (*param_4)(param_1,puVar8);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(param_1,puVar9);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(puVar8,puVar9);
        if (iVar1 != 0) goto LAB_007a8a90;
      }
      else {
LAB_007a8a70:
        puVar8 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(puVar8);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(param_1,puVar9);
        if (iVar1 == 0) goto LAB_007a8a70;
LAB_007a8a90:
        puVar8 = puVar9;
      }
    }
    local_a4 = fn_001c6ba4(local_d4,puVar8);
    *(undefined4 *)(local_a4 + 0x28) = puVar8[10];
    puVar8 = param_1;
    puVar9 = param_2;
    while( true ) {
      iVar1 = (*param_4)(puVar8,local_a4);
      while (iVar1 != 0) {
        puVar8 = puVar8 + 0xb;
        iVar1 = (*param_4)(puVar8,local_a4);
      }
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + -0xb;
        iVar1 = (*param_4)(local_a4);
      } while (iVar1 != 0);
      if (puVar9 <= puVar8) break;
      puVar3 = (undefined4 *)*puVar8;
      if (puVar3[-3] == -1) {
        uVar12 = puVar3[-1];
        if (0xfffffff1 < uVar12) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar12,0xfffffff1);
        }
        if (uVar12 == 0) {
          local_dc = &DAT_008f9cf8;
        }
        else {
          local_dc = (undefined4 *)fn_00100fc6(uVar12 + 0xe,0);
          if (local_dc != (undefined4 *)0x0) {
            *local_dc = 0;
            local_dc[1] = 0;
            local_dc[2] = 0;
          }
          local_dc[1] = uVar12;
          puVar5 = (undefined1 *)((int)local_dc + uVar12 + 0xc);
          local_dc[2] = uVar12;
          *local_dc = 0;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        }
        local_dc = local_dc + 3;
        fn_00301a9c(local_dc,*puVar8,uVar12);
      }
      else {
        piVar4 = puVar3 + -3;
        local_dc = puVar3;
        if (piVar4 != &DAT_008f9cf8) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_d8 = puVar8[1];
      local_d4 = (undefined1 *)puVar8[2];
      local_d0 = puVar8[3];
      local_cc = puVar8[4];
      uStack_c8 = puVar8[5];
      local_c4 = puVar8[6];
      local_c0 = puVar8[7];
      uStack_bc = puVar8[8];
      local_b8 = puVar8[9];
      local_b4 = puVar8[10];
      fn_003007d0(puVar8,puVar9);
      uVar6 = puVar10[-9];
      uVar7 = puVar10[-8];
      puVar8[1] = puVar10[-10];
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      uVar6 = puVar10[-6];
      uVar7 = puVar10[-5];
      puVar8[4] = puVar10[-7];
      puVar8[5] = uVar6;
      puVar8[6] = uVar7;
      uVar6 = puVar10[-3];
      uVar7 = puVar10[-2];
      puVar8[7] = puVar10[-4];
      puVar8[8] = uVar6;
      puVar8[9] = uVar7;
      puVar8[10] = puVar10[-1];
      fn_003007d0(puVar10 + -0xb,&local_dc);
      puVar10[-10] = local_d8;
      puVar10[-9] = local_d4;
      puVar10[-8] = local_d0;
      puVar10[-7] = local_cc;
      puVar10[-6] = uStack_c8;
      puVar10[-5] = local_c4;
      puVar10[-4] = local_c0;
      puVar10[-3] = uStack_bc;
      puVar10[-2] = local_b8;
      puVar9 = puVar10 + -0xb;
      puVar10[-1] = local_b4;
      fn_002fedf4(&local_dc);
      puVar8 = puVar8 + 0xb;
    }
    fn_002fedf4(auStack_98);
    param_3 = param_3 / 2;
    fn_007a878c(puVar8,param_2,param_3,param_4);
    param_2 = puVar8;
    if ((int)puVar8 - (int)param_1 < 0x2c1) {
      return;
    }
  } while( true );
}


