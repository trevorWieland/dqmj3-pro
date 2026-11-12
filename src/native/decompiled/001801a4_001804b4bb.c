#include "001801a4_001804b4bb.h"



undefined4 fn_001804b4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_70;
  int *local_6c;
  uint local_68;
  int *local_64;
  uint local_58;
  int *local_54;
  uint local_50;
  int *local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  
  local_54 = (int *)0x0;
  local_58 = 0x1000001;
  if (*(char *)(param_1 + 0x54) != '\0') {
    return 0;
  }
  iVar1 = fn_001a1dc8(*(undefined4 *)(param_1 + 0x18),param_3,&local_58);
  if ((iVar1 == 0) || (((uint)local_54 & 0x2000000) == 0)) {
    iVar1 = *param_4;
    if ((iVar1 == 0x8000100 || iVar1 == 0x8000200) || (param_5 != 0)) {
      if ((iVar1 == 0x8000100 || iVar1 == 0x8000200) &&
         (iVar1 = fn_001880d0(param_2,param_3), iVar1 != -1)) {
        fn_0019e864(*(int *)(param_1 + 0x38) + iVar1 * 8,param_4);
      }
      else if (local_58 == 0x1000001) {
        local_40 = 0x1000001;
        local_3c = (int *)0x0;
        local_38 = 0x1000001;
        local_34 = (int *)0x0;
        fn_0019e864(&local_40,param_4);
        local_68 = 0x5000002;
        local_64 = (int *)(*(uint *)(param_1 + 0x30) | 0x1000000);
        fn_0019b728(*(undefined4 *)(param_1 + 0x18),param_3,&local_68);
        if (((local_68 & 0x8000000) != 0) &&
           (iVar1 = local_64[1], local_64[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_64 + 8))();
        }
        if (*(uint *)(param_1 + 0x34) <= *(uint *)(param_1 + 0x30)) {
          iVar1 = *(uint *)(param_1 + 0x30) << 1;
          if (iVar1 == 0) {
            iVar1 = 4;
          }
          uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x2c),*(uint *)(param_1 + 0x34) << 4,
                               iVar1 << 4);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
          *(int *)(param_1 + 0x34) = iVar1;
        }
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) * 0x10);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0x1000001;
          puVar3[1] = 0;
          puVar3[2] = 0x1000001;
          puVar3[3] = 0;
          fn_0019e864(puVar3,&local_40);
          fn_0019e864(puVar3 + 2,&local_38);
        }
        if (((local_38 & 0x8000000) != 0) &&
           (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_34 + 8))();
        }
        if (((local_40 & 0x8000000) != 0) &&
           (iVar1 = local_3c[1], local_3c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_3c + 8))();
        }
      }
      else {
        fn_0019e864(*(int *)(param_1 + 0x2c) + ((uint)local_54 & 0xffffff) * 0x10,param_4);
      }
      if ((local_58 & 0x8000000) == 0) {
        return 1;
      }
      iVar1 = local_54[1] + -1;
      local_54[1] = iVar1;
    }
    else {
      local_50 = 0x1000001;
      local_4c = (int *)0x0;
      local_48 = 0x1000001;
      local_44 = (int *)0x0;
      fn_0019e864(&local_50,param_4);
      local_70 = 0x5000002;
      local_6c = (int *)(*(uint *)(param_1 + 0x24) | 0x2000000);
      fn_0019b728(*(undefined4 *)(param_1 + 0x18),param_3,&local_70);
      if (((local_70 & 0x8000000) != 0) &&
         (iVar1 = local_6c[1], local_6c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_6c + 8))();
      }
      if (*(uint *)(param_1 + 0x28) <= *(uint *)(param_1 + 0x24)) {
        iVar1 = *(uint *)(param_1 + 0x24) << 1;
        if (iVar1 == 0) {
          iVar1 = 4;
        }
        uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x28) << 4,
                             iVar1 << 4);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
        *(int *)(param_1 + 0x28) = iVar1;
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 0x10);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x1000001;
        puVar3[1] = 0;
        puVar3[2] = 0x1000001;
        puVar3[3] = 0;
        fn_0019e864(puVar3,&local_50);
        fn_0019e864(puVar3 + 2,&local_48);
      }
      if (((local_48 & 0x8000000) != 0) &&
         (iVar1 = local_44[1], local_44[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_44 + 8))();
      }
      if (((local_50 & 0x8000000) != 0) &&
         (iVar1 = local_4c[1], local_4c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_4c + 8))();
      }
      if ((local_58 & 0x8000000) == 0) {
        return 1;
      }
      iVar1 = local_54[1] + -1;
      local_54[1] = iVar1;
    }
  }
  else {
    fn_0019e864(*(int *)(param_1 + 0x20) + ((uint)local_54 & 0xffffff) * 0x10,param_4);
    if ((local_58 & 0x8000000) == 0) {
      return 1;
    }
    iVar1 = local_54[1] + -1;
    local_54[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_54 + 8))();
  }
  return 1;
}



void fn_00180350(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_30 [16];
  
  if (param_3 == 0) {
    return;
  }
  pcVar4 = local_30;
  cVar1 = *(char *)(param_1 + param_2);
  local_30[0] = cVar1 + (char)param_3;
  local_30[4] = fn_00182944(param_2);
  iVar3 = fn_00182924(param_2);
  local_30[8] = (char)iVar3;
  if (iVar3 < local_30[4]) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if ((int)local_30[0] < (int)local_30[4]) {
    pcVar4 = local_30 + 4;
  }
  if (iVar3 < *pcVar4) {
    pcVar4 = local_30 + 8;
  }
  cVar2 = *pcVar4;
  iVar3 = param_1 + param_2;
  *(char *)(param_1 + param_2) = cVar2;
  if ((cVar1 == '\0') || (cVar2 != '\0')) {
    if (cVar2 != cVar1) {
      if ((*(char *)(iVar3 + 0x61) < param_4) &&
         (*(char *)(iVar3 + 0x61) = (char)param_4, cVar1 == '\0')) {
        if (param_2 == 0x18) {
          if ('\0' < *(char *)(param_1 + 0x5b)) {
            *(undefined1 *)(param_1 + 0x79) = *(undefined1 *)(param_1 + 0xbc);
          }
        }
        else if ((param_2 == 0x5b) && ('\0' < *(char *)(param_1 + 0x18))) {
          *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_1 + 0x79);
        }
      }
      uVar5 = 1;
      do {
        bVar6 = *(char *)(param_1 + param_2) != '\0';
        cVar1 = '\0';
        if (bVar6) {
          cVar1 = *(char *)(param_1 + uVar5);
        }
        if ((bVar6 && cVar1 != '\0') &&
           (iVar3 = (**(code **)(uVar5 * 4 + 0x89931c))(param_2), iVar3 != 0)) {
          *(undefined1 *)(param_1 + (uVar5 & 0xff)) = 0;
          *(undefined1 *)(param_1 + (uVar5 & 0xff) + 0x61) = 0;
          if (param_5 != 0) {
            *(undefined1 *)(param_5 + uVar5) = 1;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 0x61);
      return;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 0x61) = 0;
    if (param_5 != 0) {
      *(undefined1 *)(param_5 + param_2) = 1;
    }
  }
  return;
}


