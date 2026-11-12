#include "00438468_00439140.h"



void fn_00439140(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_0026a494(DAT_00897818,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),1);
  }
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    *(undefined1 **)(param_1 + 0x80) = &LAB_00439bf4;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



undefined4 fn_00439090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  uVar1 = fn_00378c0c(&uStack_18,(char *)&DAT_00439124);
  fn_0025c718(param_1,uVar1);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00895bcc) goto LAB_004390ec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_004390ec:
  *(undefined4 **)(param_1 + 0x90) = puVar3;
  *(undefined4 *)(param_1 + 0x94) = puVar3[3];
  puVar3 = &DAT_007c76d8;
  if (*(char *)(*(int *)(param_1 + 0x90) + 8) == '\0') {
    puVar3 = &DAT_007c76e0;
  }
  uVar1 = puVar3[1];
  *(undefined4 *)(param_1 + 0x80) = *puVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return 1;
}



void fn_00439030(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00438e00) */
/* WARNING: Removing unreachable block (ram,0x00438e3c) */

void fn_00438dd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0039c4c8();
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  for (puVar1 = *(undefined4 **)(param_1 + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb8);
  for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00438eac) */
/* WARNING: Removing unreachable block (ram,0x00438f24) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x00438eb0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_00438b60(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_20;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039c504(iVar1,param_1);
  piVar4 = puVar2 + 0x2a;
  *puVar2 = &DAT_00827f4c;
  *piVar4 = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x2b] = *piVar4 + 0x10;
  puVar2[0x2c] = *piVar4 + 0x80;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar2[0x2d] = puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  iVar1 = puVar2[0x2d];
  puVar2[0x2f] = iVar1 + 0x80;
  puVar2[0x2e] = iVar1 + 0x10;
  *puVar2 = &DAT_0083c5b0;
  return puVar2;
}



undefined4 fn_00438b20(int *param_1)

{
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894e94,DAT_00894e98,DAT_00894e9c);
  fn_0039be98(param_1);
  fn_00438c68(param_1);
  return 1;
}



void fn_00438af8(undefined4 param_1)

{
  fn_00438b90();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_00438810(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = fn_0022cdf0();
  if (iVar3 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (*(short *)(param_1 + 0xdc) != sVar1) {
    fn_0022cdb4(param_1,sVar1 != 0);
    *(short *)(param_1 + 0xdc) = sVar1;
  }
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x330) == '\0') {
    fn_00438548(param_1);
  }
  else {
    uVar4 = fn_0022f584((char *)&DAT_00438530,0);
    uVar2 = DAT_00895660;
    uVar5 = 1;
    do {
      if ((uint)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2) <= uVar5) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar5);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0xe0) + uVar5 * 4);
      fn_00190d50(iVar3,uVar4);
      *(undefined4 *)(iVar3 + 0xac) = uVar2;
      *(undefined4 *)(iVar3 + 0xb0) = uVar2;
      if ((uint)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 2) <= uVar5) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar5);
      }
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xec) + uVar5 * 4),&DAT_00438544);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x1a);
  }
  fn_003bbde0(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004389f8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x00438a00 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_004387e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_28;
  
  iVar1 = fn_00145b00(0xf8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003bc118(iVar1,param_1);
  *puVar2 = &DAT_0083c48c;
  *(undefined2 *)(puVar2 + 0x37) = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar1 = 0x1a;
  puVar2[0x38] = puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  iVar1 = puVar2[0x38];
  puVar2[0x39] = iVar1 + 0x68;
  puVar2[0x3a] = iVar1 + 0x80;
  piVar4 = puVar2 + 0x3b;
  *piVar4 = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  local_28 = 0x1a;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x3d] = *piVar4 + 0x80;
  puVar2[0x3c] = *piVar4 + 0x68;
  return puVar2;
}



int fn_00438724(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x15d;
  iVar2 = 0x167;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (iVar3 == param_2) {
      if (iVar1 != 0) {
        return iVar1;
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x167);
  iVar3 = 0x16e;
  do {
    iVar1 = iVar1 + 1;
    if (iVar3 == param_2) {
      if (iVar1 != 0) {
        return iVar1;
      }
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x176);
  do {
    iVar1 = iVar1 + 1;
    if (iVar2 == param_2) {
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 == 0x14) {
        iVar1 = 0x15;
      }
      else if (iVar1 == 0x15) {
        iVar1 = 0x14;
      }
      return iVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x16e);
  return 0;
}



void fn_00438468(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = fn_0022f584((char *)&DAT_00438530,0,param_3,param_4,param_4);
  uVar2 = DAT_00895660;
  uVar4 = 1;
  do {
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar4,uVar1);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0xe0) + uVar4 * 4);
    fn_00190d50(iVar5,uVar3);
    *(undefined4 *)(iVar5 + 0xac) = uVar2;
    *(undefined4 *)(iVar5 + 0xb0) = uVar2;
    uVar1 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar4,uVar1);
    }
    fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xec) + uVar4 * 4),&DAT_00438544);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x1a);
  return;
}


