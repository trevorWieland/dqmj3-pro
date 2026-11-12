#include "003fc554_003fd1b4a.h"



void fn_003fcd98(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x003fcb68) */
/* WARNING: Removing unreachable block (ram,0x003fcba4) */

void fn_003fcb38(int param_1)

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



/* WARNING: Removing unreachable block (ram,0x003fcc14) */
/* WARNING: Removing unreachable block (ram,0x003fcc8c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x003fcc18 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003fc7f0(undefined4 param_1)

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
  *puVar2 = &DAT_008363dc;
  return puVar2;
}



undefined4 fn_003fc7b0(int *param_1)

{
  fn_0039bdf4();
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00894e60,DAT_00894e64,DAT_00894e68);
  fn_0039be98(param_1);
  fn_003fc8f8(param_1);
  return 1;
}



void fn_003fc788(undefined4 param_1)

{
  fn_003fc820();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_003fc748(undefined4 *param_1)

{
  *param_1 = &DAT_0083626c;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_003e2ce4(param_1);
  fn_002feef8();
  return;
}



void fn_003fc6c4(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  fn_0042f1c0();
                    /* WARNING: Could not recover jumptable at 0x003fc6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x164))(param_1);
  return;
}



void fn_003fc554(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_50 [68];
  
  (**(code **)(*param_1 + 0x11c))(param_1);
  iVar1 = param_1[0x27];
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    puVar2 = &DAT_003fc690;
  }
  else {
    puVar2 = (undefined *)fn_0022f584((char *)&DAT_003fc694,0);
  }
  fn_00101a50(auStack_50,0x40,L"%ls%ls",puVar2,iVar1 + 0x1c);
  fn_00385b60(param_1,auStack_50);
  fn_0031c7d0(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f5));
  fn_0031ca5c(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f6));
  fn_0031c040(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f7));
  fn_00290aa4(param_1[0x28]);
  fn_00290ae4(param_1[0x28],*(undefined1 *)(param_1[0x27] + 0x76));
  return;
}


