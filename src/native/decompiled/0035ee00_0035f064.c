#include "0035ee00_0035f064.h"



void fn_0035f064(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  
  iVar1 = fn_002fb61c();
  if ((iVar1 == 0) && (iVar1 = fn_00341260(0xffffffff), iVar1 == 0)) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    iVar1 = fn_006f7a0c(DAT_008977e0);
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x2c))(*(int **)(iVar1 + 0x50),&local_38);
    iVar7 = 0;
    iVar1 = (local_34 - local_38) / 0x28;
    if (0 < iVar1) {
      do {
        puVar6 = (undefined4 *)(local_38 + iVar7 * 0x28);
        uVar2 = fn_00101c78(*puVar6,auStack_2c,10);
        if (-1 < (int)uVar2) {
          iVar3 = fn_00154ac8(uVar2 + 0x9f);
          if (iVar3 == 0) {
            iVar8 = 0;
            iVar3 = 0;
            if (0 < *(int *)(param_1 + 8)) {
              do {
                puVar5 = (ushort *)(*(int *)(param_1 + 4) + iVar3 * 4);
                iVar3 = iVar3 + 1;
                if (*puVar5 == uVar2) {
                  iVar8 = (int)(short)puVar5[1];
                }
              } while (iVar3 < *(int *)(param_1 + 8));
              if (0 < iVar8) {
                iVar3 = fn_00145b00(0x1ec,&DAT_00812c8c);
                if (iVar3 == 0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  piVar9 = (int *)fn_0037b53c(iVar3,uVar2,uVar2 + 0x9f,iVar8);
                }
                iVar8 = -1;
                iVar3 = fn_0026e5c4(0x21);
                if (iVar3 != 0) {
                  uVar4 = fn_006f7a9c(DAT_008977e0);
                  iVar8 = fn_006b77f0(uVar4,(char *)&DAT_007bef58);
                  if (iVar8 == -1) {
                    iVar8 = fn_002772e4(uVar4,(char *)&DAT_007bef58);
                  }
                }
                (**(code **)(*piVar9 + 0xd0))(piVar9,puVar6 + 1);
                piVar9[0xc] = puVar6[5];
                uVar4 = fn_006f7a70(DAT_008977e0);
                fn_002fe310(uVar4,piVar9,iVar8);
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    fn_00789b34(&local_38);
  }
  return;
}



void fn_0035ee00(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint extraout_r1;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 *local_2c [2];
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  iVar11 = 0;
  iVar1 = (param_2[1] - *param_2) / 0x28;
  if (0 < iVar1) {
    do {
      puVar10 = (undefined4 *)(*param_2 + iVar11 * 0x28);
      fn_001782b8(&local_38,*puVar10,8);
      uVar3 = (uint)(char)local_38;
      uVar9 = extraout_r1;
      if (uVar3 == 0x6f) {
        uVar9 = (uint)((unsigned int)(local_38) >> 8) & 0xff;
      }
      if (uVar3 == 0x6f && uVar9 == 0x5f) {
        iVar6 = *(int *)(param_1 + 0x14);
        iVar5 = 0;
        local_2c[0] = (undefined1 *)&local_38;
        puVar2 = &local_38;
        if (0 < iVar6) {
          do {
            iVar13 = *(int *)(param_1 + 0x10) + iVar5 * 9;
            iVar4 = fn_00147e6c(iVar13,local_2c[0],8);
            if (iVar4 == 0) {
              uVar12 = *(undefined1 *)(iVar13 + 8);
              goto LAB_0035eed8;
            }
            iVar5 = iVar5 + 1;
            puVar2 = (undefined4 *)local_2c[0];
          } while (iVar5 < iVar6);
        }
        local_2c[0] = (undefined1 *)puVar2;
        uVar12 = 0;
LAB_0035eed8:
        iVar5 = fn_0026e5c4(uVar12);
        if (iVar5 == 0) {
          iVar5 = -1;
        }
        else {
          uVar8 = fn_006f7a9c(DAT_008977e0);
          iVar5 = fn_006b77f0(uVar8,&local_38);
          if (iVar5 == -1) {
            iVar5 = fn_002772e4(uVar8,&local_38);
          }
        }
        piVar7 = (int *)fn_006c2a94(param_1,uVar12);
        uVar8 = fn_006f7a70(DAT_008977e0);
        fn_002fe310(uVar8,piVar7,iVar5);
        (**(code **)(*piVar7 + 0x10))(piVar7,puVar10 + 1);
        (**(code **)(*piVar7 + 0x14))(piVar7,puVar10 + 4);
        (**(code **)(*piVar7 + 0x18))(piVar7,puVar10 + 7);
        fn_003605bc(param_1,uVar12,piVar7,*puVar10);
      }
      else {
        bVar14 = uVar3 == 0x65;
        if (bVar14) {
          uVar3 = (uint)((unsigned int)(local_38) >> 8) & 0xff;
        }
        if (bVar14 && uVar3 == 0x66) {
          iVar5 = fn_00101c78((int)&local_38 + 2,local_2c,10);
          iVar6 = fn_00101c78(local_2c[0] + 1,local_2c,10);
          piVar7 = (int *)fn_001c0050(iVar6 + iVar5 * 100);
          (**(code **)(*piVar7 + 0x10))(piVar7,puVar10 + 1);
          (**(code **)(*piVar7 + 0x14))(piVar7,puVar10 + 4);
          (**(code **)(*piVar7 + 0x18))(piVar7,puVar10 + 7);
          uVar8 = fn_006f7a70(DAT_008977e0);
          fn_002fe310(uVar8,piVar7,0xffffffff);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar1);
  }
  return;
}


