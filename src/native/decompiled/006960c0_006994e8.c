#include "006960c0_006994e8.h"



void fn_006994e8(int param_1)

{
  char cVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_00683248();
  }
  if (*(char *)(param_1 + 0x170) != -1) {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 0xff;
  }
  fn_00110c74(DAT_008977e4);
  iVar3 = extraout_r1;
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00408f90(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x74) * 4)
                 ,0);
    iVar3 = extraout_r1_00;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_001f4d24();
    iVar3 = extraout_r1_01;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 != -1) {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  if (((iVar2 != -1 && iVar3 != -1) &&
      (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                        *(int *)(DAT_008977e0 + 0x60) * 4) + 8) != 0)) &&
     (fn_002feefc(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + iVar2 * 4)),
     *(int *)(param_1 + 0x5c) != -1)) {
    fn_002ea95c(DAT_00897848);
  }
  fn_002b0318(*(undefined4 *)(param_1 + 4));
  cVar1 = *(char *)(param_1 + 0x16c);
  if ((cVar1 == '\f' || cVar1 == '\x0e') || cVar1 == '\x10') {
    fn_001e45a8(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
  }
  fn_00211f74(*(undefined4 *)(DAT_008977e0 + 0x1c));
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_00120f20();
  }
  if ((*(code **)(param_1 + 0x1c0) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1c0))(), *(char *)(param_1 + 0x1a1) != '\0')) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined1 *)(param_1 + 0x1a1) = 0;
  }
  return;
}



void fn_00697e48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined1 local_44;
  
  iVar1 = fn_002fb61c();
  if (iVar1 != 0) {
    fn_00424790(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) +
                  0x60));
  }
  fn_002fb5fc();
  iVar1 = fn_00163d44(0x23);
  fn_002426c8(*(undefined4 *)(DAT_00897804 + 0x1c),0xffffffff);
  fn_0025bdc4(*(undefined4 *)(DAT_00897804 + 8));
  fn_001ea230(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4),1);
  fn_0011a24c(&local_48);
  local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(&PTR_s_H00_00_008912dc)[iVar1]);
  local_44 = 0;
  uVar2 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  fn_006f77d4(param_1,&local_48,*(undefined4 *)(param_1 + 0xa8),local_48,uVar2);
  fn_006949f8(param_1,&local_48);
  *(undefined1 *)(param_1 + 0x16e) = 0;
  fn_00699ba8(param_1,1);
  return;
}



void fn_00697084(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(0xf9c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001f5dc8();
  }
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x30) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))();
  fn_001f068c(*(undefined4 *)(param_1 + 0x30));
  fn_006971f4(param_1,param_2,0);
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



undefined4 fn_006960c0(int param_1)

{
  if (*(int *)(param_1 + 0x174) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((*(int *)(param_1 + 0x174) == 1) &&
     (fn_002a5314(*(undefined4 *)(param_1 + 0x48)),
     *(char *)(*(int *)(param_1 + 0x48) + 0x1c) != '\0')) {
    fn_001dcb00(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4),0);
    fn_001ea9c0(*(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                           *(int *)(DAT_008977e0 + 0x60) * 4) + 4));
    fn_00694a10(param_1);
    return 1;
  }
  return 0;
}


