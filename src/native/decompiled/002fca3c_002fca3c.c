#include "002fca3c_002fca3c.h"



void fn_002fca3c(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_94;
  int local_90;
  int local_8c;
  char local_88 [4];
  short local_84 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_38 [20];
  
  uVar13 = *(undefined4 *)(DAT_008977e0 + 0x1c);
  iVar10 = *(int *)(DAT_008977e0 + 0xa8);
  if ((iVar10 == 6) || (iVar3 = fn_006af668(uVar13,iVar10), iVar3 != -1)) {
    pcVar4 = (char *)fn_006afe90(uVar13,iVar10);
    local_88[0] = *pcVar4;
    fn_006af3a8(&local_a4,uVar13,local_88,1);
    piVar8 = local_a0;
    if (local_88[0] == 'Z') {
      uVar11 = *(undefined4 *)(DAT_00897804 + 0x1c);
      uVar5 = fn_006b51f8(uVar11,1);
      uVar5 = fn_0026d2c4(1,uVar5);
      local_84[0] = fn_00129d4c(uVar13,uVar5);
      uVar5 = fn_006b51f8(uVar11,2);
      uVar5 = fn_0026d2c4(2,uVar5);
      local_84[1] = fn_00129d4c(uVar13,uVar5);
      uVar5 = fn_006b51f8(uVar11,3);
      uVar5 = fn_0026d2c4(3,uVar5);
      uVar2 = fn_00129d4c(uVar13,uVar5);
      local_80 = CONCAT22(((unsigned int)(local_80) >> 16) & 0xffff,uVar2);
      uVar5 = fn_006b51f8(uVar11,4);
      uVar5 = fn_0026d2c4(4,uVar5);
      uVar2 = fn_00129d4c(uVar13,uVar5);
      local_80 = CONCAT22(uVar2,(undefined2)local_80);
      uVar5 = fn_006b51f8(uVar11,5);
      uVar5 = fn_0026d2c4(5,uVar5);
      uVar2 = fn_00129d4c(uVar13,uVar5);
      local_7c = CONCAT22(((unsigned int)(local_7c) >> 16) & 0xffff,uVar2);
      piVar8 = local_a4;
      while (local_a0 != piVar8) {
        uVar5 = fn_006afe90(uVar13,(int)(short)*piVar8);
        iVar10 = fn_00147e6c(uVar5,&DAT_002fcf0c,3);
        if (iVar10 == 0) {
          if (local_a4 != local_a0) {
            if (piVar8 + 1 != local_a0) {
              piVar6 = piVar8 + 1;
              piVar7 = piVar8;
              if (piVar6 < local_a0) {
                iVar10 = (int)local_a0 - (int)piVar6;
                if (0 < iVar10) {
                  piVar9 = piVar8 + -1;
                  if (iVar10 * 0x20000000 < 0) {
                    *piVar8 = *piVar6;
                    piVar7 = piVar6;
                    piVar9 = piVar8;
                  }
                  for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                    piVar9[1] = piVar7[1];
                    piVar7 = piVar7 + 2;
                    piVar9 = piVar9 + 2;
                    *piVar9 = *piVar7;
                  }
                }
              }
              else {
                for (; piVar6 != local_a0; piVar6 = piVar6 + 1) {
                  *piVar7 = *piVar6;
                  piVar7 = piVar7 + 1;
                }
              }
            }
            local_a0 = local_a0 + -1;
          }
        }
        else {
          piVar8 = piVar8 + 1;
        }
      }
      iVar10 = 0;
      do {
        local_8c = (int)local_84[iVar10];
        if (local_a0 == local_9c) {
          fn_0079ce44(&local_a4,local_a0,&local_8c);
          piVar8 = local_a0;
        }
        else {
          piVar8 = local_a0 + 1;
          if (local_a0 != (int *)0x0) {
            *local_a0 = local_8c;
          }
        }
        local_a0 = piVar8;
        iVar10 = iVar10 + 1;
      } while (iVar10 < 5);
      local_90 = fn_00129d4c(uVar13,(char *)&DAT_002fcf10);
      if (local_a0 == local_9c) {
        fn_0079ce44(&local_a4,local_a0,&local_90);
        piVar8 = local_a0;
      }
      else {
        piVar8 = local_a0 + 1;
        if (local_a0 != (int *)0x0) {
          *local_a0 = local_90;
        }
      }
      local_a0 = piVar8;
      local_90 = fn_00129d4c(uVar13,(char *)&DAT_002fcf18);
      if (local_a0 == local_9c) {
        fn_0079ce44(&local_a4,local_a0,&local_90);
        piVar8 = local_a0;
      }
      else {
        piVar8 = local_a0 + 1;
        if (local_a0 != (int *)0x0) {
          *local_a0 = local_90;
        }
      }
      local_a0 = piVar8;
      local_90 = fn_00129d4c(uVar13,(char *)&DAT_002fcf20);
      if (local_a0 == local_9c) {
        fn_0079ce44(&local_a4,local_a0,&local_90);
        piVar8 = local_a0;
      }
      else {
        piVar8 = local_a0 + 1;
        if (local_a0 != (int *)0x0) {
          *local_a0 = local_90;
        }
      }
    }
    local_a0 = piVar8;
    local_94 = fn_006f7a9c(DAT_008977e0);
    uVar5 = fn_00278600(local_94,(int)local_88[0]);
    iVar10 = fn_00279bbc(local_94,uVar5);
    if (iVar10 == 0) {
      piVar8 = local_a4;
      if (local_a0 < local_a4) {
        do {
          piVar8 = piVar8 + 1;
        } while (piVar8 != local_a0);
      }
    }
    else {
      iVar10 = fn_00145b00(8,&DAT_00812c8c);
      piVar8 = (int *)0x0;
      if (iVar10 != 0) {
        piVar8 = (int *)fn_00692eac();
      }
      uVar11 = fn_006b7664(local_94,uVar5);
      fn_00118624(auStack_60,uVar11);
      uVar12 = 0;
      uVar1 = (int)local_a0 - (int)local_a4 >> 2;
      if (uVar1 != 0) {
        do {
          iVar3 = local_a4[uVar12];
          uVar11 = fn_006afe90(uVar13,iVar3);
          fn_00102908(auStack_38,0x10,(char *)&DAT_002fcf2c,uVar11);
          iVar10 = fn_00176d74(auStack_60,auStack_38);
          if (iVar10 != 0) {
            piVar8[1] = iVar10;
            fn_00183718(&local_80,piVar8,&DAT_002fcf3c);
            local_58 = local_80;
            uStack_54 = local_7c;
            uStack_50 = uStack_78;
            uStack_4c = uStack_74;
            uStack_48 = uStack_70;
            uStack_44 = uStack_6c;
            uStack_40 = uStack_68;
            (**(code **)(**(int **)(param_1 + 0x10) + 0xc))
                      (*(int **)(param_1 + 0x10),param_1 + 4,&local_58,iVar3);
            fn_0060e218(param_1 + 0x28,&local_58,iVar3);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar1);
      }
      fn_00279ae4(local_94,uVar5);
      fn_005f5d3c(auStack_60);
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
      }
      piVar8 = local_a4;
      if (local_a0 < local_a4) {
        do {
          piVar8 = piVar8 + 1;
        } while (piVar8 != local_a0);
      }
    }
    fn_001008c4(local_a4,(int)local_9c - (int)local_a4 >> 2,0);
  }
  return;
}


