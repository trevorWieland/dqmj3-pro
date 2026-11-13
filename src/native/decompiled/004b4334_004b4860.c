#include "004b4334_004b4860.h"



undefined4 fn_004b4860(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  bool bVar6;
  undefined *local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_38 = &DAT_008528bc;
  local_30 = 0;
  local_34 = 0x200;
  fn_006d1068(*(int *)(param_1 + 4) + 0x10,param_3,&local_38);
  piVar1 = (int *)fn_00459eac(param_2,0);
  if (piVar1 != (int *)0x0) {
    if (((*(ushort *)(piVar1 + 0xf) & 0x40) == 0) || (piVar1[0x46] != 0)) {
      piVar1[0x38] = local_34;
      piVar1[0x39] = local_30;
      piVar1[0x3a] = iStack_2c;
      piVar1[0x3b] = iStack_28;
      piVar1[0x3c] = iStack_24;
      piVar1[0x3d] = iStack_20;
      piVar1[0x3e] = iStack_1c;
      *(undefined1 *)(piVar1 + 0x4c) = 1;
      uVar2 = *(uint *)(param_1 + 0x18);
      piVar1[0x29] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
      *(ushort *)(piVar1 + 0x2b) =
           *(ushort *)(param_1 + 0x16) << 8 | *(ushort *)(param_1 + 0x16) >> 8;
      piVar1[0x2c] = *(int *)(*(int *)(param_1 + 4) + 0x40);
      piVar1[0x2d] = *(int *)(*(int *)(param_1 + 4) + 0x44);
      uVar2 = *(uint *)(param_3 + 8);
      piVar1[0x2a] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                     uVar2 >> 0x18;
      *(ushort *)((int)piVar1 + 0xae) =
           *(ushort *)(param_3 + 6) << 8 | *(ushort *)(param_3 + 6) >> 8;
      piVar3 = *(int **)(*(int *)(param_1 + 4) + 8);
      uVar4 = (**(code **)(*piVar3 + 0x20))
                        (piVar3,param_4,*(undefined1 *)(*(int *)(param_1 + 4) + 4),0xf,0xf,piVar1,1)
      ;
      puVar5 = (uint *)(piVar1 + 1);
      do {
        uVar2 = *puVar5 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar6);
      *puVar5 = uVar2;
      bVar6 = uVar2 == 0;
      if (bVar6) {
        uVar2 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar6 && uVar2 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))();
      }
      return uVar4;
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}



undefined4 fn_004b47c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *local_30;
  undefined4 local_2c;
  uint local_28;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = 0;
  }
  else {
    local_30 = &DAT_008528bc;
    local_28 = 0;
    local_2c = 0x200;
    iVar2 = fn_006d1068(*(int *)(param_1 + 4) + 0x10,param_2,&local_30);
    if ((iVar2 == 0) ||
       ((uVar3 = *(uint *)(param_2 + 8),
        (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18)
        == (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
           local_28 >> 0x18) &&
        ((ushort)(*(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8) ==
         (ushort)(((unsigned int)(local_2c) >> 16) & 0xffff << 8 | ((unsigned int)(local_2c) >> 16) & 0xffff >> 8))))) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



int * fn_004b4658(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_18;
  undefined1 auStack_14 [4];
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (param_1[5] == 0) {
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar3 = *(int *)(iVar2 + 4);
          iVar5 = iVar2;
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            do {
              iVar5 = iVar3;
              iVar3 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar3 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar3) {
            iVar5 = iVar3;
          }
        }
        else {
          do {
            iVar5 = iVar3;
            iVar3 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
        local_18 = iVar2;
        fn_0077e490(auStack_14,param_1,&local_18);
        iVar2 = iVar5;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_0077eaf0(param_1,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(int *)(iVar1 + 0xc) = param_1[1];
        param_1[1] = iVar1;
        iVar1 = iVar2;
      }
      *(int *)(param_1[4] + 8) = param_1[4];
      *(undefined4 *)(param_1[4] + 4) = 0;
      *(int *)(param_1[4] + 0xc) = param_1[4];
      param_1[5] = 0;
    }
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar4 = (int *)*param_1;
    while (piVar4 != (int *)0x0) {
      *param_1 = *piVar4;
      fn_0014f1bc(piVar4[2]);
      fn_0014f1bc(piVar4);
      piVar4 = (int *)*param_1;
    }
  }
  return param_1;
}



int * fn_004b45bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



int * fn_004b446c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_18;
  undefined1 auStack_14 [4];
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    if (param_1[5] == 0) {
      while (iVar2 != iVar1) {
        iVar3 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar3 = *(int *)(iVar2 + 4);
          iVar5 = iVar2;
          if (iVar2 == *(int *)(iVar3 + 0xc)) {
            do {
              iVar5 = iVar3;
              iVar3 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar3 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar3) {
            iVar5 = iVar3;
          }
        }
        else {
          do {
            iVar5 = iVar3;
            iVar3 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
        local_18 = iVar2;
        fn_0077da78(auStack_14,param_1,&local_18);
        iVar2 = iVar5;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_0077e0d8(param_1,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(int *)(iVar1 + 0xc) = param_1[1];
        param_1[1] = iVar1;
        iVar1 = iVar2;
      }
      *(int *)(param_1[4] + 8) = param_1[4];
      *(undefined4 *)(param_1[4] + 4) = 0;
      *(int *)(param_1[4] + 0xc) = param_1[4];
      param_1[5] = 0;
    }
    iVar1 = param_1[4];
    *(int *)(iVar1 + 0xc) = param_1[1];
    param_1[1] = iVar1;
    piVar4 = (int *)*param_1;
    while (piVar4 != (int *)0x0) {
      *param_1 = *piVar4;
      fn_0014f1bc(piVar4[2]);
      fn_0014f1bc(piVar4);
      piVar4 = (int *)*param_1;
    }
  }
  return param_1;
}



int * fn_004b43d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



int * fn_004b4334(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x300;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}


