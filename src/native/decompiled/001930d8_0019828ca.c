#include "001930d8_0019828ca.h"



undefined4 fn_00196b08(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  int iStack_30;
  undefined4 local_2c;
  int *piStack_28;
  
  puVar12 = &local_40;
  iVar10 = *(int *)(param_1 + 0x8c);
  iStack_30 = param_1;
  local_2c = param_2;
  piStack_28 = param_3;
  piVar2 = (int *)fn_002fece8(0x40);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    *piVar2 = (int)&DAT_008516d0;
    piVar2[2] = 0;
    piVar2[6] = 0x1000001;
    piVar2[7] = 0;
    piVar2[8] = 0x1000001;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    local_40 = 0x8002000;
    puVar4 = (uint *)0x0;
    local_3c = param_3;
    if (param_3 == (int *)0x0) goto code_r0x00196f38;
    param_3[1] = param_3[1] + 1;
    fn_0019e864(piVar2 + 8,&local_40);
    if (((local_40 & 0x8000000) != 0) &&
       (iVar6 = local_3c[1], local_3c[1] = iVar6 + -1, iVar6 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    piVar2[5] = iVar10;
    piVar2[3] = 0;
    piVar2[4] = 0;
    fn_0019e8c4(iVar10 + 0x44,piVar2);
  }
  iVar10 = param_3[0x13];
  if (iVar10 != 0) {
    iVar6 = fn_0018388c(piVar2[10],piVar2[0xc] << 3,iVar10 << 3);
    piVar2[0xc] = iVar10;
    iVar8 = 0;
    piVar2[10] = iVar6;
    if (0 < iVar10) {
      do {
        pcVar11 = (char *)(param_3[0x14] + iVar8 * 0x14);
        cVar1 = *pcVar11;
        if (cVar1 == '\0') {
          puVar12 = (uint *)(*(int *)(param_1 + 0x18) +
                            (*(int *)(pcVar11 + 0x10) + *(int *)(param_1 + 0x34)) * 8);
          if ((uint)piVar2[0xc] <= (uint)piVar2[0xb]) {
            iVar6 = piVar2[0xb] << 1;
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            iVar3 = fn_0018388c(piVar2[10],piVar2[0xc] << 3,iVar6 << 3);
            piVar2[10] = iVar3;
            piVar2[0xc] = iVar6;
          }
          puVar4 = (uint *)(piVar2[10] + piVar2[0xb] * 8);
          piVar2[0xb] = piVar2[0xb] + 1;
          if (puVar4 != (uint *)0x0) {
            *puVar4 = *puVar12;
            uVar7 = puVar12[1];
            puVar4[1] = uVar7;
            uVar5 = *puVar4;
joined_r0x00196d84:
            if ((uVar5 & 0x8000000) != 0) {
              *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
            }
          }
        }
        else if (cVar1 == '\x01') {
          if ((uint)piVar2[0xc] <= (uint)piVar2[0xb]) {
            iVar6 = piVar2[0xb] << 1;
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            iVar3 = fn_0018388c(piVar2[10],piVar2[0xc] << 3,iVar6 << 3);
            piVar2[10] = iVar3;
            piVar2[0xc] = iVar6;
          }
          puVar12 = (uint *)(piVar2[10] + piVar2[0xb] * 8);
          piVar2[0xb] = piVar2[0xb] + 1;
          uVar7 = DAT_008c06e8;
          if (puVar12 != (uint *)0x0) {
            *puVar12 = DAT_008c06e8;
            uVar5 = DAT_008c06ec;
            puVar12[1] = DAT_008c06ec;
            if ((uVar7 & 0x8000000) != 0) {
              *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
            }
          }
          local_40 = 0;
          local_3c = (int *)&DAT_00000001;
          iVar6 = fn_00198578(param_1,*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x34) * 8,
                               pcVar11 + 0xc,piVar2[10] + piVar2[0xb] * 8 + -8);
          if (iVar6 == 0) {
            fn_0019828c(param_1,pcVar11 + 0xc);
            return 0;
          }
        }
        else if (cVar1 == '\x02') {
          puVar12 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x84) + 0xc) + 0x28) +
                            *(int *)(pcVar11 + 0x10) * 8);
          if ((uint)piVar2[0xc] <= (uint)piVar2[0xb]) {
            iVar6 = piVar2[0xb] << 1;
            if (iVar6 == 0) {
              iVar6 = 4;
            }
            iVar3 = fn_0018388c(piVar2[10],piVar2[0xc] << 3,iVar6 << 3);
            piVar2[10] = iVar3;
            piVar2[0xc] = iVar6;
          }
          puVar4 = (uint *)(piVar2[10] + piVar2[0xb] * 8);
          piVar2[0xb] = piVar2[0xb] + 1;
          if (puVar4 != (uint *)0x0) {
            *puVar4 = *puVar12;
            uVar7 = puVar12[1];
            puVar4[1] = uVar7;
            uVar5 = *puVar4;
            goto joined_r0x00196d84;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar10);
    }
  }
  iVar10 = param_3[0x15];
  if (iVar10 != 0) {
    iVar6 = fn_0018388c(piVar2[0xd],piVar2[0xf] << 3,iVar10 << 3);
    piVar2[0xf] = iVar10;
    iVar8 = 0;
    piVar2[0xd] = iVar6;
    if (0 < iVar10) {
      do {
        piVar9 = piVar2 + 0xd;
        puVar12 = (uint *)(*(int *)(param_1 + 0x18) +
                          (*(int *)(param_3[0x16] + iVar8 * 4) + *(int *)(param_1 + 0x34)) * 8);
        if ((uint)piVar2[0xf] <= (uint)piVar2[0xe]) {
          iVar6 = piVar2[0xe] << 1;
          if (iVar6 == 0) {
            iVar6 = 4;
          }
          iVar3 = fn_0018388c(*piVar9,piVar2[0xf] << 3,iVar6 << 3);
          *piVar9 = iVar3;
          piVar2[0xf] = iVar6;
        }
        puVar4 = (uint *)(*piVar9 + piVar2[0xe] * 8);
        piVar2[0xe] = piVar2[0xe] + 1;
        if (puVar4 != (uint *)0x0) {
          *puVar4 = *puVar12;
          uVar7 = puVar12[1];
          puVar4[1] = uVar7;
          if ((*puVar4 & 0x8000000) != 0) {
            *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar10);
    }
  }
  puVar4 = &local_38;
  local_38 = 0x8000100;
  puVar12 = (uint *)0x0;
  local_34 = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = piVar2[1] + 1;
    fn_0019e864(local_2c);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar10 = local_34[1], local_34[1] = iVar10 + -1, iVar10 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    return 1;
  }
code_r0x00196f38:
                    /* WARNING: Subroutine does not return */
  fn_00146590(puVar12,puVar4);
}



void fn_001930d8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 auStack_238 [264];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar3 = auStack_238;
  local_28 = 0;
  local_24 = 0;
  fn_00102388(&local_28);
  while ((iVar1 = fn_0010239a(param_2,0x105,&local_28), iVar1 != 0 &&
         (iVar2 = fn_00101ce8(puVar3,param_2,iVar1,&local_28), iVar2 != 0))) {
    puVar3 = puVar3 + 1;
    param_2 = param_2 + iVar1;
  }
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  fn_0014d6cc(param_1,auStack_238,param_3);
  return;
}


