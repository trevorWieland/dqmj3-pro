#include "0024be1c_0024c44cb.h"



void fn_0024c44c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(char *)(param_1 + 8) == '\0') {
        if (*(char *)(param_1 + 0x42) == '\0') {
          iVar2 = fn_006a8708(*(undefined4 *)(param_1 + 0x30));
          if (0x1c1 < iVar2) {
            iVar2 = fn_006a88a8(*(undefined4 *)(param_1 + 0x30));
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              fn_006a8660(*(undefined4 *)(param_1 + 0x30));
            }
            iVar2 = *(int *)(param_1 + 0x28) + 1;
            *(int *)(param_1 + 0x28) = iVar2;
            if (*(int *)(param_1 + 0x2c) <= iVar2) {
              fn_0024c29c(param_1);
            }
          }
        }
        else {
          iVar3 = *(int *)(param_1 + 0x44);
          iVar2 = fn_006a8708(*(undefined4 *)(param_1 + 0x30));
          if ((iVar3 * 0x1e + 0xf) * 0x1e <= iVar2) {
            cVar1 = *(char *)((uint)*(byte *)(param_1 + 0x42) * 4 + 0x896cf0 +
                             *(int *)(param_1 + 0x44) % 4);
            if (*(char *)(param_1 + 8) != cVar1) {
              *(char *)(param_1 + 10) = cVar1;
              *(undefined4 *)(param_1 + 0x28) = 0;
            }
            *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
          }
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x28) + 1;
        *(int *)(param_1 + 0x28) = iVar2;
        if (0x1c1 < iVar2) {
          iVar2 = fn_005f65a4(10,0xf);
          *(int *)(param_1 + 0x2c) = iVar2 * 0x1e;
          if (*(char *)(param_1 + 8) != '\0') {
            *(undefined1 *)(param_1 + 10) = 0;
            *(undefined4 *)(param_1 + 0x28) = 0;
          }
        }
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24) + -1;
      *(int *)(param_1 + 0x24) = iVar2;
      if (iVar2 < 1) {
        *(undefined4 *)(param_1 + 0x24) = 0;
        if (*(char *)(param_1 + 8) != *(char *)(param_1 + 0x18)) {
          *(char *)(param_1 + 10) = *(char *)(param_1 + 0x18);
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        *(undefined1 *)(param_1 + 0x1a) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    *(char *)(param_1 + 9) = cVar1;
    *(char *)(param_1 + 8) = *(char *)(param_1 + 10);
    if (cVar1 == *(char *)(param_1 + 10)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x18);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    *(char *)(param_1 + 0x19) = cVar1;
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x1a);
    if (cVar1 == *(char *)(param_1 + 0x1a)) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
  }
  return;
}



void fn_0024c29c(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar1 = fn_0024c180();
  puVar10 = (uint *)(param_1 + 0x34);
  puVar2 = *(undefined1 **)(param_1 + 0x38);
  if (puVar2 == *(undefined1 **)(param_1 + 0x3c)) {
    uVar6 = (int)puVar2 - *puVar10;
    if (uVar6 < (int)*(undefined1 **)(param_1 + 0x3c) - *puVar10) {
      *(undefined1 **)(param_1 + 0x38) = puVar2 + 1;
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = puVar2[-1];
      }
      puVar7 = puVar2 + -1;
      puVar3 = puVar2;
      if (puVar2 < puVar7) {
        uVar6 = (int)puVar7 - (int)puVar2;
        if (0 < (int)uVar6) {
          if ((uVar6 & 1) != 0) {
            puVar7 = puVar2 + -2;
            puVar3 = puVar2 + -1;
            *puVar3 = *puVar7;
          }
          for (iVar9 = (int)uVar6 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar3[-1] = puVar7[-1];
            puVar7 = puVar7 + -2;
            puVar3 = puVar3 + -2;
            *puVar3 = *puVar7;
          }
        }
      }
      else {
        while (puVar2 != puVar7) {
          puVar7 = puVar7 + -1;
          puVar3[-1] = *puVar7;
          puVar3 = puVar3 + -1;
        }
      }
      *puVar2 = uVar1;
    }
    else {
      uVar4 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      uVar11 = uVar6 + 0x20;
      if (uVar6 + 0x20 <= uVar4) {
        uVar11 = uVar4;
      }
      puVar5 = (undefined1 *)fn_00100fc6(uVar11,0);
      puVar3 = puVar5;
      for (puVar7 = (undefined1 *)*puVar10; puVar7 != puVar2; puVar7 = puVar7 + 1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *puVar7;
        }
        puVar3 = puVar3 + 1;
      }
      if (puVar5 + ((int)puVar2 - *puVar10) != (undefined1 *)0x0) {
        puVar5[(int)puVar2 - *puVar10] = uVar1;
      }
      puVar3 = *(undefined1 **)(param_1 + 0x38);
      puVar7 = puVar5 + ((int)puVar2 - *puVar10);
      for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        puVar7 = puVar7 + 1;
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = *puVar2;
        }
      }
      uVar4 = *puVar10;
      uVar8 = *(uint *)(param_1 + 0x38);
      uVar6 = uVar4;
      if (uVar8 < uVar4) {
        do {
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      fn_001008c4(uVar4,*(int *)(param_1 + 0x3c) - uVar4,0);
      *puVar10 = (uint)puVar5;
      *(undefined1 **)(param_1 + 0x38) = puVar5 + (uVar8 - uVar4) + 1;
      *(undefined1 **)(param_1 + 0x3c) = puVar5 + uVar11;
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x38) = puVar2 + 1;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0x78;
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return;
}



void fn_0024c288(int *param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(*param_1 + 0x2c) + 0x42) = param_2;
  return;
}


