#include "002bbba0_002bc1f8.h"



void fn_002bc1f8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xd7,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xd8,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xd9,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xda,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xe5,0);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0xe6,0);
  iVar2 = fn_00154ac8(0x32);
  piVar1 = (int *)0x0;
  if ((((iVar2 != 0) || (iVar2 = fn_00154ac8(0x31), iVar2 != 0)) ||
      ((iVar2 = fn_00154ac8(0x38), iVar2 != 0 && (iVar2 = fn_00154ac8(0x9d), iVar2 == 0)))) ||
     ((iVar2 = fn_00182988(DAT_008977e4), *(char *)(iVar2 + 0x3b5) != '\0' &&
      (((iVar2 = fn_00154ac8(0x12), iVar2 != 0 && (iVar2 = fn_00154ac8(0x26), iVar2 == 0)) ||
       ((iVar2 = fn_00154ac8(0x1d), iVar2 != 0 && (iVar2 = fn_00154ac8(0x27), iVar2 == 0)))))))) {
    piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x14);
    (**(code **)(*piVar3 + 0x2c))(piVar3,0xdf,0);
    uVar4 = fn_00174858(DAT_008977e4);
    piVar3 = (int *)fn_0028eac0(uVar4,0xdf);
    if (piVar3 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
      do {
        if (puVar5 == &DAT_00890910) goto LAB_002bc3d4;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_002bc3d4:
    *(int **)(*(int *)(param_1 + 4) + 0x94) = piVar3;
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar3 + 0x2c))(piVar3,0xdb,0);
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar3 + 0x2c))(piVar3,0xdc,0);
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x14);
  (**(code **)(*piVar3 + 0x2c))(piVar3,0xdd,0);
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xd7);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_0089071c) goto LAB_002bc480;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc480:
  *(int *)(*(int *)(param_1 + 4) + 0x78) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xd8);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890764) goto LAB_002bc4d0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc4d0:
  *(int *)(*(int *)(param_1 + 4) + 0x7c) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xd9);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890770) goto LAB_002bc520;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc520:
  *(int *)(*(int *)(param_1 + 4) + 0x84) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xdb);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_0089077c) goto LAB_002bc570;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc570:
  *(int *)(param_1 + 0x10) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xdc);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_0089091c) goto LAB_002bc5bc;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc5bc:
  *(int **)(param_1 + 0x20) = piVar3;
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xdd);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890928) goto LAB_002bc604;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc604:
  *(int **)(param_1 + 0x3c) = piVar3;
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xda);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890710) goto LAB_002bc64c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc64c:
  *(int *)(param_1 + 0x14) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xe5);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890740) goto LAB_002bc698;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc698:
  *(int *)(param_1 + 0x18) = piVar3[0x19];
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),0xe6);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_0089074c) goto LAB_002bc6e4;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_002bc6e4:
  *(int *)(param_1 + 0x1c) = piVar3[0x19];
  fn_001f748c(*(undefined4 *)(param_1 + 4),0xd4,0);
  piVar3 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),0xd4);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0xc))(piVar3);
    do {
      if (puVar5 == &DAT_00890788) {
        piVar1 = piVar3;
        break;
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  *(int **)(*(int *)(param_1 + 4) + 0x48) = piVar1;
  piVar3 = (int *)(*(int *)(param_1 + 4) + 0x54);
  iVar2 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar1 = (int *)0x0;
  if (iVar2 != 0) {
    piVar1 = (int *)fn_003541f0();
  }
  piVar6 = (int *)*piVar3;
  if (piVar6 != piVar1) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *piVar3 = (int)piVar1;
  }
  fn_003a459c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x48),
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x54));
  iVar2 = fn_001c3c7c();
  if (iVar2 != 0) {
    fn_001c25c0();
  }
  piVar1 = (int *)fn_002b6b28(param_1 + 8,0x12);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != piVar1) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(int **)(param_1 + 0xc) = piVar1;
  }
  return;
}



undefined4 fn_002bc190(int param_1)

{
  int iVar1;
  
  iVar1 = fn_003ef408(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c));
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0x1a;
}



undefined4 fn_002bc050(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar4 = 0x1a;
  if (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x24) + 0x94) == '\0') {
    iVar2 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar2 + 0x39d) != '\0') {
      iVar2 = fn_00174828(DAT_008977e4);
      cVar1 = fn_006f4830(iVar2 + 0xe8);
      pcVar3 = (char *)fn_00174828(DAT_008977e4);
      if ((char)(cVar1 - *pcVar3) == '\x01') {
        fn_003ef450(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c));
        return 0x10;
      }
    }
    uVar4 = 1;
    iVar2 = fn_003a6884(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    if (iVar2 != 0) {
      fn_003a6a78(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
    }
  }
  return uVar4;
}



void fn_002bbffc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00851d8c;
  iVar1 = fn_00182988(DAT_008977e4);
  fn_002a1a9c(iVar1 + 0x38c);
  iVar1 = fn_001c3c7c();
  if (iVar1 != 0) {
    fn_003ef8e0(*(undefined4 *)(*(int *)(param_1[2] + 0x4c) + 0x10));
  }
  fn_002feef8(param_1);
  return;
}



uint fn_002bbf94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_10;
  
  local_10 = CONCAT31((int3)((uint)param_4 >> 8),0x1a);
  iVar1 = fn_0037645c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
  if (iVar1 == 0) {
    if ((*(short *)(*(int *)(param_1 + 8) + 0x6a) < 1) ||
       (iVar1 = fn_003a8dc4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48)), iVar1 != 0)) {
      fn_002d313c();
      fn_003a7cf0(param_1,&local_10,0x12);
    }
  }
  return local_10 & 0xff;
}



undefined1 fn_002bbba0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  fn_002b5424();
  local_2c[0] = 0x1a;
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    if (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) {
      cVar1 = *(char *)(param_1 + 0xf);
      *(char *)(param_1 + 0xe) = cVar1;
      if (cVar1 == '\x01' || cVar1 == '\x04') {
        fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),*(undefined1 *)(param_1 + 0x10),0
                    );
      }
    }
    break;
  case 1:
    local_30 = fn_006c5d50(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    fn_0042278c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x14),&local_30);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0xe0) = 1;
    uVar5 = fn_001603f8(auStack_1c,0);
    uVar6 = fn_001603f8(auStack_20,0xff);
    fn_0068869c(DAT_00897808,uVar6,uVar5,10);
    fn_00376528(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
    iVar3 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar3 + 0x39d) != '\0') {
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1,0);
    }
    iVar3 = fn_001c3c7c();
    if (iVar3 == 0) {
      fn_003ef9e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
    }
    iVar3 = fn_003778b4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
    if (iVar3 != 0) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x3c) + 0x286) = 1;
      fn_003772b0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c),0,local_30);
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 4;
    break;
  case 2:
    fn_00422814(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0xe0) = 0;
    iVar3 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar3 + 0x39d) != '\0') {
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1);
    }
    iVar3 = fn_001c3c7c();
    if (iVar3 == 0) {
      fn_003ef8e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
    }
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
    if (*(char *)(iVar3 + 0x286) != '\0') {
      *(undefined1 *)(iVar3 + 0x286) = 0;
      uVar2 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e);
      uVar5 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0);
      fn_003772b0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c),uVar5,uVar2);
    }
    *(undefined1 *)(param_1 + 0xe) = 3;
    break;
  case 3:
    uVar5 = fn_001603f8(auStack_24,0);
    uVar6 = fn_001603f8(auStack_28,0xff);
    fn_0068869c(DAT_00897808,uVar6,uVar5,10);
    fn_00376518(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 5;
    break;
  case 4:
    uVar4 = fn_006ba11c(param_1);
    if ((uVar4 & 0xa0000) != 0) {
      fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
      uVar5 = fn_001603f8(auStack_20,0xff);
      uVar6 = fn_001603f8(&local_30,0);
      fn_0068869c(DAT_00897808,uVar6,uVar5,10);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 2;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_00422d9c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),uVar4);
    local_30 = fn_006c5d50(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    fn_004228d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x14),&local_30);
    break;
  case 5:
    fn_003a7cf0(param_1,local_2c,*(undefined1 *)(*(int *)(param_1 + 4) + 0x40));
  }
  return local_2c[0];
}


