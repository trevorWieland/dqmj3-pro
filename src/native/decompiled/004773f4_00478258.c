#include "004773f4_00478258.h"



void fn_00478258(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  int local_1c [2];
  
  if (*(int *)(param_1 + 0x144) == *(int *)(param_1 + 0x148)) {
    return;
  }
  fn_0013d0fc(&local_20);
  DAT_008b6510 = local_20;
  DAT_008b6514 = local_1c[0];
  fn_004787f4(param_1);
  iVar2 = *(int *)(param_1 + 0x164);
  while (iVar1 = DAT_008b6514, iVar2 != *(int *)(param_1 + 0x16c)) {
    *(int *)(iVar2 + 0x100) = DAT_008b6510;
    *(int *)(iVar2 + 0x104) = iVar1;
    fn_00495b0c(param_1 + 0x94);
    local_1c[0] = iVar2;
    fn_00459d70(&local_20,param_1 + 0x15c,local_1c);
    iVar2 = local_20;
  }
  if (DAT_008b6389 == '\0') {
    iVar2 = *(int *)(param_1 + 0x9c);
    if (*(int *)(param_1 + 0xa0) != iVar2) {
      do {
        (**(code **)(**(int **)(iVar2 + 4) + 0xc))(*(int **)(iVar2 + 4));
        iVar2 = iVar2 + 8;
      } while (*(int *)(param_1 + 0xa0) != iVar2);
    }
  }
  else {
    iVar1 = fn_001249d0();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    piVar3 = (int *)(iVar2 + 0x50);
    (**(code **)(*piVar3 + 8))();
    iVar2 = *(int *)(param_1 + 0x9c);
    if (*(int *)(param_1 + 0xa0) != iVar2) {
      do {
        (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
        iVar2 = iVar2 + 8;
      } while (*(int *)(param_1 + 0xa0) != iVar2);
    }
    (**(code **)(*piVar3 + 0xc))(piVar3);
  }
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x174) + 0x18))();
  if (piVar3 == (int *)0x0) {
    fn_004783ec(param_1);
    return;
  }
  (**(code **)(*piVar3 + 8))();
  fn_004783ec(param_1);
                    /* WARNING: Could not recover jumptable at 0x004783cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00477bf8(void)

{
  fn_00477c4c();
  return;
}



void fn_00477794(undefined4 *param_1,undefined4 param_2)

{
  fn_00477ef0(param_2);
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



void fn_00477ef0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  
  if (((*(int *)(param_1 + 0x13c) == 0) && (iVar2 = fn_001249d0(), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0xc) != 0)) {
    iVar2 = fn_0015ece0(0x40);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
    }
    else {
      local_30 = &DAT_00855a94;
      fn_0015e6f0(&local_2c,L"SocketTransport::TransportJob");
      puVar3 = (undefined4 *)fn_004b3044(iVar2,0,auStack_28);
      *puVar3 = &DAT_0085347c;
      puVar3[0xf] = param_1;
      *(undefined4 **)(param_1 + 0x13c) = puVar3;
      fn_00170f54(&local_30);
    }
    piVar6 = (int *)(*(int *)(param_1 + 0x13c) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    iVar2 = fn_001249d0();
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0xc);
    }
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    fn_004bd80c(uVar4,*(undefined4 *)(param_1 + 0x13c),0);
  }
  if (DAT_008b6387 == '\0') {
    return;
  }
  if (*(int **)(param_1 + 0x138) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x138) + 0xc))();
    if (*(int **)(param_1 + 0x138) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x138) + 4))();
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x250) != 0) {
      iVar2 = fn_0047a798();
      if (iVar2 != 0) {
        if (*(code **)(iVar2 + -8) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar2 + -8))();
        }
      }
      *(undefined4 *)(param_1 + 0x250) = 0;
    }
  }
  if (DAT_008b6398 == '\0') {
    *(undefined4 *)(param_1 + 0x250) = 0;
  }
  else {
    iVar2 = fn_0015ece0(0x30);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = fn_0047a65c(iVar2,DAT_008b642c,*(undefined4 *)(param_1 + 0x54));
    }
    *(undefined4 *)(param_1 + 0x250) = uVar4;
  }
  if (DAT_008b6388 == '\x01') {
    iVar2 = fn_0015ece0(0x100);
    piVar6 = (int *)0x0;
    if (iVar2 != 0) {
      piVar6 = (int *)fn_004a5348();
    }
    *(int **)(param_1 + 0x138) = piVar6;
  }
  else {
    puVar3 = (undefined4 *)fn_0015ece0(0x78);
    if (puVar3 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *puVar3 = &DAT_008542dc;
      *(undefined1 *)(puVar3 + 1) = 0;
      uVar4 = 0;
      if (DAT_008b637e != '\0') {
        puVar5 = (undefined4 *)fn_001775e8(DAT_008b63d8);
        uVar4 = *puVar5;
      }
      puVar3[2] = uVar4;
      puVar3 = (undefined4 *)fn_004745d8(puVar3 + 3,0x8000);
      *puVar3 = &PTR_LAB_00854110;
      puVar3[0xb] = 0;
      piVar6 = puVar3 + -3;
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      local_30 = &DAT_00855a94;
      fn_0015e6f0(&local_2c,L"Transport Buffer Thread");
      uVar4 = DAT_008b6434;
      puVar3[0xe] = &DAT_008536ec;
      puVar3[0xf] = &DAT_00855a94;
      fn_0015e6f0(puVar3 + 0x10,local_2c);
      puVar3[0x12] = 0;
      puVar3[0x13] = uVar4;
      puVar3[0x14] = 0;
      *(undefined1 *)(puVar3 + 0x15) = 0;
      *(undefined1 *)((int)puVar3 + 0x56) = 0;
      puVar3[0x16] = 0x80000000;
      puVar5 = (undefined4 *)fn_0015ece0(0x10);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      puVar3[0x11] = puVar5;
      puVar3[0xe] = &DAT_00852b78;
      puVar3[0x19] = 0;
      puVar3[0x17] = 0;
      puVar3[0x18] = 0;
      fn_00170f54(&local_30);
      if (DAT_008b6444 != -0x80000000) {
        puVar3[0x16] = DAT_008b6444;
      }
    }
    *(int **)(param_1 + 0x138) = piVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00478194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar6 + 8))();
  return;
}



undefined4
fn_004773f4(int param_1,uint param_2,ushort *param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 uVar8;
  int iVar9;
  ushort *puVar10;
  bool bVar11;
  undefined4 uVar12;
  ushort **ppuVar13;
  undefined *local_60;
  undefined2 local_5c;
  ushort uStack_5a;
  undefined4 local_58;
  ushort local_40 [2];
  int *local_3c;
  ushort *local_38 [5];
  
  if (DAT_008b6387 == '\0') {
    iVar9 = fn_0015ece0(0x120);
    if (iVar9 != 0) {
      piVar7 = (int *)fn_004683bc(iVar9,param_4,param_1,*(undefined4 *)(param_1 + 0x54),
                                   *(undefined4 *)(param_1 + 0x250));
      goto LAB_0047750c;
    }
  }
  else {
    iVar9 = 0;
    if (DAT_008b6388 == '\x01') {
      iVar9 = *(int *)(param_1 + 0x138) + 0x9c;
    }
    uVar3 = DAT_008b643c;
    uVar12 = DAT_008b6440;
    iVar1 = fn_0015ece0(0x228);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x250);
      puVar2 = (undefined4 *)
               fn_004683bc(iVar1,param_4,param_1,*(undefined4 *)(param_1 + 0x54),uVar6);
      *puVar2 = &DAT_00855288;
      iVar1 = fn_00488b38(puVar2 + 0x48,uVar6,DAT_008b642c);
      iVar1 = fn_00488b38(iVar1 + 0x80,uVar6,DAT_008b642c);
      piVar7 = (int *)(iVar1 + -0x1a0);
      *(undefined4 *)(iVar1 + 0x7c) = uVar3;
      *(undefined4 *)(iVar1 + 0x80) = uVar12;
      *(int *)(iVar1 + 0x84) = iVar9;
      *(undefined4 *)(iVar1 + -0x38) = *(undefined4 *)(iVar1 + -0x16c);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + -0x16c);
      iVar9 = fn_0015ece0(0x20);
      uVar3 = 0;
      if (iVar9 != 0) {
        uVar3 = fn_004b5488(iVar9,*(undefined4 *)(iVar1 + -0x16c));
      }
      *(undefined4 *)(iVar1 + -4) = uVar3;
      goto LAB_0047750c;
    }
  }
  piVar7 = (int *)0x0;
LAB_0047750c:
  *(undefined1 *)(piVar7 + 0xb) = 1;
  puVar2 = (undefined4 *)piVar7[0xf];
  if ((puVar2 == (undefined4 *)0x0) || (iVar9 = (**(code **)*puVar2)(puVar2,0), iVar9 == 0)) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
  }
  else {
    *(undefined1 *)(piVar7 + 1) = 0;
    local_58 = 0;
    local_60 = &DAT_008528bc;
    uStack_5a = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
    local_5c = 0x200;
    *(undefined1 *)(piVar7 + 0x47) = param_5;
    iVar9 = (**(code **)(*piVar7 + 8))(piVar7,&local_60,param_6);
    if (iVar9 == 0) {
      piVar4 = (int *)(uint)*(byte *)(piVar7 + 1);
      bVar11 = piVar4 != (int *)0x3;
      if (bVar11) {
        piVar4 = (int *)piVar7[0xf];
      }
      if (bVar11 && piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
        *(undefined1 *)(piVar7 + 1) = 3;
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *param_3 = 0;
    }
    else {
      ppuVar13 = local_38;
      local_40[0] = uStack_5a << 8 | uStack_5a >> 8;
      *param_3 = local_40[0];
      puVar5 = *(ushort **)(param_1 + 0x144);
      puVar10 = *(ushort **)(param_1 + 0x148);
      uVar8 = 0;
      local_38[0] = puVar5;
      iVar9 = (int)puVar10 - (int)puVar5 >> 3;
      while (iVar1 = iVar9, 0 < iVar1) {
        iVar9 = iVar1 / 2;
        if (local_38[0][iVar9 * 4] < local_40[0]) {
          local_38[0] = local_38[0] + iVar9 * 4 + 4;
          iVar9 = (iVar1 - iVar9) + -1;
        }
      }
      local_3c = piVar7;
      if ((puVar10 == local_38[0]) || (local_40[0] < *local_38[0])) {
        if ((puVar10 == *(ushort **)(param_1 + 0x14c)) || (puVar10 != local_38[0])) {
          fn_0079a6b8((int *)(param_1 + 0x144),local_38[0],local_40);
        }
        else {
          *(ushort **)(param_1 + 0x148) = puVar10 + 4;
          if (puVar10 != (ushort *)0x0) {
            *puVar10 = local_40[0];
            *(int **)(puVar10 + 2) = piVar7;
          }
        }
        uVar8 = 1;
        local_38[0] = (ushort *)
                      (*(int *)(param_1 + 0x144) + ((int)local_38[0] - (int)puVar5 >> 3) * 8);
      }
      *(undefined1 *)(ppuVar13 + 1) = uVar8;
      piVar4 = (int *)0x0;
      if (DAT_008b6387 != '\0') {
        piVar4 = *(int **)(param_1 + 0x138);
      }
      if ((DAT_008b6387 == '\0' || piVar4 == (int *)0x0) ||
         (iVar9 = (**(code **)(*piVar4 + 0x10))(piVar4,*param_3,piVar7), iVar9 != 0)) {
        return 1;
      }
      fn_0074c034(param_1 + 0x140,param_3);
      piVar4 = (int *)(uint)*(byte *)(piVar7 + 1);
      bVar11 = piVar4 != (int *)0x3;
      if (bVar11) {
        piVar4 = (int *)piVar7[0xf];
      }
      if (bVar11 && piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
        *(undefined1 *)(piVar7 + 1) = 3;
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *param_3 = 0;
    }
  }
  return 0;
}


