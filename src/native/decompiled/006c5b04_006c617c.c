#include "006c5b04_006c617c.h"



int fn_006c617c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = fn_00239700((int)*(short *)(*param_1 + uVar2 * 4 + 0x56));
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  return iVar3;
}



int fn_006c6130(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = (int)*(short *)(*param_1 + uVar2 * 2 + 0x44);
    if (iVar1 - 0x46U < 5) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar2;
      }
      return iVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  return 0;
}



int fn_006c5de0(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,int param_7)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  uint local_30;
  uint local_2c [2];
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  if (uVar9 != uVar11) {
    uVar1 = uVar9;
    if (uVar11 <= uVar9) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar11);
    }
    param_2[1] = uVar11 - (uVar11 - uVar9 & 0xfffffffe);
  }
  local_30 = 0x4c;
  if ((uint)((int)(param_2[2] - *param_2) >> 1) < 0x4c) {
    uVar9 = (int)(param_2[1] - *param_2) >> 1;
    local_2c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_2c[0] < uVar9 + 0x20) {
      local_2c[0] = uVar9 + 0x20;
    }
    puVar2 = local_2c;
    if (local_2c[0] < 0x4d) {
      puVar2 = &local_30;
    }
    uVar9 = *puVar2;
    puVar3 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
    puVar10 = (undefined2 *)param_2[1];
    puVar4 = puVar3;
    for (puVar8 = (undefined2 *)*param_2; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar1 = *param_2;
    uVar11 = uVar1;
    if (param_2[1] <= uVar1) {
      for (; uVar11 != param_2[1]; uVar11 = uVar11 + 2) {
      }
    }
    fn_001008c4(uVar1,(int)(param_2[2] - uVar1) >> 1,0);
    uVar11 = *param_2;
    *param_2 = (uint)puVar3;
    param_2[1] = (param_2[1] - uVar11 & 0xfffffffe) + (int)puVar3;
    param_2[2] = (uint)(puVar3 + uVar9);
  }
  fn_0020b248(param_3);
  iVar5 = fn_0020b1b4();
  iVar6 = fn_0020b1b4(4);
  if ((param_4 != 0) && (iVar12 = 0, 0 < iVar5)) {
    do {
      iVar7 = fn_0020b124(param_3,iVar12);
      local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)iVar7);
      if (iVar7 != 0) {
        puVar8 = (undefined2 *)param_2[1];
        if (puVar8 == (undefined2 *)param_2[2]) {
          fn_0079e460(param_2,puVar8,&local_30);
        }
        else {
          param_2[1] = (uint)(puVar8 + 1);
          if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = (short)iVar7;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar5);
  }
  if (param_5 != 0) {
    iVar12 = 0;
    if (0 < iVar6 - iVar5) {
      do {
        iVar7 = fn_0020b124(param_3,iVar5 + iVar12);
        local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)iVar7);
        if (iVar7 != 0) {
          puVar8 = (undefined2 *)param_2[1];
          if (puVar8 == (undefined2 *)param_2[2]) {
            fn_0079e460(param_2,puVar8,&local_30);
          }
          else {
            param_2[1] = (uint)(puVar8 + 1);
            if (puVar8 != (undefined2 *)0x0) {
              *puVar8 = (short)iVar7;
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar6 - iVar5);
    }
  }
  iVar5 = fn_0020b14c(0x32);
  iVar6 = fn_0020b14c(100);
  if ((param_6 != 0) && (iVar12 = 0, 0 < iVar5)) {
    do {
      iVar7 = fn_0020afb4(param_3,iVar12);
      local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)iVar7);
      if (iVar7 != 0) {
        puVar8 = (undefined2 *)param_2[1];
        if (puVar8 == (undefined2 *)param_2[2]) {
          fn_0079e460(param_2,puVar8,&local_30);
        }
        else {
          param_2[1] = (uint)(puVar8 + 1);
          if (puVar8 != (undefined2 *)0x0) {
            *puVar8 = (short)iVar7;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar5);
  }
  if (param_7 != 0) {
    iVar12 = 0;
    if (0 < iVar6 - iVar5) {
      do {
        iVar7 = fn_0020afb4(param_3,iVar5 + iVar12);
        local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,(short)iVar7);
        if (iVar7 != 0) {
          puVar8 = (undefined2 *)param_2[1];
          if (puVar8 == (undefined2 *)param_2[2]) {
            fn_0079e460(param_2,puVar8,&local_30);
          }
          else {
            param_2[1] = (uint)(puVar8 + 1);
            if (puVar8 != (undefined2 *)0x0) {
              *puVar8 = (short)iVar7;
            }
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar6 - iVar5);
    }
  }
  return (int)(param_2[1] - *param_2) >> 1;
}



undefined1 fn_006c5d68(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x7c);
  uVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c760b,&DAT_008c760b,uVar3,uVar1);
  }
  if ((*(byte *)(**(int **)(*(int *)(param_1 + 0x98) + uVar3 * 4) + 0x44) & 1) == 0) {
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x100) + (uint)*(byte *)(param_1 + 0x7c));
  }
  else {
    uVar2 = 0xff;
  }
  return uVar2;
}



undefined1 fn_006c5d50(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x80) == '\x05' || *(char *)(param_1 + 0x80) == '\x06') {
    uVar1 = *(undefined1 *)(param_1 + 0x7e);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x7d);
  }
  return uVar1;
}



uint fn_006c5c08(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_3c [4];
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  fn_006c58ac();
  iVar7 = 0;
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  uVar6 = 0;
  iVar5 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar5 != iVar5) {
    do {
      uVar2 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar2 <= uVar6) {
        fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar6,uVar2);
      }
      puVar4 = (uint *)(*(int *)(param_1 + 0x10) + uVar6 * 0xc);
      bVar1 = false;
      local_3c[2] = puVar4[2];
      iVar5 = 0;
      local_3c[0] = *puVar4;
      local_3c[1] = puVar4[1];
      do {
        if (0x7fffffff < local_3c[iVar5]) {
          bVar1 = false;
        }
        if ((-1 < (int)local_3c[iVar5]) &&
           (iVar3 = fn_002043cc(DAT_00897840), *(char *)(iVar3 + 0x10) != '\x02')) {
          bVar1 = true;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      if (bVar1) {
        if (iVar7 == local_28) {
          return uVar6;
        }
        iVar7 = iVar7 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return 0;
}



int fn_006c5b04(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_34 [4];
  
  iVar7 = 0;
  uVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar5 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar5 != iVar5) {
    do {
      uVar2 = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc;
      if (uVar2 <= uVar6) {
        fn_002ff628(9,&DAT_008c7603,&DAT_008c7603,uVar6,uVar2);
      }
      puVar4 = (uint *)(*(int *)(param_1 + 0x10) + uVar6 * 0xc);
      bVar1 = false;
      local_34[2] = puVar4[2];
      iVar5 = 0;
      local_34[0] = *puVar4;
      local_34[1] = puVar4[1];
      do {
        if (0x7fffffff < local_34[iVar5]) {
          bVar1 = false;
        }
        if ((-1 < (int)local_34[iVar5]) &&
           (iVar3 = fn_002043cc(DAT_00897840), *(char *)(iVar3 + 0x10) != '\x02')) {
          bVar1 = true;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      if (bVar1) {
        iVar7 = iVar7 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0xc));
  }
  return iVar7;
}


