#include "003facdc_003fb4a0.h"



void fn_003fb4a0(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined2 local_2c [2];
  undefined2 local_28 [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  iVar3 = fn_0022cdf0();
  if (iVar3 != 0) {
    fn_003bbdc0(param_1);
    sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    if (*(short *)(param_1 + 0xc0) != sVar1) {
      fn_0022cdb4(param_1,sVar1 != 0);
      *(short *)(param_1 + 0xc0) = sVar1;
    }
    local_2c[0] = 0;
    fn_0079e7a0(&local_44,0x14,local_2c,auStack_24);
    local_28[0] = 0;
    fn_0079e7a0(&local_38,0x14,local_28,auStack_20);
    bVar2 = false;
    iVar3 = fn_003492bc(*(undefined4 *)(param_1 + 0x98));
    if (iVar3 == 1) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      fn_0022cecc(param_1);
      bVar2 = true;
    }
    else if (iVar3 == 2) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      fn_0022cecc(param_1);
      bVar2 = true;
    }
    iVar3 = fn_003fadc8(param_1,&local_44,&local_38);
    if (*(int *)(param_1 + 0x80) != iVar3) {
      bVar2 = true;
      *(int *)(param_1 + 0x80) = iVar3;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != *(char *)(param_1 + 0xc2)) {
      bVar2 = true;
      *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x338);
    }
    iVar3 = 0;
    do {
      uVar6 = iVar3 + *(int *)(param_1 + 0x84) * 10;
      uVar4 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 1;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
      }
      iVar5 = *(int *)(param_1 + 0xa8);
      uVar4 = (int)(local_40 - local_44) >> 1;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
      }
      if (*(short *)(iVar5 + uVar6 * 2) != *(short *)(local_44 + uVar6 * 2) || bVar2) {
        uVar4 = (int)(local_40 - local_44) >> 1;
        if (uVar4 <= uVar6) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
        }
        fn_003fb80c(param_1,(int)*(short *)(local_44 + uVar6 * 2),iVar3,1);
      }
      uVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
      }
      iVar5 = *(int *)(param_1 + 0xb4);
      uVar4 = (int)(local_34 - local_38) >> 1;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
      }
      if (*(short *)(iVar5 + uVar6 * 2) != *(short *)(local_38 + uVar6 * 2) || bVar2) {
        uVar4 = (int)(local_34 - local_38) >> 1;
        if (uVar4 <= uVar6) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar4);
        }
        fn_003fb80c(param_1,(int)*(short *)(local_38 + uVar6 * 2),iVar3,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
    fn_003bbde0(param_1);
    uVar4 = local_38;
    if (local_34 < local_38) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != local_34);
    }
    fn_001008c4(local_38,(int)(local_30 - local_38) >> 1,0);
    uVar4 = local_44;
    if (local_40 < local_44) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != local_40);
    }
    fn_001008c4(local_44,(int)(local_3c - local_44) >> 1,0);
  }
  return;
}



undefined4 fn_003fb110(int *param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  undefined2 local_5c [2];
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  local_38[0] = 0;
  fn_0079e7a0(&local_78,0x14,local_38,auStack_30);
  local_5c[0] = 0;
  fn_0079e7a0(&local_6c,0x14,local_5c,auStack_2c);
  iVar2 = fn_003fadc8(param_1,&local_78,&local_6c);
  param_1[0x20] = iVar2;
  iVar2 = fn_003492bc(param_1[0x26]);
  if (iVar2 == 1) {
    iVar2 = param_1[0x20] + -1;
  }
  else {
    iVar2 = 0;
  }
  param_1[0x21] = iVar2;
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/common/status_common_m.arc",(char *)&DAT_0086659c,
             &DAT_00860454);
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar7 = *(int **)(iVar2 + 0x10);
  uVar5 = 0;
  do {
    fn_0017d96c(auStack_58,0x20,0x1f,(char *)&DAT_00866574,uVar5);
    piVar3 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,auStack_58,1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a930) goto LAB_003fb21c;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003fb21c:
    uVar6 = param_1[0x32] - param_1[0x31] >> 3;
    if (uVar6 <= uVar5) {
      fn_002ff628(9,&DAT_008c762f,&DAT_008c762f,uVar5,uVar6);
    }
    *(int **)(param_1[0x31] + uVar5 * 8) = piVar3;
    fn_0017d96c(auStack_58,0x20,0x1f,(char *)&DAT_00866588,uVar5);
    piVar3 = (int *)(**(code **)(*piVar7 + 0x2c))(piVar7,auStack_58,1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a930) goto LAB_003fb2b8;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003fb2b8:
    uVar6 = param_1[0x32] - param_1[0x31] >> 3;
    if (uVar6 <= uVar5) {
      fn_002ff628(9,&DAT_008c762f,&DAT_008c762f,uVar5,uVar6);
    }
    iVar2 = uVar5 * 8;
    uVar5 = uVar5 + 1;
    *(int **)(param_1[0x31] + iVar2 + 4) = piVar3;
    if (9 < (int)uVar5) {
      sVar1 = *(short *)(param_1[0x26] + 0x1c);
      fn_0022cdb4(param_1,sVar1 != 0);
      *(short *)(param_1 + 0x30) = sVar1;
      iVar2 = 0;
      do {
        uVar6 = iVar2 + param_1[0x21] * 10;
        uVar5 = (int)(local_74 - local_78) >> 1;
        if (uVar5 <= uVar6) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar5);
        }
        fn_003fb80c(param_1,(int)*(short *)(local_78 + uVar6 * 2),iVar2,1);
        uVar6 = iVar2 + param_1[0x21] * 10;
        uVar5 = (int)(local_68 - local_6c) >> 1;
        if (uVar5 <= uVar6) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar5);
        }
        fn_003fb80c(param_1,(int)*(short *)(local_6c + uVar6 * 2),iVar2,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      *(undefined1 *)((int)param_1 + 0xc2) = *(undefined1 *)(param_1[0x26] + 0x338);
      uVar5 = local_6c;
      if (local_68 < local_6c) {
        do {
          uVar5 = uVar5 + 2;
        } while (uVar5 != local_68);
      }
      fn_001008c4(local_6c,(int)(local_64 - local_6c) >> 1,0);
      uVar5 = local_78;
      if (local_74 < local_78) {
        do {
          uVar5 = uVar5 + 2;
        } while (uVar5 != local_74);
      }
      fn_001008c4(local_78,(int)(local_70 - local_78) >> 1,0);
      return 1;
    }
  } while( true );
}



int fn_003fadc8(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar3 = *(int *)(param_1 + 0x98) + 0x180;
  if (iVar3 == 0) {
    uVar10 = 0;
    do {
      uVar11 = param_2[1] - *param_2 >> 1;
      if (uVar11 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar11);
      }
      *(undefined2 *)(*param_2 + uVar10 * 2) = 0;
      uVar11 = param_3[1] - *param_3 >> 1;
      if (uVar11 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar11);
      }
      uVar11 = uVar10 + 1;
      *(undefined2 *)(*param_3 + uVar10 * 2) = 0;
      uVar10 = uVar11;
    } while ((int)uVar11 < 0x14);
  }
  else {
    uVar10 = 0;
    uVar11 = 0;
    iVar9 = 0;
    do {
      sVar2 = *(short *)(iVar3 + iVar9 * 2);
      iVar7 = (int)sVar2;
      if (iVar7 != 0) {
        iVar4 = fn_0042e8e8(*(undefined4 *)(param_1 + 0x98));
        iVar5 = 0;
        do {
          iVar6 = (int)*(short *)(iVar4 + iVar5 * 2);
          if ((iVar6 != 0) && (iVar6 == iVar7)) {
            iVar4 = fn_00660a7c(iVar7);
            iVar7 = fn_0025be70(iVar7);
            if ((iVar7 != 1) && (iVar4 == 0)) break;
            if ((int)uVar10 < 10) {
              iVar7 = param_2[1] - *param_2;
joined_r0x003faf10:
              if ((uint)(iVar7 >> 1) <= uVar10) {
                fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,iVar7 >> 1);
              }
              *(short *)(*param_2 + uVar10 * 2) = sVar2;
              uVar10 = uVar10 + 1;
            }
            else {
              if ((int)uVar11 < 10) {
                iVar7 = param_3[1] - *param_3;
              }
              else {
                if ((int)uVar10 < 0x14) {
                  iVar7 = param_2[1] - *param_2;
                  goto joined_r0x003faf10;
                }
                if (0x13 < (int)uVar11) break;
                iVar7 = param_3[1] - *param_3;
              }
              if ((uint)(iVar7 >> 1) <= uVar11) {
                fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar11,iVar7 >> 1);
              }
              *(short *)(*param_3 + uVar11 * 2) = sVar2;
              uVar11 = uVar11 + 1;
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x4c);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x4c);
    uVar8 = uVar11;
    if ((int)uVar11 <= (int)uVar10) {
      uVar8 = uVar10;
    }
    for (; (int)uVar10 < 0x14; uVar10 = uVar10 + 1) {
      uVar1 = param_2[1] - *param_2 >> 1;
      if (uVar1 <= uVar10) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar10,uVar1);
      }
      *(undefined2 *)(*param_2 + uVar10 * 2) = 0;
    }
    for (; (int)uVar11 < 0x14; uVar11 = uVar11 + 1) {
      uVar10 = param_3[1] - *param_3 >> 1;
      if (uVar10 <= uVar11) {
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar11,uVar10);
      }
      *(undefined2 *)(*param_3 + uVar11 * 2) = 0;
    }
    if (9 < (int)(uVar8 + 9)) {
      return (int)(uVar8 + 9) / 10;
    }
  }
  return 1;
}



void fn_003fad58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00835db0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  return;
}



void fn_003facdc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      iVar4 = param_1 + iVar1 * 0x10 + iVar3 * 4;
      piVar2 = *(int **)(iVar4 + 0x9c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))();
      }
      piVar2 = *(int **)(iVar4 + 0xbc);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  fn_0022cf0c(param_1);
  return;
}


