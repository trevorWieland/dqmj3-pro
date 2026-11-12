#include "002b8ec4_002b9cbc.h"



uint fn_002b9cbc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  
  local_10 = param_4;
  fn_002b5424();
  local_10 = CONCAT31(((unsigned int)(local_10) >> 8) & 0xffffff,0x1a);
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x85) == '\x02') {
    fn_003a7cf0(param_1,&local_10,1);
    fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
    return 1;
  }
  uVar1 = fn_006ba11c(param_1);
  if ((uVar1 & 0x80000) == 0) {
    if ((uVar1 & 0x20000) != 0) {
      fn_003a7cf0(param_1,&local_10,1);
      fn_003a7548(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar1 & 0x40000) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x48);
      fn_003a8b98(iVar2,(int)*(char *)(iVar2 + 0x7e));
    }
  }
  else {
    fn_002b5488(param_1,&local_10,*(undefined1 *)(param_1 + 0xc));
  }
  return local_10 & 0xff;
}



undefined1 fn_002b9618(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  char cVar10;
  int *piVar11;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [16];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  fn_002b5424();
  local_4c[0] = 0x1a;
  iVar2 = *(int *)(param_1 + 8);
  if (*(int *)(iVar2 + 0x10) == 0) {
    local_4c[0] = 0x1a;
  }
  else {
    switch(*(undefined1 *)(param_1 + 0xe)) {
    case 0:
      if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
         (*(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xf), *(char *)(param_1 + 0xf) == '\x02'))
      {
        fn_003a5bbc(*(undefined4 *)(iVar2 + 0x48),*(undefined1 *)(param_1 + 0x13),0);
      }
      break;
    case 1:
      iVar3 = fn_00174828(DAT_008977e4);
      iVar4 = (int)*(char *)(*(int *)(param_1 + 8) + 0x58);
      iVar2 = (int)*(char *)(iVar3 + 0x4282);
      if (iVar4 != 0 && iVar4 != *(char *)(iVar3 + 0x4282)) {
        iVar2 = iVar4;
      }
      iVar4 = fn_00174828(DAT_008977e4);
      iVar5 = (int)*(char *)(*(int *)(param_1 + 8) + 0x59);
      iVar3 = (int)*(char *)(iVar4 + 0x4292);
      if (iVar5 != 0 && iVar5 != *(char *)(iVar4 + 0x4292)) {
        iVar3 = iVar5;
      }
      uVar7 = *(undefined4 *)(DAT_00897804 + 0xc);
      uVar8 = fn_00144df4(uVar7,iVar2 + -0x10);
      uVar7 = fn_00144df4(uVar7,iVar3 + -0x10);
      local_44[0] = (undefined1)iVar3;
      local_48[0] = (undefined1)iVar2;
      fn_00422d2c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),local_48,local_44,uVar8,uVar7);
      fn_00422880(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                   *(undefined4 *)(*(int *)(param_1 + 8) + 0x14));
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0xe0) = 1;
      uVar8 = fn_001603f8(auStack_28,0);
      uVar7 = fn_001603f8(auStack_2c,0xff);
      fn_0068869c(DAT_00897808,uVar7,uVar8,10);
      fn_00376528(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
      iVar2 = fn_00182988(DAT_008977e4);
      if (*(char *)(iVar2 + 0x39d) != '\0') {
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1,0);
      }
      iVar2 = fn_001c3c7c();
      if (iVar2 == 0) {
        fn_003ef9e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 2;
      break;
    case 2:
      uVar6 = fn_006ba11c(param_1);
      piVar11 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
      uVar8 = fn_006ba178(param_1);
      (**(code **)(*piVar11 + 0x14))(piVar11,uVar8);
      (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x1c) + 0x10))();
      if ((uVar6 & 0x10000) != 0) {
        cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x1c) + 0x14);
        fn_003a745c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        if (cVar1 == '\0') {
          iVar2 = fn_00174828(DAT_008977e4);
          cVar1 = *(char *)(*(int *)(param_1 + 8) + 0x58);
          cVar10 = *(char *)(iVar2 + 0x4282);
          if (cVar1 != '\0' && cVar1 != *(char *)(iVar2 + 0x4282)) {
            cVar10 = cVar1;
          }
          iVar2 = fn_00174828(DAT_008977e4);
          cVar1 = *(char *)(*(int *)(param_1 + 8) + 0x59);
          cVar9 = *(char *)(iVar2 + 0x4292);
          if (cVar1 != '\0' && cVar1 != *(char *)(iVar2 + 0x4292)) {
            cVar9 = cVar1;
          }
          iVar2 = fn_006a7b78(DAT_008977e4);
          *(char *)(iVar2 + 0x70) = cVar10;
          *(char *)(iVar2 + 0x71) = cVar9;
          *(undefined1 *)(iVar2 + 0x72) = 1;
          piVar11 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
          (**(code **)(*piVar11 + 0x18))(piVar11,0,0);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if (cVar1 == '\x01') {
          fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
          piVar11 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
          (**(code **)(*piVar11 + 0x18))(piVar11,0,0);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if ((uVar6 & 0x20000) != 0) {
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
        piVar11 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
        (**(code **)(*piVar11 + 0x18))(piVar11,0,0);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      fn_00422d9c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),uVar6);
      break;
    case 3:
      fn_0042289c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),*(undefined4 *)(iVar2 + 0x14));
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0xe0) = 0;
      iVar2 = fn_00182988(DAT_008977e4);
      if (*(char *)(iVar2 + 0x39d) != '\0') {
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,0);
        fn_003ef3e8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x1c),1,1);
      }
      iVar2 = fn_001c3c7c();
      if (iVar2 == 0) {
        fn_003ef8e0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0x10));
      }
      *(undefined1 *)(param_1 + 0xe) = 4;
      break;
    case 4:
      uVar8 = fn_001603f8(auStack_30,0);
      uVar7 = fn_001603f8(auStack_34,0xff);
      fn_0068869c(DAT_00897808,uVar7,uVar8,10);
      fn_00376518(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 5;
      break;
    case 5:
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined2 *)(iVar2 + 0x6e) = 0;
        *(undefined1 *)(iVar2 + 0x70) = 0;
        fn_002d46cc(*(undefined4 *)(param_1 + 8));
        iVar2 = fn_00182988(DAT_008977e4);
        if (*(char *)(iVar2 + 0x39c) == '\0') {
          fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
          uVar8 = 0x11;
        }
        else {
          uVar8 = 0x13;
          *(int *)(*(int *)(param_1 + 4) + 0x48) = *(int *)(*(int *)(param_1 + 4) + 0x48) + 1;
        }
        fn_003a7cf0(param_1,local_4c,uVar8);
      }
      else {
        fn_003a7cf0(param_1,local_4c,1);
      }
    }
  }
  return local_4c[0];
}



void fn_002b956c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  if (*(char *)(param_1 + 0xe) == '\x02') {
    fn_003a5bbc(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
    uVar1 = fn_001603f8(auStack_14,0xff);
    uVar2 = fn_001603f8(auStack_18,0);
    fn_0068869c(DAT_00897808,uVar2,uVar1,10);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 3;
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x1c);
  (**(code **)(*piVar3 + 0x18))(piVar3,0,0);
  fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
  return;
}



undefined1 fn_002b8ec4(int param_1)

{
  undefined2 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  fn_002b5424();
  local_28[0] = 0x1a;
  uVar2 = 0x1a;
  if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
    uVar3 = fn_006ba11c(param_1);
    piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
    uVar4 = fn_006ba178(param_1);
    (**(code **)(*piVar9 + 0x14))(piVar9,uVar4);
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x78) + 0x10))();
    iVar5 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),0);
    uVar4 = fn_006ccaf4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78));
    fn_002bb6b0(*(undefined4 *)(param_1 + 4),param_1 + 0xe,uVar4,1);
    if ((uVar3 & 0x110000) != 0) {
      if (iVar5 < 1) {
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      iVar6 = fn_00174828(DAT_008977e4);
      uVar4 = fn_00163cd8(iVar5,(int)*(char *)(iVar6 + *(char *)(*(int *)(*(int *)(param_1 + 8) +
                                                                          0x48) + 0x7d) * 0x418 +
                                               -0x4027));
      uVar1 = (undefined2)iVar5;
      switch(uVar4) {
      default:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),iVar5);
        local_14[0] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
        fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_14,uVar4);
        puVar7 = (undefined2 *)
                 fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                              (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                         -0x10));
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 1) = 0;
        iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
        break;
      case 1:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        fn_003a7cf0(param_1,local_28,6);
        iVar5 = fn_001639e4(iVar5);
        fn_003a8cd4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),iVar5 != 0x17);
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      case 2:
      case 3:
      case 4:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),iVar5);
        local_24[0] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
        fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_24,uVar4);
        fn_005a9518(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        puVar7 = (undefined2 *)
                 fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                              (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                         -0x10));
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 1) = 0;
        iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
        break;
      case 5:
      case 7:
      case 10:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        fn_003a7cf0(param_1,local_28,6);
        fn_003a8da4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      case 6:
      case 0xc:
      case 0xd:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),iVar5);
        local_18[0] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
        fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_18,uVar4);
        fn_003a8f34(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        puVar7 = (undefined2 *)
                 fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                              (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                         -0x10));
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 1) = 0;
        iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
        break;
      case 8:
      case 9:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),iVar5);
        local_20[0] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
        fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_20,uVar4);
        fn_003a8ee8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        puVar7 = (undefined2 *)
                 fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                              (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                         -0x10));
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 1) = 0;
        iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
        break;
      case 0xb:
        piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
        (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
        uVar4 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),iVar5);
        local_1c[0] = *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d);
        fn_00309b10(*(undefined4 *)(*(int *)(param_1 + 8) + 0x54),local_1c,uVar4);
        fn_003a8a1c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48));
        puVar7 = (undefined2 *)
                 fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,
                              (int)(char)(*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x48) + 0x7d) +
                                         -0x10));
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 1) = 0;
        iVar5 = fn_002d49d8(*(undefined4 *)(param_1 + 8));
      }
      if (iVar5 == 0) {
        fn_003a69e4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),0);
        fn_003a7e9c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),2);
        fn_003773f4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
        fn_003a7cf0(param_1,local_28,1);
      }
      else {
        fn_003a7cf0(param_1,local_28,2);
      }
      fn_0037788c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x20000) != 0) {
      piVar9 = *(int **)(*(int *)(param_1 + 8) + 0x78);
      (**(code **)(*piVar9 + 0x18))(piVar9,0,1);
      fn_003a7cf0(param_1,local_28,2);
      fn_0037788c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c));
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uVar3 & 0x80000) != 0) {
      uVar4 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),1);
      uVar8 = fn_006ccb20(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),1);
      uVar8 = fn_00404014(*(undefined4 *)(*(int *)(param_1 + 8) + 0x78),uVar8);
      fn_003a9994(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),uVar8,0,uVar4);
    }
    uVar2 = local_28[0];
  }
  return uVar2;
}


