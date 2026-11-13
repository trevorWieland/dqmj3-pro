#include "001b8178_001b97d4.h"



undefined4 fn_001b97d4(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf604 == 0) {
    uVar1 = DAT_008bf5fc;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_008bf604 + 0xcc);
  }
  return uVar1;
}



void fn_001b8178(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  
  iVar3 = fn_001851bc();
  iVar4 = fn_001afe88();
  if ((iVar4 == 0) && (iVar3 == 4 || iVar3 == 0xb)) {
    iVar3 = fn_00192114();
    *(undefined4 *)(iVar3 + 200) = 6;
  }
  iVar3 = fn_001851bc();
  if (iVar3 == 4 || iVar3 == 0xb) {
    fn_001b01a4();
  }
  iVar3 = fn_001851bc();
  if ((iVar3 == 4 || iVar3 == 0xb) && (iVar3 = fn_001aff20(), iVar3 != 0)) {
    fn_001af244(0);
    fn_0018501c();
    iVar3 = fn_00192114();
    *(undefined4 *)(iVar3 + 200) = 9;
  }
  iVar3 = fn_00191f08();
  if (iVar3 != 0) {
    iVar3 = fn_00192114();
    if (iVar3 + 4 != 0) {
      iVar4 = fn_00191f08();
      if ((iVar4 != 0) && (iVar4 = fn_00191f08(), iVar4 != 0)) {
        iVar4 = fn_00192114();
        cVar1 = '\0';
        if (iVar4 != -4) {
          cVar1 = *(char *)(iVar4 + 0xac);
        }
        if (iVar4 != -4 && cVar1 != '\0') {
          iVar8 = *(int *)(iVar3 + 0xa8);
          iVar4 = 0;
          *(undefined2 *)(iVar3 + 0xb0) = *(undefined2 *)(iVar8 + 2);
          do {
            puVar9 = (undefined2 *)(iVar3 + 4 + iVar4 * 8);
            iVar5 = *(int *)(iVar8 + iVar4 * 4 + 4);
            iVar4 = iVar4 + 1;
            puVar6 = (undefined2 *)(iVar5 + iVar8);
            *puVar9 = *puVar6;
            uVar2 = puVar6[1];
            *(int *)(puVar9 + 2) = iVar5 + 4;
            puVar9[1] = uVar2;
          } while (iVar4 < 0x14);
        }
      }
      uVar7 = 0;
      goto LAB_001b82bc;
    }
  }
  uVar7 = 3;
LAB_001b82bc:
  fn_001af1c8(uVar7,0);
  iVar3 = fn_001851bc();
  if ((iVar3 == 4 || iVar3 == 5) || iVar3 == 0xb) {
    iVar3 = fn_00192114();
    *(undefined4 *)(iVar3 + 200) = 0;
  }
  iVar3 = fn_0018501c();
  if ((iVar3 == 0 || iVar3 == 10) || (iVar3 == 9)) {
    return;
  }
  fn_00169f4c();
  return;
}


