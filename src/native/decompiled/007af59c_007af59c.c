#include "007af59c_007af59c.h"



/* WARNING: Removing unreachable block (ram,0x007af6e0) */
/* WARNING: Removing unreachable block (ram,0x007af6f0) */
/* WARNING: Removing unreachable block (ram,0x007af700) */
/* WARNING: Removing unreachable block (ram,0x007af704) */
/* WARNING: Removing unreachable block (ram,0x007af708) */
/* WARNING: Removing unreachable block (ram,0x007af710) */
/* WARNING: Removing unreachable block (ram,0x007af768) */

int * fn_007af59c(uint param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  int *piVar8;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_f0 [4];
  int local_ec [5];
  undefined *local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d2;
  int local_d0;
  undefined4 local_cc [2];
  undefined1 local_c2;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [52];
  undefined *local_70 [15];
  uint uStack_34;
  uint uStack_30;
  int local_2c;
  int iStack_28;
  
  if ((int)(param_2 - param_1) < 0x341) {
    return (int *)(param_2 - param_1);
  }
  local_70[0] = &DAT_00859628;
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  do {
    if (local_2c == 0) {
      piVar10 = (int *)(param_2 - param_1);
      piVar8 = (int *)0x0;
      if (0x67 < (int)piVar10) {
        iVar3 = ((int)piVar10 / 0x34 + -2) / 2;
        while( true ) {
          uVar12 = fn_00656538(local_ec,param_1 + iVar3 * 0x34);
          fn_007a17a0(param_1,iVar3,(int)piVar10 / 0x34,uVar12,param_4);
          piVar8 = local_ec;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
        }
      }
      while (0x34 < (int)piVar10) {
        if (param_1 != param_2) {
          uVar12 = fn_00656538(auStack_f0);
          fn_006565e0(param_2 - 0x34,param_1);
          uVar12 = fn_00656538(local_70,uVar12);
          fn_007a17a0(param_1,0,(int)((param_2 - 0x34) - param_1) / 0x34,uVar12,param_4);
        }
        param_2 = param_2 - 0x34;
        piVar8 = (int *)(param_2 - param_1);
        piVar10 = piVar8;
      }
      return piVar8;
    }
    cVar1 = *(char *)(param_4 + 1);
    uVar6 = param_2 - 0x34;
    iVar4 = *(int *)(param_1 + 8);
    uVar7 = param_1 + ((int)(param_2 - param_1) / 0x68) * 0x34;
    iVar2 = *(int *)(uVar7 + 8);
    iVar5 = iVar2;
    iVar3 = iVar4;
    if (cVar1 == '\x01') {
      iVar3 = -iVar4;
      iVar5 = -iVar2;
    }
    iVar11 = *(int *)(param_2 - 0x2c);
    if (iVar5 < iVar3) {
      iVar3 = iVar11;
      if (cVar1 == '\x01') {
        iVar2 = -iVar2;
        iVar3 = -iVar11;
      }
      if (iVar3 < iVar2) {
LAB_007af838:
        uVar6 = uVar7;
      }
      else {
        if (cVar1 == '\x01') {
          iVar4 = -iVar4;
          iVar11 = -iVar11;
        }
        if (iVar4 <= iVar11) goto LAB_007af658;
      }
    }
    else {
      iVar3 = iVar11;
      if (cVar1 == '\x01') {
        iVar4 = -iVar4;
        iVar3 = -iVar11;
      }
      if (iVar4 <= iVar3) {
        if (cVar1 == '\x01') {
          iVar2 = -iVar2;
          iVar11 = -iVar11;
        }
        if (iVar11 < iVar2) goto LAB_007af83c;
        goto LAB_007af838;
      }
LAB_007af658:
      uVar6 = param_1;
    }
LAB_007af83c:
    iVar3 = fn_00656538(auStack_a4,uVar6);
    uVar6 = param_2;
    uVar7 = param_1;
    while( true ) {
      while( true ) {
        iVar4 = *(int *)(iVar3 + 8);
        iVar5 = *(int *)(uVar7 + 8);
        iVar2 = iVar4;
        if (*(char *)(param_4 + 1) == '\x01') {
          iVar5 = -iVar5;
          iVar2 = -iVar4;
        }
        if (iVar5 <= iVar2) break;
        uVar7 = uVar7 + 0x34;
      }
      do {
        uVar9 = uVar6;
        piVar8 = (int *)(uVar9 - 0x2c);
        iVar2 = *piVar8;
        iVar5 = iVar4;
        if (*(char *)(param_4 + 1) == '\x01') {
          iVar5 = -iVar4;
          iVar2 = -iVar2;
        }
        uVar6 = uVar9 - 0x34;
      } while (iVar2 < iVar5);
      if (uVar6 <= uVar7) break;
      local_d8 = local_70[0];
      local_d4 = *(undefined1 *)(uVar7 + 4);
      local_d3 = *(undefined1 *)(uVar7 + 5);
      local_d2 = *(undefined1 *)(uVar7 + 6);
      local_d0 = *(int *)(uVar7 + 8);
      fn_006f94f4(local_cc,uVar7 + 0xc);
      local_ec[0] = uVar9 - 0x28;
      local_cc[0] = CONCAT22((short)((uint)*(undefined4 *)(uVar7 + 0xc) >> 0x10),
                             *(undefined2 *)(uVar7 + 0xc));
      local_c2 = *(undefined1 *)(uVar7 + 0x16);
      local_c0 = *(undefined4 *)(uVar7 + 0x18);
      uStack_bc = *(undefined4 *)(uVar7 + 0x1c);
      uStack_b8 = *(undefined4 *)(uVar7 + 0x20);
      uStack_b4 = *(undefined4 *)(uVar7 + 0x24);
      uStack_b0 = *(undefined4 *)(uVar7 + 0x28);
      uStack_ac = *(undefined4 *)(uVar7 + 0x2c);
      uStack_a8 = *(undefined4 *)(uVar7 + 0x30);
      *(undefined1 *)(uVar7 + 4) = *(undefined1 *)(uVar9 - 0x30);
      *(undefined1 *)(uVar7 + 5) = *(undefined1 *)(uVar9 - 0x2f);
      *(undefined1 *)(uVar7 + 6) = *(undefined1 *)(uVar9 - 0x2e);
      *(int *)(uVar7 + 8) = *piVar8;
      fn_006f94f4(uVar7 + 0xc);
      *(undefined4 *)(uVar7 + 0xc) = *(undefined4 *)(uVar9 - 0x28);
      *(undefined2 *)(uVar7 + 0xc) = *(undefined2 *)(uVar9 - 0x28);
      *(undefined2 *)(uVar7 + 0xc) = *(undefined2 *)(uVar9 - 0x28);
      *(undefined2 *)(uVar7 + 0xc) = *(undefined2 *)(uVar9 - 0x28);
      *(undefined1 *)(uVar7 + 0x16) = *(undefined1 *)(uVar9 - 0x1e);
      uVar12 = *(undefined4 *)(uVar9 - 0x18);
      uVar13 = *(undefined4 *)(uVar9 - 0x14);
      uVar14 = *(undefined4 *)(uVar9 - 0x10);
      uVar15 = *(undefined4 *)(uVar9 - 0xc);
      uVar16 = *(undefined4 *)(uVar9 - 8);
      uVar17 = *(undefined4 *)(uVar9 - 4);
      *(undefined4 *)(uVar7 + 0x18) = *(undefined4 *)(uVar9 - 0x1c);
      *(undefined4 *)(uVar7 + 0x1c) = uVar12;
      *(undefined4 *)(uVar7 + 0x20) = uVar13;
      *(undefined4 *)(uVar7 + 0x24) = uVar14;
      *(undefined4 *)(uVar7 + 0x28) = uVar15;
      *(undefined4 *)(uVar7 + 0x2c) = uVar16;
      *(undefined4 *)(uVar7 + 0x30) = uVar17;
      *(undefined1 *)(uVar9 - 0x30) = local_d4;
      *(undefined1 *)(uVar9 - 0x2f) = local_d3;
      *(undefined1 *)(uVar9 - 0x2e) = local_d2;
      *piVar8 = local_d0;
      fn_006f94f4(local_ec[0],local_cc);
      *(undefined4 *)(uVar9 - 0x28) = local_cc[0];
      *(undefined2 *)(uVar9 - 0x28) = (undefined2)local_cc[0];
      *(undefined2 *)(uVar9 - 0x28) = (undefined2)local_cc[0];
      *(undefined2 *)(uVar9 - 0x28) = (undefined2)local_cc[0];
      *(undefined1 *)(uVar9 - 0x1e) = local_c2;
      *(undefined4 *)(uVar9 - 0x1c) = local_c0;
      *(undefined4 *)(uVar9 - 0x18) = uStack_bc;
      *(undefined4 *)(uVar9 - 0x14) = uStack_b8;
      *(undefined4 *)(uVar9 - 0x10) = uStack_b4;
      *(undefined4 *)(uVar9 - 0xc) = uStack_b0;
      *(undefined4 *)(uVar9 - 8) = uStack_ac;
      *(undefined4 *)(uVar9 - 4) = uStack_a8;
      uVar7 = uVar7 + 0x34;
    }
    local_2c = local_2c / 2;
    fn_007af59c(uVar7,param_2,local_2c,param_4);
    param_2 = uVar7;
    if ((int)(uVar7 - param_1) < 0x341) {
      return (int *)(uVar7 - param_1);
    }
  } while( true );
}


