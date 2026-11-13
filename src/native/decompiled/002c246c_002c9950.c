#include "002c246c_002c9950.h"



void fn_002c9950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar2 = fn_0022f584((char *)&DAT_002c99c4,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  iVar1 = fn_001f7424(param_1,0x48);
  if ((iVar1 == 0) && (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01')) {
    *(code **)(param_1 + 0xc4) = fn_002c94a4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



undefined4 fn_002c9568(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  wchar16 *pwStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  fn_005f3c48(2);
  fn_005f3aac(2);
  fn_002c330c(&pwStack_50);
  pwStack_50 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_4c = (char *)&DAT_002c97b8;
  uStack_48 = 2;
  puVar6 = *(undefined4 **)(param_1 + 0x18);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_00895df4) goto LAB_002c95dc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_002c95dc:
  local_44 = puVar6[3];
  uVar2 = fn_0022f750((char *)&DAT_002c97d0);
  fn_00147974(&local_34,uVar2);
  local_24 = 0;
  local_23 = 1;
  uVar2 = fn_0022f750(&DAT_002c97e4);
  fn_00147974(&local_28,uVar2);
  uVar2 = fn_002c29a0(param_1,&pwStack_50);
  uVar7 = 0;
  do {
    uVar3 = fn_0022f750((&DAT_007c7be0)[uVar7]);
    fn_0031b78c(param_1,uVar7,0,uVar3);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  fn_00689efc(param_1,0x90,0);
  *(undefined **)(param_1 + 0xc4) = &DAT_002c94a0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_002c94a0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_002c94a0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (local_28 != &DAT_008f9cf4) {
    piVar4 = local_28 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar4 = local_2c + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar4 = local_30 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar4 = local_34 + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return uVar2;
}



void fn_002c8df4(undefined4 param_1,int param_2)

{
  fn_0022f750(*(undefined4 *)(&DAT_00894f98 + param_2 * 4));
  return;
}



void fn_002c7b24(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((char)param_1[0x1f] != '\0') {
    return;
  }
  iVar1 = param_1[0x43];
  param_1[0x43] = iVar1 + 1;
  if (iVar1 + 1 == 3) {
    param_1[0x43] = 0;
  }
  fn_0022da78(param_1[0x2c] + 4,(&DAT_007c7257)[param_1[0x43]],0);
  (*(code *)**(undefined4 **)param_1[0x2c])((undefined4 *)param_1[0x2c],0);
  uVar2 = fn_00231cb8((&DAT_007c7254)[param_1[0x43]]);
  fn_00243550(param_1[0x3e],uVar2);
  iVar1 = param_1[0x3f];
  *(undefined1 *)(iVar1 + 0x83) = 0;
  fn_0031f954(iVar1,0);
  if (param_1[0x19] == 4) {
    uVar2 = (**(code **)(**(int **)(param_1[0x2c] + 0x10) + 0x5c))();
    (**(code **)(*param_1 + 0x15c))(param_1,uVar2,1,param_1[0x19]);
  }
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_002c756c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_24 [2];
  
  uVar1 = fn_002314fc(param_3);
  uVar2 = fn_00100b58();
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_24 + 1;
    if (0x20 < uVar2) {
      puVar4 = local_24;
    }
    local_24[0] = uVar2;
    local_24[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      *puVar3 = 0;
      puVar3[1] = uVar6;
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  *param_1 = puVar3;
  fn_00301a9c(puVar3,uVar1,uVar2 << 1);
  return;
}



void fn_002c6674(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar1 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),iVar5);
    if (iVar1 != 0) {
      iVar4 = 0;
      iVar2 = (int)*(char *)(*(int *)(param_1 + 0x108) + 0x78);
      if (0 < iVar2) {
        do {
          if (iVar4 < iVar2) {
            uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x108) + iVar4 * 2 + 0x14);
          }
          else {
            uVar3 = 0;
          }
          if ((int)*(short *)(iVar1 + 0x16) == uVar3) {
            *(undefined1 *)(iVar1 + 0x33) = 1;
            goto LAB_002c66e8;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      *(undefined1 *)(iVar1 + 0x33) = 0;
LAB_002c66e8:
      fn_002b43b8(iVar1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0xc);
  iVar5 = *(int *)(*(int *)(param_1 + 0x9c) + 0x28);
  if (iVar5 != 0) {
    iVar1 = 0;
    iVar2 = (int)*(char *)(*(int *)(param_1 + 0x108) + 0x78);
    if (0 < iVar2) {
      do {
        if (iVar1 < iVar2) {
          uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x108) + iVar1 * 2 + 0x14);
        }
        else {
          uVar3 = 0;
        }
        if ((int)*(short *)(iVar5 + 0x16) == uVar3) {
          *(undefined1 *)(iVar5 + 0x33) = 1;
          goto LAB_002c6758;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
    *(undefined1 *)(iVar5 + 0x33) = 0;
LAB_002c6758:
    fn_002b43b8(iVar5);
  }
  iVar5 = *(int *)(param_1 + 0x94);
  if (iVar5 == 0) {
    return;
  }
  iVar1 = 0;
  iVar2 = (int)*(char *)(*(int *)(param_1 + 0x108) + 0x78);
  if (0 < iVar2) {
    do {
      if (iVar1 < iVar2) {
        uVar3 = (uint)*(ushort *)(*(int *)(param_1 + 0x108) + iVar1 * 2 + 0x14);
      }
      else {
        uVar3 = 0;
      }
      if ((int)*(short *)(iVar5 + 0x16) == uVar3) {
        *(undefined1 *)(iVar5 + 0x33) = 1;
        goto LAB_002c67b4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(undefined1 *)(iVar5 + 0x33) = 0;
LAB_002c67b4:
  fn_002b43b8(iVar5);
  return;
}



void fn_002c3de4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



void fn_002c246c(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  (**(code **)(*param_1 + 0x10c))(param_1);
  if ((char)param_1[0x1f] == '\x02') {
    uVar1 = fn_006f6ac0(param_1);
    fVar5 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = fn_006f6acc(param_1);
    local_1c = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    local_20 = fVar5 + DAT_008cabdc;
    local_1c = local_1c + DAT_008cabe0;
    local_18 = DAT_008cabe4 + 0.0;
    iVar3 = *(int *)(param_1[0x25] + 0x48);
    *(float *)(iVar3 + 0x1c) = local_20;
    *(float *)(iVar3 + 0x20) = local_1c;
    *(float *)(iVar3 + 0x24) = local_18;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    fn_0025e7cc(param_1[0x26],&local_20);
  }
  uVar4 = 0;
  if (param_1[0x29] - param_1[0x28] >> 2 != 0) {
    do {
      piVar2 = *(int **)(param_1[0x28] + uVar4 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(param_1[0x29] - param_1[0x28] >> 2));
  }
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  if ((int *)param_1[0x2c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2c] + 4))();
  }
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  if ((int *)param_1[0x2e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2e] + 4))();
  }
  if ((int *)param_1[0x2f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2f] + 4))();
  }
  if ((int *)param_1[0x25] == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c2624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x25] + 0x14))();
  return;
}


