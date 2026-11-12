#include "00176db8_00177270b.h"



undefined4 fn_00177270(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  uint local_24;
  int local_20;
  
  piVar1 = (int *)fn_00173d4c(param_1,0xffffffff);
  iVar7 = piVar1[1];
  if (*piVar1 != 0x8000200) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00177464);
    return uVar2;
  }
  *(int *)(iVar7 + 0x18) = param_2;
  if (param_3 == 0) {
    for (uVar6 = 0; uVar6 < *(uint *)(iVar7 + 0x20); uVar6 = uVar6 + 1) {
    }
    *(undefined4 *)(iVar7 + 0x20) = 0;
  }
  else {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    iVar3 = fn_0017875c(&local_28,param_3);
    uVar6 = local_24;
    if (iVar3 == 0) {
      uVar2 = fn_001581d0(param_1,(char *)&DAT_0017747c);
      if (local_20 != 0) {
        for (uVar6 = 0; uVar6 < local_24; uVar6 = uVar6 + 1) {
        }
        fn_0019d680(local_28,local_20 << 2);
      }
      return uVar2;
    }
    if (*(uint *)(iVar7 + 0x24) < local_24) {
      uVar5 = local_24;
      if (local_24 == 0) {
        uVar5 = 4;
      }
      uVar2 = fn_0018388c(*(undefined4 *)(iVar7 + 0x1c),*(uint *)(iVar7 + 0x24) << 2,uVar5 << 2);
      *(undefined4 *)(iVar7 + 0x1c) = uVar2;
      *(uint *)(iVar7 + 0x24) = uVar5;
    }
    uVar5 = uVar6;
    if (*(uint *)(iVar7 + 0x20) < uVar6) {
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar7 + 0x1c) + *(int *)(iVar7 + 0x20) * 4);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
        }
        uVar5 = *(int *)(iVar7 + 0x20) + 1;
        *(uint *)(iVar7 + 0x20) = uVar5;
      } while (uVar5 < uVar6);
    }
    else {
      for (; uVar5 < *(uint *)(iVar7 + 0x20); uVar5 = uVar5 + 1) {
      }
      *(uint *)(iVar7 + 0x20) = uVar6;
    }
    uVar6 = 0;
    if (local_24 != 0) {
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar7 + 0x1c) + uVar6 * 4);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *(undefined4 *)(local_28 + uVar6 * 4);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_24);
    }
    *(uint *)(iVar7 + 0x20) = local_24;
    if (local_20 != 0) {
      for (uVar6 = 0; uVar6 < local_24; uVar6 = uVar6 + 1) {
      }
      fn_0019d680(local_28,local_20 << 2);
    }
  }
  if (param_2 == -99999) {
    *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar7 + 0x20);
  }
  return 0;
}



undefined4 fn_00177160(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20;
  int *local_1c;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  iVar3 = piVar1[1];
  if (*piVar1 != 0x8000200) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_0017724c);
    return uVar2;
  }
  local_1c = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),param_3,0xffffffff);
  local_20 = 0x8000010;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_0019e864(iVar3 + 0x40,&local_20);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar3 = local_1c[1], local_1c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return 0;
}



void fn_00176fc8(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint local_28;
  int *local_24;
  
  iVar6 = *(int *)(param_1 + 0x8c);
  piVar1 = (int *)fn_002fece8(0x48);
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 0;
    *piVar1 = (int)&DAT_0081e540;
    piVar1[2] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0x1000001;
    piVar1[0xe] = 0;
    piVar1[0x10] = 0x1000001;
    piVar1[0x11] = 0;
    piVar1[0xf] = param_2;
    piVar1[3] = 0;
    piVar1[5] = iVar6;
    piVar1[4] = 0;
    fn_0019e8c4(iVar6 + 0x44);
  }
  uVar8 = 0;
  piVar1[6] = 0;
  if (param_3 != 0) {
    do {
      piVar7 = piVar1 + 10;
      puVar2 = (uint *)fn_0017ff94(param_1);
      if ((uint)piVar1[0xc] <= (uint)piVar1[0xb]) {
        iVar6 = piVar1[0xb] << 1;
        if (iVar6 == 0) {
          iVar6 = 4;
        }
        iVar3 = fn_0018388c(*piVar7,piVar1[0xc] << 3,iVar6 << 3);
        *piVar7 = iVar3;
        piVar1[0xc] = iVar6;
      }
      puVar4 = (uint *)(*piVar7 + piVar1[0xb] * 8);
      piVar1[0xb] = piVar1[0xb] + 1;
      if (puVar4 != (uint *)0x0) {
        *puVar4 = *puVar2;
        uVar5 = puVar2[1];
        puVar4[1] = uVar5;
        if ((*puVar4 & 0x8000000) != 0) {
          *(int *)(uVar5 + 4) = *(int *)(uVar5 + 4) + 1;
        }
      }
      fn_0017ff68(param_1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < param_3);
  }
  local_28 = 0x8000200;
  local_24 = piVar1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_28);
  }
  piVar1[1] = piVar1[1] + 1;
  fn_00173d1c(param_1);
  if (((local_28 & 0x8000000) != 0) &&
     (iVar6 = local_24[1], local_24[1] = iVar6 + -1, iVar6 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  return;
}



void fn_00176fb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}



void fn_00176fa8(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x7a0) = *param_2;
  *(undefined1 *)(param_1 + 0x7a4) = *(undefined1 *)(param_2 + 1);
  return;
}


