#include "0049d040_0049ddcc.h"



void fn_0049ddcc(undefined4 *param_1)

{
  *param_1 = &DAT_008548a8;
  if (DAT_008bad3d == '\0') {
    fn_004b9d74(param_1[0x10]);
  }
  fn_004b30d8(param_1);
  fn_00455018();
  return;
}



void fn_0049d960(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  piVar1 = (int *)param_1[0xc3];
  if (piVar1 != (int *)0x0) {
    param_3 = -1;
    param_4 = (uint *)(piVar1 + 1);
  }
  *param_1 = &DAT_0085486c;
  if (piVar1 != (int *)0x0) {
    do {
      uVar3 = *param_4 + param_3;
      bVar4 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar4);
    *param_4 = uVar3;
    bVar4 = uVar3 == 0;
    if (bVar4) {
      uVar3 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar3 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0xc3] = 0;
  }
  if (param_1[0x1d] != 0) {
    fn_0014f1bc(param_1[0x1d] + -4);
  }
  iVar2 = fn_00493750(param_1 + 0x82);
  iVar2 = fn_0013ce98(iVar2 + -0x6c);
  iVar2 = fn_0014f480(iVar2 + -0x24);
  iVar2 = fn_0048cc74(iVar2 + -0x90);
  iVar2 = fn_00456728(iVar2 + -0x60);
  iVar2 = fn_00170f54(iVar2 + -0x10);
  iVar2 = fn_00170f54(iVar2 + -0xc);
  fn_00479d5c(iVar2 + -0x6c);
  fn_00455018();
  return;
}



void fn_0049d6e8(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 800) == '\0') {
    *(undefined1 *)(param_1 + 800) = 1;
    if (*(int **)(param_1 + 0x30c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x30c) + 0x24))();
      piVar1 = *(int **)(param_1 + 0x30c);
      puVar3 = (uint *)(piVar1 + 1);
      do {
        uVar2 = *puVar3 - 1;
        bVar4 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar4);
      *puVar3 = uVar2;
      bVar4 = uVar2 == 0;
      if (bVar4) {
        uVar2 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar4 && uVar2 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)(param_1 + 0x30c) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x310);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x88))(piVar1,6,1);
    }
    piVar1 = *(int **)(param_1 + 0x314);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049d7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x88))(piVar1,6,1);
      return;
    }
  }
  return;
}



void fn_0049d5e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
  uVar5 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x314);
  uVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 0x198));
  fn_0046b1a0(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78));
  *(undefined4 *)(param_1 + 0x310) = 0;
  fn_00456400(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x318);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x31c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x24);
  }
  iVar1 = fn_00481410(*(undefined4 *)(iVar1 + 0x18),param_1 + 0x88,uVar5);
  if (iVar1 == 0) {
    local_14[0] = 0x10001;
    uVar2 = fn_004b8d4c(auStack_20,local_14);
    fn_0049c724(param_1,uVar2);
    return;
  }
  fn_004b2f0c(param_1);
  puVar4 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = fn_0049d2a0;
    *puVar4 = &DAT_00853500;
    puVar4[2] = 0;
    puVar4[3] = &DAT_0049d6e0;
  }
  fn_00479b1c(param_1,param_1 + 0x88,puVar4);
  return;
}



void fn_0049d3e0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *local_108;
  code *local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined1 auStack_f8 [104];
  undefined1 auStack_90 [104];
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 0x198));
  if (*(int *)(iVar2 + 0x1c) == 2) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x10) = 1;
    local_104 = fn_0049cb00;
    local_100 = 0;
    local_fc = &DAT_0049d5d0;
    local_108 = &DAT_00853500;
    fn_00479c98(param_1,&local_108);
    return;
  }
  fn_0013d40c(auStack_28);
  fn_0013ce04(auStack_f8);
  uVar3 = fn_00455c50(auStack_90,&DAT_0049d5d0);
  iVar2 = fn_006d0c14(param_1 + 0x210,uVar3);
  fn_0013ce98(auStack_90);
  if (iVar2 == 0) {
    local_100 = 2;
    local_fc = (undefined *)0x2;
    local_108 = (undefined *)0xa;
    local_104 = (code *)0x1;
    fn_004b6230(auStack_28,L"prudps:/address=%ls;port=%d;stream=%d;sid=%d;PID=%d;CID=1;type=%d",
                 *(undefined4 *)(param_1 + 0x7c),*(ushort *)(param_1 + 0x80) + 1);
    fn_00455cd8(auStack_f8,auStack_28);
  }
  else {
    fn_00455cf0(auStack_f8,param_1 + 0x210);
  }
  fn_00456400(param_1 + 0x88);
  local_20 = *(undefined4 *)(param_1 + 0x318);
  uStack_1c = *(undefined4 *)(param_1 + 0x31c);
  local_108 = (undefined *)fn_004b4164(&local_20);
  local_104 = (code *)(param_1 + 0x30c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x24);
  }
  iVar2 = fn_004817e4(*(undefined4 *)(iVar2 + 0x18),param_1 + 0x88,auStack_f8,param_1 + 0x314);
  if (iVar2 == 0) {
    local_fc = (undefined *)0x8001000d;
    uVar3 = fn_004b8d4c(&local_108,&local_fc);
    fn_0049c724(param_1,uVar3);
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 0x30c) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    fn_004b2f0c(param_1);
    puVar5 = (undefined4 *)fn_0015ecdc(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = &DAT_00853500;
      puVar5[1] = fn_0049d2d8;
      puVar5[2] = 0;
      puVar5[3] = &DAT_0049d5d0;
    }
    fn_00479b1c(param_1,param_1 + 0x88,puVar5);
  }
  fn_0013ce98(auStack_f8);
  fn_00170f54(auStack_28);
  return;
}



void fn_0049d2d8(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  undefined *local_20;
  code *local_1c;
  undefined4 uStack_18;
  undefined *local_14;
  
  piVar1 = *(int **)(param_1 + 0x30c);
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar4);
    *puVar3 = uVar2;
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x02') {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x2c) =
         *(undefined4 *)(param_1 + 0x314);
    piVar1 = (int *)fn_006d1a3c(*(undefined4 *)(param_1 + 0x198));
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78));
    local_1c = fn_0049c9b8;
    uStack_18 = 0;
    local_14 = &DAT_0049d3d8;
    local_20 = &DAT_00853500;
    fn_00479c98(param_1,&local_20);
    return;
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    fn_004b9d74();
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  local_20 = *(undefined **)(param_1 + 0xc0);
  local_1c = *(code **)(param_1 + 0xc4);
  uStack_18 = *(undefined4 *)(param_1 + 200);
  fn_0049c724(param_1,&local_20);
  return;
}



void fn_0049d2a0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  local_c = 0x10001;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_0049c724(param_1,uVar1);
  return;
}



void fn_0049d040(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_2b8;
  int iStack_2b4;
  undefined1 auStack_2b0 [4];
  undefined4 local_2ac;
  undefined1 auStack_98 [104];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  fn_0045f27c(auStack_2b0);
  uVar2 = fn_0045f3dc(auStack_2b0,L"prudp:/address=");
  uVar2 = fn_004be9cc(uVar2,param_1 + 0x78);
  uVar2 = fn_0045f3dc(uVar2,L";port=");
  uVar2 = fn_0045f058(uVar2,*(undefined2 *)(param_1 + 0x80));
  uVar2 = fn_0045f3dc(uVar2,L";stream=");
  uVar2 = fn_0045f058(uVar2,10);
  uVar2 = fn_0045f3dc(uVar2,L";sid=");
  uVar2 = fn_0045f058(uVar2,1);
  uVar2 = fn_0045f3dc(uVar2,L";type=");
  fn_0045f058(uVar2,2);
  fn_00455c50(auStack_98,local_2ac);
  piVar3 = (int *)fn_006d2a44(param_1);
  if (piVar3 != (int *)0x0) {
    *(int **)(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x24) = piVar3;
    (**(code **)(*piVar3 + 0x14))(piVar3,*(undefined4 *)(*(int *)(param_1 + 0x198) + 0x78));
    iVar6 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
    uVar2 = fn_004b6318(auStack_28,*(undefined4 *)(param_1 + 0x74));
    fn_00170fa4(iVar6 + 0x1c,uVar2);
    fn_00170f54(auStack_28);
    fn_00170fa4(*(int *)(*(int *)(param_1 + 0x198) + 0x78) + 0x14,param_1 + 0x6c);
    fn_00456400(param_1 + 0x88);
    local_30 = *(undefined4 *)(param_1 + 0x318);
    uStack_2c = *(undefined4 *)(param_1 + 0x31c);
    local_2b8 = fn_004b4164(&local_30);
    iStack_2b4 = param_1 + 0x30c;
    iVar4 = *(int *)(*(int *)(param_1 + 0x198) + 0x78);
    iVar6 = 0;
    if (iVar4 != 0) {
      iVar6 = *(int *)(iVar4 + 0x24);
    }
    iVar6 = fn_004817e4(*(undefined4 *)(iVar6 + 0x18),param_1 + 0x88,auStack_98,param_1 + 0x310);
    if (iVar6 != 0) {
      piVar3 = (int *)(*(int *)(param_1 + 0x30c) + 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = *piVar3 + 1;
      fn_004b2f0c(param_1);
      puVar5 = (undefined4 *)fn_0015ecdc(0x10);
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[1] = fn_0049cdf8;
        *puVar5 = &DAT_00853500;
        puVar5[2] = 0;
        puVar5[3] = L"";
      }
      fn_00479b1c(param_1,param_1 + 0x88,puVar5);
      goto LAB_0049d1f0;
    }
  }
  local_2b8 = 0x8001000d;
  uVar2 = fn_004b8d4c(auStack_20,&local_2b8);
  fn_0049c724(param_1,uVar2);
LAB_0049d1f0:
  fn_0013ce98(auStack_98);
  fn_0045f2ec(auStack_2b0);
  return;
}


