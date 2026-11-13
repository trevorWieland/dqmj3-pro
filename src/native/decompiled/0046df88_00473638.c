#include "0046df88_00473638.h"



undefined4 fn_00473638(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  piVar1 = *(int **)(param_1 + 0x98);
  uVar8 = 0;
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)piVar1 + 0x22) != '\x05') {
      return 0;
    }
    puVar7 = (uint *)(piVar1 + 1);
    do {
      uVar6 = *puVar7 - 1;
      bVar9 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar9);
    *puVar7 = uVar6;
    bVar9 = uVar6 == 0;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar9 && uVar6 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  iVar2 = fn_00455e10(param_2);
  uVar10 = 0;
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      local_34 = 0x10001;
      uVar8 = fn_004b8d4c(auStack_40,&local_34);
      fn_00455e8c(param_2,2,uVar8,1);
    }
    else {
      iVar2 = fn_0015ecdc(0xd8);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(param_2 + 0x44);
        puVar3 = (undefined4 *)fn_00479cd8(iVar2,2,&local_34);
        *puVar3 = &DAT_008549fc;
        iVar4 = fn_004565fc(puVar3 + 0x1e);
        iVar2 = iVar4 + -0x78;
        *(undefined4 *)(iVar4 + -0x10) = uVar10;
        *(undefined4 *)(iVar4 + -0x18) = 0x1000;
        *(undefined4 *)(iVar4 + -0x14) = 0;
        *(int *)(iVar4 + -0xc) = param_1;
        *(int *)(iVar4 + -8) = param_3;
        *(undefined4 *)(iVar4 + -4) = 0;
        iVar4 = 0;
        if (param_3 != 0) {
          iVar4 = *(int *)(param_3 + 0x2c);
        }
        if (param_3 != 0 && iVar4 != 0) {
          iVar5 = fn_001249d0();
          fn_0048a288(*(undefined4 *)(iVar5 + 0x10),iVar4,0);
        }
        local_2c = fn_0049ec54;
        uStack_28 = 0;
        local_30 = &DAT_00853500;
        puStack_24 = &DAT_007dde00;
        fn_00479c98(iVar2,&local_30);
      }
      piVar1 = (int *)(iVar2 + 4);
      *(int *)(param_1 + 0x98) = iVar2;
      do {
        bVar9 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar9);
      *piVar1 = *piVar1 + 1;
      iVar2 = fn_001249d0();
      if (iVar2 != 0) {
        uVar8 = *(undefined4 *)(iVar2 + 0xc);
      }
      fn_004bdba4(uVar8,*(undefined4 *)(param_1 + 0x98),0);
    }
    uVar10 = 1;
  }
  return uVar10;
}



undefined4 fn_004703e4(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  
  iVar5 = param_2 + 0x90;
  *(undefined4 *)(param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined1 *)(param_2 + 0xd4) = 0;
  uVar1 = *(ushort *)(param_2 + 0x3c);
  bVar8 = (uVar1 & 0xf) != 0;
  if (bVar8) {
    uVar1 = uVar1 & 0xf;
  }
  if (!bVar8 || uVar1 == 1) {
    local_40[0] = 0;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    local_40[0] = 4;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x8c);
    local_30 = (undefined1)uVar3;
    local_2f = (undefined1)((uint)uVar3 >> 8);
    local_2e = (undefined1)((uint)uVar3 >> 0x10);
    local_2d = (undefined1)((uint)uVar3 >> 0x18);
    uVar4 = *(uint *)(param_2 + 0x9c);
    uVar7 = uVar4;
    if (uVar4 < uVar4 + 4) {
      uVar7 = uVar4 + 4;
    }
    if (0x34 < uVar7) {
LAB_00470498:
      fn_0015ebe4(&DAT_007dd004,0x4f,0xe0000019,0);
      return 0;
    }
    *(uint *)(param_2 + 0x9c) = uVar7;
    fn_00301a9c(param_2 + uVar4 + 0xa0,&local_30,4);
    local_40[0] = 1;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    local_40[0] = 0x10;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x60) == 0) {
      uVar7 = 0;
      do {
        local_38[0] = 0;
        uVar6 = *(uint *)(param_2 + 0x9c);
        uVar4 = uVar6;
        if (uVar6 < uVar6 + 1) {
          uVar4 = uVar6 + 1;
        }
        if (0x34 < uVar4) goto LAB_00470498;
        *(uint *)(param_2 + 0x9c) = uVar4;
        fn_00301a9c(param_2 + uVar6 + 0xa0,local_38,1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x10);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x9c);
      uVar6 = uVar4 + *(int *)(param_2 + 0x60);
      uVar7 = uVar4;
      if (uVar4 < uVar6) {
        uVar7 = uVar6;
      }
      if (0x34 < uVar7) goto LAB_00470498;
      *(uint *)(param_2 + 0x9c) = uVar7;
      fn_00301a9c(param_2 + uVar4 + 0xa0,param_2 + 0x50);
    }
    if (((*(ushort *)(param_2 + 0x3c) & 0xf) == 1) && (*(short *)(param_2 + 0x4c) != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      local_3c[0] = 3;
      iVar2 = fn_0074c130(iVar5,local_3c);
      if (iVar2 == 0) {
        return 0;
      }
      local_3c[0] = 2;
      iVar2 = fn_0074c130(iVar5,local_3c);
      if (iVar2 == 0) {
        return 0;
      }
      local_30 = (undefined1)*(undefined2 *)(param_2 + 0x4c);
      local_2f = (undefined1)((ushort)*(undefined2 *)(param_2 + 0x4c) >> 8);
      uVar4 = *(uint *)(param_2 + 0x9c);
      uVar7 = uVar4;
      if (uVar4 < uVar4 + 2) {
        uVar7 = uVar4 + 2;
      }
      if (0x34 < uVar7) {
        fn_0015ebe4(&DAT_007dd004,0x4f,0xe0000019,0);
        return 0;
      }
      *(uint *)(param_2 + 0x9c) = uVar7;
      fn_00301a9c(param_2 + uVar4 + 0xa0,&local_30,2);
    }
    local_40[0] = 4;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    local_40[0] = 1;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
    local_40[0] = *(undefined1 *)(param_2 + 0x67);
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((*(ushort *)(param_2 + 0x3c) & 0xf) != 2) {
    return 1;
  }
  local_40[0] = 2;
  iVar2 = fn_0074c130(iVar5,local_40);
  if (iVar2 != 0) {
    local_40[0] = 1;
    iVar2 = fn_0074c130(iVar5,local_40);
    if (iVar2 != 0) {
      local_40[0] = *(undefined1 *)(param_2 + 100);
      iVar5 = fn_0074c130(iVar5,local_40);
      if (iVar5 != 0) {
        return 1;
      }
    }
  }
  return 0;
}



void fn_0046e758(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  *param_1 = &DAT_00853000;
  piVar1 = (int *)param_1[0x10];
  if (piVar1 != (int *)0x0) {
    puVar4 = (uint *)(piVar1 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    param_1[0x10] = 0;
  }
  *param_1 = &DAT_0085355c;
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  iVar2 = fn_00170f54(param_1 + 3);
  *(undefined **)(iVar2 + -0xc) = &DAT_00853740;
  *(undefined4 *)(iVar2 + -8) = 0;
  return;
}



undefined4 * fn_0046e070(undefined4 *param_1)

{
  *param_1 = &DAT_00852fe8;
  if (DAT_008bad58 != 0) {
    fn_0046de90(param_1);
  }
  return param_1;
}



void fn_0046df88(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  (**(code **)(DAT_008e968c + 8))();
  if (DAT_008bad54 == 0) {
    piVar1 = (int *)fn_0015ecdc(0x18);
    if (piVar1 != (int *)0x0) {
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar2 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(0xc);
      piVar2[2] = iVar3;
      *piVar2 = *piVar1;
      piVar2[1] = 1;
      *piVar1 = (int)piVar2;
      iVar3 = piVar2[2];
      piVar1[2] = iVar3;
      piVar1[3] = iVar3 + 0xc;
      iVar3 = piVar1[2];
      piVar1[4] = iVar3;
      piVar1[2] = iVar3 + 0xc;
      *(int *)iVar3 = iVar3;
      *(int *)(piVar1[4] + 4) = piVar1[4];
    }
    DAT_008bad58 = piVar1;
  }
  DAT_008bad54 = DAT_008bad54 + 1;
  DAT_008c3dcc = &DAT_008bad5c;
                    /* WARNING: Could not recover jumptable at 0x0046e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e968c + 0xc))(&DAT_008e968c);
  return;
}


