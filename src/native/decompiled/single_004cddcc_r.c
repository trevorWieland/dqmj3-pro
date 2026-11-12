#include "single_004cddcc_r.h"


extern undefined4 SupervisorCall;

void fn_004cddcc(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 *local_38;
  uint local_30;
  uint uStack_2c;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar9 = *(int *)(param_1 + 0x90), iVar9 != param_1 + 0x8c)
     ) {
    do {
      local_30 = 0;
      uStack_2c = 0;
      fn_004f01f4(&local_30);
      if ((uStack_2c < *(uint *)(iVar9 + 0x44) ||
           *(uint *)(iVar9 + 0x44) - uStack_2c < (uint)(local_30 <= *(uint *)(iVar9 + 0x40))) ||
         ((*(int *)(iVar9 + 0x4c) != -1 && (*(char *)(iVar9 + 0x49) == '\0')))) {
        local_30 = 0;
        uStack_2c = 0;
        fn_004f01f4(&local_30);
        iVar8 = fn_006d4328(iVar9 + 8,&local_30);
        if ((iVar8 != 0) && ((*(char *)(param_1 + 0x4c0) == '\0' || (*(int *)(iVar9 + 0x54) != 0))))
        {
          bVar10 = 2;
          uVar11 = 0;
          if (((*(uint *)(iVar9 + 0x54) < 0xb) &&
              (((*(int *)(iVar9 + 0x38) == 0 && *(int *)(iVar9 + 0x3c) == 0 &&
                (*(char *)(iVar9 + 0x32) == '\x01')) &&
               (iVar8 = fn_004d5ad0(iVar9 + 0xc), iVar8 != 0)))) &&
             (*(int *)(iVar9 + 0x14) != *(int *)(param_1 + 0x24))) {
            bVar10 = 3;
            uVar11 = 4;
          }
          pbVar2 = *(byte **)(param_1 + 0xf8);
          if (pbVar2 != (byte *)(param_1 + 0xf4)) {
            do {
              uVar6 = *(uint *)(pbVar2 + 0x28);
              if (uVar6 == *(uint *)(iVar9 + 0x28)) {
                pbVar7 = pbVar2 + 8;
                goto LAB_004cdfc0;
              }
              pbVar2 = *(byte **)(pbVar2 + 4);
            } while (pbVar2 != (byte *)(param_1 + 0xf4));
          }
          uVar6 = param_1 + 0xf4;
          pbVar7 = (byte *)0x0;
LAB_004cdfc0:
          bVar12 = pbVar7 != (byte *)0x0;
          if (bVar12) {
            pbVar2 = *(byte **)(pbVar7 + 0x90);
          }
          if (bVar12 && pbVar2 != (byte *)0x0) {
            uVar6 = (uint)*pbVar2;
          }
          if ((bVar12 && pbVar2 != (byte *)0x0) && uVar6 != 1) {
            fn_004ed050();
            iVar8 = fn_004cc270(param_1 + 0x120,pbVar7 + 4);
            if (iVar8 == 0) {
              iVar8 = fn_0013d5c4(local_78);
              *(undefined4 *)(iVar8 + 0x28) = 0;
              *(undefined4 *)(iVar8 + 0x2c) = 0;
              *(undefined4 *)(iVar8 + 0x30) = 0;
              *(undefined4 *)(iVar8 + 0x34) = 0;
              fn_0050d1a0(local_78,pbVar7 + 4);
              fn_004f01f4(&local_50);
              fn_004f01f4(&local_48);
              local_40 = 0;
              local_3c = 0;
              local_38 = (undefined1 *)local_78;
              iVar8 = fn_004cc270(param_1 + 0x120,local_78);
              if (iVar8 == 0) {
                if (*(int *)(param_1 + 0x140) != 0) {
                  iVar8 = fn_004f0a20(param_1 + 0x134);
                  if (iVar8 == 0) {
                    iVar8 = 0;
                    puVar3 = (undefined4 *)&SupervisorCall;
LAB_004ce0b4:
                    *puVar3 = 0;
                    puVar3[1] = 0;
                    puVar3[2] = 0;
                    puVar3[3] = 0;
                    puVar3[4] = 0;
                    puVar3[5] = 0;
                    puVar3[6] = 0;
                    puVar3[7] = 0;
                    puVar3[8] = 0;
                    puVar3[9] = 0;
                    puVar3[10] = 0;
                    puVar3[0xb] = 0;
                    puVar3[0xc] = 0;
                    puVar3[0xd] = 0;
                    puVar3[0xe] = 0;
                    puVar3[0xf] = 0;
                    iVar4 = fn_0013d5c4();
                    *(undefined4 *)(iVar4 + 0x28) = 0;
                    *(undefined4 *)(iVar4 + 0x2c) = 0;
                    *(undefined4 *)(iVar4 + 0x30) = 0;
                    *(undefined4 *)(iVar4 + 0x34) = 0;
                  }
                  else {
                    iVar8 = iVar8 - *(int *)(param_1 + 0x144);
                    puVar3 = (undefined4 *)(iVar8 + 8);
                    if (puVar3 != (undefined4 *)0x0) goto LAB_004ce0b4;
                  }
                  fn_004f0b78(param_1 + 0x124,param_1 + 0x128,iVar8);
                  iVar8 = iVar8 + 8;
                  if (iVar8 != 0) goto LAB_004ce134;
                }
              }
              else {
LAB_004ce134:
                fn_0050d1a0(iVar8,local_38,0x8000,0);
                *(undefined4 *)(iVar8 + 0x28) = local_50;
                *(undefined4 *)(iVar8 + 0x2c) = uStack_4c;
                *(undefined4 *)(iVar8 + 0x30) = local_48;
                *(undefined4 *)(iVar8 + 0x34) = uStack_44;
                *(undefined4 *)(iVar8 + 0x38) = local_40;
                *(undefined2 *)(iVar8 + 0x3c) = local_3c;
              }
              fn_0050d178(local_78);
            }
            else {
              fn_004f01f4(iVar8 + 0x28);
            }
          }
          if (*(int *)(iVar9 + 0x38) == 0 && *(int *)(iVar9 + 0x3c) == 0) {
            fn_004d4b34(iVar9 + 8);
          }
          bVar1 = 0;
          if (bVar10 != 0) {
            do {
              local_70 = 0;
              uStack_6c = 0;
              fn_004f01f4(&local_70);
              local_78[0] = uVar11;
              fn_004d07ac(param_1,0,iVar9 + 0xc,&local_70);
              bVar1 = bVar1 + 1;
            } while (bVar1 < bVar10);
          }
          *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 1;
          iVar8 = fn_004d4edc(param_1 + 0x1c);
          if (iVar8 != 0) {
            if (*(uint *)(iVar9 + 0x54) < *(uint *)(iVar9 + 0x58)) {
              *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(iVar9 + 0x28);
            }
            else {
              *(undefined1 *)(param_1 + 0x4c0) = 1;
            }
            return;
          }
        }
        iVar8 = *(int *)(iVar9 + 4);
      }
      else {
        pcVar5 = *(code **)(*(int *)(iVar9 + 8) + 8);
        (*pcVar5)((int *)(iVar9 + 8),pcVar5,0x20000,0);
        fn_004cc2e0(param_1 + 0x120,iVar9 + 0xc);
        fn_004c80ac(*(undefined4 *)(DAT_008bf4f4 + 0x20),iVar9 + 0xc);
        iVar8 = *(int *)(iVar9 + 4);
        (*(code *)**(undefined4 **)(iVar9 + 8))(iVar9 + 8);
        fn_004f0c1c(param_1 + 0x88,iVar9);
        fn_004f0ab4(param_1 + 0x98,param_1 + 0x9c,*(int *)(param_1 + 0xa8) + iVar9);
      }
      iVar9 = iVar8;
    } while (iVar8 != param_1 + 0x8c);
  }
  return;
}


