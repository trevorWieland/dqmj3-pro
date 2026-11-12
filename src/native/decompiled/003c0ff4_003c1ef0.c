#include "003c0ff4_003c1ef0.h"



void fn_003c1ef0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  bVar5 = *(int *)(param_1 + 0x44) != 0;
  iVar3 = 0;
  if (bVar5) {
    iVar3 = *(int *)(param_1 + 0x48);
  }
  if (bVar5 && iVar3 != 0) {
    return;
  }
  iVar3 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar3 = fn_00119b40(puVar1 + 0x10);
    piVar4 = (int *)(iVar3 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar3 + 0x18,s_TaskNetworkConnect_008c6e38);
    *piVar4 = (int)&DAT_00859ed8;
    fn_00675c38(piVar4);
  }
  piVar2 = *(int **)(param_1 + 0x44);
  if (piVar2 != piVar4) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x44) = piVar4;
  }
  iVar3 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar3 = fn_00119b40(puVar1 + 0x10);
    piVar4 = (int *)(iVar3 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar3 + 0x18,s_TaskGetHostList_008c6def);
    *piVar4 = (int)&DAT_00859d84;
    fn_00673204(piVar4);
  }
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != piVar4) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x48) = piVar4;
  }
  return;
}



undefined4 fn_003c0ff4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  wchar16 *local_84;
  char *pcStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_50;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 local_3c;
  undefined1 auStack_28 [4];
  undefined1 local_24;
  undefined4 local_20;
  int local_1c;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_003c1044;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c1044:
  *(undefined4 **)(param_1 + 0xfc) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_003c1088;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c1088:
  *(undefined4 **)(param_1 + 0xf8) = puVar1;
  *(undefined4 *)(param_1 + 0x100) = puVar1[7];
  iVar3 = fn_00145b00(0x188,&DAT_00812c8c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_00299cf8();
  }
  local_1c = 0;
  iVar3 = *(int *)(param_1 + 0x1fc);
  if (iVar3 != iVar4) {
    if (iVar3 != 0) {
      fn_002feef8(iVar3);
    }
    *(int *)(param_1 + 0x1fc) = iVar4;
  }
  if (local_1c != 0) {
    fn_002feef8(local_1c);
  }
  fn_002999ac(*(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x100));
  *(int *)(param_1 + 500) = (int)*(short *)(*(int *)(param_1 + 0x1fc) + 0x184);
  fn_00398180(&local_84);
  local_84 = L"rom:/data/Layout/common/common_0400.arc";
  pcStack_80 = (char *)&DAT_003c12b8;
  local_70 = *(undefined4 *)(param_1 + 500);
  local_7c = *(int *)(param_1 + 500);
  local_78 = 0;
  if (6 < local_7c) {
    local_7c = 7;
  }
  uVar5 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_68,uVar5);
  local_58 = 1;
  local_57 = 0;
  local_3c = 0;
  local_56 = 0;
  local_24 = 1;
  local_50 = 2;
  uVar5 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7638 + *(int *)(*(int *)(param_1 + 0xf8) + 0x10) * 4));
  fn_00147974(auStack_48,uVar5);
  fn_00231074(&local_20,*(undefined4 *)(param_1 + 0x100),0);
  fn_00147974(auStack_40,local_20);
  fn_00147974(auStack_44,&DAT_003c12d4);
  fn_00397ff4(param_1,&local_84);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar4 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar4 + 0x81) = 1;
  fn_0031f3f4(iVar4,0);
  fn_001588d4(&local_20);
  iVar4 = fn_001588d4(auStack_28);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_00100414(iVar4 + -0x14,&LAB_0059e0e0,8,2);
  iVar4 = fn_001588d4(iVar4 + -0x24);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  fn_003c12f4(param_1);
  return 1;
}


