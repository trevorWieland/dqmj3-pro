#include "002a1e8c_002a335cab.h"



void fn_002a2ea4(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined1 auStack_118 [240];
  byte local_28 [4];
  undefined4 local_24 [2];
  
  fn_001c2b7c(1);
  pbVar1 = (byte *)fn_00174834(DAT_008977e4);
  iVar2 = 0;
  if (*pbVar1 != 0) {
    do {
      if (pbVar1[iVar2 * 0x266c + 4] == 10) {
        pbVar3 = pbVar1 + iVar2 * 0x266c;
        pbVar7 = pbVar3 + 8;
        if (pbVar7 != (byte *)0x0) {
          pbVar3 = (byte *)(uint)pbVar3[9];
        }
        if (pbVar7 != (byte *)0x0 && pbVar3 != (byte *)0x0) {
          local_28[0] = *pbVar7;
          uVar4 = fn_0017484c(DAT_008977e4);
          iVar2 = fn_00165bb4(uVar4,local_28);
          *(int *)(param_1 + 0x10) = iVar2;
          if (iVar2 != 0) {
            fn_00301f50(auStack_118,0xf0);
            fn_00236b7c(auStack_118,*pbVar7);
            uVar4 = 4;
            if (pbVar1[0x180470] == 6) {
              uVar4 = 6;
            }
            iVar5 = fn_00145b00(0x114,&DAT_00812c8c);
            iVar2 = 0;
            if (iVar5 != 0) {
              iVar2 = fn_002fa328();
            }
            iVar5 = *(int *)(param_1 + 4);
            if (iVar5 != iVar2) {
              if (iVar5 != 0) {
                fn_002feef8(iVar5);
              }
              *(int *)(param_1 + 4) = iVar2;
            }
            uVar6 = fn_00174858(DAT_008977e4);
            iVar2 = fn_002f96c4(*(undefined4 *)(param_1 + 4),auStack_118,uVar6,uVar4);
            if (iVar2 == 0) {
              *(undefined1 *)(param_1 + 8) = 0xff;
            }
            fn_0026b144(1);
            fn_00144834(0x20e,1);
            fn_0026a948();
            local_24[0] = 0xff000000;
            fn_00163988(DAT_0089780c,local_24,0x14);
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
        }
        break;
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < (int)(uint)*pbVar1);
  }
  *(undefined1 *)(param_1 + 8) = 0xff;
  return;
}



void fn_002a2e68(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_0081e78c;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  return;
}


