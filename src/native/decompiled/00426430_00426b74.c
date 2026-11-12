#include "00426430_00426b74.h"



void fn_00426b74(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 local_24;
  float fStack_20;
  undefined4 local_1c;
  
  iVar1 = fn_006ba284();
  param_2 = param_2 + iVar1 * 7;
  if (*(int *)(param_1 + 0x100) == param_2) {
    fn_0068ab44(param_1,0x100094b);
    fn_004269f4(param_1);
    return;
  }
  if (*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) != 0) {
    psVar2 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),param_2);
    uVar3 = fn_0068f6a8((int)*psVar2);
    if ((ushort)psVar2[1] < uVar3) {
      fn_0068ab44(param_1,0x100094b);
      iVar1 = fn_006ba284(param_1);
      if (iVar1 < 1) {
        fn_00689828(param_1,0);
        psVar2 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8),param_2);
        uVar4 = (uint)(ushort)psVar2[1];
        uVar3 = fn_0068f6a8((int)*psVar2);
        if ((int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) < (int)(uVar3 - uVar4)) {
          uVar3 = (int)*(short *)(*(int *)(param_1 + 0xf8) + 0x4a) + uVar4 & 0xffff;
        }
        *(int *)(param_1 + 0x10c) = param_2;
        fStack_20 = (float)VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
        fStack_20 = fStack_20 * -18.0;
        local_24 = 0;
        local_1c = 0;
        fn_00327a24(*(undefined4 *)(param_1 + 0x104),uVar4,uVar3,uVar4,&local_24);
        *(undefined1 *)(param_1 + 0x108) = 1;
      }
      return;
    }
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



undefined4 * fn_00426b44(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x130,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003984a8(iVar1,param_1);
  *puVar2 = &DAT_0083b2b0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0xffffffff;
  puVar2[0x41] = 0;
  *(undefined1 *)(puVar2 + 0x42) = 0;
  puVar2[0x43] = 0xffffffff;
  *(undefined1 *)(puVar2 + 0x44) = 0;
  puVar2[0x45] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  puVar2[0x48] = 0;
  *(undefined2 *)(puVar2 + 0x49) = 0;
  iVar3 = fn_00145b00(0x188,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = fn_00299cf8();
  }
  iVar3 = puVar2[0x45];
  if (iVar3 != iVar1) {
    if (iVar3 != 0) {
      fn_002feef8(iVar3);
    }
    puVar2[0x45] = iVar1;
  }
  local_20 = 10;
  puVar11 = puVar2 + 0x46;
  if ((uint)((int)(puVar2[0x48] - puVar2[0x46]) >> 1) < 10) {
    uVar12 = (int)(puVar2[0x47] - puVar2[0x46]) >> 1;
    local_1c[0] = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    if (local_1c[0] < uVar12 + 0x20) {
      local_1c[0] = uVar12 + 0x20;
    }
    puVar8 = local_1c;
    if (local_1c[0] < 0xb) {
      puVar8 = &local_20;
    }
    uVar12 = *puVar8;
    puVar4 = (undefined2 *)fn_00100fc6(uVar12 << 1,0);
    puVar10 = (undefined2 *)puVar2[0x47];
    puVar5 = puVar4;
    for (puVar9 = (undefined2 *)*puVar11; puVar9 != puVar10; puVar9 = puVar9 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar5 = puVar5 + 1;
    }
    uVar6 = *puVar11;
    uVar7 = uVar6;
    if ((uint)puVar2[0x47] < uVar6) {
      do {
        uVar7 = uVar7 + 2;
      } while (uVar7 != puVar2[0x47]);
    }
    fn_001008c4(uVar6,(int)(puVar2[0x48] - uVar6) >> 1,0);
    uVar7 = *puVar11;
    puVar2[0x46] = puVar4;
    puVar2[0x47] = (puVar2[0x47] - uVar7 & 0xfffffffe) + (int)puVar4;
    puVar2[0x48] = puVar4 + uVar12;
  }
  return puVar2;
}



void fn_00426abc(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = fn_006ba284();
  if (*(int *)(param_1 + 0x100) == iVar1 * 7 + param_2) {
    return;
  }
  psVar2 = (short *)fn_006e8d04(*(undefined4 *)(param_1 + 0xf8));
  uVar3 = fn_0068f708((int)*psVar2,psVar2[1]);
  uVar4 = fn_0068f654((int)*psVar2);
  if (uVar3 < uVar4) {
    fn_00426ed0(param_1,*psVar2,uVar3 + 1 & 0xff,0);
    return;
  }
  fn_00426ed0(param_1,*psVar2,uVar3,1);
  return;
}



void fn_004269f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0xc));
  fn_002999ac(*(undefined4 *)(param_1 + 0x114),uVar1);
  fn_0017821c(uVar1,*(int *)(param_1 + 0xf8) + 0x10,0xf0);
  fn_00299c10(*(undefined4 *)(param_1 + 0x114),uVar1);
  fn_00289f30(*(undefined4 *)(DAT_00897804 + 0x24),uVar1);
  iVar2 = *(int *)(*(int *)(param_1 + 0xf8) + 8);
  if (iVar2 == 0) {
    fn_006899f4(param_1,0x59,0);
  }
  else {
    fn_006899f4(param_1,iVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00426a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xf8) + 0xc))();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00426894(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_40;
  undefined4 local_3c [2];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  uint uStack_28;
  
  uVar5 = 0;
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  do {
    uVar6 = _DAT_00891cd8;
    fn_00580cb8(param_1,uVar5 & 0xff,&DAT_004254e0);
    local_40 = uVar6;
    fn_003981d4(param_1,uVar5 & 0xff,&local_40);
    uVar1 = local_2c;
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  iVar2 = (int)(short)param_2;
  uVar5 = fn_0068f708(iVar2,param_4);
  if (uVar5 != 0) {
    uVar3 = fn_0068f654(iVar2);
    bVar8 = uVar3 <= uVar5;
    if (uVar5 <= uVar3) {
      bVar8 = param_4 <= uVar1;
    }
    if ((!bVar8) && (uVar5 = fn_0068f85c(iVar2,uVar5), uVar5 == param_4)) {
      uVar6 = fn_0068f708(iVar2,param_4);
      uVar4 = fn_0022f584((char *)&DAT_0042640c,0);
      uVar7 = _DAT_00891cf4;
      fn_00580cb8(param_1,0,uVar4);
      local_3c[0] = uVar7;
      fn_003981d4(param_1,0,local_3c);
      fn_006cdb0c(&local_40,param_1,iVar2,uVar6);
      uVar6 = _DAT_00891cf4;
      fn_00580cb8(param_1,3,local_40);
      local_3c[0] = uVar6;
      fn_003981d4(param_1,3,local_3c);
      fn_001588d4(&local_40);
      return;
    }
  }
  fn_00425c04(param_1,param_2,param_4);
  return;
}



undefined4 fn_00426430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  uint *puVar16;
  undefined4 *local_3c [2];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar2 = (int)(short)param_2;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  uVar3 = fn_0068f708(iVar2,param_3);
  uVar4 = fn_0068f708(iVar2,local_28);
  if (uVar3 == uVar4) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000958;
    while (uVar3 = uVar3 + 1 & 0xff, uVar3 <= uVar4) {
      fn_00425628(local_3c,param_1,local_30,uVar3);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),local_3c[0],1,0,1,1,0,0,1);
      uVar1 = fn_0068f85c(iVar2,uVar3);
      puVar15 = *(undefined2 **)(param_1 + 0x11c);
      puVar16 = (uint *)(param_1 + 0x118);
      if (puVar15 == *(undefined2 **)(param_1 + 0x120)) {
        uVar9 = (int)((int)puVar15 - *puVar16) >> 1;
        if (uVar9 < (uint)((int)((int)*(undefined2 **)(param_1 + 0x120) - *puVar16) >> 1)) {
          *(undefined2 **)(param_1 + 0x11c) = puVar15 + 1;
          if (puVar15 != (undefined2 *)0x0) {
            *puVar15 = puVar15[-1];
          }
          puVar11 = puVar15 + -1;
          puVar12 = puVar15;
          if (puVar15 < puVar11) {
            iVar14 = (int)puVar11 - (int)puVar15;
            if (0 < iVar14) {
              if (iVar14 * 0x40000000 < 0) {
                puVar11 = puVar15 + -2;
                puVar12 = puVar15 + -1;
                *puVar12 = *puVar11;
              }
              for (iVar14 = iVar14 >> 2; iVar14 != 0; iVar14 = iVar14 + -1) {
                puVar12[-1] = puVar11[-1];
                puVar11 = puVar11 + -2;
                puVar12 = puVar12 + -2;
                *puVar12 = *puVar11;
              }
            }
          }
          else {
            while (puVar15 != puVar11) {
              puVar11 = puVar11 + -1;
              puVar12[-1] = *puVar11;
              puVar12 = puVar12 + -1;
            }
          }
          *puVar15 = uVar1;
        }
        else {
          uVar6 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar6 < uVar9 + 0x20) {
            uVar6 = uVar9 + 0x20;
          }
          puVar7 = (undefined2 *)fn_00100fc6(uVar6 << 1,0);
          puVar12 = puVar7;
          for (puVar11 = (undefined2 *)*puVar16; puVar11 != puVar15; puVar11 = puVar11 + 1) {
            if (puVar12 != (undefined2 *)0x0) {
              *puVar12 = *puVar11;
            }
            puVar12 = puVar12 + 1;
          }
          puVar11 = (undefined2 *)(((int)puVar15 - *puVar16 & 0xfffffffe) + (int)puVar7);
          if (puVar11 != (undefined2 *)0x0) {
            *puVar11 = uVar1;
          }
          puVar12 = *(undefined2 **)(param_1 + 0x11c);
          puVar11 = (undefined2 *)(((int)puVar15 - *puVar16 & 0xfffffffe) + (int)puVar7);
          for (; puVar15 != puVar12; puVar15 = puVar15 + 1) {
            puVar11 = puVar11 + 1;
            if (puVar11 != (undefined2 *)0x0) {
              *puVar11 = *puVar15;
            }
          }
          uVar8 = *puVar16;
          uVar13 = *(uint *)(param_1 + 0x11c);
          uVar9 = uVar8;
          if (uVar13 < uVar8) {
            do {
              uVar9 = uVar9 + 2;
            } while (uVar9 != uVar13);
          }
          fn_001008c4(uVar8,(int)(*(int *)(param_1 + 0x120) - uVar8) >> 1,0);
          *(undefined2 **)(param_1 + 0x120) = puVar7 + uVar6;
          *(undefined2 **)(param_1 + 0x11c) = puVar7 + ((int)(uVar13 - uVar8) >> 1) + 1;
          *puVar16 = (uint)puVar7;
        }
      }
      else {
        *(undefined2 **)(param_1 + 0x11c) = puVar15 + 1;
        if (puVar15 != (undefined2 *)0x0) {
          *puVar15 = uVar1;
        }
      }
      if (local_3c[0] != &DAT_008f9cf4) {
        piVar10 = local_3c[0] + -3;
        iVar14 = *piVar10;
        if ((iVar14 == -1) || ((piVar10 != &DAT_008f9ce8 && (*piVar10 = iVar14 + -1, iVar14 == 0))))
        {
          fn_001008c4(local_3c[0] + -3,local_3c[0][-2] + 8,0);
        }
      }
    }
    *(short *)(param_1 + 0x124) = (short)local_28;
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0x108) = 3;
    uVar5 = 1;
  }
  return uVar5;
}


