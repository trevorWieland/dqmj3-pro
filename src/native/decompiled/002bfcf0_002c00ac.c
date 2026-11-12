#include "002bfcf0_002c00ac.h"



void fn_002c00ac(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  uint local_88;
  uint local_84;
  uint local_7c [3];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [20];
  int *piStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  local_7c[0] = 2;
  puVar16 = (uint *)(param_1 + 0x28);
  piStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  if ((uint)(param_1[0x2a] - param_1[0x28] >> 2) < 2) {
    puVar14 = &local_88;
    uVar17 = param_1[0x29] - param_1[0x28] >> 2;
    local_88 = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
    if (local_88 < uVar17 + 0x20) {
      local_88 = uVar17 + 0x20;
    }
    if (local_88 < 3) {
      puVar14 = local_7c;
    }
    uVar17 = *puVar14;
    puVar6 = (undefined4 *)fn_00100fc6(uVar17 << 2,0);
    puVar11 = (undefined4 *)param_1[0x29];
    puVar12 = puVar6;
    for (puVar15 = (undefined4 *)*puVar16; puVar15 != puVar11; puVar15 = puVar15 + 1) {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar15;
      }
      puVar12 = puVar12 + 1;
    }
    uVar7 = *puVar16;
    uVar8 = uVar7;
    if ((uint)param_1[0x29] < uVar7) {
      do {
        uVar8 = uVar8 + 4;
      } while (uVar8 != param_1[0x29]);
    }
    fn_001008c4(uVar7,(int)(param_1[0x2a] - uVar7) >> 2,0);
    uVar8 = *puVar16;
    param_1[0x28] = (int)puVar6;
    param_1[0x29] = (param_1[0x29] - uVar8 & 0xfffffffc) + (int)puVar6;
    param_1[0x2a] = (int)(puVar6 + uVar17);
  }
  iVar20 = 0;
  fn_0079e0cc(auStack_50,param_3 + 8);
  fn_0079e0cc(auStack_44,param_3 + 0x1c);
  uVar17 = 0;
  do {
    iVar19 = 0;
    while( true ) {
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      fn_00102908(&local_70,0x20,(&DAT_00893b2c)[uVar17],iVar19);
      iVar9 = fn_00172c98(local_2c,&local_70);
      if (iVar9 == 0) break;
      iVar10 = fn_00145b00(0x34,&DAT_00812c8c);
      if (iVar10 == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)(*param_1 + 8))(param_1);
        uVar18 = fn_00345ccc(iVar10,uVar18);
      }
      if (iVar19 == 0) {
        cVar1 = *(char *)(param_3 + 0x19);
        cVar2 = *(char *)(param_3 + 0x17);
        cVar3 = *(char *)(param_3 + 0x29);
        cVar4 = *(char *)(param_3 + 0x14);
        cVar5 = *(char *)(param_3 + 0x18);
      }
      else {
        cVar1 = *(char *)(param_3 + 0x2d);
        cVar2 = *(char *)(param_3 + 0x2b);
        cVar3 = *(char *)(param_3 + 0x29);
        cVar4 = *(char *)(param_3 + 0x28);
        cVar5 = *(char *)(param_3 + 0x2c);
      }
      local_84 = (uint)cVar1;
      local_88 = (uint)cVar2;
      fn_003455b0(uVar18,iVar9,param_1,param_1[0x12],auStack_50 + iVar20 * 0xc,(int)cVar5,
                   (int)cVar4,(int)cVar3);
      puVar16 = (uint *)(param_1 + 0x28);
      puVar15 = (undefined4 *)param_1[0x29];
      if (puVar15 == (undefined4 *)param_1[0x2a]) {
        uVar8 = (int)((int)puVar15 - *puVar16) >> 2;
        if (uVar8 < (uint)((int)(param_1[0x2a] - *puVar16) >> 2)) {
          param_1[0x29] = (int)(puVar15 + 1);
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = puVar15[-1];
          }
          puVar12 = puVar15 + -1;
          puVar6 = puVar15;
          if (puVar15 < puVar12) {
            if (0 < (int)puVar12 - (int)puVar15) {
              iVar9 = (int)puVar12 - (int)puVar15 >> 2;
              iVar10 = 0;
              do {
                iVar9 = iVar9 + -1;
                puVar15[iVar10 + -1] = puVar12[iVar10 + -1];
                iVar10 = iVar10 + -1;
              } while (iVar9 != 0);
            }
          }
          else {
            while (puVar15 != puVar12) {
              puVar12 = puVar12 + -1;
              puVar6[-1] = *puVar12;
              puVar6 = puVar6 + -1;
            }
          }
          *puVar15 = uVar18;
        }
        else {
          local_84 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (local_84 < uVar8 + 0x20) {
            local_84 = uVar8 + 0x20;
          }
          puVar11 = (undefined4 *)fn_00100fc6(local_84 << 2,0);
          puVar6 = puVar11;
          for (puVar12 = (undefined4 *)*puVar16; puVar12 != puVar15; puVar12 = puVar12 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar12;
            }
            puVar6 = puVar6 + 1;
          }
          puVar12 = (undefined4 *)((int)puVar11 + ((int)puVar15 - *puVar16 & 0xfffffffc));
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = uVar18;
          }
          puVar6 = (undefined4 *)param_1[0x29];
          puVar12 = (undefined4 *)((int)puVar11 + ((int)puVar15 - *puVar16 & 0xfffffffc));
          for (; puVar15 != puVar6; puVar15 = puVar15 + 1) {
            puVar12 = puVar12 + 1;
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = *puVar15;
            }
          }
          uVar7 = *puVar16;
          uVar13 = param_1[0x29];
          uVar8 = uVar7;
          if (uVar13 < uVar7) {
            do {
              uVar8 = uVar8 + 4;
            } while (uVar8 != uVar13);
          }
          fn_001008c4(uVar7,(int)(param_1[0x2a] - uVar7) >> 2,0);
          param_1[0x2a] = (int)(puVar11 + local_84);
          *puVar16 = (uint)puVar11;
          param_1[0x29] = (int)(puVar11 + ((int)(uVar13 - uVar7) >> 2) + 1);
        }
      }
      else {
        param_1[0x29] = (int)(puVar15 + 1);
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = uVar18;
        }
      }
      iVar19 = iVar19 + 1;
      iVar20 = iVar20 + 1;
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 2);
  fn_00100414(auStack_50,fn_0079e188,0xc,2);
  return;
}



undefined1 * fn_002c0020(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
    puVar3 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      fn_0020bbc4(auStack_20);
      uVar2 = fn_006bf5e0(auStack_1c);
      *(undefined4 *)(*param_2 + iVar4 * 4) = uVar2;
      fn_006bfe90(auStack_1c);
      iVar1 = fn_001cab7c();
      iVar4 = iVar4 + iVar1;
      puVar3 = auStack_20;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return puVar3;
}



void fn_002bfea4(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_28;
  uint uStack_24;
  int local_20;
  
  fn_0079e0cc(&local_28,param_3 + 1);
  iVar4 = 0;
  iVar1 = (**(code **)(*param_3 + 0x14))(param_3);
  if (0 < iVar1) {
    do {
      if (*(int *)(local_28 + iVar4 * 4) != 0) {
        uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        if (param_2 == 0) {
          fn_0036ee94(*(undefined4 *)(param_1 + 0x8c),uVar2,iVar4);
        }
        else {
          fn_0036fb74();
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = (**(code **)(*param_3 + 0x14))(param_3);
    } while (iVar4 < iVar1);
  }
  uVar3 = local_28;
  if (uStack_24 < local_28) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uStack_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  return;
}



void fn_002bfd10(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  piVar2 = (int *)fn_002c11d0(param_1,*(undefined4 *)(param_1 + 0x68),0);
  fn_002e3ef4(piVar2,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x70));
    iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2);
    if (iVar4 == 0) {
      iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x74));
      fn_0020bbc4(auStack_20,iVar4);
      uVar5 = fn_006bfda8(auStack_1c);
      fn_002b427c(piVar3,uVar5);
      uVar5 = fn_006bfe90(auStack_1c);
      fn_002b4348(piVar3,uVar5);
      uVar1 = fn_006bf34c(auStack_1c);
      *(undefined1 *)((int)piVar3 + 0x3d) = uVar1;
      uVar1 = fn_001f84ac(iVar4 + 0x72);
      *(undefined1 *)((int)piVar3 + 0x3f) = uVar1;
      uVar1 = fn_006bf184(auStack_1c);
      *(undefined1 *)((int)piVar3 + 0x43) = uVar1;
    }
    (**(code **)(*piVar3 + 0x20))(piVar3,1);
    iVar4 = 0;
    do {
      iVar6 = fn_002c11d0(param_1,iVar4,0);
      if (iVar6 != 0) {
        fn_002e40c8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar4 = 0;
    do {
      iVar6 = fn_002c11d0(param_1,iVar4,0);
      if (iVar6 != 0) {
        fn_002e3ff4();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  fn_002b427c(*(undefined4 *)(param_1 + 0x94),0);
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3d) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3f) = 0;
  (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),0);
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x43) = 0;
  return;
}



void fn_002bfcf0(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  
  fn_0068b14c(*(undefined4 *)(param_1 + 0xe4),1);
  piVar2 = (int *)fn_002c11d0(param_1,*(undefined4 *)(param_1 + 0x68),0);
  fn_002e3ef4(piVar2,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(param_1 + 0x70));
    iVar4 = (**(code **)(*piVar2 + 0x18))(piVar2);
    if (iVar4 == 0) {
      iVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x74));
      fn_0020bbc4(auStack_20,iVar4);
      uVar5 = fn_006bfda8(auStack_1c);
      fn_002b427c(piVar3,uVar5);
      uVar5 = fn_006bfe90(auStack_1c);
      fn_002b4348(piVar3,uVar5);
      uVar1 = fn_006bf34c(auStack_1c);
      *(undefined1 *)((int)piVar3 + 0x3d) = uVar1;
      uVar1 = fn_001f84ac(iVar4 + 0x72);
      *(undefined1 *)((int)piVar3 + 0x3f) = uVar1;
      uVar1 = fn_006bf184(auStack_1c);
      *(undefined1 *)((int)piVar3 + 0x43) = uVar1;
    }
    (**(code **)(*piVar3 + 0x20))(piVar3,1);
    iVar4 = 0;
    do {
      iVar6 = fn_002c11d0(param_1,iVar4,0);
      if (iVar6 != 0) {
        fn_002e40c8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar4 = 0;
    do {
      iVar6 = fn_002c11d0(param_1,iVar4,0);
      if (iVar6 != 0) {
        fn_002e3ff4();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  fn_002b427c(*(undefined4 *)(param_1 + 0x94),0);
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3d) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x3f) = 0;
  (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),0);
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x43) = 0;
  return;
}


