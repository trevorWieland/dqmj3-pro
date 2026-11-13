#include "00440ea0_004419c0.h"



void fn_004419c0(int *param_1)

{
  int iVar1;
  
  fn_001db0c0();
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((iVar1 == 1) && (iVar1 = (**(code **)(*param_1 + 0x48))(param_1), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00441a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x44))(param_1,0,4);
    return;
  }
  return;
}



void fn_004419a4(int param_1)

{
  fn_002113c8();
  *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 8;
  return;
}



void fn_0044180c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  *puVar1 = &DAT_0083db58;
  *(undefined1 *)(puVar1 + 8) = param_3;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



void fn_00441588(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_c0 [8];
  uint local_b8 [3];
  undefined2 local_ac;
  undefined1 auStack_a8 [8];
  char local_a0;
  undefined1 auStack_60 [16];
  undefined2 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_3c;
  undefined4 local_38;
  int local_30;
  int *local_2c;
  int local_28;
  undefined1 local_24 [8];
  
  iVar10 = fn_0066e158(DAT_00898840);
  if (iVar10 == 0) {
    fn_003ed4ac(param_1);
    piVar15 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4);
    iVar10 = piVar15[2];
    iVar11 = *(int *)(param_1 + 4);
    if (iVar11 == 2) {
      fn_00444134(local_24);
      local_24[0] = 1;
      fn_003dcccc(iVar10,local_24,1);
      iVar11 = fn_00443e84(piVar15,1);
      if (iVar11 != 0) {
        bVar18 = true;
        iVar11 = 0;
        do {
          iVar4 = fn_006ce63c(piVar15,iVar11);
          if (iVar4 != 0) {
            pcVar12 = (char *)fn_006cb178(iVar10,iVar11);
            bVar18 = (bool)(bVar18 & *pcVar12 == '\x01');
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < 8);
        if (bVar18) {
          if (*(char *)(DAT_00898840 + 0x4d) == '\0') {
            local_30 = 0;
            fn_003dccb4(iVar10,&local_30,2);
          }
          else {
            local_30 = fn_00615e64();
            fn_003dccb4(iVar10,&local_30,2);
          }
          *(undefined4 *)(param_1 + 4) = 3;
        }
      }
    }
    else if (iVar11 == 3) {
      if (*(char *)(DAT_00897850 + 0x4d) == '\0') {
        uVar3 = (**(code **)(*piVar15 + 4))(piVar15);
        iVar11 = fn_006b6530(iVar10,2,uVar3);
        if (iVar11 != 0) {
          piVar14 = (int *)fn_006cb164(iVar10,uVar3);
          local_28 = *piVar14;
          fn_003dccb4(iVar10,&local_28,2);
        }
        iVar11 = fn_00252280(piVar15,2,0);
        if (iVar11 != 0) {
LAB_00441750:
          uVar3 = (**(code **)*piVar15)(piVar15);
          puVar13 = (undefined4 *)fn_006cb164(iVar10,uVar3);
          fn_00615ecc(*puVar13);
          *(undefined4 *)(param_1 + 4) = 4;
          return;
        }
      }
      else {
        iVar11 = fn_00252280(piVar15,2,1);
        if (iVar11 != 0) {
          uVar3 = (**(code **)*piVar15)(piVar15);
          iVar11 = fn_006cb150(iVar10,uVar3);
          if (iVar11 == 2) goto LAB_00441750;
        }
      }
    }
    else if (iVar11 == 4) {
      local_30 = param_1;
      local_2c = piVar15;
      local_28 = iVar10;
      if (*(char *)(param_1 + 0x20) == '\0') {
        local_47 = 0;
        local_48 = *(undefined1 *)(DAT_00897840 + 4);
        uVar3 = fn_001c232c(DAT_008977e4);
        fn_00205da0(auStack_c0,uVar3);
        local_47 = (char)local_b8[0] == '\x01';
        fn_003dcecc(local_28,&local_48,3);
        iVar10 = fn_00443e84(piVar15,3);
        if (iVar10 != 0) {
          iVar10 = 0;
          do {
            iVar11 = fn_006ce63c(piVar15,iVar10);
            if (iVar11 != 0) {
              puVar5 = (undefined2 *)fn_006cb220(local_28,iVar10);
              local_3c = *puVar5;
              iVar11 = (int)(char)local_3c;
              iVar4 = param_1 + iVar11;
              if (*(char *)(iVar4 + 0x10) == '\0') {
                local_38 = fn_002043cc(DAT_00897840,iVar11);
                iVar11 = fn_006e65bc(*(undefined4 *)(DAT_00897840 + 0x2c),iVar11);
                if (((unsigned int)(local_3c) >> 8) & 0xff == '\0') {
                  iVar7 = fn_002043cc(DAT_00897840,iVar11);
                  *(int *)(iVar7 + 0x798) = *(int *)(iVar7 + 0x798) + 1;
                  *(undefined1 *)(param_1 + iVar11 + 0x18) = 1;
                }
                else {
                  *(int *)(local_38 + 0x798) = *(int *)(local_38 + 0x798) + 1;
                  *(undefined1 *)(iVar4 + 0x18) = 1;
                }
                *(undefined1 *)(iVar4 + 0x10) = 1;
                *(undefined1 *)(param_1 + iVar11 + 0x10) = 1;
              }
            }
            iVar11 = (**(code **)*piVar15)(piVar15);
            if (iVar11 == iVar10) {
              puVar5 = (undefined2 *)fn_006cb220(local_28,iVar10);
              local_50 = *puVar5;
              *(undefined1 *)((int)(char)local_50 + param_1 + 0x10) = 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 8);
          iVar10 = 0;
          do {
            iVar11 = param_1 + iVar10;
            if (*(char *)(iVar11 + 0x10) == '\0') {
              iVar4 = fn_006e65bc(*(undefined4 *)(DAT_00897840 + 0x2c),(int)(char)iVar10);
              iVar7 = fn_002043cc(DAT_00897840,iVar10);
              iVar16 = fn_002043cc(DAT_00897840,iVar4);
              uVar17 = fn_005f65d4();
              if ((uVar17 & 1) == 0) {
                *(int *)(iVar7 + 0x798) = *(int *)(iVar7 + 0x798) + 1;
                *(undefined1 *)(iVar11 + 0x18) = 1;
              }
              else {
                *(int *)(iVar16 + 0x798) = *(int *)(iVar16 + 0x798) + 1;
                *(undefined1 *)(param_1 + iVar4 + 0x18) = 1;
              }
              *(undefined1 *)(iVar11 + 0x10) = 1;
              *(undefined1 *)(param_1 + iVar4 + 0x10) = 1;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < 8);
          *(undefined4 *)(param_1 + 4) = 999;
        }
        fn_00120ec8(auStack_60);
        return;
      }
      local_38 = CONCAT31((int3)(local_38 >> 8),*(undefined1 *)(DAT_00897840 + 4)) & 0xffff00ff;
      uVar3 = fn_001c232c(DAT_008977e4);
      fn_00205da0(auStack_a8,uVar3);
      if (*(char *)(param_1 + 0x21) == '\0') {
        local_38 = (local_38 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(local_a0 == '\x01',(undefined1)local_38)) & 0xffff);
      }
      else {
        local_38 = (local_38 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(1,(undefined1)local_38)) & 0xffff);
      }
      fn_003dcecc(local_28,&local_38,3);
      iVar11 = (int)*(char *)(*(int *)(DAT_00897840 + 0x30) + 0x1c);
      iVar10 = fn_00443e84(local_2c,3);
      if (iVar10 == 0) {
        fn_00120ec8(&local_48);
        return;
      }
      iVar10 = 0;
      do {
        iVar4 = fn_006ce63c(local_2c,iVar10);
        if (iVar4 != 0) {
          puVar5 = (undefined2 *)fn_006cb220(local_28,iVar10);
          local_ac = *puVar5;
          uVar17 = (uint)(char)local_ac;
          iVar4 = fn_006c56e4(*(undefined4 *)(DAT_00897840 + 0x30),uVar17);
          if (-1 < iVar4) {
            puVar6 = (uint *)fn_003a2914(*(undefined4 *)(DAT_00897840 + 0x30),iVar4);
            local_b8[2] = puVar6[2];
            local_b8[0] = *puVar6;
            local_b8[1] = puVar6[1];
            if ((int)local_b8[2] < 0) {
              if (((unsigned int)(local_ac) >> 8) & 0xff == '\0') {
                if ((local_b8[0] == uVar17) && (local_b8[1] < 0x80000000)) {
                  local_b8[2] = local_b8[1];
                }
                else {
                  local_b8[2] = local_b8[0];
                }
              }
              else {
                local_b8[2] = uVar17;
              }
              bVar18 = local_b8[2] != local_b8[0];
              uVar1 = local_b8[2];
              if (bVar18) {
                uVar1 = local_b8[1];
              }
              bVar2 = !bVar18 || uVar1 == 0xffffffff;
              if (bVar2) {
                uVar17 = 0;
              }
              if (bVar18 && uVar1 != 0xffffffff) {
                uVar17 = 1;
              }
              if (-1 < (int)local_b8[bVar2]) {
                iVar7 = fn_002043cc(DAT_00897840,local_b8[uVar17]);
                *(int *)(iVar7 + 0x798) = *(int *)(iVar7 + 0x798) + 1;
                iVar7 = fn_002043cc(DAT_00897840,local_b8[uVar17]);
                *(int *)(iVar7 + 0x79c) = *(int *)(iVar7 + 0x79c) + iVar11;
                iVar7 = fn_002043cc(DAT_00897840,local_b8[uVar17]);
                *(char *)(iVar7 + 0x1082) = *(char *)(iVar7 + 0x1082) + '\x01';
              }
              uVar17 = local_b8[0];
              if (local_b8[2] == local_b8[0]) {
                uVar17 = local_b8[1];
              }
              if (-1 < (int)uVar17) {
                iVar7 = fn_002043cc(DAT_00897840,uVar17);
                *(undefined1 *)(iVar7 + 0x1080) = 0;
              }
              puVar6 = (uint *)fn_003a2914(*(undefined4 *)(DAT_00897840 + 0x30),iVar4);
              *puVar6 = local_b8[0];
              puVar6[1] = local_b8[1];
              puVar6[2] = local_b8[2];
            }
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      iVar4 = 0;
      iVar10 = (*(int *)(*(int *)(DAT_00897840 + 0x30) + 0x14) -
               *(int *)(*(int *)(DAT_00897840 + 0x30) + 0x10)) / 0xc;
      if (0 < iVar10) {
        do {
          piVar15 = (int *)fn_003a2914(*(undefined4 *)(DAT_00897840 + 0x30),iVar4);
          iVar7 = *piVar15;
          iVar16 = piVar15[1];
          if (piVar15[2] < 0) {
            if (iVar16 < 0) {
              if (piVar15[2] < 0 && iVar16 < -1) {
                piVar15 = (int *)fn_003a2914(*(undefined4 *)(DAT_00897840 + 0x30),iVar4);
                *piVar15 = iVar7;
                piVar15[1] = iVar16;
                piVar15[2] = iVar7;
              }
            }
            else {
              uVar17 = fn_005f65d4();
              if ((uVar17 & 1) == 0) {
                iVar8 = fn_002043cc(DAT_00897840,iVar7);
                *(int *)(iVar8 + 0x798) = *(int *)(iVar8 + 0x798) + 1;
                *(char *)(iVar8 + 0x1082) = *(char *)(iVar8 + 0x1082) + '\x01';
                *(int *)(iVar8 + 0x79c) = *(int *)(iVar8 + 0x79c) + iVar11;
                iVar9 = fn_002043cc(DAT_00897840,iVar16);
                iVar8 = iVar7;
              }
              else {
                iVar8 = fn_002043cc(DAT_00897840,iVar16);
                *(int *)(iVar8 + 0x798) = *(int *)(iVar8 + 0x798) + 1;
                *(char *)(iVar8 + 0x1082) = *(char *)(iVar8 + 0x1082) + '\x01';
                *(int *)(iVar8 + 0x79c) = *(int *)(iVar8 + 0x79c) + iVar11;
                iVar9 = fn_002043cc(DAT_00897840,iVar7);
                iVar8 = iVar16;
              }
              *(undefined1 *)(iVar9 + 0x1080) = 0;
              *(char *)(iVar9 + 0x1082) = *(char *)(iVar9 + 0x1082) + '\x01';
              piVar15 = (int *)fn_003a2914(*(undefined4 *)(DAT_00897840 + 0x30),iVar4);
              *piVar15 = iVar7;
              piVar15[1] = iVar16;
              piVar15[2] = iVar8;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar10);
      }
      *(undefined4 *)(param_1 + 4) = 999;
      fn_00120ec8(&local_48);
      return;
    }
  }
  return;
}



void fn_00440ea0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fn_003ed3ac();
  *(undefined1 *)(param_1 + 0x21) = 0;
  cVar1 = *(char *)(*(int *)(DAT_00897840 + 0x30) + 0x1c);
  iVar4 = 0;
  do {
    iVar2 = fn_002043cc(DAT_00897840,iVar4);
    iVar3 = param_1 + iVar4;
    if (*(char *)(iVar3 + 0x18) != '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        *(int *)(iVar2 + 0x79c) = *(int *)(iVar2 + 0x79c) - (int)cVar1;
      }
      *(int *)(iVar2 + 0x798) = *(int *)(iVar2 + 0x798) + -1;
    }
    if (*(char *)(iVar3 + 0x10) != '\0') {
      if ((*(char *)(param_1 + 0x20) != '\0') && (*(char *)(iVar3 + 0x18) == '\0')) {
        *(undefined1 *)(iVar2 + 0x1080) = 0;
      }
      *(char *)(iVar2 + 0x1082) = *(char *)(iVar2 + 0x1082) + -1;
    }
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar3 + 0x18) = 0;
    *(undefined1 *)(iVar3 + 0x10) = 0;
  } while (iVar4 < 8);
  return;
}


