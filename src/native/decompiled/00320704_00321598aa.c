#include "00320704_00321598aa.h"



void fn_00320a30(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = fn_0022f584((&DAT_007bd054)[iVar2],0);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  fn_002c3e78(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00320fcc) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x00320fd0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_00320910(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_28;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_00397a0c(iVar1,param_1);
  *puVar2 = &DAT_0082310c;
  *(undefined1 *)(puVar2 + 0x3a) = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar1 = 5;
  puVar2[0x3b] = puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  iVar1 = puVar2[0x3b];
  puVar2[0x3c] = iVar1 + 0x14;
  puVar2[0x3d] = iVar1 + 0x80;
  piVar5 = puVar2 + 0x3e;
  *piVar5 = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  local_28 = 5;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar5 = (int)puVar3;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x40] = *piVar5 + 0x80;
  puVar2[0x3f] = *piVar5 + 0x14;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0xa6);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00890abc) goto LAB_00321060;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00321060:
  puVar2[0x39] = puVar3;
  return puVar2;
}



void fn_00320704(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 local_10;
  
  piVar2 = *(int **)(param_1 + 0xe4);
  cVar1 = (char)piVar2[9];
  if (cVar1 == '\0') {
    local_10 = 0xff000000;
    fn_00163988(DAT_00897808,&local_10,10);
    local_10 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_10,10);
    *(undefined1 *)(param_1 + 0xe8) = 4;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  local_10 = param_4;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xe8) = 0xff;
    (**(code **)(*piVar2 + 0xc))();
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,1);
    fn_00689878(param_1,0);
    return;
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0xe8) = 0xff;
    (**(code **)(*piVar2 + 0xc))();
    fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 8),0);
    return;
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0xe8) = 0xff;
    (**(code **)(*piVar2 + 0xc))();
    fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 8),1);
    fn_00689d04(param_1,1);
  }
  return;
}


