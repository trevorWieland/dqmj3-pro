#include "005c8a6c_005ceb40.h"



void fn_005ceb40(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_44;
  undefined1 local_42;
  undefined1 auStack_40 [32];
  
  fn_002c330c(&local_74);
  local_74 = DAT_00890b64;
  local_70 = DAT_00890b68;
  local_6c = 6;
  local_60 = param_1[0x34] - param_1[0x33] >> 3;
  local_68 = param_3;
  uStack_64 = param_4;
  uVar2 = fn_0022f750(DAT_00890b6c);
  fn_00147974(&local_58,uVar2);
  uVar2 = fn_0022f750(DAT_00890b70);
  fn_00147974(&local_4c,uVar2);
  local_44 = 0;
  local_48 = 1;
  local_42 = 1;
  local_47 = param_2;
  fn_002c29a0(param_1,&local_74);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  iVar4 = fn_00688920(uVar2,(char *)&DAT_005ceedc);
  param_1[0x2d] = iVar4;
  iVar4 = fn_00688920(uVar2,&DAT_005ceee4);
  param_1[0x2e] = iVar4;
  uVar2 = fn_00172c98(iVar3,(char *)&DAT_005ceeec);
  iVar4 = fn_00145b00(0x3c,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_003943e4(iVar4,param_1[1],uVar2,1,param_1[0x12]);
  }
  piVar7 = (int *)param_1[0x2f];
  if (piVar7 != piVar5) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x2f] = (int)piVar5;
  }
  (**(code **)(*(int *)param_1[0x2f] + 0x10))();
  iVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))(*(int **)(iVar3 + 0x10),(char *)&DAT_005cef00,1);
  uVar8 = 0;
  do {
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_005cef10,uVar8);
    uVar2 = fn_00172c98(iVar3,auStack_40);
    iVar6 = fn_00145b00(0x48,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar6 != 0) {
      piVar5 = (int *)fn_0031d780(iVar6,param_1[1],uVar2,1,param_1[0x12]);
    }
    *(undefined1 *)((int)piVar5 + 0x46) = 1;
    piVar5[0xb] = iVar4;
    (**(code **)(*piVar5 + 0x10))(piVar5);
    uVar1 = param_1[0x31] - param_1[0x30] >> 2;
    if (uVar1 <= uVar8) {
      fn_002ff628(9,&DAT_008c7654,&DAT_008c7654,uVar8,uVar1);
    }
    *(int **)(param_1[0x30] + uVar8 * 4) = piVar5;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 6);
  (**(code **)(*param_1 + 0x124))(param_1);
  if (param_1[0x2f] != 0) {
    *(short *)(param_1[0x2f] + 0x2e) = (short)param_1[0x39];
    *(short *)(param_1[0x2f] + 0x32) = (short)param_1[0x38];
    *(short *)(param_1[0x2f] + 0x36) = (short)param_1[0x37];
    *(short *)(param_1[0x2f] + 0x3a) = (short)param_1[0x36];
  }
  if (local_4c != &DAT_008f9cf4) {
    piVar5 = local_4c + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar5 = local_50 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  if (local_54 != &DAT_008f9cf4) {
    piVar5 = local_54 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
    }
  }
  if (local_58 != &DAT_008f9cf4) {
    piVar5 = local_58 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_005ca6ac(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  fn_003bbde0();
  fn_0022cdb4(param_1,1);
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  iVar3 = fn_00689220(uVar2,(char *)&DAT_005ca878);
  if (iVar3 != 0) {
    iVar4 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      piVar5 = (int *)fn_002b44c0(iVar4,*(undefined4 *)(param_1 + 4),iVar3,1,
                                   *(undefined4 *)(param_1 + 0x48));
    }
    piVar6 = *(int **)(param_1 + 0xac);
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))(piVar6);
      }
      *(int **)(param_1 + 0xac) = piVar5;
    }
    (**(code **)(**(int **)(param_1 + 0xac) + 0x10))();
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x1c))();
  iVar3 = fn_00688920(uVar2,&DAT_005ca888);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar3 = fn_0028bcf4(iVar4);
    if ((iVar3 == 0) && (iVar3 = fn_0028bbc0(iVar4), iVar3 == 0)) {
      fn_002b427c(*(undefined4 *)(param_1 + 0xac),iVar4);
      fn_002b4348(*(undefined4 *)(param_1 + 0xac),0);
      *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x3b) = 1;
    }
    else {
      fn_002b427c(*(undefined4 *)(param_1 + 0xac),iVar4);
      uVar2 = fn_0066173c(iVar4);
      fn_002b4348(*(undefined4 *)(param_1 + 0xac),uVar2);
      *(undefined1 *)(*(int *)(param_1 + 0xac) + 0x3b) = 0;
    }
  }
  fn_005ca924(param_1);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar3 = fn_0028bcf4(iVar4);
  if ((iVar3 == 0) && (iVar3 = fn_0028bbc0(iVar4), iVar3 == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x25) = 0;
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (*(short *)(param_1 + 0xa8) != sVar1) {
    *(short *)(param_1 + 0xa8) = sVar1;
  }
  return 1;
}



void fn_005c8a6c(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_240;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined2 local_23a;
  uint local_238;
  uint local_234;
  uint local_230;
  undefined1 auStack_22c [4];
  undefined4 local_228;
  undefined4 local_224;
  undefined1 auStack_21c [244];
  undefined1 auStack_128 [240];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b08) goto LAB_005c8ac4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005c8ac4:
  fn_0017821c(auStack_22c,puVar2 + 3,0x104);
  fn_00601644(puVar2,param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xf8) = puVar2[0x47];
  local_238 = 0;
  local_234 = 0;
  local_230 = 0;
  if (*(int *)(param_1 + 0xf8) != 1) {
    local_23c = 0;
    local_23b = 0;
    local_240 = 0;
    local_23a = 0;
    fn_00795304(&local_238,0,&local_240);
  }
  uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_228);
  fn_0017821c(auStack_128,uVar4,0xf0);
  fn_005c96dc(param_1,&local_238,auStack_128);
  uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),local_224);
  fn_0017821c(auStack_128,uVar4,0xf0);
  fn_005c96dc(param_1,&local_238,auStack_128);
  fn_0017821c(auStack_128,auStack_21c,0xf0);
  fn_0020bbc4(auStack_30,auStack_128);
  fn_0020b59c(auStack_30);
  fn_005c96dc(param_1,&local_238,auStack_128);
  if (*(int *)(param_1 + 0xf8) == 1) {
    iVar5 = fn_0020bbc4(auStack_38,auStack_128);
    if (iVar5 != 0) {
      iVar5 = iVar5 + 4;
    }
    fn_006bfda8(iVar5);
    local_23a = fn_0066128c();
    uVar10 = local_234;
    local_23c = 0;
    local_23b = 0;
    local_240 = 0;
    if (local_234 == local_230) {
      fn_00795304(&local_238);
    }
    else {
      uVar6 = local_234 + 8;
      bVar12 = local_234 != 0;
      local_234 = uVar6;
      if (bVar12) {
        fn_00166824(uVar10,&local_240);
      }
    }
  }
  uVar10 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
  if (uVar10 == 0) {
    local_240 = uVar10;
    fn_002ff628(9,&DAT_008c7632);
  }
  fn_005c8f44(param_1,&local_238,(int)*(short *)(*(int *)(param_1 + 0xec) + 6));
  uVar10 = *(uint *)(param_1 + 0xcc);
  uVar6 = *(uint *)(param_1 + 0xd0);
  if (uVar10 != uVar6) {
    uVar7 = uVar10;
    if (uVar6 <= uVar10) {
      do {
        uVar7 = uVar7 + 8;
      } while (uVar7 != uVar6);
    }
    *(uint *)(param_1 + 0xd0) = uVar6 - (uVar6 - uVar10 & 0xfffffff8);
  }
  uVar10 = 0;
  if ((int)(local_234 - local_238) >> 3 != 0) {
    do {
      uVar6 = (int)(local_234 - local_238) >> 3;
      if (uVar6 <= uVar10) {
        local_240 = uVar6;
        fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar10);
      }
      if (*(char *)(local_238 + uVar10 * 8) == '\0') {
        uVar6 = (int)(local_234 - local_238) >> 3;
        if (uVar6 <= uVar10) {
          local_240 = uVar6;
          fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar10);
        }
        iVar5 = *(int *)(param_1 + 0xd0);
        if (iVar5 == *(int *)(param_1 + 0xd4)) {
          fn_00795304(param_1 + 0xcc);
        }
        else {
          iVar8 = 0;
          if (iVar5 != 0) {
            iVar8 = local_238 + uVar10 * 8;
          }
          *(int *)(param_1 + 0xd0) = iVar5 + 8;
          if (iVar5 != 0) {
            fn_00166824(iVar5,iVar8);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((int)(local_234 - local_238) >> 3));
  }
  uVar6 = *(uint *)(param_1 + 0xf8);
  uVar10 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 3;
  if (uVar10 <= uVar6) {
    local_240 = uVar10;
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar6);
  }
  iVar5 = *(int *)(param_1 + 0xec);
  sVar1 = *(short *)(iVar5 + uVar6 * 8 + 6);
  if (*(int *)(param_1 + 0xf0) != iVar5) {
    do {
      if (((int)*(short *)(iVar5 + 6) - 1U < 0x21f) && ((int)*(short *)(iVar5 + 6) != (int)sVar1)) {
        iVar8 = fn_0020cc00();
        iVar11 = *(int *)(param_1 + 0xcc);
        if (*(int *)(param_1 + 0xd0) != iVar11) {
          do {
            if ((int)*(short *)(iVar11 + 6) - 1U < 0x21f) {
              if (((int)*(short *)(iVar5 + 6) == (int)*(short *)(iVar11 + 6) || iVar8 == 0) ||
                 (iVar9 = fn_0020cc00(), iVar9 != iVar8)) {
                if (*(short *)(iVar5 + 6) == *(short *)(iVar11 + 6)) {
                  *(undefined1 *)(iVar11 + 1) = 1;
                }
              }
              else {
                *(undefined1 *)(iVar11 + 1) = 1;
                *(undefined1 *)(iVar11 + 2) = 1;
              }
            }
            iVar11 = iVar11 + 8;
          } while (*(int *)(param_1 + 0xd0) != iVar11);
        }
      }
      iVar5 = iVar5 + 8;
    } while (*(int *)(param_1 + 0xf0) != iVar5);
  }
  fn_005ce9bc(param_1,auStack_22c,param_1 + 0xec);
  uVar10 = local_238;
  if (local_234 < local_238) {
    do {
      uVar10 = uVar10 + 8;
    } while (uVar10 != local_234);
  }
  fn_001008c4(local_238,(int)(local_230 - local_238) >> 3,0);
  return;
}


