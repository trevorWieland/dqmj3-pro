#include "004586ac_00458e38.h"



undefined4 fn_00458e38(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  
  uVar1 = *(undefined1 *)(param_2 + 0x25);
  local_18 = (local_18 & ~((unsigned int)0xffffff << 8)) | (((unsigned int)((undefined3)((uint)param_4 >> 8)) & 0xffffff) << 8);
  local_18 = (local_18 & ~((unsigned int)0xff << 0)) | ((unsigned int)(uVar1) & 0xff);
  (**(code **)(*param_1 + 0x44))(param_1);
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,uVar1) & 0xffffff0f;
  iVar2 = fn_0047edec(param_1 + 0x15,param_2 + 0xdc,&local_18);
  (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_004631ac(iVar2,param_2);
  }
  return uVar3;
}



void fn_00458dd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  local_20 = param_2;
  uStack_1c = param_3;
  fn_0079f228(auStack_24,param_1 + 0xac,&local_20);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00458d3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iStack_1c = param_1;
  local_18 = param_2;
  uStack_14 = param_3;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  local_28 = local_18;
  uStack_24 = param_3;
  fn_0079f228(auStack_2c,param_1 + 200);
  puVar4 = *(undefined4 **)(param_1 + 0xe8);
  if (puVar4 == *(undefined4 **)(param_1 + 0xec)) {
    fn_0079d8f8(param_1 + 0xe4,puVar4,&local_18);
  }
  else {
    *(undefined4 **)(param_1 + 0xe8) = puVar4 + 1;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_18;
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 fn_004586ac(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int *local_c8;
  int *local_c4;
  int **local_c0;
  int *local_bc;
  int aiStack_b8 [3];
  int local_ac;
  int local_a8;
  int aiStack_58 [4];
  int local_48;
  undefined1 auStack_44 [16];
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  if (param_4 == (int *)0x0) {
    return 1;
  }
  uVar4 = *(ushort *)(param_4 + 0xf);
  piVar7 = param_4 + 0x37;
  piVar5 = param_1 + 0x27;
  uVar1 = (undefined1)param_3;
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  piStack_28 = param_4;
  if ((uVar4 & 0xf) == 0) {
    if ((uVar4 & 0x10) == 0) {
      local_a8 = 0;
      local_bc = aiStack_b8;
      local_c8 = (int *)(uint)(*(byte *)((int)param_4 + 0x25) >> 4);
      local_c0 = (int **)0x0;
      local_c4 = piVar5;
      (**(code **)(*(int *)param_1[0x3c] + 0xc))((int *)param_1[0x3c],param_4,1,0);
      iVar6 = fn_0015ece0(0x150);
      if (iVar6 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        local_c8 = (int *)0x0;
        local_c4 = (int *)0x0;
        piVar5 = (int *)fn_004bc1a4(iVar6,0,0,0x10);
      }
      iVar6 = local_a8;
      *(char *)(piVar5 + 0x22) = (char)param_4[0x22];
      *(short *)(piVar5 + 0x11) = (short)param_4[0x11];
      fn_0017821c(piVar5 + 0x14,aiStack_b8,local_a8);
      piVar5[0x18] = iVar6;
      iVar6 = param_4[0x39];
      iVar9 = param_4[0x3a];
      iVar11 = param_4[0x3b];
      iVar12 = param_4[0x3c];
      iVar13 = param_4[0x3d];
      iVar14 = param_4[0x3e];
      piVar5[0x38] = param_4[0x38];
      piVar5[0x39] = iVar6;
      piVar5[0x3a] = iVar9;
      piVar5[0x3b] = iVar11;
      piVar5[0x3c] = iVar12;
      piVar5[0x3d] = iVar13;
      piVar5[0x3e] = iVar14;
      fn_004581ac(param_1,param_4,piVar5);
      local_c8 = (int *)0x0;
      fn_004591b0(param_1,local_30,param_3,piVar5);
      piVar7 = piVar5 + 1;
      do {
        iVar6 = *piVar7 + -1;
        bVar15 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar15);
      *piVar7 = iVar6;
      cVar2 = '\0';
      if (iVar6 == 0) {
        cVar2 = (char)piVar5[2];
      }
      if (iVar6 == 0 && cVar2 == '\0') {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
    }
    else {
      (**(code **)(*param_1 + 0x44))(param_1);
      local_c8 = (int *)CONCAT31(((unsigned int)(local_c8) >> 8) & 0xffffff,uVar1);
      piVar5 = (int *)fn_0047edec(param_1 + 0x15,piVar7,&local_c8);
      (**(code **)(*param_1 + 0x48))(param_1);
LAB_00458944:
      if (piVar5 != (int *)0x0) {
LAB_0045894c:
        iVar6 = (**(code **)(*piVar5 + 0x28))(piVar5);
        if (iVar6 == 0) {
          fn_00462284(piVar5,param_4);
        }
      }
    }
  }
  else if ((uVar4 & 0xf) == 1) {
    if ((uVar4 & 0x10) != 0) {
      local_c8 = param_4;
      iVar6 = fn_00457ca4(param_1,piVar7,param_2,param_3);
      if (iVar6 == 3) {
        piVar5 = param_4 + 1;
        do {
          iVar6 = *piVar5 + -1;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
          piVar5 = (int *)(uint)*(byte *)(param_4 + 2);
        }
        if (iVar6 != 0 || piVar5 != (int *)0x0) {
          return 1;
        }
        goto LAB_00458d18;
      }
      if (iVar6 == 2) {
        return 0;
      }
      (**(code **)(*param_1 + 0x44))(param_1);
      local_c4 = (int *)CONCAT31(((unsigned int)(local_c4) >> 8) & 0xffffff,uVar1);
      piVar5 = (int *)fn_0047edec(param_1 + 0x15,piVar7,&local_c4);
      (**(code **)(*param_1 + 0x48))(param_1);
      goto LAB_00458944;
    }
    local_48 = 0;
    local_bc = aiStack_58;
    local_c8 = (int *)(uint)(*(byte *)((int)param_4 + 0x25) >> 4);
    local_c0 = (int **)0x0;
    local_c4 = piVar5;
    (**(code **)(*(int *)param_1[0x3c] + 0xc))((int *)param_1[0x3c],param_4,1,0);
    uVar4 = *(ushort *)(param_4 + 0xf) & 0xf;
    bVar15 = uVar4 != 1;
    if (!bVar15) {
      uVar4 = (ushort)*(byte *)(param_4 + 9);
    }
    if ((bVar15 || uVar4 != 1) || (1 < (param_4[0x23] & 0xffU))) {
      (**(code **)(*(int *)param_1[0x3c] + 0x10))((int *)param_1[0x3c],param_4,(char)param_1[1],0);
    }
    local_c0 = &local_bc;
    local_ac = 0;
    local_c8 = piVar5;
    local_c4 = aiStack_58;
    iVar6 = (**(code **)(*(int *)param_1[0x3c] + 0x14))((int *)param_1[0x3c],param_4);
    if (iVar6 == 3) {
      piVar5 = param_4 + 1;
      do {
        iVar6 = *piVar5 + -1;
        bVar15 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar15);
      *piVar5 = iVar6;
      if (iVar6 == 0) {
        piVar5 = (int *)(uint)*(byte *)(param_4 + 2);
      }
      if (iVar6 != 0 || piVar5 != (int *)0x0) {
        return 1;
      }
      goto LAB_00458d18;
    }
    if (((local_ac != param_4[0xe]) || (iVar6 = fn_001010c8(&local_bc,param_4 + 10), iVar6 != 0))
       && ((*(ushort *)(param_4 + 0xf) & 0xf) != 5)) {
      return 0;
    }
    uVar3 = local_30;
    iVar6 = param_4[0x36];
    fn_0013ce04(&local_c0);
    fn_00455394(&local_c0,piVar7);
    fn_00455124(auStack_44,&local_c0,&DAT_007d9e30,param_3);
    piVar5 = (int *)fn_00457df4(param_1,&local_c0,uVar3,0);
    piVar7 = (int *)param_1[2];
    if (piVar7 != (int *)0x0) {
      local_c8 = piVar5;
      if (*(int *)(iVar6 + 0x10) == 0) {
        iVar6 = (**(code **)(*piVar7 + 0x18))(piVar7,param_1,piVar5 + 2,0);
      }
      else {
        iVar6 = (**(code **)(*piVar7 + 0x18))(piVar7,param_1,piVar5 + 2,iVar6);
      }
      if (iVar6 == 0) {
        fn_004580f4(param_1,piVar5);
        piVar5 = (int *)0x0;
      }
    }
    fn_0013ce98(&local_c0);
    iVar6 = local_48;
    if (piVar5 != (int *)0x0) {
      if ((char)param_4[0x22] != '\0') {
        *(undefined1 *)(piVar5 + 0x58) = 1;
      }
      if (((char)param_4[9] == '\0') ||
         (((char)param_4[9] == '\x01' && ((param_4[0x23] & 0xffU) < 2)))) {
        fn_0017821c(piVar5 + 0x47,aiStack_58,local_48);
        piVar5[0x4b] = iVar6;
      }
      else {
        fn_0017821c(piVar5 + 0x42,aiStack_58,local_48);
        piVar5[0x46] = iVar6;
      }
      goto LAB_0045894c;
    }
  }
  else if ((uVar4 & 0xf) == 5) {
    iVar6 = param_4[0x36];
    if (param_1[2] != 0) {
      fn_0013ce04(&local_c8);
      fn_00455394(&local_c8,piVar7);
      piVar5 = (int *)param_1[2];
      if (*(int *)(iVar6 + 0x10) == 0) {
        (**(code **)(*piVar5 + 8))(piVar5,param_1,0,&local_c8);
      }
      else {
        (**(code **)(*piVar5 + 8))(piVar5,param_1,iVar6);
      }
      fn_0013ce98(&local_c8);
    }
  }
  else {
    (**(code **)(*param_1 + 0x44))(param_1);
    local_c4 = (int *)CONCAT31(((unsigned int)(local_c4) >> 8) & 0xffffff,uVar1);
    piVar5 = (int *)fn_0047edec(param_1 + 0x15,piVar7,&local_c4);
    (**(code **)(*param_1 + 0x48))(param_1);
    if (piVar5 != (int *)0x0) {
      if ((DAT_008b6393 != '\0') && (iVar6 = fn_004631ac(piVar5,param_4), iVar6 != 0)) {
        piVar5 = param_4 + 1;
        do {
          iVar6 = *piVar5 + -1;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
          piVar5 = (int *)(uint)*(byte *)(param_4 + 2);
        }
        if (iVar6 != 0 || piVar5 != (int *)0x0) {
          return 1;
        }
        goto LAB_00458d18;
      }
      local_c8 = param_4;
      iVar6 = fn_00457ca4(param_1,piVar7,local_30,param_3);
      if (iVar6 == 3) {
        piVar5 = param_4 + 1;
        do {
          iVar6 = *piVar5 + -1;
          bVar15 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar15);
        *piVar5 = iVar6;
        cVar2 = '\0';
        if (iVar6 == 0) {
          cVar2 = (char)param_4[2];
        }
        if (iVar6 != 0 || cVar2 != '\0') {
          return 1;
        }
        goto LAB_00458d18;
      }
      if (iVar6 == 2) {
        return 0;
      }
      goto LAB_0045894c;
    }
  }
  puVar10 = (uint *)(param_4 + 1);
  do {
    uVar8 = *puVar10 - 1;
    bVar15 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar15);
  *puVar10 = uVar8;
  bVar15 = uVar8 != 0;
  if (!bVar15) {
    uVar8 = (uint)*(byte *)(param_4 + 2);
  }
  if (bVar15 || uVar8 != 0) {
    return 1;
  }
LAB_00458d18:
  *(undefined1 *)(param_4 + 2) = 1;
  (**(code **)(*param_4 + 4))();
  return 1;
}


