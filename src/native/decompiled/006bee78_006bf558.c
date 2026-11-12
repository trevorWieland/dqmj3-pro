#include "006bee78_006bf558.h"



int fn_006bf558(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c41f6)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c41f6)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



int fn_006bf4f4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c41ce)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c41ce)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



int fn_006bf490(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c421e)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c421e)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



int fn_006bf42c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c4246)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c4246)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



int fn_006bf3c8(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c41a6)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c41a6)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



int fn_006bf364(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      do {
        if (((&DAT_007c417e)[iVar2] & 0xffff) == (int)*(short *)(param_2 + iVar3 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + (short)((uint)(&DAT_007c417e)[iVar2] >> 0x10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return iVar1;
}



undefined4 fn_006bf2b4(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((*(byte *)(iVar3 + 0x40) & 1) == 0) {
    uVar2 = 0;
    while (((*(byte *)(iVar3 + uVar2 * 0x20 + 0xaf) & 2) == 0 &&
           (bVar1 = *(byte *)(iVar3 + uVar2 * 0x20 + 0xaf), (bVar1 & 4) == 0 && (bVar1 & 8) == 0)))
    {
      uVar2 = uVar2 + 1;
      if (1 < uVar2) {
        return 0;
      }
    }
  }
  return 1;
}



bool fn_006bf198(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001a46f4((int)*(short *)(*param_1 + 0x1c));
  return iVar1 != 0;
}



int fn_006bf148(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar1 = fn_0068f818((int)*(short *)(*param_1 + uVar2 * 4 + 0x56));
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return iVar3;
}



int fn_006bf0fc(int *param_1,uint *param_2)

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



int fn_006bee78(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int local_28;
  
  uVar6 = *param_2;
  uVar5 = param_2[1];
  if (uVar6 != uVar5) {
    uVar1 = uVar6;
    if (uVar5 <= uVar6) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar5);
    }
    param_2[1] = uVar5 - (uVar5 - uVar6 & 0xfffffffe);
  }
  local_28 = param_4;
  fn_0079e64c(param_2,0x4c);
  fn_0066173c(param_3);
  iVar2 = fn_0066158c();
  iVar3 = fn_0066158c(4);
  if ((param_4 != 0) && (iVar8 = 0, 0 < iVar2)) {
    do {
      iVar4 = fn_006613ec(param_3,iVar8);
      local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,(short)iVar4);
      if (iVar4 != 0) {
        puVar7 = (undefined2 *)param_2[1];
        if (puVar7 == (undefined2 *)param_2[2]) {
          fn_0079e460(param_2,puVar7,&local_28);
        }
        else {
          param_2[1] = (uint)(puVar7 + 1);
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = (short)iVar4;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  if (param_5 != 0) {
    iVar8 = 0;
    if (0 < iVar3 - iVar2) {
      do {
        iVar4 = fn_006613ec(param_3,iVar2 + iVar8);
        local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,(short)iVar4);
        if (iVar4 != 0) {
          puVar7 = (undefined2 *)param_2[1];
          if (puVar7 == (undefined2 *)param_2[2]) {
            fn_0079e460(param_2,puVar7,&local_28);
          }
          else {
            param_2[1] = (uint)(puVar7 + 1);
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = (short)iVar4;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3 - iVar2);
    }
  }
  iVar2 = fn_006614d0(0x32);
  iVar3 = fn_006614d0(100);
  if ((param_6 != 0) && (iVar8 = 0, 0 < iVar2)) {
    do {
      iVar4 = fn_00661248(param_3,iVar8);
      local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,(short)iVar4);
      if (iVar4 != 0) {
        puVar7 = (undefined2 *)param_2[1];
        if (puVar7 == (undefined2 *)param_2[2]) {
          fn_0079e460(param_2,puVar7,&local_28);
        }
        else {
          param_2[1] = (uint)(puVar7 + 1);
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = (short)iVar4;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  if (param_7 != 0) {
    iVar8 = 0;
    if (0 < iVar3 - iVar2) {
      do {
        iVar4 = fn_00661248(param_3,iVar2 + iVar8);
        local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,(short)iVar4);
        if (iVar4 != 0) {
          puVar7 = (undefined2 *)param_2[1];
          if (puVar7 == (undefined2 *)param_2[2]) {
            fn_0079e460(param_2,puVar7,&local_28);
          }
          else {
            param_2[1] = (uint)(puVar7 + 1);
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = (short)iVar4;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3 - iVar2);
    }
  }
  return (int)(param_2[1] - *param_2) >> 1;
}


