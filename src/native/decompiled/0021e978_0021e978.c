#include "0021e978_0021e978.h"



void fn_0021e978(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  int local_60 [5];
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if ((*(int *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x68e) != '\0')) {
    iVar3 = fn_00154ac8(0x96);
    local_4c = fn_00154ac8(0x97);
    iVar4 = fn_00154ac8(0x98);
    fn_001c93c8(*(undefined4 *)(param_1 + 4));
    iVar11 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x128) + 0x13) = 0;
    *(undefined1 *)(*(int *)(param_1 + 300) + 0x13) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x130) + 0x13) = 0;
    do {
      iVar10 = param_1 + iVar11 * 4;
      iVar5 = 0;
      if (*(int *)(iVar10 + 0x128) != 0) {
        iVar5 = fn_006bc57c(*(undefined4 *)(DAT_00897804 + 0x20),iVar11);
        *(bool *)(*(int *)(iVar10 + 0x128) + 0xd) = iVar5 != 0;
        if (iVar5 != 0) {
          uVar2 = fn_00259f5c();
        }
        else {
          uVar2 = 0;
        }
        *(undefined2 *)(*(int *)(iVar10 + 0x128) + 0x10) = uVar2;
        *(bool *)(*(int *)(iVar10 + 0x128) + 0x15) = iVar5 != 0;
        iVar5 = (**(code **)(**(int **)(iVar10 + 0x128) + 0xc))();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    if (iVar4 != 0) {
      iVar5 = *(int *)(param_1 + 0x60);
    }
    if ((iVar4 != 0 && iVar5 != 0) && ((*(byte *)(iVar5 + 0x44) & 1) == 0)) {
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    }
    fn_0021b84c(param_1);
    fn_002195bc(param_1);
    fn_0021cd38(param_1);
    puVar6 = (undefined4 *)fn_006f7770(DAT_008977e0);
    local_48 = *puVar6;
    uStack_44 = puVar6[1];
    uStack_40 = puVar6[2];
    piVar7 = (int *)fn_006f72e0(DAT_008977e0);
    iVar4 = (**(code **)(*piVar7 + 0x3c))();
    if (iVar4 == 0) {
      fn_006f7a84(DAT_008977e0);
    }
    else {
      fn_006f7a5c();
    }
    fn_0021a5a0(param_1,&local_48);
    iVar4 = fn_0021bcf4(param_1,&local_48);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_1 + 0x138);
    }
    if ((iVar3 == 0 || iVar4 == 2) || (*(char *)(param_1 + 0x68c) != '\0')) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x01';
    }
    if (*(char *)(param_1 + 0x136) != cVar12) {
      if (cVar12 == '\0') {
        pcVar9 = (char *)&DAT_0021c470;
      }
      else {
        pcVar9 = (char *)&DAT_0021c47c;
      }
      fn_0021b104(param_1,pcVar9);
      *(char *)(param_1 + 0x136) = cVar12;
    }
    fn_0021cf38(param_1);
    if (*(int *)(param_1 + 0x240) != -1) {
      iVar4 = 0;
      iVar3 = 0;
      uVar8 = 0;
      if (*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x244) >> 2 != 0) {
        do {
          uVar13 = *(uint *)(*(int *)(param_1 + 0x244) + uVar8 * 4);
          if ((*(int *)(param_1 + 0x23c) != 0) &&
             ((*(uint *)(*(int *)(param_1 + 0x23c) + ((int)uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1)
              != 0)) {
            iVar4 = iVar4 + 1;
          }
          uVar8 = uVar8 + 1;
          iVar3 = iVar3 + 1;
        } while (uVar8 < (uint)(*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x244) >> 2));
      }
      fVar15 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar16 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fn_0024281c(*(undefined4 *)(DAT_00897804 + 0x1c),*(int *)(param_1 + 0x240),
                   (int)((fVar15 / fVar16) * 100.0));
    }
    if (local_4c != 0) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x80) + 0x44);
      if ((bVar1 & 1) == 0) {
        *(byte *)(*(int *)(param_1 + 0x80) + 0x44) = bVar1 & 0xfe | 1;
      }
      bVar14 = *(int *)(param_1 + 0x234) != 0;
      iVar3 = 0;
      if (bVar14) {
        iVar3 = *(int *)(param_1 + 0x238);
      }
      if (bVar14 && iVar3 != 0) {
        fn_0021d9e8(param_1);
        fn_0021c9f8(param_1,10,0);
      }
      iVar3 = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      local_60[2] = 0;
      do {
        iVar4 = param_1 + iVar3 * 4;
        if (*(int *)(iVar4 + 0xf4) != 0) {
          iVar11 = 0;
          if (local_60[iVar3] == 0) {
            fn_006f7a0c(DAT_008977e0);
            iVar11 = fn_006f637c();
            if (iVar11 == 0) {
              iVar11 = fn_00154ac8();
            }
            else {
              iVar11 = 1;
            }
          }
          if ((local_60[iVar3] == 1) || (local_60[iVar3] != 2 && iVar11 != 0)) {
            iVar11 = *(byte *)(*(int *)(iVar4 + 0xf4) + 0x45) - 10;
            if (iVar11 < 0) {
              iVar11 = 0;
            }
            *(char *)(*(int *)(iVar4 + 0xf4) + 0x45) = (char)iVar11;
          }
          else {
            *(undefined1 *)(*(int *)(iVar4 + 0xf4) + 0x45) = 0xff;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
    }
  }
  return;
}


