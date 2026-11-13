#include "0031ef00_0031f684.h"



void fn_0031f684(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if ((param_2 != 0) || (*(char *)(param_1 + 0x7c) != *(char *)(param_1 + 0x7d))) {
    uVar5 = 0;
    do {
      uVar1 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
      if (uVar1 <= uVar5) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
      }
      bVar6 = (int)*(char *)(param_1 + 0x7d) == uVar5;
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + uVar5 * 4);
      uVar5 = uVar5 + 1;
      *(byte *)(iVar3 + 0x44) = bVar6 | *(byte *)(iVar3 + 0x44) & 0xfe;
    } while ((int)uVar5 < 4);
    cVar2 = *(char *)(param_1 + 0x7d);
    if (cVar2 == '\0') {
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
      if (0 < iVar3) {
        do {
          uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x34) + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        } while ((int)uVar5 < iVar3);
        return;
      }
    }
    else if (cVar2 == '\x01') {
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (0 < iVar3) {
        do {
          uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x40) + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        } while ((int)uVar5 < iVar3);
        return;
      }
    }
    else if (cVar2 == '\x02') {
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
      if (0 < iVar3) {
        do {
          uVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        } while ((int)uVar5 < iVar3);
        return;
      }
    }
    else if (cVar2 == '\x03') {
      uVar5 = 0;
      iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
      if (0 < iVar3) {
        do {
          uVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
          if (uVar1 <= uVar5) {
            fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,uVar5,uVar1);
          }
          iVar4 = *(int *)(*(int *)(param_1 + 0x58) + uVar5 * 4);
          uVar5 = uVar5 + 1;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        } while ((int)uVar5 < iVar3);
      }
    }
  }
  return;
}



void fn_0031f3f4(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x80) == *(char *)(param_1 + 0x81))) {
    return;
  }
  iVar3 = (int)*(char *)(param_1 + 0x7d);
  if ((int)*(char *)(param_1 + 0x7c) == (int)*(char *)(param_1 + 0x7d)) {
    iVar3 = (int)*(char *)(param_1 + 0x7c);
  }
  iVar5 = *(int *)(param_1 + 0x68);
  if (iVar5 != 0) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  cVar2 = *(char *)(param_1 + 0x81);
  *(undefined4 *)(param_1 + 0x68) = 0;
  switch(iVar3) {
  case 0:
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 != '\x01') {
      if (cVar2 != '\x02') {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
      if (uVar1 < 2) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,1,uVar1);
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 4);
      goto LAB_0031f594;
    }
    if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,0,0);
    }
    *(undefined4 *)(param_1 + 0x68) = **(undefined4 **)(param_1 + 0x34);
    break;
  case 1:
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 == '\x01') {
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 8) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,7,uVar1);
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c);
    }
    else if (cVar2 == '\x02') {
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 9) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,8,uVar1);
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x20);
    }
    else {
      if (cVar2 != '\x03') {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      if (uVar1 < 10) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,9,uVar1);
      }
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x24);
    }
    goto LAB_0031f594;
  case 2:
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 != '\x04') {
      return;
    }
    uVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
    if (uVar1 < 2) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,1,uVar1);
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    goto LAB_0031f678;
  case 3:
    if (cVar2 != '\x05') {
      return;
    }
    uVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
    if (uVar1 < 2) {
      fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,1,uVar1);
    }
    iVar3 = *(int *)(param_1 + 0x58);
LAB_0031f678:
    uVar4 = *(undefined4 *)(iVar3 + 4);
LAB_0031f594:
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    break;
  case -1:
    goto switchD_0031f450_caseD_ffffffff;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  }
switchD_0031f450_caseD_ffffffff:
  return;
}



void fn_0031f39c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_0031ef00(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint local_18;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x7e) == *(char *)(param_1 + 0x7f))) {
    return;
  }
  iVar4 = (int)*(char *)(param_1 + 0x7d);
  if ((int)*(char *)(param_1 + 0x7c) == (int)*(char *)(param_1 + 0x7d)) {
    iVar4 = (int)*(char *)(param_1 + 0x7c);
  }
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  cVar1 = *(char *)(param_1 + 0x7f);
  switch(iVar4) {
  case 1:
    if (cVar1 == '\x01') {
      local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      uVar2 = param_4;
      if (local_18 == 0) {
        fn_002ff628(9,&DAT_008c7663);
        uVar2 = local_18;
      }
      local_18 = uVar2;
      piVar6 = *(int **)(param_1 + 0x40);
      goto LAB_0031f2a0;
    }
    if (cVar1 == '\x02') {
      local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
      uVar2 = param_4;
      if (local_18 < 2) {
        fn_002ff628(9,&DAT_008c7663);
        uVar2 = local_18;
      }
      local_18 = uVar2;
      iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 4);
    }
    else {
      if (cVar1 == '\x03') {
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 3) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(param_1 + 0x40);
        goto LAB_0031f2ec;
      }
      if (cVar1 == '\x04') {
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 4) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0xc);
      }
      else if (cVar1 == '\x05') {
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 5) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x10);
      }
      else if (cVar1 == '\x06') {
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 6) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
      }
      else if (cVar1 == '\t') {
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 7) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x18);
      }
      else {
        if (cVar1 != '\n') goto switchD_0031ef5c_caseD_ffffffff;
        local_18 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2;
        uVar2 = param_4;
        if (local_18 < 0xd) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = local_18;
        }
        local_18 = uVar2;
        iVar4 = *(int *)(*(int *)(param_1 + 0x40) + 0x30);
      }
    }
    break;
  case 2:
    if (cVar1 != '\a') goto switchD_0031ef5c_caseD_ffffffff;
    local_18 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
    uVar2 = param_4;
    if (local_18 == 0) {
      fn_002ff628(9,&DAT_008c7663);
      uVar2 = local_18;
    }
    local_18 = uVar2;
    piVar6 = *(int **)(param_1 + 0x4c);
LAB_0031f2a0:
    iVar4 = *piVar6;
    break;
  case 3:
    if (cVar1 != '\b') goto switchD_0031ef5c_caseD_ffffffff;
    local_18 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2;
    uVar2 = param_4;
    if (local_18 < 3) {
      fn_002ff628(9,&DAT_008c7663);
      uVar2 = local_18;
    }
    local_18 = uVar2;
    iVar4 = *(int *)(param_1 + 0x58);
LAB_0031f2ec:
    iVar4 = *(int *)(iVar4 + 8);
    break;
  case -1:
  case 0:
switchD_0031ef5c_caseD_ffffffff:
    *(undefined4 *)(param_1 + 100) = 0;
    return;
  default:
    iVar4 = *(int *)(param_1 + 100);
    local_18 = param_4;
    goto LAB_0031f038;
  }
  *(int *)(param_1 + 100) = iVar4;
LAB_0031f038:
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
    piVar6 = *(int **)(param_1 + 100);
    if (param_3 == 0) {
      uVar5 = fn_001603f8(&local_18,0xffffffff);
      (**(code **)(*piVar6 + 0x10))(piVar6,0,uVar5);
      piVar6 = *(int **)(param_1 + 100);
      uVar5 = fn_001603f8(&local_18,0xffffffff);
      (**(code **)(*piVar6 + 0x10))(piVar6,1,uVar5);
      piVar6 = *(int **)(param_1 + 100);
      uVar5 = fn_001603f8(&local_18,0xffffffff);
      (**(code **)(*piVar6 + 0x10))(piVar6,2,uVar5);
      piVar6 = *(int **)(param_1 + 100);
      uVar5 = fn_001603f8(&local_18,0xffffffff);
      (**(code **)(*piVar6 + 0x10))(piVar6,3,uVar5);
      return;
    }
    uVar5 = fn_001603f8(&local_18,0x808080ff);
    (**(code **)(*piVar6 + 0x10))(piVar6,0,uVar5);
    piVar6 = *(int **)(param_1 + 100);
    uVar5 = fn_001603f8(&local_18,0x808080ff);
    (**(code **)(*piVar6 + 0x10))(piVar6,1,uVar5);
    piVar6 = *(int **)(param_1 + 100);
    uVar5 = fn_001603f8(&local_18,0x808080ff);
    (**(code **)(*piVar6 + 0x10))(piVar6,2,uVar5);
    piVar6 = *(int **)(param_1 + 100);
    uVar5 = fn_001603f8(&local_18,0x808080ff);
    (**(code **)(*piVar6 + 0x10))(piVar6,3,uVar5);
  }
  return;
}


