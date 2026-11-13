#include "0059a010_0059ae20.h"



void fn_0059ae20(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int unaff_r10;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 4) {
    fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
    uVar5 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar5;
    if (5 < uVar5) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar4 = 0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
      iVar8 = *(int *)(iVar7 + 0x100);
      if (0 < iVar8) {
        do {
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          iVar6 = fn_006bb544(iVar7);
          if (iVar6 != 0) {
            if (*(char *)(iVar6 + 0x16c) != *(char *)(*(int *)(param_1 + 0x14) + 0x16c)) {
              fn_00683320(iVar6,5,0);
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar8);
      }
      if (iVar8 <= *(int *)(param_1 + 0x60)) {
        *(undefined4 *)(param_1 + 0xc) = 5;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  else if (iVar4 == 5) {
    fn_001c7228(*(undefined4 *)(param_1 + 0x14),1);
    iVar4 = fn_0059a970(param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 6;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    uVar5 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar5;
    if (900 < uVar5) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      if (*(char *)(*(int *)(param_1 + 4) + 4) == '\0') {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xc) = 1;
      }
      iVar4 = 0;
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
      iVar8 = *(int *)(iVar7 + 0x100);
      if (0 < iVar8) {
        do {
          iVar6 = fn_006bb544(iVar7,iVar4);
          if (iVar6 != 0) {
            *(undefined1 *)(iVar6 + 4) = 0;
            *(undefined4 *)(iVar6 + 0xc) = 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar8);
        return;
      }
    }
  }
  else if (iVar4 == 6) {
    if ((*(char *)(param_1 + 0x68) == '\0') &&
       (bVar1 = *(char *)(param_1 + 0x69) + 1, *(byte *)(param_1 + 0x69) = bVar1, 0x3c < bVar1)) {
      *(undefined1 *)(param_1 + 0x69) = 0;
      bVar9 = true;
      *(undefined1 *)(param_1 + 0x68) = 1;
      piVar2 = (int *)fn_006f7508(DAT_008977e0);
      uVar3 = (**(code **)(*piVar2 + 0x90))();
      iVar4 = fn_003b2730(uVar3,*(undefined4 *)(param_1 + 0x58));
      if (iVar4 != 0) {
        unaff_r10 = (int)*(short *)(iVar4 + 4);
      }
      if (iVar4 == 0) {
        unaff_r10 = 0;
      }
      bVar1 = 0;
      iVar4 = 0;
      iVar8 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
      if (0 < *(int *)(iVar8 + 0x100)) {
        do {
          piVar2 = (int *)fn_006bb544(iVar8,iVar4);
          (**(code **)(*piVar2 + 0x54))(piVar2,0);
          (**(code **)(*piVar2 + 0x1c4))(piVar2,1);
          iVar4 = iVar4 + 1;
          if (bVar1 < *(byte *)(piVar2 + 0xdb)) {
            bVar1 = *(byte *)(piVar2 + 0xdb);
          }
          bVar9 = (bool)(bVar9 & *(short *)((int)piVar2 + 0x16a) == unaff_r10);
        } while (iVar4 < *(int *)(iVar8 + 0x100));
        if (!bVar9) {
          bVar1 = 0;
        }
      }
      if (*(int *)(param_1 + 100) != -1) {
        (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      }
      piVar2 = (int *)fn_002fdd54(param_1,*(undefined4 *)(param_1 + 0x58),
                                   *(int *)(param_1 + 0x14) + 0x20,bVar1);
      if (piVar2 != (int *)0x0) {
        fn_00683320(piVar2,3,0);
        piVar2[0x71] = (int)*(char *)(param_1 + 0x5c);
        (**(code **)(*piVar2 + 0x1dc))(piVar2,0,1);
                    /* WARNING: Could not recover jumptable at 0x0059ae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x1dc))(piVar2,1,1,0);
        return;
      }
    }
    return;
  }
  return;
}



undefined4 fn_0059aad0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar6 = *(int *)(iVar7 + 0x100);
  if (0 < iVar6) {
    do {
      iVar1 = fn_006bb544(iVar7,iVar5);
      if (iVar1 != 0) {
        if ((((*(char *)(iVar1 + 0x16c) != *(char *)(*(int *)(param_1 + 0x14) + 0x16c)) &&
             (iVar2 = fn_001c7084(), iVar2 != 0)) && (*(int *)(iVar2 + 8) == *(int *)(param_1 + 8))
            ) && ((*(int *)(param_1 + 0xc) < *(int *)(iVar2 + 0xc) ||
                  (*(char *)(iVar1 + 0x16c) < *(char *)(*(int *)(param_1 + 0x14) + 0x16c))))) {
          return 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if (*(int *)(param_1 + 0x58) < 1) {
    piVar3 = (int *)fn_006f7508(DAT_008977e0);
    iVar5 = (**(code **)(*piVar3 + 0x90))();
    uVar4 = *(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x1c);
    iVar5 = (int)((longlong)(int)uVar4 * -0x7bdef7bd + ((ulonglong)uVar4 << 0x20) >> 0x20);
    if ((iVar5 >> 6) - (iVar5 >> 0x1f) <= *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  iVar5 = fn_006f7a84(DAT_008977e0);
  fn_001c72c0(*(undefined4 *)(param_1 + 0x14),iVar5 + 0x20);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0,4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}



void fn_0059aaa4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  return;
}



undefined4 fn_0059a970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float in_s0;
  float fVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  local_40 = *(undefined4 *)(iVar1 + 0x20);
  uStack_3c = *(undefined4 *)(iVar1 + 0x24);
  uStack_38 = *(undefined4 *)(iVar1 + 0x28);
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar1 = *(int *)(iVar5 + 0x100);
  if (0 < iVar1) {
    do {
      if ((iVar4 != *(char *)(*(int *)(param_1 + 0x14) + 0x16c)) &&
         (iVar2 = fn_006bb544(iVar5,iVar4), *(char *)(iVar2 + 0x58) != '\0')) {
        local_34 = *(undefined4 *)(iVar2 + 0x20);
        uStack_30 = *(undefined4 *)(iVar2 + 0x24);
        uStack_2c = *(undefined4 *)(iVar2 + 0x28);
        fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x14) + 0x100) + 0xc);
        fn_005f1940(&local_34,&local_40);
        if (fVar6 < in_s0) {
          return 0;
        }
        if (*(int *)(param_1 + 100) == -1) {
          in_s0 = *(float *)(*(int *)(param_1 + 0x14) + 0x20);
          uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0d);
          *(undefined4 *)(param_1 + 100) = uVar3;
          fn_006bd4a4(param_1,*(undefined4 *)(param_1 + 0x58));
          fn_0023dd30(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 100));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 1;
}



undefined4 fn_0059a8b4(int *param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0xc))(param_1);
    *(undefined1 *)((int)param_1 + 0x6a) = uVar1;
  }
  else if (param_2 == 2) {
    if (*(char *)((int)param_1 + 0x6a) == '\0') {
      *(undefined1 *)(param_1[5] + 4) = 0;
      fn_002171d4(param_1[5],0,0);
      fn_002171d4(param_1[5],1,0);
      (**(code **)(*(int *)param_1[5] + 0x1dc))((int *)param_1[5],2,8,0);
    }
    else {
      (**(code **)(*param_1 + 0x14))(param_1);
    }
  }
  else if (param_2 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return 1;
}



void fn_0059a1b8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00845c8c;
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[5]);
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 2,0);
  fn_00395750(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0059a064(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039571c(iVar1,param_1);
  puVar2[3] = 0;
  *puVar2 = &DAT_00845c8c;
  puVar2[4] = 0;
  puVar10 = puVar2 + 4;
  puVar2[5] = 0;
  puVar2[6] = 0;
  local_20 = 0x20;
  if ((uint)((int)(puVar2[6] - puVar2[4]) >> 2) < 0x20) {
    uVar11 = (int)(puVar2[5] - puVar2[4]) >> 2;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 0x21) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar9 = (undefined4 *)puVar2[5];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[5] < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != puVar2[5]);
    }
    fn_001008c4(uVar5,(int)(puVar2[6] - uVar5) >> 2,0);
    uVar6 = *puVar10;
    puVar2[4] = puVar3;
    puVar2[5] = (puVar2[5] - uVar6 & 0xfffffffc) + (int)puVar3;
    puVar2[6] = puVar3 + uVar11;
  }
  return puVar2;
}



void fn_0059a010(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x14);
  if (uVar1 != uVar3) {
    uVar2 = uVar1;
    if (uVar3 <= uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    *(uint *)(param_1 + 0x14) = uVar3 - (uVar3 - uVar1 & 0xfffffffc);
  }
  return;
}


