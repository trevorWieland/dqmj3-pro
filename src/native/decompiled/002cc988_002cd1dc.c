#include "002cc988_002cd1dc.h"



undefined4 fn_002cd088(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_002cd1dc(param_1,&local_28);
  iVar1 = fn_006c41e4(param_1 + 8);
  if (iVar1 != 2) {
    fn_002cd288(param_1,&local_28);
  }
  uVar3 = 0;
  iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      local_1c = local_28 + uVar3 * 0xf0;
      iVar1 = fn_00661088();
      iVar2 = fn_006c4224(param_1 + 8);
      if (iVar1 != iVar2) {
        uVar3 = local_28;
        if (local_24 < local_28) {
          do {
            uVar3 = uVar3 + 0xf0;
          } while (uVar3 != local_24);
        }
        iVar1 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                      ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
        fn_001008c4(local_28,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                    ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
    } while (uVar3 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  uVar3 = local_28;
  if (local_24 < local_28) {
    do {
      uVar3 = uVar3 + 0xf0;
    } while (uVar3 != local_24);
  }
  iVar1 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
  fn_001008c4(local_28,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  return 0;
}



undefined4 fn_002ccf74(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_28;
  uint local_24;
  int local_20;
  
  uVar3 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_002cd1dc(param_1,&local_28);
  fn_002cd288(param_1,&local_28);
  uVar2 = 0;
  iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      if (*(int *)(local_28 + uVar2 * 0xf0 + 0xe0) != 0) {
        fn_0028abc4(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0028b148(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0028b3b0(*(undefined4 *)(DAT_00897804 + 0xc));
        uVar3 = 1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = (int)((longlong)(int)(local_24 - local_28) * -0x77777777 +
                    ((ulonglong)(local_24 - local_28) << 0x20) >> 0x20);
    } while (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  uVar2 = local_28;
  if (local_24 < local_28) {
    do {
      uVar2 = uVar2 + 0xf0;
    } while (uVar2 != local_24);
  }
  iVar1 = (int)((longlong)(int)(local_20 - local_28) * -0x77777777 +
                ((ulonglong)(local_20 - local_28) << 0x20) >> 0x20);
  fn_001008c4(local_28,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  return uVar3;
}



undefined4 fn_002ccdc0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  fn_002cd1dc(param_1,&local_38);
  iVar1 = fn_006c41e4(param_1 + 8);
  if (iVar1 != 2) {
    fn_002cd288(param_1,&local_38);
  }
  uVar4 = 0;
  iVar1 = (int)((longlong)(int)(local_34 - local_38) * -0x77777777 +
                ((ulonglong)(local_34 - local_38) << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      uVar2 = uVar4 + 1;
      iVar1 = (int)((longlong)(int)(local_34 - local_38) * -0x77777777 +
                    ((ulonglong)(local_34 - local_38) << 0x20) >> 0x20);
      if (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f))) {
        do {
          iVar3 = local_38 + uVar2 * 0xf0;
          local_2c = local_38 + uVar4 * 0xf0;
          iVar1 = fn_00661088();
          local_28 = iVar3;
          iVar3 = fn_00661088();
          if (iVar1 == iVar3) {
            uVar4 = local_38;
            if (local_34 < local_38) {
              do {
                uVar4 = uVar4 + 0xf0;
              } while (uVar4 != local_34);
            }
            iVar1 = (int)((longlong)(int)(local_30 - local_38) * -0x77777777 +
                          ((ulonglong)(local_30 - local_38) << 0x20) >> 0x20);
            fn_001008c4(local_38,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
            return 1;
          }
          iVar1 = (int)((longlong)(int)(local_34 - local_38) * -0x77777777 +
                        ((ulonglong)(local_34 - local_38) << 0x20) >> 0x20);
          uVar2 = uVar2 + 1;
        } while (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
      }
      uVar4 = uVar4 + 1;
      iVar1 = (int)((longlong)(int)(local_34 - local_38) * -0x77777777 +
                    ((ulonglong)(local_34 - local_38) << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  uVar4 = local_38;
  if (local_34 < local_38) {
    do {
      uVar4 = uVar4 + 0xf0;
    } while (uVar4 != local_34);
  }
  iVar1 = (int)((longlong)(int)(local_30 - local_38) * -0x77777777 +
                ((ulonglong)(local_30 - local_38) << 0x20) >> 0x20);
  fn_001008c4(local_38,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  return 0;
}



undefined4 fn_002ccc40(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  fn_002cd1dc(param_1,&local_18);
  iVar1 = fn_006c41e4(param_1 + 8);
  if (iVar1 != 2) {
    fn_002cd288(param_1,&local_18);
  }
  uVar4 = 0;
  uVar3 = local_14 - local_18;
  iVar1 = (int)((longlong)(int)uVar3 * -0x77777777 + ((ulonglong)uVar3 << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      uVar2 = uVar4 + 1;
      iVar1 = (int)((longlong)(int)uVar3 * -0x77777777 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      if (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f))) {
        do {
          if (*(short *)(local_18 + uVar4 * 0xf0 + 0x1c) ==
              *(short *)(local_18 + uVar2 * 0xf0 + 0x1c)) {
            uVar3 = local_18;
            if (local_14 < local_18) {
              do {
                uVar3 = uVar3 + 0xf0;
              } while (uVar3 != local_14);
            }
            iVar1 = (int)((longlong)(int)(local_10 - local_18) * -0x77777777 +
                          ((ulonglong)(local_10 - local_18) << 0x20) >> 0x20);
            fn_001008c4(local_18,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
            return 1;
          }
          uVar2 = uVar2 + 1;
          iVar1 = (int)((longlong)(int)uVar3 * -0x77777777 + ((ulonglong)uVar3 << 0x20) >> 0x20);
        } while (uVar2 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
      }
      uVar4 = uVar4 + 1;
      iVar1 = (int)((longlong)(int)uVar3 * -0x77777777 + ((ulonglong)uVar3 << 0x20) >> 0x20);
    } while (uVar4 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  uVar3 = local_18;
  if (local_14 < local_18) {
    do {
      uVar3 = uVar3 + 0xf0;
    } while (uVar3 != local_14);
  }
  iVar1 = (int)((longlong)(int)(local_10 - local_18) * -0x77777777 +
                ((ulonglong)(local_10 - local_18) << 0x20) >> 0x20);
  fn_001008c4(local_18,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  return 0;
}



void fn_002ccbb4(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0') {
    switch(*(undefined4 *)(param_1 + 0xe4)) {
    case 0:
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      return;
    case 7:
      if (*(char *)(*(int *)(param_1 + 0x10c) + 0x5f) != '\0') {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x5e) = 0;
      return;
    }
  }
  return;
}



void fn_002ccba8(int param_1)

{
  fn_00158f6c(param_1 + 0x1e,0x40);
  return;
}



undefined4 fn_002cc988(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_48;
  uint local_44;
  int local_40;
  undefined4 local_38 [4];
  undefined4 local_28 [4];
  
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  fn_002cd1dc(param_1,&local_48);
  fn_002cd288(param_1,&local_48);
  uVar3 = 0;
  iVar1 = (int)((longlong)(int)(local_44 - local_48) * -0x77777777 +
                ((ulonglong)(local_44 - local_48) << 0x20) >> 0x20);
  if (iVar1 >> 7 != iVar1 >> 0x1f) {
    do {
      iVar1 = fn_0024e350(local_48 + uVar3 * 0xf0);
      if (iVar1 != 0) {
        uVar3 = local_48;
        if (local_44 < local_48) {
          do {
            uVar3 = uVar3 + 0xf0;
          } while (uVar3 != local_44);
        }
        iVar1 = (int)((longlong)(int)(local_40 - local_48) * -0x77777777 +
                      ((ulonglong)(local_40 - local_48) << 0x20) >> 0x20);
        fn_001008c4(local_48,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar1 = (int)((longlong)(int)(local_44 - local_48) * -0x77777777 +
                    ((ulonglong)(local_44 - local_48) << 0x20) >> 0x20);
    } while (uVar3 < (uint)((iVar1 >> 7) - (iVar1 >> 0x1f)));
  }
  iVar1 = 0;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    uVar2 = fn_00144df4(uVar4,iVar1);
    uVar2 = fn_0028aad0(uVar4,uVar2);
    local_38[iVar1] = uVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = fn_002506e0(local_38,4,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      uVar2 = fn_006b8538(uVar4,iVar1);
      uVar2 = fn_0028aad0(uVar4,uVar2);
      local_28[iVar1] = uVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = fn_002506e0(local_28,4,1);
    if (iVar1 == 0) {
      uVar3 = local_48;
      if (local_44 < local_48) {
        do {
          uVar3 = uVar3 + 0xf0;
        } while (uVar3 != local_44);
      }
      iVar1 = (int)((longlong)(int)(local_40 - local_48) * -0x77777777 +
                    ((ulonglong)(local_40 - local_48) << 0x20) >> 0x20);
      fn_001008c4(local_48,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
      return 0;
    }
    uVar3 = local_48;
    if (local_44 < local_48) {
      do {
        uVar3 = uVar3 + 0xf0;
      } while (uVar3 != local_44);
    }
  }
  else {
    uVar3 = local_48;
    if (local_44 < local_48) {
      do {
        uVar3 = uVar3 + 0xf0;
      } while (uVar3 != local_44);
    }
  }
  iVar1 = (int)((longlong)(int)(local_40 - local_48) * -0x77777777 +
                ((ulonglong)(local_40 - local_48) << 0x20) >> 0x20);
  fn_001008c4(local_48,(iVar1 >> 7) - (iVar1 >> 0x1f),0);
  return 1;
}



void fn_002cd1dc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    uVar1 = fn_00144df4(uVar5,iVar4);
    iVar2 = fn_0028aad0(uVar5,uVar1);
    if ((iVar2 != 0) && (iVar3 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c)), iVar3 != 0)) {
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == *(int *)(param_2 + 8)) {
        fn_00787f6c(param_2,iVar3,iVar2);
      }
      else {
        *(int *)(param_2 + 4) = iVar3 + 0xf0;
        if (iVar3 != 0) {
          fn_0017821c(iVar3,iVar2,0xf0);
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}


