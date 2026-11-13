#include "0039b618_0039c558.h"



void fn_0039c558(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082c924;
  if (param_1[0x29] != 0) {
    fn_00289c54();
    if (param_1[0x29] != 0) {
      fn_00289ca8();
      fn_002feef8();
      param_1[0x29] = 0;
    }
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_0022d114(param_1);
  fn_002feef8();
  return;
}



void fn_0039c4c8(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x11c))(param_1);
  fn_0042f1c0(param_1[0x27]);
  return;
}



void fn_0039c400(int param_1)

{
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x902) == '\0') {
    return;
  }
  fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x76));
  return;
}



void fn_0039c39c(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = fn_0068897c(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10));
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  }
  iVar1 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),DAT_00894da4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  }
  return;
}



void fn_0039bf00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_20 [20];
  
  fn_001028d4(auStack_20,(char *)&DAT_0039bf48,param_4);
  uVar1 = fn_0025f9d8(DAT_00897800,param_3,auStack_20);
  fn_00190d50(param_2,uVar1);
  return;
}



void fn_0039be98(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    return;
  }
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00289c84();
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00289ca8(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 0xa4) = iVar2;
  }
  fn_00289bac(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 100));
  return;
}



undefined4 fn_0039bdf4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_0039be38;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0039be38:
  *(undefined4 **)(param_1 + 0x9c) = puVar2;
  if (*(char *)((int)puVar2 + 0x902) != '\0') {
    fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)((int)puVar2 + 0x76));
  }
  return 1;
}



void fn_0039bdb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0068897c(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),(char *)&DAT_0039bde8);
  fn_00190d50(iVar1,param_2);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  return;
}



void fn_0039bcf8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [20];
  
  uVar1 = DAT_00897800;
  uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
  uVar3 = fn_0068897c(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),param_3);
  fn_001028d4(auStack_30,(char *)&DAT_0039bf48,param_2);
  uVar4 = fn_0025f9d8(DAT_00897800,uVar2,auStack_30);
  fn_00190d50(uVar3,uVar4);
  uVar3 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),DAT_00894da4);
  fn_00289ac0(*(undefined4 *)(param_1 + 0xa4),uVar3,param_2);
  fn_0025fa58(uVar1,uVar2);
  return;
}



void fn_0039bcdc(int param_1)

{
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



void fn_0039bcb4(int param_1)

{
  fn_003bfd60();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



void fn_0039be60(int param_1)

{
  if (*(int *)(param_1 + 0xa4) != 0) {
    fn_00289c54();
    if (*(int *)(param_1 + 0xa4) != 0) {
      fn_00289ca8();
      fn_002feef8();
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
  }
  return;
}



void fn_0039bc20(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00827e28;
  uVar1 = param_1[0x2a];
  uVar2 = uVar1;
  if ((uint)param_1[0x2b] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x2b]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x2c] - uVar1) >> 2,0);
  uVar1 = param_1[0x27];
  uVar2 = uVar1;
  if ((uint)param_1[0x28] <= uVar1) {
    for (; uVar2 != param_1[0x28]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x29] - uVar1) >> 2,0);
  fn_0039b600(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0039ba9c) */
/* WARNING: Removing unreachable block (ram,0x0039bb14) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0039baa0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0039ba54(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_20;
  
  puVar1 = (undefined4 *)fn_0039b5d8();
  piVar4 = puVar1 + 0x27;
  *puVar1 = &DAT_00827e28;
  *piVar4 = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  local_20 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x28] = *piVar4 + 0x10;
  puVar1[0x29] = *piVar4 + 0x80;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  local_20 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x2a] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x2a];
  puVar1[0x2c] = iVar3 + 0x80;
  puVar1[0x2b] = iVar3 + 0x10;
  *puVar1 = &PTR_FUN_0082c7ec;
  return puVar1;
}



undefined4 fn_0039b700(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_008956bc,DAT_008956c0,DAT_008956c4);
  iVar1 = (**(code **)(*param_1 + 0x128))(param_1);
  if (iVar1 == 0) {
    fn_0022cdb4(param_1,0);
  }
  uVar2 = fn_00247024();
  fn_0036e8fc(*(undefined4 *)(param_1[0x1d] + 0x10),uVar2);
  uVar2 = *(undefined4 *)(param_1[0x1d] + 0x10);
  iVar1 = 0;
  do {
    iVar4 = param_1[0x27];
    uVar3 = fn_0036e9e4(uVar2,iVar1,param_1[1],param_1[0x12]);
    *(undefined4 *)(iVar4 + iVar1 * 4) = uVar3;
    iVar5 = param_1[0x2a];
    uVar3 = fn_0036eaa8(uVar2,iVar1,param_1[1],param_1[0x12],param_1[0x1a],param_1[0x1b]);
    iVar4 = iVar1 + 1;
    *(undefined4 *)(iVar5 + iVar1 * 4) = uVar3;
    iVar1 = iVar4;
  } while (iVar4 < 4);
  fn_0039b7f4(param_1);
  return 1;
}



void fn_0039b618(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if (*(int **)(param_1 + 0xac) != piVar1) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x18))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 4))();
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (*(int **)(param_1 + 0xac) != piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (*(int **)(param_1 + 0xa0) != piVar1) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x18))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 4))();
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (*(int **)(param_1 + 0xa0) != piVar1);
  }
  fn_0022ccb4(param_1);
  return;
}


