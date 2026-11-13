#include "002d0d88_002da538.h"



void fn_002da538(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x18) != 5) {
    return;
  }
  iVar2 = fn_002dbc64();
  if (iVar2 == 0) {
    return;
  }
  bVar1 = false;
  uVar3 = fn_006a826c(*(undefined4 *)(param_1 + 0x5c));
  uVar6 = 0xffffffff;
  iVar2 = fn_002dbc64();
  if (iVar2 != 0) {
    iVar2 = fn_006bb17c(param_1);
    if (iVar2 == 1) {
LAB_002da5d0:
      uVar6 = 900;
    }
    else {
      iVar2 = fn_00163d44(0x3c);
      if (iVar2 == 0) {
        fn_00163d68(0x3c,1);
      }
      else if (iVar2 != 1) {
        if (iVar2 == 2) {
          uVar6 = 600;
        }
        else if (iVar2 == 3) goto LAB_002da5d0;
        goto LAB_002da5d4;
      }
      uVar6 = 300;
    }
  }
LAB_002da5d4:
  if (uVar6 < uVar3) {
    *(char *)(param_1 + 0x71) = (char)param_2;
    bVar1 = true;
    *(undefined1 *)(param_1 + 0x3d) = 1;
    uVar3 = fn_001c7d8c(*(undefined4 *)(param_1 + 0x5c));
    goto LAB_002da6a4;
  }
  uVar6 = 0xffffffff;
  iVar2 = fn_002dbc64();
  if (iVar2 != 0) {
    iVar2 = fn_006bb17c(param_1);
    if (iVar2 == 1) {
LAB_002da670:
      uVar6 = 900;
    }
    else {
      iVar2 = fn_00163d44(0x3c);
      if (iVar2 == 0) {
        fn_00163d68(0x3c,1);
      }
      else if (iVar2 != 1) {
        if (iVar2 == 2) {
          uVar6 = 600;
        }
        else if (iVar2 == 3) goto LAB_002da670;
        goto LAB_002da674;
      }
      uVar6 = 300;
    }
  }
LAB_002da674:
  uVar3 = uVar3 + 0x3c;
  if (uVar6 < uVar3) {
    if (param_2 != 0) {
      uVar3 = (uint)*(byte *)(param_1 + 0x72);
    }
    if (param_2 != 0 && uVar3 != 0) {
      return;
    }
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x18) = 4;
    bVar1 = true;
    *(undefined1 *)(param_1 + 0x72) = 1;
  }
LAB_002da6a4:
  if (param_2 == 0) {
    uVar3 = (uint)*(byte *)(param_1 + 0x3d);
  }
  if ((param_2 == 0 && uVar3 == 0) && (iVar2 = fn_006bb17c(param_1), iVar2 == 1)) {
    iVar2 = fn_001c232c(DAT_008977e4);
    iVar4 = 0;
    if (*(char *)(DAT_008977e0 + 0x21a) != '\0') {
      iVar5 = 0;
      if (0 < *(char *)(iVar2 + 0x1a)) {
        do {
          if (((int)*(short *)(iVar2 + iVar5 * 2 + 10) == *(int *)(param_1 + 0x7c)) &&
             (*(char *)(iVar2 + iVar5 + 0x1b) == '\0')) {
            iVar4 = iVar4 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(char *)(iVar2 + 0x1a));
      }
    }
    fn_002daa90(param_1,iVar4);
  }
  if (bVar1) {
    fn_006f7a84(DAT_008977e0);
    fn_001ea9c0();
    fn_006f7a84(DAT_008977e0);
    fn_001dd0a0();
    return;
  }
  return;
}



void fn_002d9fbc(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];
  
  iVar1 = fn_006c89fc(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4));
  if (iVar1 == 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x50) + 0x48))();
    uVar3 = 0;
    iVar1 = piVar2[1] - *piVar2 >> 0x1f;
    if ((piVar2[1] - *piVar2) / 0x2c + iVar1 != iVar1) {
      puVar4 = (undefined4 *)0x0;
      do {
        local_38 = 0;
        puVar6 = (undefined4 *)(*piVar2 + uVar3 * 0x2c);
        local_34 = 0;
        local_70 = &local_34;
        iVar1 = fn_00102d28(*puVar6,(char *)&DAT_002da120,auStack_30,&local_38);
        puVar5 = puVar4;
        if (0 < iVar1) {
          local_64 = 0xffffffff;
          local_60 = 0xffffffff;
          local_6c = 0xffffffff;
          uStack_68 = 0;
          local_5c = 0xffffffff;
          local_48 = 0xffffffff;
          local_4c = 0;
          local_58 = puVar6[10];
          puVar5 = (undefined4 *)((int)puVar4 + 1);
          local_54 = local_38;
          local_50 = local_34;
          local_44 = puVar6[1];
          local_40 = puVar6[2];
          local_3c = puVar6[3];
          local_70 = puVar4;
          fn_00788c1c(param_1 + 4,&local_70);
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar5;
      } while (uVar3 < (uint)((piVar2[1] - *piVar2) / 0x2c));
    }
  }
  return;
}



void fn_002d7ed8(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_70 [88];
  
  *(bool *)(param_1 + 0x30) = param_2 != 0;
  if (param_2 != 0) {
    iVar5 = 0;
    iVar4 = 1;
    uVar6 = *(undefined4 *)(DAT_00897804 + 0x14);
    iVar2 = fn_001746f4();
    if (1 < iVar2) {
      do {
        iVar2 = fn_00163940(iVar4);
        if (((iVar2 != 0) && (iVar2 = fn_006b2aa0(uVar6,iVar4), iVar2 != 0)) &&
           (iVar2 = fn_00660e64(iVar4), iVar2 != 0)) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = (int)(short)((short)iVar4 + 1);
        iVar2 = fn_001746f4();
      } while (iVar4 < iVar2);
      if (iVar5 != 0) {
        uVar1 = 1;
        goto LAB_002d7f7c;
      }
    }
  }
  uVar1 = 0;
LAB_002d7f7c:
  *(undefined1 *)(param_1 + 0x31) = uVar1;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),1);
  fn_0037ce20(*(undefined4 *)(param_1 + 0x1c),0);
  fn_0037ce20(*(undefined4 *)(param_1 + 0x1c),1);
  puVar3 = (undefined4 *)fn_002cab9c(auStack_70);
  *puVar3 = 4;
  puVar3[1] = 4;
  iVar2 = fn_002cab28(puVar3,0);
  *(undefined1 *)(iVar2 + 8) = 1;
  *(undefined1 *)(iVar2 + 9) = 1;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x14) = 1;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  fn_002cabdc(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),iVar2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002d0df8) */
/* WARNING: Removing unreachable block (ram,0x002d0e24) */
/* WARNING: Removing unreachable block (ram,0x002d0e28) */
/* WARNING: Removing unreachable block (ram,0x002d0e2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_002d0d88(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_001ccc2c();
  *puVar1 = &PTR_FUN_0081fd68;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)(puVar1 + 0x19) = 0xff;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002cfa2c();
  }
  puVar1[0x1d] = uVar3;
  piVar4 = puVar1 + 0x1f;
  puVar1[0x1e] = 0;
  *piVar4 = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  iVar2 = fn_00100fc6(0x80,0);
  *piVar4 = iVar2;
  puVar1[0x20] = *piVar4;
  puVar1[0x21] = *piVar4 + 0x80;
  puVar1[0x22] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x23) = 1;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = &DAT_00859290;
  *(undefined1 *)(puVar1 + 0x2b) = 0;
  *(undefined1 *)((int)puVar1 + 0xad) = 0;
  *(undefined1 *)((int)puVar1 + 0xae) = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0xffffffff;
  return puVar1;
}


