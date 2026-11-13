#include "003db6fc_003dce7caa.h"



void fn_003db960(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = param_1 + param_2 * 4;
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    fn_00301f50(param_1 + param_2 * 0x60 + 0xc,0x60);
    return;
  }
  iVar1 = 0;
  do {
    fn_003db960(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



undefined4 * fn_003db900(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00831ba8;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x24);
  uVar1 = fn_006b8190(uVar2,1,0);
  param_1[1] = uVar1;
  uVar1 = fn_006b8190(uVar2,1);
  param_1[2] = uVar1;
  return param_1;
}



void fn_003db8d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = &DAT_00831b30;
  return;
}



undefined4 fn_003db6fc(int *param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int *unaff_r10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar3 = (param_1[2] - param_1[1]) / 0x34;
  puVar5 = (undefined4 *)fn_006f7770(DAT_008977e0);
  local_38 = *puVar5;
  uStack_34 = puVar5[1];
  uStack_30 = puVar5[2];
  if (0 < iVar3) {
    unaff_r10 = &DAT_00897804;
  }
  iVar10 = 0;
  if (0 < iVar3) {
    do {
      psVar9 = (short *)(param_1[1] + iVar10 * 0x34);
      if (((char)psVar9[2] != '\0') && (iVar6 = fn_00368c90(param_2,(int)*psVar9), iVar6 == 0)) {
        if (*(char *)((int)psVar9 + 0xb) == -1) {
          uVar4 = (**(code **)(*param_1 + 0x44))(param_1,(int)*psVar9);
          *(undefined1 *)((int)psVar9 + 0xb) = uVar4;
        }
        fn_005f1940(&local_38,psVar9 + 8);
        if ((char)psVar9[3] == '\0') {
          fVar11 = in_s0;
          uVar7 = (**(code **)(*param_1 + 0x1c))(param_1,(int)*(char *)((int)psVar9 + 0xb),0);
          in_s0 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
          uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 < in_s0) << 0x1f |
                  (uint)(fVar11 == in_s0) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fVar11) || NAN(in_s0)) << 0x1c;
          bVar2 = (byte)(uVar1 >> 0x18);
          if (((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (iVar6 = (**(code **)(*param_1 + 0x40))(param_1,(int)*psVar9), iVar6 != 0)) {
            if (*(short *)(iVar6 + 0xc) == 4) {
              iVar8 = fn_006b520c(*(undefined4 *)(*unaff_r10 + 0x1c),*(undefined4 *)(iVar6 + 8));
              if (iVar8 == 0) {
                if (*(short *)(iVar6 + 0xc) != 4) goto LAB_003db86c;
                (**(code **)(*param_1 + 0x6c))(param_1,iVar6,0,iVar10);
                in_s0 = fVar11;
              }
            }
            else {
LAB_003db86c:
              (**(code **)(*param_1 + 0x6c))(param_1,iVar6,1,iVar10);
              in_s0 = fVar11;
            }
          }
        }
        else {
          fVar11 = in_s0;
          uVar7 = (**(code **)(*param_1 + 0x1c))();
          in_s0 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff;
          if (in_s0 < fVar11) {
            *(undefined1 *)(psVar9 + 3) = 0;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
  }
  return 0;
}


