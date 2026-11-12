#include "003902ec_00390d6c.h"



void fn_00390d6c(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  iVar4 = param_2[1] - *param_2 >> 0x1f;
  if ((param_2[1] - *param_2) / 0x34 + iVar4 != iVar4) {
    do {
      iVar4 = *param_3;
      uVar6 = 0xffffffff;
      uVar3 = 0;
      uVar1 = param_3[1] - iVar4 >> 5;
      if (uVar1 != 0) {
        iVar8 = *param_2;
        do {
          if (*(ushort *)(iVar4 + uVar3 * 0x20) == (*(byte *)(iVar8 + uVar7 * 0x34 + 8) & 7)) {
            uVar6 = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        if ((uVar6 != 0xffffffff) && (*(short *)(iVar8 + uVar7 * 0x34 + 10) == -1)) {
          iVar4 = iVar4 + uVar6 * 0x20;
          if ((((*(byte *)(iVar8 + uVar7 * 0x34 + 8) & 8) == 0) ||
              (*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 1 == 0)) ||
             ((*(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 1 != 0 &&
              (iVar8 = fn_00163868(100), 0x13 < iVar8)))) {
            iVar8 = *(int *)(iVar4 + 0x18) - *(int *)(iVar4 + 0x14) >> 1;
            if (iVar8 != 0) {
              iVar5 = *param_2;
              iVar8 = fn_00163868(iVar8);
              *(undefined2 *)(iVar5 + uVar7 * 0x34 + 10) =
                   *(undefined2 *)(*(int *)(iVar4 + 0x14) + iVar8 * 2);
            }
          }
          else {
            iVar5 = *param_2;
            iVar8 = fn_00163868(*(int *)(iVar4 + 0xc) - *(int *)(iVar4 + 8) >> 1);
            *(undefined2 *)(iVar5 + uVar7 * 0x34 + 10) =
                 *(undefined2 *)(*(int *)(iVar4 + 8) + iVar8 * 2);
          }
        }
      }
      iVar4 = *param_2 + uVar7 * 0x34;
      if (*(short *)(iVar4 + 10) != -1) {
        uVar2 = fn_006c9504(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),
                             (int)*(short *)(iVar4 + 10));
        *(undefined2 *)(iVar4 + 0xc) = uVar2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((param_2[1] - *param_2) / 0x34));
  }
  return;
}



undefined2 * fn_00390bf0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint local_20 [2];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_20[0] = *(int *)(param_2 + 6) - *(int *)(param_2 + 4) >> 1;
  puVar3 = local_20;
  if (local_20[0] < 0x20) {
    puVar3 = local_20 + 1;
  }
  local_20[1] = 0x20;
  uVar9 = *puVar3;
  puVar1 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
  *(undefined2 **)(param_1 + 4) = puVar1;
  puVar4 = *(undefined2 **)(param_2 + 6);
  for (puVar6 = *(undefined2 **)(param_2 + 4); puVar6 != puVar4; puVar6 = puVar6 + 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *puVar6;
    }
    puVar1 = puVar1 + 1;
  }
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 6) = (*(int *)(param_2 + 6) - *(int *)(param_2 + 4) & 0xfffffffeU) + iVar2;
  *(uint *)(param_1 + 8) = iVar2 + uVar9 * 2;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  piVar8 = (int *)(param_2 + 10);
  local_20[0] = *(int *)(param_2 + 0xc) - *piVar8 >> 1;
  local_20[1] = 0x20;
  puVar3 = local_20 + 1;
  if (0x1f < local_20[0]) {
    puVar3 = local_20;
  }
  uVar9 = *puVar3;
  puVar1 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
  *(undefined2 **)(param_1 + 10) = puVar1;
  puVar4 = *(undefined2 **)(param_2 + 0xc);
  for (puVar6 = (undefined2 *)*piVar8; puVar6 != puVar4; puVar6 = puVar6 + 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *puVar6;
    }
    puVar1 = puVar1 + 1;
  }
  iVar5 = *(int *)(param_2 + 0xc);
  iVar7 = *piVar8;
  iVar2 = *(int *)(param_1 + 10);
  *(uint *)(param_1 + 0xe) = iVar2 + uVar9 * 2;
  *(uint *)(param_1 + 0xc) = (iVar5 - iVar7 & 0xfffffffeU) + iVar2;
  return param_1;
}



void fn_00390794(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94();
  *puVar1 = &PTR_LAB_0082b0fc;
  return;
}



void fn_0039075c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  iVar1 = fn_006f7a84(DAT_008977e0);
                    /* WARNING: Could not recover jumptable at 0x00390788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x24))(piVar2,iVar1 + 0x20);
  return;
}



void fn_00390610(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fn_001c7764(*(undefined4 *)(param_1 + 0x14),iVar1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00390644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
  return;
}



undefined4 fn_003905a8(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],1,4,0);
    param_1[3] = 4;
    param_1[4] = 0;
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return 1;
}



undefined4 fn_003904cc(int param_1)

{
  int iVar1;
  
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_001e6e78();
  if ((iVar1 == 0) &&
     ((iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1b4))(), iVar1 != 0 ||
      (iVar1 = fn_006b1300(*(undefined4 *)(param_1 + 0x14),0), iVar1 != 0)))) {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_006aa6e0();
    if ((iVar1 != 0) ||
       ((((iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1ac))(), iVar1 != 0 ||
          (iVar1 = fn_006b0000(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0)) ||
         (iVar1 = fn_00242b6c((int)*(short *)(*(int *)(param_1 + 0x14) + 0x16a)), iVar1 != 1)) ||
        (iVar1 = fn_006a9938(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)))) {
      return 0;
    }
  }
  return 1;
}



undefined4 * fn_00390458(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = &DAT_0082b0d4;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  puVar1[0x17] = 0;
  (**(code **)(*(int *)puVar1[5] + 0xe0))((int *)puVar1[5],0);
  if (param_3 != (char *)0x0) {
    *(bool *)(puVar1 + 0x16) = *param_3 != '\0';
  }
  return puVar1;
}



void fn_003902ec(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  cVar1 = *(char *)(param_1 + 0x59);
  if (cVar1 == '\0') {
    local_30 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 0xc);
    local_2c = 0;
    fn_005f2d30(&local_30);
    uVar3 = fn_0023de00(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7557);
    fn_0023dca4(*(undefined4 *)(DAT_008977e0 + 0x2c),uVar3,*(int *)(param_1 + 0x14) + 0x38);
    *(undefined1 *)(param_1 + 0x59) = 1;
    return;
  }
  if (cVar1 == '\x01') {
    iVar2 = *(int *)(param_1 + 0x5c) + 1;
    *(int *)(param_1 + 0x5c) = iVar2;
    if (0xe < iVar2) {
      fn_00215aec(*(undefined4 *)(param_1 + 0x14),0xf);
      *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) =
           *(uint *)(*(int *)(param_1 + 0x14) + 0x39c) & 0xfffff7ff;
      *(uint *)(*(int *)(param_1 + 0x14) + 0x138) =
           *(uint *)(*(int *)(param_1 + 0x14) + 0x138) & 0xffffffbf;
      *(undefined1 *)(param_1 + 0x59) = 2;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      return;
    }
  }
  else if ((cVar1 == '\x02') &&
          (iVar2 = *(int *)(param_1 + 0x5c) + 1, *(int *)(param_1 + 0x5c) = iVar2, 0x13 < iVar2)) {
    *(uint *)(*(int *)(param_1 + 0x14) + 0x138) = *(uint *)(*(int *)(param_1 + 0x14) + 0x138) | 8;
    if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
    }
  }
  return;
}


