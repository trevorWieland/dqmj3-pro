#include "002469ac_00246f54.h"



undefined1 fn_00246f54(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  
  iVar3 = 0;
  if (0 < param_2) {
    unaff_r8 = &DAT_00897804;
  }
  iVar4 = 0;
  if (0 < param_2) {
    do {
      fn_0028aad0(*(undefined4 *)(*unaff_r8 + 0xc),*(undefined4 *)(param_1 + iVar4 * 4));
      iVar2 = fn_00247444();
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + iVar2;
    } while (iVar4 < param_2);
  }
  uVar1 = 0;
  if (iVar3 != 0) {
    if (iVar3 < 4000) {
      uVar1 = 1;
    }
    else if (iVar3 < 8000) {
      uVar1 = 2;
    }
    else if (iVar3 < 12000) {
      uVar1 = 3;
    }
    else if (iVar3 < 18000) {
      uVar1 = 4;
    }
    else if (iVar3 < 32000) {
      uVar1 = 5;
    }
    else if (iVar3 < 46000) {
      uVar1 = 6;
    }
    else if (iVar3 < 74000) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
  }
  return uVar1;
}



undefined1 fn_00246ec4(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = fn_00247138();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (iVar1 < 4000) {
      uVar2 = 1;
    }
    else if (iVar1 < 8000) {
      uVar2 = 2;
    }
    else if (iVar1 < 12000) {
      uVar2 = 3;
    }
    else if (iVar1 < 18000) {
      uVar2 = 4;
    }
    else if (iVar1 < 32000) {
      uVar2 = 5;
    }
    else if (iVar1 < 46000) {
      uVar2 = 6;
    }
    else if (iVar1 < 74000) {
      uVar2 = 7;
    }
    else {
      uVar2 = 8;
    }
  }
  return uVar2;
}



byte fn_00246d74(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  bVar3 = 0;
  bVar1 = 0;
  do {
    iVar2 = fn_002cd49c((int)(char)bVar3,param_2);
    bVar4 = bVar3;
    if (param_1 < iVar2) break;
    bVar5 = bVar3 == 0x77;
    bVar3 = bVar3 + 1;
    bVar4 = bVar1;
    if (bVar5) {
      bVar4 = 0x78;
    }
    bVar1 = bVar4;
  } while (bVar3 < 0x78);
  if (param_4 == 0) {
    if (param_3 < 4) {
      bVar1 = 0x32;
    }
    else if (param_3 < 10) {
      bVar1 = 0x4b;
    }
    else {
      bVar1 = 100;
    }
  }
  else {
    bVar1 = 0x78;
  }
  if (bVar1 < bVar4) {
    bVar4 = bVar1;
  }
  return bVar4;
}



undefined1 * fn_00246c0c(int param_1,int param_2,undefined2 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  short local_2a;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  uVar2 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  cVar1 = *(char *)(param_1 + 0x2e);
  uVar4 = fn_0024f870(param_1);
  uVar5 = 0;
  if ((byte)(cVar1 + 1U) < 0x79) {
    uVar5 = fn_002cd49c((int)cVar1,uVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  uVar5 = 0;
  if ((byte)(cVar1 + 2U) < 0x79) {
    uVar5 = fn_002cd49c((int)(char)(cVar1 + '\x01'),uVar2);
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_36 = 0;
  local_32 = 0;
  local_2e = 0;
  local_2a = 0;
  puVar6 = (undefined1 *)fn_002e94f0(&local_38,param_1,cVar1 + 1U);
  if (param_2 != 0) {
    fn_002e9394(param_1,&local_38,uVar4);
    puVar6 = (undefined1 *)(int)*(short *)(param_1 + 0x22);
    if (0 < (int)puVar6) {
      fn_0020bbc4(auStack_28,param_1);
      uVar3 = fn_006c0028(auStack_24);
      *(undefined2 *)(param_1 + 0x22) = uVar3;
      uVar3 = fn_006c0114(auStack_24);
      *(undefined2 *)(param_1 + 0x24) = uVar3;
      puVar6 = auStack_28;
    }
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = local_38;
    param_3[1] = local_36;
    param_3[2] = local_34;
    param_3[3] = local_32;
    param_3[4] = local_30;
    param_3[5] = local_2e;
    puVar6 = (undefined1 *)(int)local_2a;
    param_3[7] = local_2a;
    if (0 < (int)puVar6) {
      puVar6 = (undefined1 *)fn_00144834(0x204,1);
    }
  }
  return puVar6;
}



undefined4 fn_002469ac(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  uint local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined1 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  local_40 = 0;
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  uVar2 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  bVar1 = *(byte *)(param_1 + 0x2e);
  if (0 < param_2) {
    bVar3 = *(byte *)(param_1 + 0x3c);
    local_50 = (*(ushort *)(param_1 + 0x40) & 0x7ff) >> 10;
    if (local_50 == 0) {
      if (bVar3 < 4) {
        bVar8 = 0x32;
      }
      else if (bVar3 < 10) {
        bVar8 = 0x4b;
      }
      else {
        bVar8 = 100;
      }
    }
    else {
      bVar8 = 0x78;
    }
    if (bVar1 < bVar8) {
      iVar9 = *(int *)(param_1 + 0x30);
      bVar8 = 0;
      bVar4 = 0;
      do {
        bVar10 = bVar4;
        iVar6 = fn_002cd49c((int)(char)bVar10,uVar2);
        if (iVar9 + param_2 < iVar6) break;
        bVar11 = bVar10 == 0x77;
        bVar4 = bVar10 + 1;
        bVar10 = bVar8;
        if (bVar11) {
          bVar10 = 0x78;
        }
        bVar8 = bVar10;
      } while (bVar4 < 0x78);
      if (local_50 == 0) {
        if (bVar3 < 4) {
          bVar3 = 0x32;
        }
        else if (bVar3 < 10) {
          bVar3 = 0x4b;
        }
        else {
          bVar3 = 100;
        }
      }
      else {
        bVar3 = 0x78;
      }
      if (bVar3 < bVar10) {
        bVar10 = bVar3;
      }
      if (bVar10 == bVar1) {
        bVar10 = bVar1;
      }
      if ((*(ushort *)(param_1 + 0x40) & 0x7ff) >> 10 == 0) {
        if (*(byte *)(param_1 + 0x3c) < 4) {
          bVar3 = 0x32;
        }
        else if (*(byte *)(param_1 + 0x3c) < 10) {
          bVar3 = 0x4b;
        }
        else {
          bVar3 = 100;
        }
      }
      else {
        bVar3 = 0x78;
      }
      if (bVar3 == bVar10) {
        uVar7 = 0;
        if (bVar10 < 0x79) {
          uVar7 = fn_002cd49c((int)(char)(bVar10 - 1),uVar2);
        }
        *(undefined4 *)(param_1 + 0x30) = uVar7;
      }
      else {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
      }
      if (bVar1 < bVar10) {
        local_40 = 1;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_50 = 0;
        local_4a = 0;
        local_46 = 0;
        local_42 = 0;
        fn_002e94f0(&local_50,param_1,bVar10);
        fn_002e9394(param_1,&local_50,local_28);
        if (0 < *(short *)(param_1 + 0x3a)) {
          fn_00144834(0x204,1);
        }
        if (999 < *(short *)(param_1 + 0x3a)) {
          *(undefined2 *)(param_1 + 0x3a) = 999;
        }
        fn_0020bbc4(auStack_38,param_1);
        uVar5 = fn_006c0028(auStack_34);
        *(undefined2 *)(param_1 + 0x22) = uVar5;
        uVar5 = fn_006c0114(auStack_34);
        *(undefined2 *)(param_1 + 0x24) = uVar5;
        uVar7 = 0;
        if ((byte)(*(char *)(param_1 + 0x2e) + 1U) < 0x79) {
          uVar7 = fn_002cd49c((int)*(char *)(param_1 + 0x2e),uVar2);
        }
        *(undefined4 *)(param_1 + 0x34) = uVar7;
      }
      fn_0024f108(param_1,local_28);
      return local_40;
    }
  }
  return 0;
}


