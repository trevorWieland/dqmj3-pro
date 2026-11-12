#include "002a3c70_002a4530.h"



void fn_002a4530(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar6 = 0;
  for (iVar3 = *(int *)(param_1 + 0x1c); *(int *)(param_1 + 0x20) != iVar3; iVar3 = iVar3 + 0x28) {
    if (*(int *)(iVar3 + 8) == param_2) goto LAB_002a4574;
    iVar6 = iVar6 + 1;
  }
  iVar6 = -1;
LAB_002a4574:
  iVar3 = *(int *)(param_1 + 0x1c) + iVar6 * 0x28;
  if ((*(int *)(iVar3 + 4) == 0) ||
     (iVar1 = *(int *)(iVar3 + 4) + -1, *(int *)(iVar3 + 4) = iVar1, iVar1 != 0)) {
    return;
  }
  fn_005f0938(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar3 + 0xc));
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 4) = 0;
  iVar3 = *(int *)(param_1 + 0x1c) + iVar6 * 0x28;
  puVar8 = *(undefined4 **)(iVar3 + 0x1c);
  for (puVar7 = *(undefined4 **)(iVar3 + 0x18); puVar7 != puVar8; puVar7 = puVar7 + 1) {
    fn_002feef8(*puVar7);
  }
  uVar4 = *(uint *)(iVar3 + 0x18);
  uVar5 = *(uint *)(iVar3 + 0x1c);
  if (uVar4 != uVar5) {
    uVar2 = uVar4;
    if (uVar5 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar5);
    }
    *(uint *)(iVar3 + 0x1c) = uVar5 - (uVar5 - uVar4 & 0xfffffffc);
  }
  fn_002feef8(*(undefined4 *)(iVar3 + 0x14));
  *(undefined4 *)(iVar3 + 0x14) = 0;
  return;
}



void fn_002a449c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar1 = iVar2 >> 0x1f;
  if (iVar2 / 0x28 + iVar1 != iVar1) {
    do {
      fn_0012f208(param_1,uVar3);
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1c) + uVar3 * 0x28);
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      if (puVar4[4] != 0) {
        fn_0012d73c();
      }
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 9) = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c)) / 0x28));
  }
  return;
}



void fn_002a406c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar3 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x20) == iVar1) {
      return;
    }
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = iVar1 + 0x28;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 < 0) {
    return;
  }
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = 0;
    iVar1 = iVar3;
    if (*(int *)(param_1 + 0x20) == iVar3) {
      return;
    }
    while (*(int *)(iVar1 + 8) != param_2) {
      iVar1 = iVar1 + 0x28;
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x20) == iVar1) {
        return;
      }
    }
    if (iVar4 < 0) break;
    iVar1 = fn_00145aac(*(undefined4 *)(iVar3 + iVar4 * 0x28 + 0x10));
    if (iVar1 != 0) {
      piVar5 = (int *)(*(int *)(param_1 + 0x1c) + iVar4 * 0x28);
      bVar6 = *piVar5 == 1;
      if (*piVar5 < 2) {
        bVar6 = *(char *)((int)piVar5 + 0x25) == '\0';
      }
      if (!bVar6) {
        return;
      }
      iVar1 = fn_00145aac(piVar5[4]);
      if (iVar1 == 1) {
        fn_0012f208(param_1,iVar4);
        if ((char)piVar5[9] == '\0') {
          uVar2 = fn_00145ac0(piVar5[4]);
          iVar1 = fn_00179fc4(param_1,iVar4,uVar2);
        }
        else {
          iVar1 = 1;
        }
        *(undefined1 *)((int)piVar5 + 0x25) = 1;
        if (iVar1 != 0) {
          return;
        }
      }
      fn_002a4b8c(param_1,iVar4);
      return;
    }
    fn_0012d6a4(1000000,0);
  }
  return;
}



void fn_002a3c70(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined2 uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  uint local_254;
  undefined1 auStack_250 [34];
  undefined2 local_22e;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined2 local_228;
  undefined2 local_226;
  undefined2 local_224;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_160;
  undefined2 local_15e [143];
  uint local_40;
  undefined4 *local_3c [2];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if ((param_2 == 0) || (param_3 != 0xe1)) {
    fn_0025f3f4(param_1);
    return;
  }
  fn_0017821c(auStack_250,param_2,0xf0);
  fn_002317d8(local_3c,(int)*(short *)(param_2 + 0x1c),0);
  puVar1 = local_3c[0];
  piVar11 = (int *)(local_34 + 0x20);
  uVar2 = fn_00100b58(local_3c[0]);
  puVar12 = &DAT_008f9ce8;
  puVar3 = (undefined4 *)*piVar11;
  if (uVar2 == 0) {
    piVar4 = puVar3 + -3;
    iVar8 = *piVar4;
    if (iVar8 != 0) {
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
      }
      *piVar11 = (int)&DAT_008f9cf4;
      goto LAB_002a3ed4;
    }
    puVar3[-1] = 0;
    puVar7 = (undefined2 *)*piVar11;
  }
  else {
    uVar14 = puVar3[-3] + 1;
    bVar16 = puVar3[-3] != -1;
    bVar15 = uVar14 == 1;
    if (uVar14 < 2) {
      bVar16 = (uint)puVar3[-2] <= uVar2;
      bVar15 = uVar2 == puVar3[-2];
    }
    if ((bVar16 && !bVar15) ||
       (((puVar1 != (undefined4 *)0x0 && (puVar3 <= puVar1)) &&
        (puVar1 < (undefined4 *)((int)puVar3 + puVar3[-1] * 2))))) {
      uVar14 = puVar3[-1];
      local_40 = uVar2;
      uVar5 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      local_254 = uVar14 + 0x80;
      if (uVar14 + 0x80 <= uVar5) {
        local_254 = uVar5;
      }
      puVar6 = &local_40;
      if (uVar2 <= local_254) {
        puVar6 = &local_254;
      }
      uVar14 = *puVar6;
      if (0xfffffff1 < uVar14) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14,0xfffffff1);
      }
      if (uVar14 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar14);
      }
      if (uVar14 != 0) {
        puVar12 = (undefined4 *)fn_00100fc6((uVar14 + 8) * 2,0);
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
        }
        puVar12[2] = uVar2;
        puVar7 = (undefined2 *)((int)puVar12 + uVar2 * 2 + 0xc);
        *puVar12 = 0;
        puVar12[1] = uVar14;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar12 + 3,puVar1,uVar2 << 1);
      if ((undefined4 *)*piVar11 != &DAT_008f9cf4) {
        piVar4 = (undefined4 *)*piVar11 + -3;
        iVar8 = *piVar4;
        if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*piVar11 + -0xc,*(int *)(*piVar11 + -8) + 8,0);
        }
      }
      *piVar11 = (int)(puVar12 + 3);
      goto LAB_002a3ed4;
    }
    fn_001006ac(puVar3,puVar1,uVar2);
    *(uint *)(*piVar11 + -4) = uVar2;
    puVar7 = (undefined2 *)(*piVar11 + uVar2 * 2);
  }
  *puVar7 = 0;
LAB_002a3ed4:
  if (local_28 == 0) {
    local_22e = fn_005fe128(param_2,1);
    local_22c = fn_0020ddfc(param_2,1);
    local_22a = fn_0020fd10(param_2,1);
    local_228 = fn_00210174(param_2,1);
    local_226 = fn_0020e628(param_2,1);
    local_224 = fn_0020e3a4(param_2,1);
    local_1cc = 0;
    local_1c8 = 0;
    local_1c4 = 0;
    local_1ca = 0;
    local_1c6 = 0;
    local_1c2 = 0;
  }
  else {
    local_22e = fn_00661770((int)*(short *)(param_2 + 0x1c));
    local_22c = fn_0066178c((int)*(short *)(param_2 + 0x1c));
    local_22a = fn_006612ec((int)*(short *)(param_2 + 0x1c));
    local_228 = fn_006613b4((int)*(short *)(param_2 + 0x1c));
    local_226 = fn_00661270((int)*(short *)(param_2 + 0x1c));
    local_224 = fn_006610b0((int)*(short *)(param_2 + 0x1c));
  }
  fn_0025f3f4(local_34,auStack_250);
  puVar7 = &local_160;
  puVar9 = (undefined2 *)(param_2 + 0x44);
  iVar8 = 0;
  iVar10 = 9;
LAB_002a4058:
  uVar13 = *(undefined2 *)(param_2 + 0x46);
  do {
    *puVar7 = uVar13;
    while( true ) {
      iVar10 = iVar10 + -1;
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 1;
      if (iVar10 == 0) {
        fn_0042e9bc(local_34,&local_160);
        if (local_3c[0] != &DAT_008f9cf4) {
          piVar11 = local_3c[0] + -3;
          iVar8 = *piVar11;
          if ((iVar8 == -1) || ((piVar11 != &DAT_008f9ce8 && (*piVar11 = iVar8 + -1, iVar8 == 0))))
          {
            fn_001008c4(local_3c[0] + -3,local_3c[0][-2] + 8,0);
          }
        }
        return;
      }
      if (iVar8 == 0) goto LAB_002a4058;
      if (iVar8 == 1) break;
      *puVar7 = *puVar9;
    }
    uVar13 = *(undefined2 *)(param_2 + 0x44);
  } while( true );
}


