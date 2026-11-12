#include "00378c28_0037938c.h"



void fn_0037938c(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,0x100);
  local_38 = 0;
  local_34 = 0;
  local_40 = &DAT_00828bd8;
  local_3c = (uint *)param_1[1];
  uVar4 = *local_3c;
  uVar5 = local_3c[1];
  uVar2 = local_30;
  do {
    if (uVar4 == uVar5) {
      local_30 = (local_30 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)(uVar2 >> 0x10)) & 0xffff) << 16);
      local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(2,(char)uVar2)) & 0xffff);
LAB_00379444:
      bVar6 = (char)param_1[4] == '\0';
      if (bVar6) {
        uVar5 = (uint)(char)local_30;
      }
      if (!bVar6 || uVar5 != 0) {
        uVar5 = 1;
      }
      bVar6 = *(char *)((int)param_1 + 0x11) != '\0';
      uVar4 = local_30;
      if (bVar6) {
        uVar4 = local_30 << 0x10;
      }
      local_2c = param_1[2] + local_38;
      local_24 = param_1[4] & 0xffffff00U | uVar5;
      local_28 = param_1[3] + local_34;
      if (!bVar6 || uVar4 >> 0x18 == 0) {
        local_24 = local_24 & 0xffff00ff;
      }
      fn_006f94f4(param_1 + 2,&local_2c);
      return;
    }
    sVar1 = *(short *)(uVar4 + 0x24);
    local_30 = uVar2;
    iVar3 = fn_00176dc0(uVar4 + 8);
    if (sVar1 < iVar3) {
      (**(code **)(local_40 + 8))(&local_40,0);
      goto LAB_00379444;
    }
    uVar4 = uVar4 + 0x428;
    uVar2 = local_30;
  } while( true );
}



undefined4 fn_003792d8(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(param_1 + 4);
  iVar4 = (*(int **)(param_1 + 4))[1];
  while( true ) {
    if (iVar3 == iVar4) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return 0;
    }
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if (sVar1 < iVar2) break;
    iVar3 = iVar3 + 0x428;
  }
  iVar3 = fn_0035cbb0(param_1,0x43);
  if (iVar3 == 0) {
    fn_0035c240(param_1);
    return 0;
  }
  fn_0035ca80(param_1,*(undefined4 *)(param_1 + 4),iVar3,0x43,param_2,3);
  fn_0035c240(param_1);
  return 1;
}



void fn_003791a8(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined *local_40;
  uint *local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,0x100);
  local_38 = 0;
  local_34 = 0;
  local_40 = &DAT_00828bd8;
  local_3c = (uint *)param_1[1];
  uVar4 = *local_3c;
  uVar5 = local_3c[1];
  uVar2 = local_30;
  do {
    if (uVar4 == uVar5) {
      local_30 = (local_30 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)(uVar2 >> 0x10)) & 0xffff) << 16);
      local_30 = (local_30 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(2,(char)uVar2)) & 0xffff);
LAB_00379260:
      bVar6 = (char)param_1[4] == '\0';
      if (bVar6) {
        uVar5 = (uint)(char)local_30;
      }
      if (!bVar6 || uVar5 != 0) {
        uVar5 = 1;
      }
      bVar6 = *(char *)((int)param_1 + 0x11) != '\0';
      uVar4 = local_30;
      if (bVar6) {
        uVar4 = local_30 << 0x10;
      }
      local_2c = param_1[2] + local_38;
      local_24 = param_1[4] & 0xffffff00U | uVar5;
      local_28 = param_1[3] + local_34;
      if (!bVar6 || uVar4 >> 0x18 == 0) {
        local_24 = local_24 & 0xffff00ff;
      }
      fn_006f94f4(param_1 + 2,&local_2c);
      return;
    }
    sVar1 = *(short *)(uVar4 + 0x24);
    local_30 = uVar2;
    iVar3 = fn_00176dc0(uVar4 + 8);
    if (sVar1 < iVar3) {
      (**(code **)(local_40 + 8))(&local_40,0);
      goto LAB_00379260;
    }
    uVar4 = uVar4 + 0x428;
    uVar2 = local_30;
  } while( true );
}



undefined4 fn_003790a8(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = **(int **)(param_1 + 4);
  iVar4 = (*(int **)(param_1 + 4))[1];
  while( true ) {
    if (iVar3 == iVar4) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return 0;
    }
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if (sVar1 < iVar2) break;
    iVar3 = iVar3 + 0x428;
  }
  iVar3 = fn_0035cbb0(param_1,0x43);
  if (iVar3 != 0) {
    fn_0035ca80(param_1,*(undefined4 *)(param_1 + 4),iVar3,0x43,param_2,3);
    fn_0035c240(param_1);
    return 1;
  }
  fn_0035c240(param_1);
  iVar3 = fn_0035cbb0(param_1,0x42);
  if (iVar3 == 0) {
    fn_0035c240(param_1);
    return 0;
  }
  fn_0035ca80(param_1,*(undefined4 *)(param_1 + 4),iVar3,0x42,param_2,3);
  fn_0035c240(param_1);
  return 1;
}



undefined4 fn_00378e08(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = **(int **)(param_1 + 4);
  iVar5 = (*(int **)(param_1 + 4))[1];
  while( true ) {
    if (iVar4 == iVar5) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return 0;
    }
    sVar1 = *(short *)(iVar4 + 0x24);
    iVar2 = fn_00176dc0(iVar4 + 8);
    if (sVar1 < iVar2) break;
    iVar4 = iVar4 + 0x428;
  }
  iVar4 = fn_0035cbb0(param_1,0x3f);
  if (iVar4 != 0) {
    fn_0035bfa0(param_1,iVar4,0x3f,3);
    iVar2 = (*(int **)(param_1 + 4))[1];
    for (iVar5 = **(int **)(param_1 + 4); iVar5 != iVar2; iVar5 = iVar5 + 0x428) {
      sVar1 = *(short *)(iVar5 + 0x24);
      iVar3 = fn_00176dc0(iVar5 + 8);
      if ((sVar1 < iVar3) &&
         (iVar3 = fn_00176dc0(iVar5 + 8),
         iVar3 <= (int)*(short *)(iVar5 + 0x24) + (int)*(short *)(iVar4 + 0x424))) {
        iVar4 = fn_0035bce0(param_1,param_2,iVar4);
        if (iVar4 != 0) {
          return 1;
        }
        break;
      }
    }
  }
  iVar4 = fn_0035cbb0(param_1,0x40);
  if (iVar4 != 0) {
    fn_0035bfa0(param_1,iVar4,0x40,3);
    iVar2 = (*(int **)(param_1 + 4))[1];
    for (iVar5 = **(int **)(param_1 + 4); iVar5 != iVar2; iVar5 = iVar5 + 0x428) {
      sVar1 = *(short *)(iVar5 + 0x24);
      iVar3 = fn_00176dc0(iVar5 + 8);
      if ((sVar1 < iVar3) &&
         (iVar3 = fn_00176dc0(iVar5 + 8),
         iVar3 <= (int)*(short *)(iVar5 + 0x24) + (int)*(short *)(iVar4 + 0x424))) {
        iVar4 = fn_0035c150(param_1,param_2,iVar4);
        if (iVar4 != 0) {
          return 1;
        }
        break;
      }
    }
  }
  iVar4 = fn_0035cbb0(param_1,0x41);
  if (iVar4 != 0) {
    fn_0035bfa0(param_1,iVar4,0x41,3);
    iVar2 = (*(int **)(param_1 + 4))[1];
    for (iVar5 = **(int **)(param_1 + 4); iVar5 != iVar2; iVar5 = iVar5 + 0x428) {
      sVar1 = *(short *)(iVar5 + 0x24);
      iVar3 = fn_00176dc0(iVar5 + 8);
      if ((sVar1 < iVar3) &&
         (iVar3 = fn_00176dc0(iVar5 + 8),
         iVar3 <= (int)*(short *)(iVar5 + 0x24) + (int)*(short *)(iVar4 + 0x424))) {
        iVar4 = fn_0035c318(param_1,param_2,iVar4);
        if (iVar4 != 0) {
          return 1;
        }
        break;
      }
    }
  }
  iVar4 = fn_0035c318(param_1,param_2,0);
  if (((iVar4 == 0) && (iVar4 = fn_0035c150(param_1,param_2,0), iVar4 == 0)) &&
     (iVar4 = fn_0035bce0(param_1,param_2,0), iVar4 == 0)) {
    return 0;
  }
  return 1;
}



undefined4 fn_00378c28(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = **(int **)(param_1 + 4);
  iVar5 = (*(int **)(param_1 + 4))[1];
  while( true ) {
    if (iVar4 == iVar5) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return 0;
    }
    sVar1 = *(short *)(iVar4 + 0x24);
    iVar2 = fn_00176dc0(iVar4 + 8);
    if (sVar1 < iVar2) break;
    iVar4 = iVar4 + 0x428;
  }
  iVar4 = fn_0035bce0(param_1,param_2,0);
  if (iVar4 != 0) {
    return 1;
  }
  iVar2 = 0;
  iVar4 = **(int **)(param_1 + 4);
  iVar5 = (*(int **)(param_1 + 4))[1];
  if (iVar4 != iVar5) {
    do {
      sVar1 = *(short *)(iVar4 + 0x24);
      iVar3 = fn_00176dc0(iVar4 + 8);
      if (sVar1 < iVar3) {
        iVar2 = iVar2 + 1;
      }
      iVar4 = iVar4 + 0x428;
    } while (iVar4 != iVar5);
    if (3 < iVar2) {
      iVar4 = fn_0035cbb0(param_1,0x42);
      if (iVar4 != 0) goto LAB_00378d7c;
      fn_0035c240(param_1);
    }
  }
  iVar4 = fn_0035cbb0(param_1,0x43);
  if (iVar4 == 0) {
    fn_0035c240(param_1);
    iVar4 = fn_0035c150(param_1,param_2,0);
    if ((iVar4 != 0) || (iVar4 = fn_0035c318(param_1,param_2,0), iVar4 != 0)) {
      return 1;
    }
    iVar4 = fn_0035cbb0(param_1,0x42);
    if (iVar4 != 0) {
LAB_00378d7c:
      fn_0035ca80(param_1,*(undefined4 *)(param_1 + 4),iVar4,0x42,param_2,3);
      fn_0035c240(param_1);
      return 1;
    }
    fn_0035c240(param_1);
    iVar4 = fn_0035cbb0(param_1,0x43);
    if (iVar4 == 0) {
      fn_0035c240(param_1);
      return 0;
    }
  }
  fn_0035ca80(param_1,*(undefined4 *)(param_1 + 4),iVar4,0x43,param_2,3);
  fn_0035c240(param_1);
  return 1;
}


