#include "004878f0_0048830c.h"



void fn_0048830c(void)

{
  int iVar1;
  
  iVar1 = fn_0048833c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 fn_00488000(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  iVar5 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  piVar4 = (int *)**(int **)(param_1 + 100);
  do {
    if (piVar4 == (int *)*(int *)(param_1 + 100)) {
LAB_00488068:
      if (iVar5 == 0) {
        (**(code **)(*piVar3 + 0xc))(piVar3);
        return 999;
      }
      if (*(int *)(iVar5 + 0x78) != -1) {
        iVar2 = fn_006d0810(iVar5 + 4,&DAT_007d9c48,0);
        if (iVar2 == 0) {
          (**(code **)(*piVar3 + 0xc))(piVar3);
          return 100;
        }
        (**(code **)(*piVar3 + 0xc))(piVar3);
        return 0x6e;
      }
      if (*(int *)(iVar5 + 0x8c) == 0) {
        (**(code **)(*piVar3 + 0xc))(piVar3);
        return 200;
      }
      iVar2 = fn_006d0810(iVar5 + 4,&DAT_007d9c48,0);
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 0xc))(piVar3);
        return 0xc9;
      }
      (**(code **)(*piVar3 + 0xc))();
      return 0xd2;
    }
    iVar2 = fn_006d0810(piVar4 + 3,L"RVCID",0);
    if (iVar2 == param_2) {
      iVar5 = (int)(piVar4 + 2);
      goto LAB_00488068;
    }
    piVar4 = (int *)*piVar4;
  } while( true );
}



undefined4 fn_00487dd4(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  undefined1 auStack_28 [4];
  undefined *local_24;
  undefined1 auStack_20 [4];
  undefined *local_1c;
  
  iVar3 = fn_001249d0();
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xc);
  }
  piVar5 = (int *)(iVar4 + 0x50);
  (**(code **)(*piVar5 + 8))();
  if ((*(int *)(param_1 + 8) != 0) && (iVar3 = fn_006d0810(param_2,L"RVCID",0), iVar3 != 0)) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    fn_00455124(auStack_28,param_2,L"PRID");
    iVar3 = fn_006d2054(param_1,param_2,0);
    if (iVar3 != 0) {
      fn_00455124(auStack_28,param_2,&DAT_007d9c48,1);
      fn_004554ec(param_2,param_1 + 0x110);
      fn_00455124(auStack_28,param_2,&DAT_007d9e58,*(undefined2 *)(param_1 + 0x118));
    }
    piVar7 = (int *)**(int **)(param_1 + 0x2c);
    if (piVar7 != *(int **)(param_1 + 0x2c)) {
      do {
        fn_006d0734(auStack_28,piVar7 + 2);
        fn_006d0734(auStack_20,param_2);
        if (local_24 == local_1c) {
LAB_00487f08:
          iVar3 = fn_006d0810(piVar7 + 2,L"RVCID",0);
          iVar4 = fn_006d0810(param_2,L"RVCID",0);
          if (iVar3 != iVar4) goto LAB_00487f38;
          bVar2 = true;
        }
        else {
          if (local_24 == (undefined *)0x0) {
            puVar6 = local_1c;
            puVar1 = &DAT_007db524;
LAB_00487efc:
            iVar3 = fn_004b626c(puVar1,puVar6);
            if (iVar3 != 0) goto LAB_00487f08;
          }
          else {
            if (local_1c == (undefined *)0x0) {
              puVar6 = &DAT_007db524;
              puVar1 = local_24;
              goto LAB_00487efc;
            }
            iVar3 = fn_00101d80();
            if (iVar3 == 0) goto LAB_00487f08;
          }
LAB_00487f38:
          bVar2 = false;
        }
        fn_00170f54(auStack_20);
        fn_00170f54(auStack_28);
      } while ((!bVar2) && (piVar7 = (int *)*piVar7, piVar7 != (int *)*(int *)(param_1 + 0x2c)));
    }
    if ((piVar7 == *(int **)(param_1 + 0x2c)) &&
       ((iVar3 = fn_0045f4ec(param_1 + 0x34,param_2), iVar3 == 0 &&
        (iVar3 = fn_0045f4ec(param_1 + 0x50,param_2), iVar3 == 0)))) {
      fn_00786404(param_1 + 0x1c,param_2);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return 1;
    }
  }
  (**(code **)(*piVar5 + 0xc))(piVar5);
  return 0;
}



void fn_004878f0(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint local_218;
  int local_214;
  undefined *puStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined *puStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined1 auStack_1d0 [4];
  int local_1cc;
  undefined1 local_16b;
  undefined *local_168;
  undefined1 auStack_164 [148];
  undefined *local_d0;
  undefined1 auStack_cc [148];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  
  iVar4 = fn_0045f4ec(param_1 + 0x34);
  uVar7 = DAT_008b6474;
  if (iVar4 != 0) {
    fn_0013d0fc(&local_218);
    if ((int)uVar7 < 0) {
      local_214 = local_214 - (((int)-uVar7 >> 0x1f) + (uint)(local_218 < -uVar7));
    }
    else {
      local_214 = local_214 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(local_218,uVar7);
    }
    *(uint *)(iVar4 + 0x70) = local_218 + uVar7;
    *(int *)(iVar4 + 0x74) = local_214;
    return;
  }
  fn_0013cd7c(auStack_1d0,param_2);
  iVar4 = fn_004b7748();
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = *(int **)(iVar4 + 0x90);
  }
  piVar8 = (int *)0x0;
  if (iVar4 == 0) {
    piVar5 = (int *)0x0;
  }
  iVar4 = (**(code **)(*piVar5 + 0x2c))();
  if ((*(char *)(iVar4 + 8) == '\0') ||
     (iVar4 = fn_006d0810(auStack_1d0,&DAT_007d9c48,0), iVar4 == 0)) goto LAB_00487bf4;
  bVar1 = false;
  fn_006d0a10(auStack_30,auStack_1d0);
  iVar4 = fn_004b626c(local_2c,&DAT_00487c60);
  if ((iVar4 == 0) && (sVar3 = fn_006d0810(auStack_1d0,&DAT_007d9c52,0), sVar3 != 0)) {
    fn_006d0af4(auStack_38,auStack_1d0);
    bVar1 = true;
    iVar4 = fn_004b626c(local_34,&DAT_00487c60);
    if ((iVar4 != 0) || (sVar3 = fn_006d0810(auStack_1d0,&DAT_007d9e58,0), sVar3 == 0))
    goto LAB_00487aa0;
    bVar2 = false;
  }
  else {
LAB_00487aa0:
    bVar2 = true;
  }
  if (bVar1) {
    fn_00170f54(auStack_38);
  }
  fn_00170f54(auStack_30);
  if (bVar2) {
    local_218 = 0xc;
    uVar6 = fn_004bac98(&local_d0,auStack_1d0,DAT_008b6474,90000);
    fn_00786f78(param_1 + 0x54,uVar6);
    local_d0 = &DAT_00855d00;
    fn_0013ce98(auStack_cc);
    fn_0013ce98(auStack_1d0);
    return;
  }
  fn_006d0a10(auStack_38,auStack_1d0);
  uVar6 = local_34;
  fn_0017695c(auStack_1d0);
  local_16b = 0;
  fn_00170c9c(local_1cc,uVar6);
  fn_00170f54(auStack_38);
  uVar7 = fn_006d0810(auStack_1d0,&DAT_007d9c52,0);
  fn_0017695c(auStack_1d0);
  *(ushort *)(local_1cc + 6) = (ushort)((uVar7 & 0xff) << 8) | (ushort)(uVar7 >> 8) & 0xff;
  local_16b = 0;
  puStack_1f0 = &DAT_008528bc;
  local_1e8 = 0;
  uStack_1ec = 0x200;
  fn_006d0a10(auStack_38,auStack_1d0);
  fn_00170c9c(&puStack_1f0,local_34);
  fn_00170f54(auStack_38);
  uVar7 = fn_006d0810(auStack_1d0,&DAT_007d9c52,0);
  uStack_1ec = CONCAT22((ushort)((uVar7 & 0xff) << 8) | (ushort)(uVar7 >> 8) & 0xff,
                        (undefined2)uStack_1ec);
  puStack_210 = &DAT_008528bc;
  local_208 = 0;
  uStack_20c = 0x200;
  fn_006d0af4(auStack_38,auStack_1d0);
  fn_00170c9c(&puStack_210,local_34);
  fn_00170f54(auStack_38);
  uVar7 = fn_006d0810(auStack_1d0,&DAT_007d9e58,0);
  uStack_20c = CONCAT22((ushort)((uVar7 & 0xff) << 8) | (ushort)(uVar7 >> 8) & 0xff,
                        (undefined2)uStack_20c);
  iVar4 = fn_004b7748();
  if (iVar4 != 0) {
    piVar8 = *(int **)(iVar4 + 0x90);
  }
  iVar4 = (**(code **)(*piVar8 + 0x2c))(piVar8);
  fn_0045e504(*(int *)(iVar4 + 4) + 0x10,&puStack_1f0,&puStack_210,1);
  fn_00487c70(param_1,&puStack_210);
LAB_00487bf4:
  local_218 = 0xc;
  uVar6 = fn_004bac98(&local_168,auStack_1d0,DAT_008b6474,90000);
  fn_00786f78(param_1 + 0x38,uVar6);
  local_168 = &DAT_00855d00;
  fn_0013ce98(auStack_164);
  fn_0013ce98(auStack_1d0);
  return;
}



void fn_00487c70(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iStack_c0;
  int local_bc;
  undefined1 local_b8;
  char local_5c;
  undefined1 local_5b;
  undefined1 local_58 [8];
  undefined *local_50;
  undefined1 local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 auStack_30 [8];
  int aiStack_28 [3];
  
  fn_0013ce04(&iStack_c0);
  fn_00455394(&iStack_c0,param_2);
  if (local_5c == '\0') {
    fn_0014ea80(&iStack_c0);
  }
  local_b8 = 3;
  local_50 = &DAT_00852740;
  local_5b = 0;
  iVar1 = fn_0015ece0(0x20);
  local_48 = 0;
  if (iVar1 != 0) {
    local_48 = fn_004b54dc();
  }
  local_44 = 0;
  local_4c = 0;
  local_58[0] = 0;
  fn_0015ef58(local_48,local_58,1,0xffffffff);
  fn_0015ef58(local_48,param_1 + 0x14,4,0xffffffff);
  fn_0013d0fc(auStack_30);
  fn_00454c3c(&local_50,auStack_30);
  iVar1 = local_48;
  uVar5 = 0;
  if (DAT_008b648c != 0) {
    do {
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 == (int *)0x0) {
        piVar6 = *(int **)(param_1 + 0x10);
        if (piVar6 != (int *)0x0) {
          if (local_5c == '\0') {
            fn_0014ea80(&iStack_c0);
          }
          uVar8 = (undefined1)piVar6[3];
          piVar2 = aiStack_28;
          uVar4 = (uint)*(byte *)(piVar6 + 1);
          pcVar7 = *(code **)(*piVar6 + 0x18);
          iVar3 = local_bc;
          goto LAB_00487d9c;
        }
      }
      else {
        uVar8 = 0;
        pcVar7 = *(code **)(*piVar2 + 0xc);
        uVar4 = *(uint *)(iVar1 + 0x10);
        piVar6 = &iStack_c0;
        iVar3 = *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc);
LAB_00487d9c:
        (*pcVar7)(piVar2,piVar6,iVar3,uVar4,uVar8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_008b648c);
  }
  fn_00454d0c(&local_50);
  fn_0013ce98(&iStack_c0);
  return;
}


