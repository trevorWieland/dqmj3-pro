#include "003908bc_0039c504ab.h"



undefined4 fn_00391e94(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r5;
  undefined1 auStack_30 [12];
  
  fn_00128f40(auStack_30);
  fn_0012d6e0(L"rom:/data/Field/Table/Shortcut/RestrictNextBoss.nut",auStack_30);
  iVar1 = fn_00163d44(0);
  iVar2 = fn_005f6ce8(auStack_30,&DAT_00391fd4);
  if (0 < iVar2) {
    unaff_r5 = &DAT_008977e0;
  }
  iVar9 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = fn_00128eac(auStack_30,&DAT_00391fd4,iVar9);
      iVar4 = fn_006ad760(*(undefined4 *)(*unaff_r5 + 0x30),uVar3);
      if (iVar1 == iVar4) {
        uVar3 = fn_00128eac(auStack_30,&DAT_00391fd4,iVar9 + 1);
        uVar5 = fn_00128eac(auStack_30,&DAT_00391fd4,iVar9 + 2);
        uVar6 = fn_00128eac(auStack_30,&DAT_00391fd4,iVar9 + 3);
        uVar3 = fn_006ad760(*(undefined4 *)(*unaff_r5 + 0x30),uVar3);
        iVar4 = fn_006ad760(*(undefined4 *)(*unaff_r5 + 0x30),uVar5);
        iVar7 = fn_006ad760(*(undefined4 *)(*unaff_r5 + 0x30),uVar6);
        iVar8 = fn_00163d44(uVar3);
        if ((iVar4 <= iVar8) && (iVar8 <= iVar7)) {
          fn_00128fc4(auStack_30);
          return 1;
        }
      }
      iVar9 = iVar9 + 4;
    } while (iVar9 < iVar2);
  }
  fn_00128fc4(auStack_30);
  return 0;
}


