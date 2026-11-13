#include "00338e04_003398b0a.h"



void fn_003391c8(int param_1)

{
  int iVar1;
  
  *(byte *)(*(int *)(param_1 + 0x68) + 0x44) = *(byte *)(*(int *)(param_1 + 0x68) + 0x44) & 0xfe | 1
  ;
  *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x6c) + 0x44) & 0xfe | 1
  ;
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) = *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_00339240);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  fn_00190e00(*(undefined4 *)(param_1 + 0x80));
  *(undefined1 *)(param_1 + 0x90) = 7;
  *(undefined1 *)(param_1 + 0x91) = 1;
  return;
}



void fn_00339188(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + iVar2 * 4 + 0x94);
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar2 = iVar2 + 1;
    *piVar3 = 0;
  } while (iVar2 < 2);
  return;
}



void fn_003390e4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_00824b6c;
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(iVar1 + 0x54);
  param_1[0x1f] = iVar1;
  if (iVar1 != 0) {
    fn_00353a48();
  }
  iVar1 = 0;
  do {
    piVar2 = (int *)param_1[iVar1 + 0x1b];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    param_1[iVar1 + 0x1b] = 0;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while (iVar1 < 4);
  fn_0016a43c(param_1[0x1a],param_1[0x23]);
  param_1[0x23] = 0xffffffff;
  fn_003138d4(param_1[0x1a],9);
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



void fn_00338f74(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x94) != '\0') {
    uVar2 = 0;
    do {
      iVar3 = param_1 + uVar2 * 4;
      if ((*(int *)(iVar3 + 0x6c) != 0) && (fn_003d1908(), *(char *)(param_1 + 0x97) == '\0')) {
        uVar1 = (uint)*(char *)(*(int *)(iVar3 + 0x6c) + 0x7d);
        bVar4 = uVar1 == 0;
        if (bVar4) {
          uVar1 = (uint)*(byte *)(param_1 + 0x98);
        }
        if (!bVar4 || uVar1 != 0) {
          *(undefined1 *)(param_1 + 0x97) = 1;
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
  }
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x90) + 0x14))();
  }
  fn_0068a5a8(param_1);
  return;
}



undefined4 *
fn_00338f44(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c();
  *puVar2 = &DAT_00824b6c;
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*param_1)(param_1);
    do {
      if (puVar3 == &DAT_00890360) goto LAB_0033907c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  param_1 = (undefined4 *)0x0;
LAB_0033907c:
  puVar2[0x1a] = 0;
  puVar2[0x19] = param_1;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  puVar2[0x23] = 0xffffffff;
  puVar2[0x24] = 0;
  *(undefined1 *)(puVar2 + 0x25) = 0;
  *(undefined1 *)((int)puVar2 + 0x95) = 0;
  *(undefined1 *)((int)puVar2 + 0x96) = 0;
  *(undefined1 *)((int)puVar2 + 0x97) = 0;
  *(undefined1 *)(puVar2 + 0x26) = 0;
  uVar4 = param_1[0xb];
  puVar2[0x1a] = uVar4;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  fn_00313870(uVar4,9,9,param_4,unaff_r4);
  return puVar2;
}



undefined4 fn_00338f24(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + param_2 * 4 + 0x6c);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = fn_003d121c(iVar2);
  return uVar1;
}



void fn_00338e04(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_1 + 0x96) == '\0') {
    *(undefined1 *)(param_1 + 0x96) = 1;
    cVar2 = *(char *)(*(int *)(param_1 + 100) + 0x3c);
    uVar9 = *(undefined4 *)(DAT_00897804 + 0xc);
    iVar3 = fn_006b8478(uVar9);
    iVar8 = 0;
    if (0 < iVar3) {
      iVar4 = *(int *)(*(int *)(param_1 + 100) + 0x34) + 0xf;
      do {
        uVar5 = fn_006b85d0(uVar9,iVar8);
        iVar6 = fn_0028b3a0(uVar9,uVar5);
        if (((iVar6 != 0) && (iVar6 = fn_0028af90(uVar9,uVar5), iVar6 == 0)) &&
           (iVar6 = fn_0028b0f8(uVar9,uVar5), iVar6 == 0)) {
          iVar6 = fn_0028b074(*(undefined4 *)(DAT_00897804 + 0xc),iVar8);
          sVar1 = 0;
          if (iVar6 != 0) {
            sVar1 = *(short *)(iVar6 + 0x22);
          }
          if ((iVar6 != 0 && sVar1 != 0) && ((*(byte *)(iVar6 + 0x40) & 2) == 0)) {
            uVar5 = fn_0024f870(iVar6);
            if (cVar2 == '\0') {
              iVar7 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1c)) >> 4;
            }
            else {
              iVar7 = *(int *)(*(int *)(param_1 + 100) + 0x30);
            }
            fn_002469ac(iVar6,iVar7,uVar5);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
  }
  return;
}


