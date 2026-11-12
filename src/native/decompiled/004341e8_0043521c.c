#include "004341e8_0043521c.h"



void fn_0043521c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0083c07c;
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 0x18))();
    if ((int *)param_1[0x46] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x46] + 4))();
      param_1[0x46] = 0;
    }
  }
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 0x18))();
    if ((int *)param_1[0x47] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x47] + 4))();
      param_1[0x47] = 0;
    }
  }
  if (param_1[0x48] != 0) {
    fn_002454a4(param_1);
    if ((int *)param_1[0x48] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x48] + 4))();
      param_1[0x48] = 0;
    }
  }
  fn_00380e04(param_1);
  if ((int *)param_1[0x48] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x48] + 4))();
  }
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 4))();
  }
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
  }
  fn_00380f78(param_1);
  return;
}



undefined4 * fn_004350c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00380ef8();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &PTR_FUN_0083c07c;
  puVar1[0x43] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x50] = 1;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  *(undefined1 *)(puVar1 + 0x53) = 0;
  *(undefined1 *)((int)puVar1 + 0x14d) = 0;
  *(undefined1 *)((int)puVar1 + 0x14e) = 0;
  puVar1[0x54] = 0;
  puVar1[0x55] = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_00435150;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00435150:
  puVar1[0x43] = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x46);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_00435194;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00435194:
  puVar1[0x44] = puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0x4e);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894694) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x45] = puVar4;
  fn_00689efc(puVar1,0x2d,0);
  return puVar1;
}



void fn_00435014(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
    return;
  }
  if (param_2 == 4) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else if (param_2 != 6) {
    return;
  }
  (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
  return;
}



void fn_00434f68(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 1) {
    if ((char)param_1[0x1f] == '\0') {
      (**(code **)(*param_1 + 0x110))(param_1,6,param_3,0,1);
      return;
    }
  }
  else {
    if (param_2 == 4) {
      (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
      return;
    }
    if (param_2 != 6) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x110))(param_1,4,param_3,0,1);
  return;
}



void fn_00434d28(int param_1)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x14c) != '\x04') {
    uVar2 = fn_006f6a5c(param_1);
    if ((uVar2 & 0x100000) == 0) {
      if ((uVar2 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + 0x18) = 1;
    }
  }
  fn_00380e50(param_1);
  (**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x14))();
  bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + 0xc);
  uVar2 = (uint)bVar1;
  bVar3 = (bVar1 & 8) != 0;
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0x150);
  }
  if (bVar3 && uVar2 != 0) {
    uVar2 = fn_003f71f4(*(undefined4 *)(*(int *)(param_1 + 0x154) + 0x40));
    bVar3 = uVar2 == 8;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0xc);
    }
    if ((bVar3 && uVar2 == 3) && (*(char *)(param_1 + 0x14c) != '\x04')) {
      fn_004344d0(param_1,1);
      return;
    }
  }
  return;
}



void fn_00434c70(int param_1)

{
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0x18))();
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x118) + 4))();
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
  }
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))();
    if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_002454a4(param_1);
    if (*(int **)(param_1 + 0x120) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x120) + 4))();
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
  }
  fn_00380e04(param_1);
  return;
}



void fn_00434b80(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  cVar1 = (char)param_1[0x53];
  bVar4 = cVar1 != '\x04';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0xe5);
  }
  if (bVar4 && cVar1 != '\x01') {
    if ((char)param_1[0x1f] != '\0') {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
    fn_0068ab44(param_1,0x1000950);
    iVar2 = param_1[0x52];
    param_1[0x52] = iVar2 + 1;
    if (iVar2 + 1 == 3) {
      param_1[0x52] = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,0);
    (*(code *)**(undefined4 **)param_1[0x2c])((undefined4 *)param_1[0x2c],0);
    if (*param_2 == 4) {
      uVar3 = fn_002e3e9c(param_1[0x2c],param_2[1],param_2[2]);
      (**(code **)(*param_1 + 400))(param_1,uVar3);
    }
    if ((*(uint *)(param_1[0x45] + 0xc) & 8) != 0) {
      fn_0043243c();
      return;
    }
    if ((*(uint *)(param_1[0x45] + 0xc) & 4) != 0) {
      fn_00433620(param_1);
      return;
    }
  }
  return;
}



void fn_004345b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_0022da78(*(int *)(param_1 + 0xb0) + 4,(&DAT_007c7028)[*(int *)(param_1 + 0x148)],param_2);
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,
                       *(undefined4 *)(&DAT_008946c8 + *(int *)(param_1 + 0x148) * 4),0);
  fn_00243550(*(undefined4 *)(param_1 + 0xdc),uVar1);
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x83) = 0;
  fn_0031f954();
  return;
}



bool fn_004341e8(int param_1,int *param_2,int *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  
  bVar5 = false;
  if (((*param_2 == 1 || *param_2 == 2) && (param_2[3] != 0)) && (*param_3 == 4)) {
    local_3c = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
    local_3c = (undefined4 *)fn_00100fc6(0x80,0);
    iVar1 = 4;
    puVar3 = local_3c;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar1 != 0);
    local_38 = local_3c + 4;
    local_34 = local_3c + 0x20;
    if (*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2 == 0) {
      fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,0,0);
    }
    fn_0079e0cc(&local_30,**(int **)(param_1 + 0xa0) + 4);
    uVar2 = 0;
    if ((int)(local_2c - local_30) >> 2 != 0) {
      do {
        uVar4 = (int)(local_2c - local_30) >> 2;
        if (uVar4 <= uVar2) {
          fn_002ff628(9,&DAT_008c760d,&DAT_008c760d,uVar2,uVar4);
        }
        uVar4 = uVar2 + 1;
        local_3c[uVar2] = *(undefined4 *)(local_30 + uVar2 * 4);
        uVar2 = uVar4;
      } while (uVar4 < (uint)((int)(local_2c - local_30) >> 2));
    }
    if (param_2[3] != 0) {
      uVar4 = 0;
      uVar2 = (int)local_38 - (int)local_3c >> 2;
      if (uVar2 != 0) {
        do {
          if (local_3c[uVar4] == param_2[3]) {
            local_3c[uVar4] = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    if (param_3[3] != 0) {
      uVar4 = 0;
      uVar2 = (int)local_38 - (int)local_3c >> 2;
      if (uVar2 != 0) {
        do {
          if (local_3c[uVar4] == 0) {
            local_3c[uVar4] = param_3[3];
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
    }
    iVar1 = fn_002e84fc(param_3[3],&local_3c);
    bVar5 = iVar1 != 0;
    *param_4 = (char)iVar1;
    uVar2 = local_30;
    if (local_2c < local_30) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != local_2c);
    }
    fn_001008c4(local_30,(int)(local_28 - local_30) >> 2,0);
    puVar3 = local_3c;
    if (local_38 < local_3c) {
      do {
        puVar3 = puVar3 + 1;
      } while (puVar3 != local_38);
    }
    fn_001008c4(local_3c,(int)local_34 - (int)local_3c >> 2,0);
  }
  return bVar5;
}


