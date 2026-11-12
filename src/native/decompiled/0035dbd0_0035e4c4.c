#include "0035dbd0_0035e4c4.h"



undefined4 fn_0035e4c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  fn_006f7a9c(DAT_008977e0);
  uVar1 = fn_002791dc();
  uVar2 = fn_006f7a9c(DAT_008977e0);
  iVar3 = fn_00279bbc(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_006b7664(uVar2,uVar1);
    iVar4 = fn_00147e6c(iVar3,&DAT_007bef40,4);
    if (iVar4 == 0) {
      uVar2 = fn_006f7a9c(DAT_008977e0);
      uVar5 = fn_0012a25c(uVar2,uVar1);
      *(int *)(param_1 + 4) = iVar3 + 4;
      *(uint *)(param_1 + 8) =
           (uint)uVar5 - 4 >> 2 |
           ((int)((ulonglong)uVar5 >> 0x20) - (uint)((uint)uVar5 < 4)) * 0x40000000;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
    }
  }
  fn_006f7a9c(DAT_008977e0);
  uVar1 = fn_00279248();
  uVar2 = fn_006f7a9c(DAT_008977e0);
  iVar3 = fn_00279bbc(uVar2,uVar1);
  if (iVar3 != 0) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_006b7664(uVar2,uVar1);
    iVar4 = fn_00147e6c(iVar3,&DAT_007bef45,4);
    if (iVar4 == 0) {
      uVar2 = fn_006f7a9c(DAT_008977e0);
      uVar5 = fn_0012a25c(uVar2,uVar1);
      uVar2 = fn_00169c20((uint)uVar5 - 4,(int)((ulonglong)uVar5 >> 0x20) - (uint)((uint)uVar5 < 4)
                           ,9,0);
      *(int *)(param_1 + 0x10) = iVar3 + 4;
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
  }
  return 1;
}



void fn_0035dbd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  
  iVar1 = fn_00341260(0xffffffff);
  if ((iVar1 != 0) && (local_50 = fn_003412c0(), -1 < local_50)) {
    puVar11 = (undefined4 *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    iVar1 = fn_006f7a0c(DAT_008977e0);
    (**(code **)(**(int **)(iVar1 + 0x50) + 100))(*(int **)(iVar1 + 0x50),&local_5c,local_50);
    if (local_5c != local_58) {
      uVar2 = fn_006f751c(DAT_008977e0);
      fn_00340514(uVar2,local_50);
      fn_006f751c(DAT_008977e0);
      fn_00340d08();
      uVar2 = fn_006f7a70(DAT_008977e0);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      iVar10 = 0;
      iVar1 = (local_58 - local_5c) / 0x28;
      if (0 < iVar1) {
        do {
          puVar9 = (undefined4 *)(local_5c + iVar10 * 0x28);
          fn_001782b8(&local_40,*puVar9,8);
          uVar3 = fn_00341498(&local_40);
          if (uVar3 < 2) {
            local_34 = &local_40;
            iVar15 = *(int *)(param_1 + 0x14);
            iVar12 = 0;
            if (0 < iVar15) {
              do {
                iVar14 = *(int *)(param_1 + 0x10) + iVar12 * 9;
                iVar4 = fn_00147e6c(iVar14,local_34,8);
                if (iVar4 == 0) {
                  uVar13 = *(undefined1 *)(iVar14 + 8);
                  goto LAB_0035dd40;
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar15);
            }
            uVar13 = 0;
LAB_0035dd40:
            puVar11 = (undefined4 *)&DAT_ffffffff;
            iVar12 = fn_0026e5c4(uVar13);
            if (iVar12 != 0) {
              uVar5 = fn_006f7a9c(DAT_008977e0);
              puVar11 = (undefined4 *)fn_006b77f0(uVar5,&local_40);
              if (puVar11 == (undefined4 *)&DAT_ffffffff) {
                puVar11 = (undefined4 *)fn_002772e4(uVar5,&local_40);
              }
            }
            piVar6 = (int *)fn_006c2a94(param_1,uVar13);
            fn_002fe310(uVar2,piVar6,puVar11);
            (**(code **)(*piVar6 + 0x10))(piVar6,puVar9 + 1);
            (**(code **)(*piVar6 + 0x14))(piVar6,puVar9 + 4);
            (**(code **)(*piVar6 + 0x18))(piVar6,puVar9 + 7);
            if (uVar3 == 0) {
              piVar6[0x4e] = piVar6[0x4e] & 0xfffffff7;
              uVar5 = fn_006f751c(DAT_008977e0);
              fn_00340420(uVar5,&local_40);
            }
            else {
              piVar6[0x4e] = piVar6[0x4e] | 8;
              fn_001d96a0(piVar6,&DAT_007bef84);
            }
            fn_003605bc(param_1,uVar13,piVar6,*puVar9);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
      if (0 < iVar1) {
        puVar11 = &DAT_008977e0;
      }
      iVar10 = 0;
      if (0 < iVar1) {
        do {
          puVar9 = (undefined4 *)(local_5c + iVar10 * 0x28);
          fn_001782b8(&local_40,*puVar9,8);
          iVar12 = fn_00341498(&local_40);
          if (iVar12 == 2) {
            uVar5 = fn_0033ea24(&local_40);
            uVar7 = fn_00102d68(&local_40);
            iVar12 = fn_001030a6(&local_40,0x70);
            uVar8 = fn_006f751c(*puVar11);
            fn_0033f4c4(uVar8,local_50,uVar5,uVar7,iVar12 != 0,puVar9 + 1);
          }
          else {
            if (iVar12 == 3) {
              uVar5 = fn_006f7a9c(*puVar11);
              iVar12 = fn_006b7a48(uVar5,4);
              if (iVar12 == -1) {
                iVar12 = fn_002783f4(uVar5,4);
              }
              iVar15 = fn_00145b00(0x16c,&DAT_00812c8c);
              if (iVar15 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)fn_0036254c();
              }
              (**(code **)(*piVar6 + 0xa0))(piVar6,iVar12);
              iVar12 = fn_001030a6(&local_40,0x70);
              if (iVar12 != 0) goto LAB_0035e124;
LAB_0035e13c:
              (**(code **)(*piVar6 + 0xd0))(piVar6,puVar9 + 1);
            }
            else {
              if (iVar12 == 4) {
                uVar5 = fn_006f7a9c(*puVar11);
                iVar12 = fn_006b7a48(uVar5,5);
                if (iVar12 == -1) {
                  iVar12 = fn_002783f4(uVar5,5);
                }
                iVar15 = fn_00145b00(0x16c,&DAT_00812c8c);
                if (iVar15 == 0) {
                  piVar6 = (int *)0x0;
                }
                else {
                  piVar6 = (int *)fn_00362a3c();
                }
                (**(code **)(*piVar6 + 0xa0))(piVar6,iVar12);
                iVar12 = fn_001030a6(&local_40,0x70);
              }
              else {
                if (iVar12 != 5) goto LAB_0035dfd4;
                uVar5 = fn_006f7a9c(*puVar11);
                iVar12 = fn_006b7a48(uVar5,6);
                if (iVar12 == -1) {
                  iVar12 = fn_002783f4(uVar5,6);
                }
                iVar15 = fn_00145b00(0x16c,&DAT_00812c8c);
                piVar6 = (int *)0x0;
                if (iVar15 != 0) {
                  piVar6 = (int *)fn_0037ba10();
                }
                (**(code **)(*piVar6 + 0xa0))(piVar6,iVar12);
                iVar12 = fn_001030a6(&local_40,0x70);
              }
              if (iVar12 == 0) goto LAB_0035e13c;
LAB_0035e124:
              (**(code **)(*piVar6 + 0x10))(piVar6,puVar9 + 1);
            }
            (**(code **)(*piVar6 + 0x14))(piVar6,puVar9 + 4);
            fn_002fe5f0(uVar2,piVar6);
          }
LAB_0035dfd4:
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
      }
      fn_006f751c(DAT_008977e0);
      fn_00340fe4();
      fn_00789b34(&local_5c);
      return;
    }
    fn_00789b34(&local_5c);
  }
  return;
}


