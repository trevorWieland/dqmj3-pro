#include "003a6478_003a6ae8.h"



undefined4 fn_003a6ae8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  switch(*(undefined1 *)(param_1 + 0x80)) {
  default:
    goto switchD_003a6afc_caseD_0;
  case 4:
    if ((*(byte *)(*(int *)(param_1 + 0xf0) + 0x44) & 1) != 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x7d) + -0x10 == (int)*(char *)(param_1 + 0x7f)) {
      return 0;
    }
    fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),(int)*(char *)(param_1 + 0x7f) + 0x10U & 0xff,0);
    fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7d),1);
    *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7d) + -0x10;
    return 1;
  case 5:
    cVar1 = *(char *)(param_1 + 0x7f);
    if (*(char *)(param_1 + 0x7e) + -0x10 == (int)cVar1) {
      return 0;
    }
    if (*(char *)(param_1 + 0x85) != '\0') {
      iVar2 = (int)(char)(cVar1 + '\x10');
      uVar3 = iVar2 - 0x10;
      bVar5 = 3 < uVar3;
      if (bVar5) {
        uVar3 = iVar2 - 0x18;
      }
      if ((!bVar5 || uVar3 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) break;
    }
    fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),(int)cVar1 + 0x10U & 0xff,0);
    break;
  case 6:
    if (*(char *)(param_1 + 0x7e) + -0x10 == (int)*(char *)(param_1 + 0x7f)) {
      return 0;
    }
    fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),(int)*(char *)(param_1 + 0x7f) + 0x10U & 0xff,0);
  }
  uVar4 = 1;
  fn_0030b8f8(*(undefined4 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x7e),1);
  *(char *)(param_1 + 0x7f) = *(char *)(param_1 + 0x7e) + -0x10;
switchD_003a6afc_caseD_0:
  return uVar4;
}



void fn_003a6aa4(int param_1,int param_2)

{
  if (param_2 == 0) {
    fn_00190cdc(*(undefined4 *)(param_1 + 0xec),1);
  }
  else {
    fn_00190e00();
  }
  *(byte *)(*(int *)(param_1 + 0xf0) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xf0) + 0x44) & 0xfe | (byte)param_2;
  return;
}



void fn_003a6a78(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0xf8) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xf8) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0xfc) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xfc) + 0x44) & 0xfe;
  return;
}



void fn_003a69e4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x7c) = (char)param_2;
  (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))(*(int **)(param_1 + 0x78),0,param_2);
  uVar1 = (uint)*(byte *)(param_1 + 0x7c);
  if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar1) {
    fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar1);
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar1 * 4) + 4);
  fn_0025e378(*(undefined4 *)(param_1 + 200),iVar2 + 0x3c);
  fn_0025e7cc(*(undefined4 *)(param_1 + 200),iVar2 + 0x1c);
  fn_003a755c(param_1,*(undefined1 *)(param_1 + 0x7c));
  return;
}



void fn_003a698c(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb0) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa4) + 0x44) & 0xfe | 1
  ;
  return;
}



void fn_003a68ac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 0x7c) == '\x03') {
    uVar7 = 0;
    iVar1 = fn_00174828(DAT_008977e4);
    iVar2 = fn_00174828(DAT_008977e4);
    iVar3 = fn_00174828(DAT_008977e4);
    cVar6 = '\0';
    do {
      iVar5 = (char)(cVar6 + '\x10') * 3;
      if (iVar1 + 0xe8 != 0) {
        uVar9 = fn_006f447c(iVar3 + (char)(cVar6 + '\x10') * 0x418 + -0x4080);
        iVar5 = (int)((ulonglong)uVar9 >> 0x20);
        uVar7 = uVar7 | (uint)uVar9;
      }
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < '\x04');
    uVar4 = fn_006f4868(iVar1 + 0xe8,iVar5,1,0);
    bVar8 = uVar4 == 0;
    if (bVar8) {
      uVar4 = (uint)*(byte *)(iVar2 + 7);
    }
    if (((bVar8 && uVar4 == 0) && (uVar7 != 0)) &&
       (iVar1 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc)), 499 < iVar1)) {
      fn_003a563c(param_1,2);
      return;
    }
  }
  return;
}



void fn_003a6478(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint local_30;
  undefined1 local_2c [4];
  uint local_28 [2];
  
  puVar13 = (uint *)(param_1 + 0x100);
  uVar10 = *puVar13;
  uVar12 = *(uint *)(param_1 + 0x104);
  if (uVar10 != uVar12) {
    uVar2 = uVar10;
    if (uVar12 <= uVar10) {
      do {
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar12);
    }
    *(uint *)(param_1 + 0x104) = uVar10;
  }
  local_30 = param_2;
  if (*(int *)(param_1 + 0x108) - *puVar13 < param_2) {
    uVar10 = *(int *)(param_1 + 0x104) - *puVar13;
    local_28[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_28[0] < uVar10 + 0x20) {
      local_28[0] = uVar10 + 0x20;
    }
    puVar5 = local_28;
    if (local_28[0] <= param_2) {
      puVar5 = &local_30;
    }
    uVar10 = *puVar5;
    puVar3 = (undefined1 *)fn_00100fc6(uVar10,0);
    puVar9 = *(undefined1 **)(param_1 + 0x104);
    puVar4 = puVar3;
    for (puVar6 = (undefined1 *)*puVar13; puVar6 != puVar9; puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *puVar13;
    uVar12 = uVar2;
    if (*(uint *)(param_1 + 0x104) <= uVar2) {
      for (; uVar12 != *(uint *)(param_1 + 0x104); uVar12 = uVar12 + 1) {
      }
    }
    fn_001008c4(uVar2,*(int *)(param_1 + 0x108) - uVar2,0);
    uVar12 = *puVar13;
    *(undefined1 **)(param_1 + 0x100) = puVar3;
    *(int *)(param_1 + 0x104) = (int)(puVar3 + (*(int *)(param_1 + 0x104) - uVar12));
    *(undefined1 **)(param_1 + 0x108) = puVar3 + uVar10;
  }
  iVar11 = 0;
  do {
    puVar6 = *(undefined1 **)(param_1 + 0x104);
    puVar13 = (uint *)(param_1 + 0x100);
    uVar1 = (undefined1)iVar11;
    if (puVar6 == *(undefined1 **)(param_1 + 0x108)) {
      uVar10 = (int)puVar6 - *puVar13;
      if (uVar10 < (int)*(undefined1 **)(param_1 + 0x108) - *puVar13) {
        *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = puVar6[-1];
        }
        puVar4 = puVar6 + -1;
        puVar3 = puVar6;
        if (puVar6 < puVar4) {
          uVar10 = (int)puVar4 - (int)puVar6;
          if (0 < (int)uVar10) {
            if ((uVar10 & 1) != 0) {
              puVar4 = puVar6 + -2;
              puVar3 = puVar6 + -1;
              *puVar3 = *puVar4;
            }
            for (iVar7 = (int)uVar10 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
              puVar3[-1] = puVar4[-1];
              puVar4 = puVar4 + -2;
              puVar3 = puVar3 + -2;
              *puVar3 = *puVar4;
            }
          }
        }
        else {
          while (puVar6 != puVar4) {
            puVar4 = puVar4 + -1;
            puVar3[-1] = *puVar4;
            puVar3 = puVar3 + -1;
          }
        }
        *puVar6 = uVar1;
      }
      else {
        uVar12 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
        if (uVar12 < uVar10 + 0x20) {
          uVar12 = uVar10 + 0x20;
        }
        puVar9 = (undefined1 *)fn_00100fc6(uVar12,0);
        puVar3 = puVar9;
        for (puVar4 = (undefined1 *)*puVar13; puVar4 != puVar6; puVar4 = puVar4 + 1) {
          if (puVar3 != (undefined1 *)0x0) {
            *puVar3 = *puVar4;
          }
          puVar3 = puVar3 + 1;
        }
        if (puVar9 + ((int)puVar6 - *puVar13) != (undefined1 *)0x0) {
          puVar9[(int)puVar6 - *puVar13] = uVar1;
        }
        puVar3 = *(undefined1 **)(param_1 + 0x104);
        puVar4 = puVar9 + ((int)puVar6 - *puVar13);
        for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
          puVar4 = puVar4 + 1;
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = *puVar6;
          }
        }
        uVar2 = *puVar13;
        uVar8 = *(uint *)(param_1 + 0x104);
        uVar10 = uVar2;
        if (uVar8 < uVar2) {
          do {
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar8);
        }
        fn_001008c4(uVar2,*(int *)(param_1 + 0x108) - uVar2,0);
        *puVar13 = (uint)puVar9;
        *(undefined1 **)(param_1 + 0x104) = puVar9 + (uVar8 - uVar2) + 1;
        *(undefined1 **)(param_1 + 0x108) = puVar9 + uVar12;
      }
    }
    else {
      *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = uVar1;
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 5);
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xe2) == '\0') goto LAB_003a683c;
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,6);
    puVar6 = *(undefined1 **)(param_1 + 0x104);
    if (puVar6 != *(undefined1 **)(param_1 + 0x108)) {
      *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 6;
      }
      goto LAB_003a683c;
    }
  }
  else if (*(char *)(param_1 + 0xe2) == '\0') {
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,5);
    puVar6 = *(undefined1 **)(param_1 + 0x104);
    if (puVar6 != *(undefined1 **)(param_1 + 0x108)) {
      *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 5;
      }
      goto LAB_003a683c;
    }
  }
  else {
    local_30 = (local_30 & ~((unsigned int)0xff << 0)) | ((unsigned int)(5) & 0xff);
    puVar6 = *(undefined1 **)(param_1 + 0x104);
    if (puVar6 == *(undefined1 **)(param_1 + 0x108)) {
      fn_00790780(param_1 + 0x100,puVar6,&local_30);
    }
    else {
      *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 5;
      }
    }
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,6);
    puVar6 = *(undefined1 **)(param_1 + 0x104);
    if (puVar6 != *(undefined1 **)(param_1 + 0x108)) {
      *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = 6;
      }
      goto LAB_003a683c;
    }
  }
  fn_00790780(param_1 + 0x100,puVar6,&local_30);
LAB_003a683c:
  local_2c[0] = 7;
  puVar6 = *(undefined1 **)(param_1 + 0x104);
  if (puVar6 == *(undefined1 **)(param_1 + 0x108)) {
    fn_00790780(param_1 + 0x100,puVar6,local_2c);
    return;
  }
  *(undefined1 **)(param_1 + 0x104) = puVar6 + 1;
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 7;
  }
  return;
}


