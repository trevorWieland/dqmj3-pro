#include "003908bc_0039c504b.h"



undefined4 * fn_0039c504(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = &PTR_FUN_0082c924;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00290ba4(iVar2,param_2);
  }
  puVar1[0x28] = uVar3;
  puVar1[0x29] = 0;
  return puVar1;
}



void fn_00398784(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  puVar3 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008942dc) goto LAB_003987f0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003987f0:
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  iVar7 = 0;
  iVar8 = *(int *)(iVar1 + 0xc);
  iVar1 = 0;
  while ((iVar5 = fn_00410384(), iVar1 < iVar5 &&
         (iVar5 = fn_006ba284(param_1), iVar7 < (iVar5 + 1) * 9))) {
    iVar5 = fn_00410428(iVar1);
    if ((iVar5 == iVar8) && (iVar5 = fn_004103d8(iVar1), iVar5 == 0)) {
      iVar5 = fn_006ba284(param_1);
      if (iVar5 * 9 + param_2 == iVar7) goto LAB_00398870;
      iVar7 = iVar7 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  iVar1 = -1;
LAB_00398870:
  fn_001028d4(auStack_68,(char *)&DAT_003989c0,iVar1);
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  iVar7 = 0;
  iVar8 = *(int *)(iVar1 + 0xc);
  iVar1 = 0;
  while ((iVar5 = fn_00410384(), iVar1 < iVar5 &&
         (iVar5 = fn_006ba284(param_1), iVar7 < (iVar5 + 1) * 9))) {
    iVar5 = fn_00410428(iVar1);
    if ((iVar5 == iVar8) && (iVar5 = fn_004103d8(iVar1), iVar5 == 0)) {
      iVar5 = fn_006ba284(param_1);
      if (iVar5 * 9 + param_2 == iVar7) goto LAB_00398920;
      iVar7 = iVar7 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  iVar1 = -1;
LAB_00398920:
  fn_001028d4(auStack_48,(char *)&DAT_003989cc,iVar1);
  uVar6 = fn_0025f9d8(DAT_00897800,uVar2,auStack_48);
  fn_0016ba84(DAT_00897800,uVar6);
  uVar6 = fn_0022eefc(0x727,0);
  uVar2 = fn_0025f9d8(DAT_00897800,uVar2,auStack_68);
  fn_00321118(puVar3,uVar2,uVar6);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_00398540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  wchar16 *local_a8;
  char *pcStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int iStack_94;
  undefined4 local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_76;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [36];
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  iVar6 = *(int *)(iVar1 + 0xc);
  fn_00397774(&local_a8);
  local_74 = 1;
  local_70 = 0;
  fn_001028d4(auStack_48,(char *)&DAT_003986e4,iVar6);
  uVar2 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/AreaMessage.mes",auStack_48,0);
  fn_00147974(auStack_68,uVar2);
  iVar4 = 0;
  iVar5 = 0;
  local_a8 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_a4 = (char *)&DAT_00398700;
  iVar3 = fn_00410384();
  if (0 < iVar3) {
    do {
      iVar3 = fn_00410428(iVar5);
      if ((iVar3 == iVar6) && (iVar3 = fn_004103d8(iVar5), iVar3 == 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = fn_00410384();
    } while (iVar5 < iVar3);
  }
  local_a0 = 9;
  local_9c = *(undefined4 *)(iVar1 + 0x20);
  local_90 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  local_98 = *(undefined4 *)(iVar1 + 0x24);
  iStack_94 = iVar4;
  uVar2 = fn_0022f750((char *)&DAT_00398714);
  fn_00147974(auStack_8c,uVar2);
  fn_00147974(auStack_88,&DAT_00398734);
  fn_00147974(auStack_84,&DAT_00398734);
  fn_00147974(auStack_80,&DAT_00398734);
  local_7c = 1;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  local_76 = 1;
  uVar2 = fn_00397618(param_1,&local_a8);
  fn_00100414(auStack_6c,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_80);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  return uVar2;
}


