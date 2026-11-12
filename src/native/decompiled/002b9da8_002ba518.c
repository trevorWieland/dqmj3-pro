#include "002b9da8_002ba518.h"



undefined1 fn_002ba518(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 auStack_24 [4];
  
  fn_002b5424();
  local_2c[0] = 0x1a;
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
    }
    break;
  case 1:
    piVar4 = *(int **)(*(int *)(param_1 + 8) + 0xc);
    (**(code **)(*piVar4 + 0x2c))(piVar4,0xd4,0);
    iVar7 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar7 + 0x39d) != '\0') {
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1,0);
    }
    piVar4 = (int *)fn_0028eac8(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),0xd4);
    if (piVar4 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar4 + 0xc))(piVar4);
      do {
        if (puVar3 == &DAT_00890758) goto LAB_002ba64c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar4 = (int *)0x0;
LAB_002ba64c:
    *(int **)(param_1 + 0x14) = piVar4;
    fn_00376528(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
    iVar7 = fn_001c3c7c();
    if (iVar7 == 0) {
      fn_003ef9e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 2;
    break;
  case 2:
    if (2 < *(byte *)(*(int *)(param_1 + 0x14) + 0xc)) {
      local_28[0] = 0x10;
      fn_0042278c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x14),local_28);
      iVar7 = fn_006c26b0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      if (iVar7 == 0) {
        uVar5 = fn_006c2660(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      }
      else {
        uVar5 = fn_006c26b0();
      }
      iVar7 = fn_006c27b8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      if (iVar7 == 0) {
        uVar6 = fn_006c2768(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      }
      else {
        uVar6 = fn_006c27b8();
      }
      fn_002b42ac(*(undefined4 *)(param_1 + 0x14),uVar5);
      fn_002b3ce4(*(undefined4 *)(param_1 + 0x14),uVar6);
      if (*(char *)(param_1 + 0x19) == '\0') {
        uVar5 = fn_001603f8(auStack_24,0);
        uVar6 = fn_001603f8(&local_30,0xff);
        fn_0068869c(DAT_00897808,uVar6,uVar5,10);
        uVar5 = fn_001603f8(&local_30,0);
        uVar6 = fn_001603f8(auStack_24,0xff);
        fn_0068869c(DAT_0089780c,uVar6,uVar5,10);
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 4;
    }
    break;
  case 3:
    fn_00422814(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
    piVar4 = *(int **)(*(int *)(param_1 + 8) + 0xc);
    (**(code **)(*piVar4 + 0x30))(piVar4,0xd4,0);
    if (*(char *)(param_1 + 0x19) == '\0') {
      uVar5 = fn_001603f8(auStack_24,0);
      uVar6 = fn_001603f8(local_28,0xff);
      fn_0068869c(DAT_00897808,uVar6,uVar5,10);
      uVar5 = fn_001603f8(local_28,0);
      uVar6 = fn_001603f8(auStack_24,0xff);
      fn_0068869c(DAT_0089780c,uVar6,uVar5,10);
      fn_00376518(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
    }
    iVar7 = fn_00182988(DAT_008977e4);
    if (*(char *)(iVar7 + 0x39d) != '\0') {
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
      fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1);
    }
    fn_003a58d4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
    iVar7 = fn_001c3c7c();
    if (iVar7 == 0) {
      fn_003ef8e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 5;
    break;
  case 4:
    iVar7 = *(int *)(param_1 + 0x14);
    if (*(char *)(iVar7 + 0xd4) == '\0') {
      local_30 = *(undefined4 *)(iVar7 + 0xdc);
      uVar5 = 0;
      if (*(char *)(iVar7 + 0xdd) == '\0') {
        if (*(char *)(iVar7 + 0xde) != '\0') {
          *(undefined1 *)(iVar7 + 0xde) = 0;
          uVar5 = 0x200000;
        }
      }
      else {
        *(undefined1 *)(iVar7 + 0xdd) = 0;
        uVar5 = 0x100000;
      }
      fn_00422d9c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),uVar5);
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x14);
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
      if ((int)(char)local_30 - 0x10U < 0x12) {
        fn_004228d0(uVar5,uVar6,&local_30);
      }
      else {
        fn_00422cb0(uVar5,uVar6);
      }
    }
    else {
      uVar2 = fn_00357ae4();
      *(undefined1 *)(param_1 + 0x19) = uVar2;
      iVar7 = fn_00182988(DAT_008977e4);
      bVar8 = *(char *)(iVar7 + 0x39c) != '\0';
      cVar1 = '\0';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 0x19);
      }
      if (bVar8 && cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0xe) = 5;
      }
      else {
        uVar5 = fn_001603f8(local_28,0xff);
        uVar6 = fn_001603f8(&local_30,0);
        fn_0068869c(DAT_00897808,uVar6,uVar5,10);
        uVar5 = fn_001603f8(&local_30,0xff);
        uVar6 = fn_001603f8(local_28,0);
        fn_0068869c(DAT_0089780c,uVar6,uVar5,10);
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 3;
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x19) == '\0') {
      uVar2 = *(undefined1 *)(*(int *)(param_1 + 4) + 0x40);
    }
    else {
      fn_003a750c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x41) = 1;
      fn_00353b58(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54));
      iVar7 = fn_00182988(DAT_008977e4);
      if (*(char *)(iVar7 + 0x39c) != '\0') {
        *(int *)(*(int *)(param_1 + 4) + 0x48) = *(int *)(*(int *)(param_1 + 4) + 0x48) + 1;
        fn_003a7cf0(param_1,local_2c,0x13);
        return local_2c[0];
      }
      uVar2 = 0x11;
    }
    fn_003a7cf0(param_1,local_2c,uVar2);
  }
  return local_2c[0];
}



void fn_002ba4e8(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (bVar2 && cVar1 == '\x04') {
    fn_00354bc0(*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



void fn_002ba1ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  
  local_18 = param_4;
  puVar3 = (undefined2 *)
           fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                        (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) + -0x10
                                   ));
  uVar2 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0);
  uVar1 = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7e);
  *puVar3 = uVar2;
  *(undefined1 *)(puVar3 + 1) = uVar1;
  uVar4 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0);
  uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),uVar4);
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,*(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d))
  ;
  fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),&local_18,uVar4);
  uVar4 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0);
  iVar5 = fn_00174828(DAT_008977e4);
  iVar5 = fn_00163cd8(uVar4,(int)*(char *)(iVar5 + *(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48)
                                                             + 0x7d) * 0x418 + -0x4027));
  if (iVar5 == 5) {
    fn_003a8f48(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
  }
  else {
    fn_003a7520();
  }
  iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
  if (iVar5 == 0) {
    fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
    fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
    fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
    fn_003a7cf0(param_1,param_2,1);
  }
  else {
    fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
    fn_003a7cf0(param_1,param_2,2);
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined1 fn_002b9da8(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  uint local_30;
  undefined1 local_2c [20];
  
  fn_002b5424();
  local_2c[0] = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) == 0) {
    return 0x1a;
  }
  uVar3 = fn_006ba11c(param_1);
  piVar10 = *(int **)(*(int *)(param_1 + 8) + 0x84);
  uVar4 = fn_006ba178(param_1);
  (**(code **)(*piVar10 + 0x14))(piVar10,uVar4);
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x84) + 0x10))();
  if ((uVar3 & 0x110000) == 0) goto LAB_002ba100;
  iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x48);
  if (*(char *)(iVar5 + 0xe3) == '\0') {
    local_30 = (uint)*(byte *)(iVar5 + 0x7d);
    iVar5 = fn_002d4054(&local_30);
    if (iVar5 != 0) {
LAB_002ba100:
      if ((uVar3 & 0x20000) != 0) {
        piVar10 = *(int **)(*(int *)(param_1 + 8) + 0x84);
        (**(code **)(*piVar10 + 0x18))(piVar10,0,0);
        fn_003a7cf0(param_1,local_2c,2);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if ((uVar3 & 0x80000) != 0) {
        iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x84);
        uVar1 = *(undefined1 *)(iVar5 + 0x14);
        uVar4 = fn_00422530(iVar5,uVar1);
        fn_003a9994(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar4,2,uVar1);
      }
      return local_2c[0];
    }
    iVar6 = fn_00174828(DAT_008977e4);
    iVar6 = iVar6 + (char)local_30 * 0x418;
    psVar7 = (short *)(iVar6 + -0x4080);
    bVar11 = psVar7 == (short *)0x0;
    iVar5 = 0;
    iVar9 = (char)local_30 * 0x83;
    if (!bVar11) {
      iVar5 = (int)*psVar7;
      iVar9 = iVar5;
    }
    if ((bVar11 || iVar9 == 0) || iVar5 < 0 != (bVar11 && SBORROW4(iVar6 + 0x3f80,0x8000)))
    goto LAB_002ba100;
    bVar11 = *(char *)(iVar6 + -0x400d) == '\0';
    if (bVar11) {
      psVar7 = (short *)(uint)*(byte *)(iVar6 + -0x3fca);
    }
    if (!bVar11 || psVar7 != (short *)0x0) goto LAB_002ba100;
    fn_003531e0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),&local_30,
                 *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x84) + 0x14));
    fn_003532b8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),&local_30,1);
    iVar5 = fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                         (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                    -0x10));
    *(undefined1 *)(iVar5 + 3) = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x84) + 0x14);
    puVar8 = (undefined2 *)
             fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                          (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                     -0x10));
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 1) = 0;
    fn_003a8dd0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
    fn_00353a90(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_30);
    piVar10 = *(int **)(*(int *)(param_1 + 8) + 0x84);
    (**(code **)(*piVar10 + 0x18))(piVar10,0,0);
    iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
    if (iVar5 != 0) {
      fn_003a7cf0(param_1,local_2c,2);
      goto code_r0x002ba0f0;
    }
  }
  else {
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,0x10);
    do {
      iVar6 = fn_00174828(DAT_008977e4);
      iVar6 = iVar6 + (char)local_30 * 0x418;
      psVar7 = (short *)(iVar6 + -0x4080);
      bVar11 = psVar7 == (short *)0x0;
      iVar5 = 0;
      iVar9 = (char)local_30 * 0x83;
      if (!bVar11) {
        iVar5 = (int)*psVar7;
        iVar9 = iVar5;
      }
      if ((!bVar11 && iVar9 != 0) && iVar5 < 0 == (bVar11 && SBORROW4(iVar6 + 0x3f80,0x8000))) {
        bVar11 = *(char *)(iVar6 + -0x400d) == '\0';
        if (bVar11) {
          psVar7 = (short *)(uint)*(byte *)(iVar6 + -0x3fca);
        }
        if (bVar11 && psVar7 == (short *)0x0) {
          iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x84);
          iVar5 = fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,(int)(char)((char)local_30 + -0x10));
          *(undefined1 *)(iVar5 + 3) = *(undefined1 *)(iVar9 + 0x14);
          puVar8 = (undefined2 *)
                   fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,(int)(char)((char)local_30 + -0x10));
          *puVar8 = 0;
          *(undefined1 *)(puVar8 + 1) = 0;
          fn_003531e0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),&local_30,
                       *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x84) + 0x14));
          fn_003532b8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),&local_30,1);
          fn_0017f45c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),&local_30);
          fn_00353a90(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_30);
        }
      }
      cVar2 = (char)local_30 + '\x01';
      local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,cVar2);
    } while (cVar2 < '\x14');
    piVar10 = *(int **)(*(int *)(param_1 + 8) + 0x84);
    (**(code **)(*piVar10 + 0x18))(piVar10,0,0);
    fn_003a5a44(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
  }
  fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
  fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
  fn_003a7cf0(param_1,local_2c,1);
code_r0x002ba0f0:
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


