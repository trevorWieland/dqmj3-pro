#include "0059f048_005ab794.h"



void fn_005ab794(undefined4 param_1,int param_2)

{
  fn_0022f750((&PTR_s_ryousinnojouken_00890ccc)[param_2]);
  return;
}



void fn_005ab774(undefined4 param_1,undefined4 param_2)

{
  fn_0016ba34(DAT_00897800,L"rom:/data/Message/CouplingSearch.mes",param_2,0);
  return;
}



void fn_0059f048(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),*(undefined4 *)(param_1 + 0xe8));
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x47);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_0059f0ac;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0059f0ac:
  if (param_2 == 0) {
    uVar4 = fn_006b8574(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    uVar4 = 0xffffffff;
  }
  puVar2[9] = uVar4;
  if (param_2 == 0) {
    uVar4 = fn_006b8668(*(undefined4 *)(DAT_00897804 + 0xc));
    puVar2[10] = uVar4;
    pcVar5 = (char *)&DAT_0059f3c8;
  }
  else {
    puVar2[10] = 0xffffffff;
    pcVar5 = (char *)&DAT_0059f3b8;
  }
  uVar4 = fn_0022f750(pcVar5);
  fn_00445964(puVar2,uVar4);
  fn_00445934(puVar2);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  iVar9 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar6 == &DAT_008944a4) goto LAB_0059f130;
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0059f130:
  if ((*(char *)(puVar3 + 3) == '\x04') &&
     (puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd9), puVar3 != (undefined4 *)0x0)) {
    puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar6 == &DAT_00898ce0) {
        bVar10 = puVar3 == (undefined4 *)0x0;
        puVar6 = &DAT_00898ce0;
        if (!bVar10) {
          puVar6 = puVar3 + 5;
          bVar10 = puVar6 == (undefined4 *)0x0;
        }
        if ((!bVar10) && (*(char *)(puVar6 + 0x105) != '\0')) {
          iVar7 = fn_006e70cc();
          goto LAB_0059f1fc;
        }
        break;
      }
      puVar6 = (undefined4 *)*puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  if (param_2 == 0) {
    iVar7 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    iVar7 = fn_006b84b0();
  }
LAB_0059f1fc:
  if (0 < iVar7) {
    do {
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      if (puVar3 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar6 == &DAT_008944a4) goto LAB_0059f240;
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)0x0;
LAB_0059f240:
      if ((*(char *)(puVar3 + 3) == '\x04') &&
         (puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd9), puVar3 != (undefined4 *)0x0)) {
        puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar6 == &DAT_00898ce0) {
            bVar10 = puVar3 == (undefined4 *)0x0;
            puVar6 = &DAT_00898ce0;
            if (!bVar10) {
              puVar6 = puVar3 + 5;
              bVar10 = puVar6 == (undefined4 *)0x0;
            }
            if ((!bVar10) && (*(char *)(puVar6 + 0x105) != '\0')) {
              uVar4 = fn_006e70bc(puVar6,iVar9);
              goto LAB_0059f2ec;
            }
            break;
          }
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      if (param_2 == 0) {
        uVar4 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar9);
      }
      else {
        uVar4 = fn_0028b348();
      }
LAB_0059f2ec:
      fn_004458c4(puVar2,uVar4);
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      iVar9 = iVar9 + 1;
      if (puVar3 != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar6 == &DAT_008944a4) goto LAB_0059f330;
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      puVar3 = (undefined4 *)0x0;
LAB_0059f330:
      if ((*(char *)(puVar3 + 3) == '\x04') &&
         (puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd9), puVar3 != (undefined4 *)0x0)) {
        puVar6 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar6 == &DAT_00898ce0) {
            bVar10 = puVar3 == (undefined4 *)0x0;
            puVar6 = &DAT_00898ce0;
            if (!bVar10) {
              puVar6 = puVar3 + 5;
              bVar10 = puVar6 == (undefined4 *)0x0;
            }
            if ((!bVar10) && (*(char *)(puVar6 + 0x105) != '\0')) {
              iVar7 = fn_006e70cc();
              goto LAB_0059f3f4;
            }
            break;
          }
          puVar6 = (undefined4 *)*puVar6;
        } while (puVar6 != (undefined4 *)0x0);
      }
      if (param_2 == 0) {
        iVar7 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
      }
      else {
        iVar7 = fn_006b84b0();
      }
LAB_0059f3f4:
    } while (iVar9 < iVar7);
  }
  uVar4 = fn_006ba02c(*(undefined4 *)(DAT_00897804 + 0x10),*(undefined4 *)(param_1 + 0xe8));
  puVar2[0xfc] = uVar4;
  uVar4 = fn_006ba084(*(undefined4 *)(DAT_00897804 + 0x10),*(undefined4 *)(param_1 + 0xe8));
  puVar2[0xfd] = uVar4;
  fn_0058c9a8(puVar2,iVar1 + 4);
  fn_00445904(puVar2);
  uVar8 = 0;
  do {
    if (*(int *)(iVar1 + uVar8 * 4 + 0x1c) == 0) break;
    uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_00445884(puVar2,uVar4);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  fn_00689efc(param_1,0x47,0);
  return;
}


