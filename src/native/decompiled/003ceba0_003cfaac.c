#include "003ceba0_003cfaac.h"



void fn_003cfaac(int param_1,uint param_2)

{
  if (param_2 < 0xb) {
    *(char *)(param_1 + 0x20) = (char)param_2;
    *(char *)(param_1 + 0x21) = (char)param_2;
    *(undefined1 *)(param_1 + 0x23) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 10;
  *(undefined1 *)(param_1 + 0x21) = 10;
  *(char *)(param_1 + 0x23) = (char)((param_2 - 1) / 10) + '\x01';
  return;
}



void fn_003cfa74(undefined4 param_1)

{
  fn_00313870(param_1,6);
  fn_00313870(param_1,7);
  fn_00313870(param_1,8);
  return;
}



void fn_003cfa24(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (param_3 != 0) {
    fn_003d0b80(*(undefined4 *)(param_1 + 8));
  }
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),param_2,param_4);
  fn_0038d5e8(*(undefined4 *)(param_1 + 4),param_2,(int)*(char *)(param_1 + 0x20),
               (int)*(char *)(param_1 + 0x21));
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),param_2);
  return;
}



void fn_003cf9ac(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0xffffffff;
  if (param_3 != 0) {
    if (param_4 < 0x80000000) {
      uVar5 = param_4;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x30);
    }
  }
  pcVar3 = *(code **)(**(int **)(param_1 + 0x24) + 8);
  if (param_2 < 0) {
    iVar1 = (*pcVar3)();
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 4);
    param_2 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar1 = (*pcVar3)();
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  fn_0038ce2c(uVar2,uVar4,param_2,param_3,uVar5);
  return;
}



void fn_003cf2d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cf788(iVar1,param_1);
  return;
}



void fn_003cf0e8(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0068974c(param_1,uVar1,param_3,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = param_5;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x3c) = param_6;
  *(undefined1 *)(iVar2 + 0x60) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = param_4;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined4 *)(param_1 + 0x9c) = 1;
  return;
}



undefined4 fn_003ceba0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined2 *unaff_r8;
  uint uVar13;
  int unaff_r10;
  bool bVar14;
  uint local_30;
  int local_2c;
  
  uVar2 = fn_001287d4(20000,&DAT_00812c8c);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  fn_00158f6c(uVar2,20000);
  uVar2 = 0;
  iVar12 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x44cc) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28) = 0;
    }
    else {
      local_2c = iVar12 * 0xdc + 0x44b0;
      iVar11 = *(int *)(param_1 + 0x68) + local_2c;
      local_30 = 0;
      iVar3 = fn_001be790(iVar11,&local_30);
      uVar5 = local_30 >> 1;
      if (*(short *)(iVar3 + uVar5 * 2 + -2) == 0) {
        if (uVar5 != 0) {
          unaff_r8 = &DAT_007d077a;
          unaff_r10 = 0xe7a;
        }
        iVar9 = 0;
        if (uVar5 != 0) {
          do {
            iVar4 = 0;
            while (*(short *)(iVar3 + iVar9 * 2) != unaff_r8[iVar4]) {
              iVar4 = iVar4 + 1;
              if (unaff_r10 <= iVar4) goto LAB_003cef54;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar5);
        }
        fn_001be988(iVar3);
        unaff_r8 = (undefined2 *)0x0;
        if (*(ushort *)(iVar11 + 0xc2) < 0x181) {
          unaff_r8 = (undefined2 *)(uint)(*(ushort *)(iVar11 + 0xc2) != 0);
          if (*(ushort *)(iVar11 + 0xc6) < 0x181) {
            if (*(ushort *)(iVar11 + 0xc6) != 0) {
              unaff_r8 = (undefined2 *)((int)unaff_r8 + 1);
            }
            if (*(ushort *)(iVar11 + 0xca) < 0x181) {
              if (*(ushort *)(iVar11 + 0xca) != 0) {
                unaff_r8 = (undefined2 *)((int)unaff_r8 + 1);
              }
              if (*(ushort *)(iVar11 + 0xce) < 0x181) {
                if (*(ushort *)(iVar11 + 0xce) != 0) {
                  unaff_r8 = (undefined2 *)((int)unaff_r8 + 1);
                }
                if (*(ushort *)(iVar11 + 0xd2) < 0x181) {
                  if (*(ushort *)(iVar11 + 0xd2) != 0) {
                    unaff_r8 = (undefined2 *)((int)unaff_r8 + 1);
                  }
                  if (*(ushort *)(iVar11 + 0xd6) < 0x181) {
                    uVar5 = (uint)*(ushort *)(iVar11 + 0x26);
                    if (*(ushort *)(iVar11 + 0xd6) != 0) {
                      unaff_r8 = (undefined2 *)((int)unaff_r8 + 1);
                    }
                    uVar13 = 0;
                    if (uVar5 == 0xee) {
LAB_003ced90:
                      uVar13 = uVar5;
                    }
                    else {
                      if (uVar5 < 0xef) {
                        if (uVar5 == 0x1c || uVar5 == 0x1d) goto LAB_003ced90;
                      }
                      else if (uVar5 - 0x107 < 2) goto LAB_003ced90;
                      uVar6 = fn_00234d10((int)*(short *)(iVar11 + 0x20));
                      switch(uVar6) {
                      case 0:
                        uVar13 = 0x108;
                        break;
                      case 1:
                      case 2:
                        uVar13 = 0x107;
                        break;
                      case 3:
                      case 4:
                      case 5:
                        uVar13 = 0x1c;
                        break;
                      case 6:
                      case 7:
                      case 8:
                        uVar13 = 0x1d;
                        break;
                      case 9:
                      case 10:
                      case 0xb:
                        uVar13 = 0xee;
                      }
                    }
                    if (uVar13 == 0xee) {
                      iVar3 = 6;
                    }
                    else if (uVar13 < 0xee) {
                      if (uVar13 == 0x1c) {
                        iVar3 = 4;
                      }
                      else {
                        if (uVar13 != 0x1d) goto LAB_003cede4;
                        iVar3 = 5;
                      }
                    }
                    else {
LAB_003cede4:
                      iVar3 = 3;
                    }
                    bVar14 = SBORROW4((int)unaff_r8,1);
                    iVar9 = (int)unaff_r8 + -1;
                    if (unaff_r8 != (undefined2 *)0x0) {
                      bVar14 = SBORROW4(iVar3,(int)unaff_r8);
                      iVar9 = iVar3 - (int)unaff_r8;
                    }
                    if (iVar9 < 0 == bVar14) {
                      iVar3 = 0;
                      do {
                        sVar1 = *(short *)(iVar11 + iVar3 * 4 + 0xc2);
                        if ((((((sVar1 != 0 && iVar3 != 0) && (sVar1 == *(short *)(iVar11 + 0xc2)))
                              || ((sVar1 != 0 && iVar3 != 1 && (sVar1 == *(short *)(iVar11 + 0xc6)))
                                 )) || ((sVar1 != 0 && iVar3 != 2 &&
                                        (sVar1 == *(short *)(iVar11 + 0xca))))) ||
                            ((sVar1 != 0 && iVar3 != 3 && (sVar1 == *(short *)(iVar11 + 0xce))))) ||
                           ((sVar1 != 0 && iVar3 != 4 && (sVar1 == *(short *)(iVar11 + 0xd2)))))
                        goto LAB_003cef54;
                        if (sVar1 != 0) {
                          if (iVar3 == 5) break;
                          if (sVar1 == *(short *)(iVar11 + 0xd6)) goto LAB_003cef54;
                        }
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < 6);
                      if (((int)*(short *)(iVar11 + 0x20) - 1U < 0x3ff) &&
                         (iVar3 = fn_00234d38(), iVar3 != 0)) {
                        iVar3 = iVar12 * 0xdc + 0x44d0;
                        unaff_r8 = (undefined2 *)(iVar12 * 5);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar3);
                        uVar10 = *(ushort *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x44d6);
                        uVar5 = (uint)uVar10;
                        if (uVar5 != 0xee) {
                          if (uVar5 < 0xef) {
                            if (uVar5 != 0x1c && uVar5 != 0x1d) {
LAB_003cef10:
                              uVar6 = fn_00234d10((int)*(short *)(*(int *)(param_1 + 0x68) + iVar3)
                                                  );
                              uVar10 = 0;
                              switch(uVar6) {
                              case 0:
                                uVar10 = 0x108;
                                break;
                              case 1:
                              case 2:
                                uVar10 = 0x107;
                                break;
                              case 3:
                              case 4:
                              case 5:
                                uVar10 = 0x1c;
                                break;
                              case 6:
                              case 7:
                              case 8:
                                uVar10 = 0x1d;
                                break;
                              case 9:
                              case 10:
                              case 0xb:
                                uVar10 = 0xee;
                              }
                            }
                          }
                          else if (1 < uVar5 - 0x107) goto LAB_003cef10;
                        }
                        *(ushort *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x26) = uVar10;
                        puVar7 = (undefined4 *)fn_001be790(local_2c + *(int *)(param_1 + 0x68),0);
                        puVar8 = (undefined4 *)(iVar12 * 0x28 + 2 + *(int *)(param_1 + 0x8c));
                        *puVar8 = *puVar7;
                        puVar8[1] = puVar7[1];
                        puVar8[2] = puVar7[2];
                        puVar8[3] = puVar7[3];
                        puVar8[4] = puVar7[4];
                        puVar8[5] = puVar7[5];
                        fn_001be988();
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x1a) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x4572);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x1c) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x4576);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x1e) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x457a);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x20) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x457e);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x22) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x4582);
                        *(undefined2 *)(*(int *)(param_1 + 0x8c) + iVar12 * 0x28 + 0x24) =
                             *(undefined2 *)(*(int *)(param_1 + 0x68) + iVar12 * 0xdc + 0x4586);
                        goto LAB_003cf0a8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_003cef54:
      uVar2 = 1;
    }
LAB_003cf0a8:
    iVar12 = iVar12 + 1;
    if (499 < iVar12) {
      return uVar2;
    }
  } while( true );
}


