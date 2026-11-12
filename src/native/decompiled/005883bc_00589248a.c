#include "005883bc_00589248a.h"



void fn_00588ec0(int param_1)

{
  fn_0031dacc();
                    /* WARNING: Could not recover jumptable at 0x00588ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(*(int **)(param_1 + 0x2c),0);
  return;
}



void fn_00588d98(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),0);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_003cfaac(param_1,1);
  fn_003d0478(*(undefined4 *)(param_1 + 8),1);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fn_0038dad0(*(undefined4 *)(param_1 + 4),0,3,0,1,&DAT_00588e50,&DAT_00588e50);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0038d7f4) */

undefined4 fn_00588d8c(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  while( true ) {
    if (*(int **)(*(int *)(param_1 + 4) + 0x1c) == piVar1) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x24) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(*piVar1 + 0x14) + 0xa4);
}



void fn_00588b74(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  short *psVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),0,(int)*(char *)(param_1 + 0x22));
  iVar6 = *(int *)(param_1 + 4);
  uVar5 = (uint)*(char *)(param_1 + 0x14);
  uVar2 = *(int *)(iVar6 + 0x1c) - *(int *)(iVar6 + 0x18) >> 2;
  if (uVar2 <= uVar5) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar5,uVar2);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar6 + 0x18) + uVar5 * 4) + 0x1c
              );
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x48) = 0xff;
  *(undefined1 *)(param_1 + 0x49) = 0xff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 0xff;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x58) = 0xff;
  *(undefined1 *)(param_1 + 0x59) = 0xff;
  if (param_2 == 0) {
    fn_003cfaac(param_1,10);
  }
  else {
    uVar2 = fn_00296688(*(undefined1 *)(param_1 + 0x3e),*(undefined1 *)(param_1 + 0x3f),
                         *(undefined4 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x41),
                         *(undefined1 *)(param_1 + 0x42));
    uVar7 = 0;
    uVar5 = 0;
    do {
      if ((((-1 < (int)uVar2) && (uVar2 < 0xe)) && (-1 < (int)uVar5)) && (uVar5 < 3)) {
        puVar4 = &DAT_007babfc + uVar5 * 8 + uVar2 * 0x18;
        cVar1 = '\0';
        if (puVar4 != (undefined *)0x0) {
          cVar1 = puVar4[4];
        }
        if (puVar4 != (undefined *)0x0 && cVar1 != -1) {
          uVar7 = uVar7 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 3);
    fn_003cfaac(param_1,(int)(char)uVar7);
    fn_003d0478(*(undefined4 *)(param_1 + 8),uVar7 & 0xff);
    uVar5 = 0;
    if (0 < (int)uVar7) {
      do {
        if (((-1 < (int)uVar2) && (uVar2 < 0xe)) &&
           ((-1 < (int)uVar5 &&
            ((uVar5 < 3 &&
             (psVar3 = (short *)(&DAT_007babfc + uVar5 * 8 + uVar2 * 0x18), psVar3 != (short *)0x0))
            )))) {
          iVar6 = param_1 + uVar5 * 8;
          *(undefined4 *)(iVar6 + 0x44) = *(undefined4 *)psVar3;
          *(undefined *)(iVar6 + 0x48) = *(undefined *)((int)psVar3 + 5);
          *(char *)(iVar6 + 0x49) = (char)psVar3[2];
          fn_0038dad0(*(undefined4 *)(param_1 + 4),uVar5,3,(int)*psVar3,(char)psVar3[2] != -1,
                       &DAT_00588d88,&DAT_00588d88);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar7);
    }
  }
  fn_003cfa24(param_1,param_2,param_3,param_4);
  return;
}



undefined4 *
fn_00588720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  undefined4 *puVar5;
  
  iVar1 = fn_00145b00(0x94,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1,param_3,param_4,unaff_r4);
  puVar5 = (undefined4 *)0x0;
  *puVar2 = &DAT_008434d4;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1c] = 0xffffffff;
  puVar2[0x1b] = 0;
  puVar2[0x1d] = 0xffffffff;
  puVar2[0x1e] = 0xffffffff;
  puVar2[0x1f] = &DAT_00859420;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xff);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892d98) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x19] = puVar5;
  return puVar2;
}



void fn_005883bc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1e] != -1) {
    fn_00159f34(uVar2);
  }
  if (param_1[0x1d] != -1) {
    fn_0016a43c(uVar2);
  }
  if (param_1[0x1c] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}


