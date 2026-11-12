#include "004cac58_004cb840ba.h"



undefined1 fn_004cb420(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_50 [40];
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*(char *)(param_1 + 0x558) != '\0') {
    fn_00301f50(param_1 + 0x564,0x60);
    for (piVar3 = (int *)(DAT_008bf4cc + 0x3c);
        piVar3 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
        piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if ((*(char *)(iVar2 + 0x20) == '\x05') && (bVar1 = *(byte *)(iVar2 + 0x14), bVar1 < 0xc)) {
        fn_004c9eac(auStack_50);
        fn_004c9e80(auStack_50,iVar2 + 8);
        fn_004c9dd4(&local_28,auStack_50);
        iVar2 = param_1 + (uint)bVar1 * 8;
        *(undefined4 *)(iVar2 + 0x564) = local_28;
        *(undefined4 *)(iVar2 + 0x568) = uStack_24;
      }
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x004cb3f4) */

undefined1 * fn_004cb3a4(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fn_004d4190(*(undefined4 *)(param_1 + 0x55c));
  if ((int)puVar1 < 0) {
    if (*(char *)(param_1 + 0x558) == '\0') {
      return (undefined1 *)0x0;
    }
  }
  else {
    puVar1 = &DAT_e0a14827;
  }
  return puVar1;
}



void fn_004cb384(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004caec4();
  *puVar1 = &DAT_0085609c;
  puVar1[0x158] = &DAT_008560b4;
  return;
}



void fn_004cb374(undefined4 param_1)

{
  fn_004ed464(&DAT_008c06c4,param_1);
  return;
}


