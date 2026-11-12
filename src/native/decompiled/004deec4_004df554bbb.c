#include "004deec4_004df554bbb.h"



undefined1 * fn_004df554(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_2 + 0x5bc) == -1) {
    uVar3 = 0xfe;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x5d0) & 0xff;
  }
  uVar4 = *(undefined4 *)(param_2 + 0x5b8);
  fn_004dd8ec(DAT_008bf504);
  puVar1 = (undefined1 *)fn_004e1478(*(undefined4 *)(DAT_008bf504 + 0x14),param_2,uVar4,uVar3);
  if ((int)puVar1 < 0) {
    puVar2 = (undefined1 *)0xe0e14826;
    if (puVar1 != (undefined1 *)0xe0e14826) {
      puVar2 = &DAT_e0a14827;
    }
    if (puVar1 != (undefined1 *)0xe0e14826 && puVar1 != puVar2) {
      puVar2 = (undefined1 *)0xd8814865;
      bVar5 = puVar1 != (undefined1 *)0xd8814865;
      if (bVar5) {
        puVar2 = (undefined1 *)0xd0a14867;
      }
      bVar6 = puVar1 != puVar2;
      if (bVar5 && bVar6) {
        puVar2 = (undefined1 *)0xd8a14868;
      }
      if ((!bVar5 || !bVar6) || puVar1 == puVar2) {
        puVar1 = (undefined1 *)0x0;
      }
    }
  }
  return puVar1;
}



void fn_004df52c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004df3fc();
  *puVar1 = &DAT_0085643c;
  puVar1[0x170] = &DAT_00856454;
  return;
}


