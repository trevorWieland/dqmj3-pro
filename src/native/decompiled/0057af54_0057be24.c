#include "0057af54_0057be24.h"



void fn_0057be24(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x44) & 7) == 2) {
    bVar1 = true;
    iVar4 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x14) + 0x100)) {
      do {
        piVar2 = (int *)fn_006bb760(*(undefined4 *)(param_1 + 0x14),iVar4,0xffffffff);
        if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x198))(), iVar3 != 0)) {
          bVar1 = false;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*(int *)(param_1 + 0x14) + 0x100));
      if (!bVar1) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_0057b8c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float fVar5;
  
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),1);
  if (iVar1 == 0) {
    fn_0021718c(param_1,1,0x3c);
    return;
  }
  iVar2 = fn_001c7160(*(undefined4 *)(param_1 + 0x14));
  if ((iVar2 != 0) &&
     (uVar3 = *(uint *)(param_1 + 0x18), *(uint *)(param_1 + 0x18) = uVar3 + 1, 10 < uVar3)) {
    iVar2 = *(int *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x44) = 0;
    *(float *)(iVar2 + 0x48) = (fVar5 - *(float *)(iVar2 + 0x24)) * 0.05;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
    fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0x14,1);
    piVar4 = (int *)fn_006f7508(DAT_008977e0);
    (**(code **)(*piVar4 + 100))
              (piVar4,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),3,0);
    *(undefined4 *)(param_1 + 0xc) = 8;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



undefined4 fn_0057b88c(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x114) = 0;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_0057b720(int param_1)

{
  char cVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0xb0) != '\x01') {
    fn_002c4304();
    return;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_00689824(param_1,0);
    fn_002a6ed8(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),2);
    fn_00697b84(DAT_008977e0);
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    fn_005d12e8(*(undefined4 *)(param_1 + 0xb4));
    piVar2 = (int *)fn_001f74f8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0xd9);
                    /* WARNING: Could not recover jumptable at 0x0057b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0xc))();
    return;
  }
  if (cVar1 == '\x02') {
    fn_00689824(param_1,1);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



void fn_0057b564(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_6c [18];
  
  fn_002c3e78();
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (-1 < *(int *)(param_1 + 0xbc)) {
      puVar2 = (undefined4 *)fn_006e9744(*(undefined4 *)(param_1 + 0xb4));
      fn_0029071c(*puVar2);
                    /* WARNING: Subroutine does not return */
      fn_006ba250(param_1);
    }
    iVar3 = fn_006e9750(*(undefined4 *)(param_1 + 0xb4));
    uVar6 = 0;
    local_6c[0] = iVar3 + *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) * -10;
    puVar4 = &DAT_007c0da4;
    if ((int)local_6c[0] < 10) {
      puVar4 = local_6c;
    }
    uVar7 = *puVar4;
    uVar1 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
    if (uVar1 != 0) {
      do {
        if (uVar6 < uVar7) {
          puVar2 = (undefined4 *)
                   fn_006e9744(*(undefined4 *)(param_1 + 0xb4),
                                uVar6 + *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) * 10);
          local_6c[4] = 0;
          local_6c[1] = 0;
          local_6c[9] = 0;
          local_6c[2] = 0;
          local_6c[3] = 0;
          local_6c[5] = 0;
          local_6c[6] = 0;
          local_6c[0xe] = 0;
          local_6c[7] = 0;
          local_6c[8] = 0;
          local_6c[10] = 0;
          local_6c[0xb] = 0;
          local_6c[0xc] = 0;
          local_6c[0xd] = 0;
          local_6c[0xf] = 0;
          local_6c[0x10] = 0;
          fn_0017d96c(local_6c + 1,0x40,0x3f,DAT_00891c28,*puVar2);
          uVar5 = fn_0016ba34(DAT_00897800,DAT_00898244,local_6c + 1,0);
          fn_0031b78c(param_1,uVar6,1,uVar5);
          local_6c[0x11] = DAT_00891c3c;
          fn_002c37e0(param_1,uVar6,local_6c + 0x11);
          uVar5 = fn_002906f8(*puVar2);
          fn_0031b474(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar6 * 4),uVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
  }
  return;
}



void fn_0057b50c(int *param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x20000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0057b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(param_1[0x2e] + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1[0x2e] + 0x18) = 1;
  }
  return;
}



void fn_0057b268(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 fn_0057af54(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_3c [2];
  undefined1 auStack_34 [16];
  undefined1 local_24;
  int local_1c [2];
  
  if (**(int **)(DAT_008977e0 + 0x40) != 0) {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    uVar1 = fn_0057b13c(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951d8) goto LAB_0057afd4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0057afd4:
  *(undefined4 **)(param_1 + 0xb8) = puVar2;
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00891bc4) goto LAB_0057b010;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0057b010:
  *(undefined4 **)(param_1 + 0xb4) = puVar2;
  iVar4 = fn_006e9750(puVar2);
  if (iVar4 == 0) {
    iVar4 = 0;
    do {
      iVar5 = fn_003199d8(iVar4);
      if (0 < iVar5) {
        fn_003199a0(iVar4);
        iVar5 = fn_00154ac8();
        if (iVar5 != 0) {
          local_1c[0] = iVar4;
          fn_005d0e1c(*(undefined4 *)(param_1 + 0xb4),local_1c);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x31);
  }
  fn_002c330c(&local_50);
  local_50 = DAT_00891c1c;
  local_4c = DAT_00891c20;
  local_3c[0] = fn_006e9750(*(undefined4 *)(param_1 + 0xb4));
  piVar6 = local_3c;
  if (10 < local_3c[0]) {
    piVar6 = &DAT_007c0da4;
  }
  local_48 = *piVar6;
  local_44 = *(undefined4 *)(*(int *)(param_1 + 0xb4) + 8);
  uVar1 = fn_0022f584(DAT_00891c24,0);
  fn_00147974(auStack_34,uVar1);
  if (local_48 < 10) {
    local_24 = 0;
  }
  fn_002c29a0(param_1,&local_50);
  fn_002c3378(&local_50);
  return 1;
}


