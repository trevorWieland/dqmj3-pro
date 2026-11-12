#include "00470c5c_004715ec.h"



void fn_004715ec(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x90);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  (**(code **)(*piVar4 + 0x78))(param_1,piVar4,param_3,param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00471668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00471578(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 auStack_20 [16];
  
  fn_004b9d24();
  local_28[0] = 0;
  iVar1 = fn_006d3b54(param_1,local_28);
  if ((iVar1 == 0) && (piVar2 = *(int **)(param_2 + 0x90), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x5c))(auStack_20,piVar2,*(undefined4 *)(param_2 + 0x70));
    fn_004b8d90(param_1,auStack_20);
    local_24[0] = 0;
    fn_006d3b54(param_1,local_24);
  }
  return;
}



void fn_004712c8(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int local_30 [2];
  undefined1 auStack_28 [20];
  
  local_30[1] = 0x10001;
  uVar1 = fn_004b8d4c(param_1,local_30 + 1);
  if (param_3 == 0) {
    (**(code **)(**(int **)(param_2 + 0x90) + 0x74))
              (auStack_28,*(int **)(param_2 + 0x90),0,param_4,param_5);
    fn_004b8d90(uVar1,auStack_28);
    fn_004b9c58(*(undefined4 *)(param_2 + 0x90),0);
    fn_004b9cb4(*(undefined4 *)(param_2 + 0x90),0);
    fn_004b9c58(param_2,0);
    fn_004b9cb4(param_2,0);
    *(undefined4 *)(*(int *)(param_2 + 0x90) + 0x74) = 0;
    fn_004b9d74(*(undefined4 *)(param_2 + 0x90));
    *(undefined4 *)(param_2 + 0x90) = 0;
    return;
  }
  *(int *)(param_2 + 0x94) = param_3;
  *(undefined4 *)(param_2 + 0x98) = *param_4;
  local_30[0] = param_2;
  (**(code **)(**(int **)(param_2 + 0x90) + 0x74))
            (auStack_28,*(int **)(param_2 + 0x90),fn_00471460,local_30,param_5);
  fn_004b8d90(uVar1,auStack_28);
  return;
}



void fn_00471460(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 != 0) {
    fn_004b9c58(*(undefined4 *)(iVar1 + 0x90),0);
    fn_004b9cb4(*(undefined4 *)(iVar1 + 0x90),0);
    fn_004b9c58(iVar1,0);
    fn_004b9cb4(iVar1,0);
    *(undefined4 *)(*(int *)(iVar1 + 0x90) + 0x74) = 0;
    fn_004b9d74(*(undefined4 *)(iVar1 + 0x90));
    *(undefined4 *)(iVar1 + 0x90) = 0;
    pcVar3 = *(code **)(iVar1 + 0x94);
    *(undefined4 *)(iVar1 + 0x94) = 0;
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    (*pcVar3)(iVar1,&local_20,iVar1 + 0x98);
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}



int fn_00471194(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  puVar1 = param_1 + 1;
  *param_1 = &DAT_008531d8;
  param_1[0x272] = 0;
  param_1[0x273] = 0x9908b0df;
  *puVar1 = 1;
  param_1[0x271] = 1;
  do {
    puVar1[param_1[0x271]] = puVar1[param_1[0x271] + -1] * 0x10dcd;
    uVar4 = param_1[0x271] + 1;
    param_1[0x271] = uVar4;
  } while (uVar4 < 0x270);
  iVar2 = fn_004745d8(param_1 + 0x274,1);
  piVar5 = (int *)(iVar2 + -0x9cc);
  iVar3 = fn_004ba5ac();
  if (iVar3 == 0) {
    iVar3 = 0x1105;
  }
  *piVar5 = iVar3;
  *(undefined4 *)(iVar2 + -0xc) = 1;
  do {
    piVar5[*(int *)(iVar2 + -0xc)] = piVar5[*(int *)(iVar2 + -0xc) + -1] * 0x10dcd;
    uVar4 = *(uint *)(iVar2 + -0xc) + 1;
    *(uint *)(iVar2 + -0xc) = uVar4;
  } while (uVar4 < 0x270);
  return iVar2 + -0x9d0;
}



bool fn_00470f90(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  bool bVar8;
  int *local_48 [8];
  int local_28;
  int local_24;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) == 0) {
    return false;
  }
  local_48[0] = &local_28;
  local_24 = 0;
  local_28 = 0;
  iVar2 = fn_0046ffa8(param_1,param_2,param_3,&local_24);
  if ((iVar2 != 0) && (iVar2 = fn_00454b8c(param_2,param_3 + 0x28,0x10), iVar2 != 0)) {
    *(undefined4 *)(param_3 + 0x38) = 0x10;
    iVar2 = *(int *)(param_2 + 8);
    if (((local_24 == 0) || (iVar3 = fn_00470088(param_1,param_2,param_3), iVar3 != 0)) &&
       (bVar1 = *(byte *)(param_3 + 0x25) >> 4, bVar1 < 0xc)) {
      iVar3 = *(int *)(param_3 + 0xd8);
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      bVar8 = local_28 == 0;
      if (!bVar8) {
        if (*(uint *)(iVar2 + 0x10) < (uint)(*(int *)(param_2 + 0xc) + local_28)) {
          return false;
        }
        iVar2 = fn_0015ef58(*(undefined4 *)(param_3 + 0xd8),
                             *(int *)(param_2 + 0xc) +
                             *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18),local_28,0xffffffff);
        if (iVar2 != 0) {
          bVar8 = true;
          uVar4 = local_28 + *(int *)(param_2 + 0xc);
          if (uVar4 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
            *(uint *)(param_2 + 0xc) = uVar4;
          }
          if (*(int *)(*(int *)(param_3 + 0xd8) + 0x10) != 0) {
            iVar2 = fn_004b616c(bVar1);
            piVar5 = *(int **)(iVar2 + 0x14);
            if (piVar5 != (int *)0x0) {
              (**(code **)(*piVar5 + 0x14))(piVar5,*(undefined4 *)(param_3 + 0xd8));
            }
            iVar2 = fn_004b616c(bVar1);
            piVar5 = *(int **)(iVar2 + 0x10);
            if (piVar5 != (int *)0x0) {
              piVar6 = piVar5 + 4;
              uVar7 = *(undefined4 *)(param_3 + 0xd8);
              (**(code **)(*piVar6 + 8))();
              fn_004b5488(local_48,2000);
              iVar2 = (**(code **)(*piVar5 + 0xc))(piVar5,uVar7,local_48);
              fn_004b5540(uVar7,local_48);
              fn_0014f480(local_48);
              (**(code **)(*piVar6 + 0xc))(piVar6);
              if (iVar2 != 0) {
                return false;
              }
            }
          }
        }
      }
      if (param_4 == (undefined4 *)0x0) {
        return bVar8;
      }
      *param_4 = *(undefined4 *)(param_2 + 0xc);
      return bVar8;
    }
  }
  return false;
}



undefined4 fn_00470c5c(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined2 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined1 local_38 [8];
  undefined1 local_30 [12];
  
  piVar8 = (int *)0x0;
  bVar2 = false;
  uVar6 = 0;
  bVar1 = *(byte *)(param_2 + 0x25) >> 4;
  if ((*(ushort *)(param_2 + 0x3c) & 0xf) == 7) {
    iVar5 = *(int *)(param_2 + 0xd8);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x18),
                 *(undefined4 *)(iVar5 + 0x10),0xffffffff);
    *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(*(int *)(param_3 + 8) + 0x10);
    uVar3 = 1;
  }
  else {
    if (*(char *)(param_2 + 0x89) == '\0') {
      *(undefined1 *)(param_2 + 0x89) = 1;
      *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_2 + 0x25);
      *(undefined1 *)(param_2 + 0x6d) = *(undefined1 *)(param_2 + 0x26);
      *(undefined2 *)(param_2 + 0x6e) = *(undefined2 *)(param_2 + 0x3c);
      *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_2 + 0x65);
      *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)(param_2 + 0x84);
      *(undefined2 *)(param_2 + 0x72) = *(undefined2 *)(param_2 + 0x44);
      iVar5 = fn_004703e4(param_1);
      if (iVar5 == 0) {
        return 0;
      }
    }
    piVar4 = *(int **)(param_2 + 0xd8);
    if (piVar4 != (int *)0x0) {
      iVar5 = fn_004b616c(bVar1);
      piVar8 = *(int **)(iVar5 + 0x10);
      if (piVar8 != (int *)0x0) {
        iVar5 = fn_0015ece0(0x20);
        if (iVar5 == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)fn_004b5488(iVar5,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0x40);
        }
        iVar5 = *(int *)(param_2 + 0xd8);
        (**(code **)(piVar8[4] + 8))();
        (**(code **)(*piVar8 + 8))(piVar8,iVar5,piVar4);
        piVar8[2] = *(int *)(iVar5 + 0x10) + piVar8[2];
        piVar8[3] = piVar4[4] + piVar8[3];
        (**(code **)(piVar8[4] + 0xc))(piVar8 + 4);
        bVar2 = true;
      }
      iVar5 = fn_004b616c(bVar1);
      piVar7 = *(int **)(iVar5 + 0x14);
      piVar8 = piVar4;
      if (piVar7 != (int *)0x0) {
        iVar5 = fn_0015ece0(0x20);
        piVar8 = (int *)0x0;
        if (iVar5 != 0) {
          piVar8 = (int *)fn_004b5488(iVar5,piVar4[4]);
        }
        (**(code **)(*piVar7 + 8))(piVar7,piVar4,piVar8);
        if (bVar2 && piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))(piVar4);
        }
        bVar2 = true;
      }
      uVar6 = (undefined2)piVar8[4];
    }
    local_30[0] = 0xea;
    fn_0015ef58(*(undefined4 *)(param_3 + 8),local_30,1,0xffffffff);
    local_30[0] = 0xd0;
    fn_0015ef58(*(undefined4 *)(param_3 + 8),local_30,1,0xffffffff);
    *(undefined1 *)(param_2 + 0x68) = 1;
    *(char *)(param_2 + 0x69) = (char)*(undefined4 *)(param_2 + 0x9c);
    *(undefined2 *)(param_2 + 0x6a) = uVar6;
    iVar5 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x68,0xc,0xffffffff);
    uVar3 = 0;
    if (iVar5 != 0) {
      if (*(int *)(param_2 + 0x38) == 0) {
        uVar9 = 0;
        do {
          local_38[0] = 0;
          fn_0015ef58(*(undefined4 *)(param_3 + 8),local_38,1,0xffffffff);
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x10);
      }
      else {
        iVar5 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x28,*(int *)(param_2 + 0x38),
                             0xffffffff);
        if (iVar5 == 0) {
          return 0;
        }
      }
      if ((*(int *)(param_2 + 0x9c) != 0) &&
         (iVar5 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0xa0,*(int *)(param_2 + 0x9c),
                               0xffffffff), iVar5 == 0)) {
        return 0;
      }
      if (*(int *)(param_2 + 0xd8) != 0) {
        fn_0015ef58(*(undefined4 *)(param_3 + 8),piVar8[6] + piVar8[3],piVar8[4],0xffffffff);
      }
      *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(*(int *)(param_3 + 8) + 0x10);
      if (bVar2 && piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))(piVar8);
      }
      return 1;
    }
  }
  return uVar3;
}


