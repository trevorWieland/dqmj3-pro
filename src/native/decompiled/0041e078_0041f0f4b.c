#include "0041e078_0041f0f4b.h"



undefined4 fn_0041f0f4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*param_1 + 0x10);
  iVar4 = iVar3;
  iVar2 = *(int *)(iVar3 + 4);
  while (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar4 == iVar3) || (param_2 < *(int *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  if (iVar4 != *(int *)(*param_1 + 0x10)) {
    while ((iVar4 != *(int *)(*param_1 + 0x10) && (*(int *)(iVar4 + 0x10) == param_2))) {
      iVar2 = fn_006c3cb0(*(undefined4 *)(iVar4 + 0x14));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar2 = *(int *)(iVar4 + 4);
        while (iVar3 = iVar2, iVar4 == *(int *)(iVar3 + 0xc)) {
          iVar4 = iVar3;
          iVar2 = *(int *)(iVar3 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar3) {
          iVar4 = iVar3;
        }
      }
      else {
        do {
          piVar1 = (int *)(iVar2 + 8);
          iVar4 = iVar2;
          iVar2 = *piVar1;
        } while (*piVar1 != 0);
      }
    }
  }
  return 1;
}



void fn_0041f034(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00896a84) goto LAB_0041f078;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0041f078:
  *(undefined1 *)((int)puVar2 + 0x902) = 0;
  fn_0036e29c(param_1);
  return;
}



undefined4 * fn_0041e5d8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039c504(iVar1,param_1);
  *puVar2 = &DAT_0083a324;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  puVar3 = (undefined4 *)fn_00100fc6(0x400,0);
  iVar1 = 10;
  puVar2[0x2a] = puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 8;
  } while (iVar1 != 0);
  iVar1 = puVar2[0x2a];
  puVar2[0x2b] = iVar1 + 0x140;
  puVar2[0x2c] = iVar1 + 0x400;
  return puVar2;
}



undefined4 fn_0041e570(int *param_1)

{
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_0089696c,DAT_00896970,DAT_00896974);
  fn_0039be98(param_1);
  fn_0041e7c8(param_1);
  fn_0041e640(param_1);
  fn_0039c438(param_1);
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  return 1;
}



void fn_0041e7c8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [36];
  
  iVar3 = 0;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  do {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xa8) + iVar3 * 0x20);
    fn_001028d4(auStack_38,(char *)&DAT_0041e8fc,iVar3);
    uVar1 = fn_00689210(uVar4,auStack_38);
    *puVar2 = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e908,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    puVar2[1] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e918,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    puVar2[2] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e924,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    puVar2[3] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e934,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    puVar2[4] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e940,iVar3);
    uVar1 = fn_00688920(uVar4,auStack_38);
    puVar2[5] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e948,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    puVar2[6] = uVar1;
    fn_001028d4(auStack_38,(char *)&DAT_0041e960,iVar3);
    uVar1 = fn_0068897c(uVar4,auStack_38);
    iVar3 = iVar3 + 1;
    puVar2[7] = uVar1;
  } while (iVar3 < 10);
  return;
}



void fn_0041e640(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = DAT_00897800;
  uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
  puVar7 = *(undefined4 **)(param_1 + 0x98);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_00896a84) goto LAB_0041e6a4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0041e6a4:
  iVar9 = 0;
  do {
    puVar3 = puVar7 + iVar9 * 10 + 0x242;
    piVar8 = (int *)(*(int *)(param_1 + 0xa8) + iVar9 * 0x20);
    iVar4 = fn_00100b58(puVar3 + 3);
    uVar6 = *(byte *)(*piVar8 + 0x44) & 0xfe;
    if (iVar4 != 0) {
      uVar6 = uVar6 | 1;
    }
    *(char *)(*piVar8 + 0x44) = (char)uVar6;
    if (iVar9 != 0) {
      fn_00688c04(piVar8[1],*(ushort *)(puVar3 + 2) + 1,0);
      uVar6 = extraout_r1;
    }
    fn_006915dc(&local_28,uVar6,*puVar3,puVar3[1]);
    local_30 = local_28;
    uStack_2c = uStack_24;
    uVar5 = fn_0011a36c(&local_30);
    fn_00688c04(piVar8[2],uVar5,0);
    uVar5 = fn_0011a3c4(&local_30);
    fn_00688c04(piVar8[3],uVar5,0);
    uVar5 = fn_0011a314(&local_30);
    fn_00688c04(piVar8[4],uVar5,0);
    fn_00289ac0(*(undefined4 *)(param_1 + 0xa4),piVar8[5],*(undefined2 *)((int)puVar3 + 10));
    fn_0039bf00(param_1,piVar8[6],uVar2,*(undefined2 *)((int)puVar3 + 10));
    fn_00190d50(piVar8[7],puVar3 + 3);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 10);
  fn_0025fa58(uVar1,uVar2);
  return;
}


