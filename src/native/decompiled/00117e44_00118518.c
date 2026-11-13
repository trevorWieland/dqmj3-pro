#include "00117e44_00118518.h"



undefined4 fn_00118518(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint local_34 [8];
  
  local_34[0] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  uVar4 = fn_0014d6cc(local_34,param_3,1);
  uVar2 = (undefined4)(uVar4 >> 0x20);
  bVar3 = (uVar4 & 0x80000000) != 0;
  if (bVar3) {
    uVar2 = 0x118578;
  }
  if (bVar3 && (int)uVar4 < 0) {
    fn_0015e590((int)uVar4,uVar2);
  }
  iVar1 = fn_001560d8(local_34,local_34 + 5);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x1185a8);
  }
  uVar2 = fn_00143ac8(local_34[5],0x80);
  iVar1 = fn_0014d9ec(local_34,local_34 + 5,uVar2,local_34[5]);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x1185dc);
  }
  fn_001422a0(param_2,uVar2);
  if ((local_34[0] & 0xfffffffe) != 0) {
    if ((local_34[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_34[0] & 0xfffffffe);
  }
  return 1;
}



undefined4 fn_001183b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  uint local_34 [7];
  
  local_34[0] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  uVar5 = fn_0014d6cc(local_34,param_2,1);
  uVar3 = (undefined4)(uVar5 >> 0x20);
  bVar4 = (uVar5 & 0x80000000) != 0;
  if (bVar4) {
    uVar3 = 0x118414;
  }
  if (bVar4 && (int)uVar5 < 0) {
    fn_0015e590((int)uVar5,uVar3);
  }
  iVar1 = fn_001560d8(local_34,local_34 + 5);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x118444);
  }
  uVar3 = fn_001287dc(local_34[5],4);
  iVar1 = fn_0014d9ec(local_34,local_34 + 5,uVar3,local_34[5]);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x118478);
  }
  if ((local_34[0] & 0xfffffffe) != 0) {
    if ((local_34[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_34[0] & 0xfffffffe);
    local_34[0] = 0;
  }
  uVar2 = fn_00127904(uVar3,local_34[5]);
  uVar2 = fn_00143ac8(uVar2,4);
  fn_00127838(param_1 + 0x48,uVar2,uVar3,local_34[5]);
  fn_00143b48(uVar3);
  if ((local_34[0] & 0xfffffffe) != 0) {
    if ((local_34[0] & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_34[0] & 0xfffffffe);
  }
  return uVar2;
}



void fn_001182ac(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)fn_00145b00(0x14,&DAT_00812c8c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[3] = param_1;
    piVar2[4] = 0;
    fn_0012bb50(2,piVar2 + 1);
    fn_0012b2f0(piVar2[1]);
    fn_0012b604(piVar2[3],param_2);
    fn_0012beb4(0x200,0x300);
    fn_0012b574();
    fn_0012b2f0(piVar2[2]);
    fn_0012b604(piVar2[3],param_2);
    fn_0012beb4(0x200,0x300);
    fn_0012b574();
    fn_0012b2f0(piVar2[*piVar2 + 1]);
  }
  piVar1 = DAT_008bf77c;
  if (DAT_008bf77c != piVar2) {
    if (DAT_008bf77c != (int *)0x0) {
      fn_0012b6ec(2,DAT_008bf77c + 1);
      fn_002feef8(piVar1);
    }
    DAT_008bf77c = piVar2;
  }
  return;
}



undefined4 * fn_00118290(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (DAT_0089a508 != '\0') {
    puVar1 = &DAT_0089a50c;
  }
  return puVar1;
}



void fn_00117e44(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int **ppiVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int **ppiVar12;
  uint uVar13;
  bool bVar14;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined4 local_44;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  iVar1 = fn_0012382c();
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_00123908();
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_00124e88();
  if (iVar1 < 0) {
    fn_00146594();
  }
  if (param_6 == 1) {
    fn_0013e69c(param_7);
    fn_00124f90(3);
  }
  local_64 = 4;
  local_5c = 0x4000;
  uStack_58 = 0x20000;
  uStack_54 = 3;
  local_50 = 0x4000;
  uStack_4c = 0x2000;
  local_48 = 1;
  local_47 = 0;
  local_46 = 1;
  local_44 = 0xffffffff;
  local_60 = param_6;
  uVar2 = fn_001264bc(&local_64);
  piVar3 = (int *)fn_001287b4();
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,4);
  param_1[0xdb] = iVar1;
  fn_00126288(&local_64,iVar1,uVar2);
  *(char *)(param_1 + 0xe1) = (char)param_3;
  if (param_3 == 0) {
    iVar4 = fn_00145b00(0x194,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = fn_0012659c();
    }
    *param_1 = iVar1;
    fn_001268b8(iVar1,param_2);
    uVar2 = fn_001458cc(iVar1 + 0x13c);
    piVar3 = (int *)fn_001287b4();
    iVar4 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,4);
    param_1[0xdc] = iVar4;
    fn_00126810(iVar1,iVar4,uVar2);
  }
  uVar2 = fn_0012a014(param_1 + 0x47,*param_1);
  piVar3 = (int *)fn_001287b4();
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,4);
  param_1[0xdd] = iVar1;
  fn_001265b8(param_1 + 0x47,*param_1,iVar1,uVar2);
  uVar2 = fn_0012a034(param_1 + 1,*param_1,0);
  piVar3 = (int *)fn_001287b4();
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,0x20);
  param_1[0xde] = iVar1;
  uVar5 = fn_0012a198(param_1 + 1,*param_1);
  piVar3 = (int *)fn_001287b4();
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,uVar5,0x20);
  param_1[0xdf] = iVar1;
  fn_001266c4(param_1 + 1,*param_1,param_1 + 0x47,param_1[0xde],uVar2,iVar1,uVar5,0);
  piVar3 = (int *)fn_001287b4();
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3,param_4,4);
  param_1[0xe0] = iVar1;
  fn_001277f8(param_1 + 0xcf,iVar1,param_4);
  ppiVar12 = (int **)(param_1 + 0xd7);
  piVar3 = (int *)fn_001287b4();
  local_3c = 0;
  local_34 = 0x40000000;
  local_40 = piVar3;
  if (ppiVar12 != &local_40) {
    local_3c = param_1[0xd8];
    local_34 = param_1[0xda];
    local_40 = *ppiVar12;
    *ppiVar12 = piVar3;
    param_1[0xd8] = 0;
    param_1[0xd9] = 0;
    param_1[0xda] = 0x40000000;
  }
  ppiVar12 = &local_40;
  local_38 = local_3c;
  iVar1 = 0;
  if (local_40 != (int *)0x0) {
    iVar1 = local_3c;
  }
  if (local_40 != (int *)0x0 && iVar1 != 0) {
    (**(code **)(*local_40 + 0xc))(local_40,local_3c);
  }
  uVar13 = 0;
  if (param_5 != 0) {
    do {
      ppiVar6 = (int **)fn_00145b00(4,&DAT_00812c8c);
      bVar14 = ppiVar6 != (int **)0x0;
      if (bVar14) {
        *ppiVar6 = (int *)0x0;
      }
      if (bVar14) {
        ppiVar12 = ppiVar6;
      }
      if (!bVar14) {
        ppiVar12 = (int **)0x0;
      }
      uVar10 = param_1[0xda] & 0x3fffffff;
      piVar3 = param_1 + 0xd7;
      if (param_1[0xd9] - param_1[0xd8] >> 2 < (int)uVar10) {
LAB_00118260:
        if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[0xd9] = ppiVar12;
        }
        param_1[0xd9] = param_1[0xd9] + 4;
      }
      else {
        if (uVar10 == 0) {
          uVar10 = 1;
        }
        else {
          uVar10 = uVar10 << 1;
        }
        if (uVar10 <= (param_1[0xda] & 0x3fffffffU)) goto LAB_00118260;
        if (((*piVar3 != 0) && ((param_1[0xda] & 0xc0000000U) == 0x40000000)) &&
           (puVar7 = (undefined4 *)
                     (**(code **)(*(int *)*piVar3 + 8))((int *)*piVar3,uVar10 << 2,0x20),
           puVar7 != (undefined4 *)0x0)) {
          puVar9 = (undefined4 *)param_1[0xd8];
          puVar11 = (undefined4 *)param_1[0xd9];
          local_68 = 0;
          puVar8 = puVar7;
          if (puVar9 != puVar11) {
            do {
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = *puVar9;
              }
              puVar9 = puVar9 + 1;
              puVar8 = puVar8 + 1;
            } while (puVar9 != puVar11);
            local_68 = param_1[0xd9] - param_1[0xd8] >> 2;
          }
          if (param_1[0xd8] != 0) {
            param_1[0xd9] = param_1[0xd8];
            (**(code **)(*(int *)*piVar3 + 0xc))();
          }
          param_1[0xd9] = (int)(puVar7 + local_68);
          param_1[0xd8] = (int)puVar7;
          param_1[0xda] = param_1[0xda] & 0xc0000000U | uVar10;
          goto LAB_00118260;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < param_5);
  }
  return;
}


