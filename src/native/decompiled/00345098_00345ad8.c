#include "00345098_00345ad8.h"



void fn_00345ad8(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00345b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))();
  return;
}



void fn_00345a7c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  bVar3 = piVar1 == (int *)0x0;
  if (bVar3) {
    piVar1 = *(int **)(param_1 + 0x2c);
  }
  if ((bVar3 && piVar1 == (int *)0x0) ||
     (iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,0), iVar2 == 0)) {
    return;
  }
  fn_002b3c24(iVar2,param_2);
  return;
}



void fn_003455b0(int param_1,int *param_2,undefined4 param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7,undefined1 param_8,uint param_9,uint param_10)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_34;
  int *local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  puVar12 = (uint *)(param_1 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_5 != puVar12) {
    puVar1 = (undefined4 *)param_5[1];
    puVar8 = (undefined4 *)*param_5;
    puVar6 = (undefined4 *)*puVar12;
    uVar10 = (int)puVar1 - (int)puVar8;
    uVar13 = (int)uVar10 >> 2;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 2) < uVar13) {
      local_80 = uVar13;
      uVar10 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      local_7c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
      if (local_7c < uVar10 + 0x20) {
        local_7c = uVar10 + 0x20;
      }
      puVar2 = &local_7c;
      if (local_7c <= uVar13) {
        puVar2 = &local_80;
      }
      uVar13 = *puVar2;
      puVar1 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
      puVar9 = (undefined4 *)param_5[1];
      puVar6 = puVar1;
      for (puVar8 = (undefined4 *)*param_5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar8;
        }
        puVar6 = puVar6 + 1;
      }
      uVar3 = *puVar12;
      uVar10 = uVar3;
      if (*(uint *)(param_1 + 8) < uVar3) {
        do {
          uVar10 = uVar10 + 4;
        } while (uVar10 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xc) - uVar3) >> 2,0);
      *puVar12 = (uint)puVar1;
      *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + (int)puVar1;
      *(undefined4 **)(param_1 + 0xc) = puVar1 + uVar13;
    }
    else {
      uVar3 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      if (uVar3 < uVar13) {
        puVar1 = puVar8 + uVar3;
        if (puVar8 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar8) {
            puVar9 = puVar6 + -1;
            puVar11 = puVar8 + -1;
            if (((int)puVar1 - (int)puVar8) * 0x20000000 < 0) {
              *puVar6 = *puVar8;
              puVar9 = puVar6;
              puVar11 = puVar8;
            }
            for (iVar4 = (int)puVar1 - (int)puVar8 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar9[1] = puVar11[1];
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 2;
              *puVar9 = *puVar11;
            }
          }
        }
        else {
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            *puVar6 = *puVar8;
            puVar6 = puVar6 + 1;
          }
        }
        *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + *puVar12;
        puVar1 = (undefined4 *)param_5[1];
        puVar6 = (undefined4 *)(*puVar12 + uVar3 * 4);
        for (puVar8 = (undefined4 *)(*param_5 + uVar3 * 4); puVar8 != puVar1; puVar8 = puVar8 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar8;
          }
          puVar6 = puVar6 + 1;
        }
      }
      else {
        if (puVar8 < puVar1) {
          if (0 < (int)uVar10) {
            puVar1 = puVar6 + -1;
            puVar9 = puVar8 + -1;
            if ((int)(uVar10 * 0x20000000) < 0) {
              *puVar6 = *puVar8;
              puVar1 = puVar6;
              puVar9 = puVar8;
            }
            for (iVar4 = (int)uVar10 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar1[1] = puVar9[1];
              puVar9 = puVar9 + 2;
              puVar1 = puVar1 + 2;
              *puVar1 = *puVar9;
            }
            puVar6 = (undefined4 *)((int)puVar6 + (uVar10 & 0xfffffffc));
          }
        }
        else {
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            *puVar6 = *puVar8;
            puVar6 = puVar6 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar6) {
          do {
            puVar6 = puVar6 + 1;
          } while (puVar6 != *(undefined4 **)(param_1 + 8));
        }
        iVar4 = (param_5[1] - *param_5 & 0xfffffffc) + *puVar12;
        *(int *)(param_1 + 8) = iVar4;
        *(int *)(param_1 + 0xc) = iVar4;
      }
    }
  }
  iVar4 = (**(code **)(*local_30 + 0x2c))(local_30,(char *)&DAT_00345a70,1);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  if (iVar4 == 0) {
    iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      local_78 = param_9 ^ 1;
      local_74 = 0;
      local_70 = param_7;
      local_80 = param_4;
      local_7c = param_1 + 4U;
      local_6c = param_10;
      piVar5 = (int *)fn_003064c8(iVar4,*(undefined4 *)(param_1 + 0x14),local_30,1);
    }
    piVar7 = *(int **)(param_1 + 0x28);
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *(int **)(param_1 + 0x28) = piVar5;
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    local_80 = 1;
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_50,4);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    iVar4 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      local_74 = param_7;
      local_78 = param_9;
      local_80 = param_4;
      local_7c = param_1 + 4U;
      local_70 = param_10;
      piVar5 = (int *)fn_00307738(iVar4,*(undefined4 *)(param_1 + 0x14),local_30,1);
    }
    piVar7 = *(int **)(param_1 + 0x2c);
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *(int **)(param_1 + 0x2c) = piVar5;
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
    local_80 = 1;
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x2c),&local_50,4);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  fn_002e3f6c(&local_68);
  local_5c = 1;
  uStack_58 = 4;
  local_53 = 0;
  local_54 = param_8;
  local_52 = (undefined1)param_7;
  fn_0078cb6c(&local_68,4,0,0);
  local_80 = param_9;
  fn_002e3d70(param_1,&local_68,&local_50,4);
  local_78 = param_7 ^ 1;
  local_7c = 1;
  local_80 = 4;
  local_74 = 0;
  fn_002e3c08(param_1,&local_68,local_2c,param_6);
  uVar13 = local_68;
  if (uStack_64 < local_68) {
    do {
      uVar13 = uVar13 + 8;
    } while (uVar13 != uStack_64);
  }
  fn_001008c4(local_68,(int)(local_60 - local_68) >> 3,0);
  return;
}



int fn_003454c8(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  int local_28;
  
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003d6ce8();
  }
  local_34 = 3;
  local_30 = param_1;
  local_2f = param_2;
  local_2e = param_3;
  iVar1 = fn_00615e64();
  uVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_008977e0 + 0x1c);
  do {
    local_28 = iVar1;
    (**(code **)(*piVar2 + 0x14))(piVar2,auStack_38,1);
    iVar3 = fn_006afa24(uVar5,*(undefined4 *)piVar2[0xc]);
    if (iVar3 != 0) break;
    uVar4 = uVar4 + 1;
    iVar1 = iVar1 + 1;
  } while (uVar4 < 100000);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  return iVar1;
}



void fn_003453b4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = fn_0022f584((char *)&DAT_00345478,0);
  fn_00147974(param_1 + 4,uVar1);
  if (param_2 == 0) {
    fn_00101a50(&local_28,0xc,&DAT_003454a8);
  }
  else {
    fn_00101a50(&local_28,0xc,&DAT_003454a0,param_2);
  }
  fn_00147974(param_1 + 8,&local_28);
  uVar1 = fn_0022f584((char *)&DAT_003454ac,0);
  fn_00147974(param_1 + 0x10,uVar1);
  fn_00101a50(&local_28,0xc,&DAT_003454a0,param_3);
  fn_00147974(param_1 + 0x14,&local_28);
  return;
}



int fn_0034514c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)(short)param_1 * (int)(short)param_1 * 0x14;
  }
  return iVar1;
}



void fn_00345098(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = fn_0022f584((char *)&DAT_00345120,0);
  fn_00147974(param_1 + 4,uVar1);
  if (param_2 == 0) {
    fn_00101a50(&local_28,0xc,&DAT_00345148);
  }
  else {
    fn_00101a50(&local_28,0xc,&DAT_00345140,param_2);
  }
  fn_00147974(param_1 + 8,&local_28);
  return;
}


