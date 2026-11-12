#include "0038f910_00390174b.h"



undefined4 * fn_00390174(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_0082b098;
  *(undefined1 *)(puVar1 + 1) = 0xff;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  iVar2 = fn_00145b00(0xd8,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00246494();
  }
  puVar1[2] = piVar3;
  (**(code **)(*piVar3 + 8))
            (piVar3,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14),7);
  return puVar1;
}



void fn_0039015c(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



void fn_003900e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006b53cc(*(undefined4 *)(param_1 + 8));
  if (((iVar1 != 0) && (*(char *)(param_1 + 6) == '\0')) && (*(char *)(param_1 + 0xc) != '\x03')) {
    fn_00698fb8(DAT_008977e0,(int)*(char *)(param_1 + 4));
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,(int)*(char *)(param_1 + 5));
    *(undefined1 *)(param_1 + 4) = 0xff;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00390154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  return;
}



void fn_0039006c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00245df0(*(undefined4 *)(param_1 + 8));
  iVar1 = fn_001759d0(*(undefined4 *)(param_1 + 8));
  if (((iVar1 != 0) && (*(char *)(param_1 + 6) == '\0')) && (*(char *)(param_1 + 0xc) != '\x03')) {
    fn_00698fb8(DAT_008977e0,(int)*(char *)(param_1 + 4));
    uVar2 = fn_006f7a48(DAT_008977e0);
    fn_00128744(uVar2,(int)*(char *)(param_1 + 5));
    *(undefined1 *)(param_1 + 4) = 0xff;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



void fn_0038fef0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  fn_00698fb8(DAT_008977e0,0xffffffff);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,(int)*(char *)(param_1 + 5));
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



void fn_0038fee8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined1 *)(iVar1 + 0x8f) = 0;
  *(undefined1 *)(iVar1 + 0x8d) = 0;
  fn_0017a1d4(*(undefined4 *)(iVar1 + 0x80));
  fn_0017a18c(*(undefined4 *)(iVar1 + 0x80),param_2);
  return;
}


