#include "005ef524_005ef668ba.h"



uint fn_005ef58c(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar4 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  param_2[1] = (int)puVar4;
  iVar5 = fn_001287d4(*(int *)(*param_2 + 0x10) << 1,&DAT_00812c8c);
  param_2[2] = iVar5;
  fn_005482ec(param_2[1],iVar5,*(undefined4 *)(*param_2 + 0x10));
  uVar6 = (uint)*(byte *)(*param_2 + 5);
  if (uVar6 == 0) {
    iVar5 = fn_006ebe58(*param_1);
    piVar7 = (int *)param_2[1];
    iVar8 = *param_2;
    bVar2 = false;
    bVar1 = false;
    if ((uint)piVar7[1] < *(uint *)(iVar8 + 0x10)) {
      uVar6 = 0x80000001;
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      if (*(uint *)(iVar8 + 0x10) != 0) {
        do {
          puVar4 = *(undefined4 **)(*(int *)(iVar8 + 0xc) + uVar9 * 4);
          if (*(short *)(puVar4 + 1) == 0x33) {
            bVar1 = true;
            *(undefined2 *)(*piVar7 + uVar9 * 2) = 0;
          }
          else {
            uVar10 = *puVar4;
            fn_002febd8();
            iVar3 = fn_00190fe0(iVar5 + 0x74,uVar10);
            if (iVar3 == 0xffff) {
              bVar2 = true;
              *(undefined2 *)(*piVar7 + uVar9 * 2) = 0xffff;
            }
            else {
              bVar1 = true;
              *(short *)(*piVar7 + uVar9 * 2) = (short)iVar3;
            }
          }
          uVar6 = *(uint *)(iVar8 + 0x10);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
      if (uVar6 < (uint)piVar7[1]) {
        do {
          uVar9 = uVar6 + 1;
          *(undefined2 *)(*piVar7 + uVar6 * 2) = 0xffff;
          uVar6 = uVar9;
        } while (uVar9 < (uint)piVar7[1]);
      }
      if (bVar1) {
        if (bVar2) {
          uVar6 = 0x4000;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0x80008000;
      }
    }
    return uVar6;
  }
  if (uVar6 == 1) {
    iVar5 = fn_006ebe58(*param_1);
    piVar7 = (int *)param_2[1];
    iVar8 = *param_2;
    bVar2 = false;
    bVar1 = false;
    if ((uint)piVar7[1] < *(uint *)(iVar8 + 0x10)) {
      uVar6 = 0x80000001;
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      if (*(uint *)(iVar8 + 0x10) != 0) {
        do {
          puVar4 = *(undefined4 **)(*(int *)(iVar8 + 0xc) + uVar9 * 4);
          if (*(short *)(puVar4 + 1) == 0x33) {
            bVar1 = true;
            *(undefined2 *)(*piVar7 + uVar9 * 2) = 0;
          }
          else {
            uVar10 = *puVar4;
            fn_002febd8();
            iVar3 = fn_00190fe0(iVar5 + 0x38,uVar10);
            if (iVar3 == 0xffff) {
              bVar2 = true;
              *(undefined2 *)(*piVar7 + uVar9 * 2) = 0xffff;
            }
            else {
              bVar1 = true;
              *(short *)(*piVar7 + uVar9 * 2) = (short)iVar3;
            }
          }
          uVar6 = *(uint *)(iVar8 + 0x10);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
      }
      if (uVar6 < (uint)piVar7[1]) {
        do {
          uVar9 = uVar6 + 1;
          *(undefined2 *)(*piVar7 + uVar6 * 2) = 0xffff;
          uVar6 = uVar9;
        } while (uVar9 < (uint)piVar7[1]);
      }
      if (bVar1) {
        if (bVar2) {
          uVar6 = 0x4000;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 0x80008000;
      }
    }
    return uVar6;
  }
  if (uVar6 != 2) {
    return uVar6;
  }
  iVar5 = fn_006ebe58(*param_1);
  piVar7 = (int *)param_2[1];
  iVar8 = *param_2;
  bVar2 = false;
  bVar1 = false;
  if ((uint)piVar7[1] < *(uint *)(iVar8 + 0x10)) {
    uVar6 = 0x80000001;
  }
  else {
    uVar9 = 0;
    uVar6 = 0;
    if (*(uint *)(iVar8 + 0x10) != 0) {
      do {
        puVar4 = *(undefined4 **)(*(int *)(iVar8 + 0xc) + uVar9 * 4);
        if (*(short *)(puVar4 + 1) == 0x33) {
          bVar1 = true;
          *(undefined2 *)(*piVar7 + uVar9 * 2) = 0;
        }
        else {
          uVar10 = *puVar4;
          if (*(short *)(iVar5 + 0x88) != 0) {
            fn_002febd8(uVar10);
            iVar3 = fn_00190fe0(iVar5 + 0x88,uVar10);
            if (iVar3 != 0xffff) {
              bVar1 = true;
              *(short *)(*piVar7 + uVar9 * 2) = (short)iVar3;
              goto LAB_00548288;
            }
          }
          bVar2 = true;
          *(undefined2 *)(*piVar7 + uVar9 * 2) = 0xffff;
        }
LAB_00548288:
        uVar6 = *(uint *)(iVar8 + 0x10);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
    if (uVar6 < (uint)piVar7[1]) {
      do {
        uVar9 = uVar6 + 1;
        *(undefined2 *)(*piVar7 + uVar6 * 2) = 0xffff;
        uVar6 = uVar9;
      } while (uVar9 < (uint)piVar7[1]);
    }
    if (bVar1) {
      if (bVar2) {
        uVar6 = 0x4000;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0x80008000;
    }
  }
  return uVar6;
}


