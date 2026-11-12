#include "006f027c_007177bc.h"



void fn_007177bc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  DAT_00892e08 = 0x42300000;
  DAT_00892e0c = 0x42300000;
  DAT_008c9e10 = 0xc1200000;
  DAT_008c9e14 = 0x41200000;
  DAT_008c9e18 = 0;
  DAT_008c9e1c = 0xc1b00000;
  DAT_008c9e20 = 0x41b00000;
  DAT_008c9e24 = 0;
  iVar2 = 0;
  DAT_00892df4 = &DAT_0089466c;
  DAT_00892e10 = &DAT_007c538c;
  DAT_00892e14 = 0;
  iVar1 = fn_0065c46c(&DAT_00892e10);
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(DAT_00892e10 + 0xc))(&DAT_00892e10,iVar2);
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(DAT_00892e10 + 8))(&DAT_00892e10);
    } while (iVar2 < iVar1);
  }
  iVar1 = -1;
  iVar2 = 0;
  DAT_00892e18 = &DAT_007c53b8;
  DAT_00892e1c = 0;
  DAT_00892e14 = iVar3;
  iVar3 = fn_0065c660(&DAT_00892e18,fn_0065c660,0x100000);
  if (0 < iVar3) {
    do {
      iVar3 = (**(code **)(DAT_00892e18 + 0xc))(&DAT_00892e18,iVar2);
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(DAT_00892e18 + 8))(&DAT_00892e18);
    } while (iVar2 < iVar3);
  }
  iVar3 = -1;
  iVar2 = 0;
  DAT_00892e20 = &DAT_007c53e4;
  DAT_00892e24 = 0;
  DAT_00892e1c = iVar1;
  iVar1 = fn_0065c5bc(&DAT_00892e20,fn_0065c5bc,0x100000);
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(DAT_00892e20 + 0xc))(&DAT_00892e20,iVar2);
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(DAT_00892e20 + 8))(&DAT_00892e20);
    } while (iVar2 < iVar1);
  }
  iVar1 = -1;
  iVar2 = 0;
  DAT_00892e28 = &DAT_007c5410;
  DAT_00892e2c = 0;
  DAT_00892e24 = iVar3;
  iVar3 = fn_0065c528(&DAT_00892e28,fn_0065c528,0x100000);
  if (0 < iVar3) {
    do {
      iVar3 = (**(code **)(DAT_00892e28 + 0xc))(&DAT_00892e28,iVar2);
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = (**(code **)(DAT_00892e28 + 8))(&DAT_00892e28);
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  DAT_00892e30 = &DAT_007c543c;
  DAT_00892e34 = 0;
  iVar3 = -1;
  DAT_00892e2c = iVar1;
  iVar1 = fn_0065c4c0(&DAT_00892e30,fn_0065c4c0,0x100000);
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(DAT_00892e30 + 0xc))(&DAT_00892e30,iVar2);
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(DAT_00892e30 + 8))(&DAT_00892e30);
    } while (iVar2 < iVar1);
  }
  DAT_00892df8 = 0;
  DAT_00892dfc = 0;
  DAT_00892e34 = iVar3;
  fn_00303b10(&DAT_00892dfc,fn_0079f020,0x100000);
  return;
}



void fn_007072b4(void)

{
  DAT_0089a514 = 0;
  fn_00303b10(&DAT_0089a514,fn_0079eed4,0x100000);
  return;
}



uint fn_006f6434(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
  iVar2 = fn_00163d44(0);
  if (iVar2 == 9) {
    iVar2 = fn_00163d44(10);
    if ((iVar2 == 1) && (iVar2 = fn_003035b0(uVar1,(char *)&DAT_006f6520), iVar2 == 0)) {
      return 1;
    }
  }
  else if (iVar2 == 0x32) {
    iVar2 = fn_00692f44();
    if ((iVar2 != 0) && (iVar2 = fn_003035b0(uVar1,(char *)&DAT_006f6528), iVar2 == 0)) {
      return 2;
    }
    iVar2 = fn_00163d44(0x32);
    if (iVar2 == 10) {
      uVar3 = 0;
      do {
        iVar2 = fn_003035b0((&DAT_007bfb6c)[uVar3 * 2],uVar1);
        if (iVar2 == 0) {
          uVar3 = fn_00154ac8((&DAT_007bfb70)[uVar3 * 2]);
          return uVar3 ^ 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
    }
  }
  return 0;
}



void fn_006f027c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  short *psVar16;
  uint *puVar17;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_48;
  undefined4 uStack_30;
  uint *local_2c;
  undefined4 uStack_28;
  
  local_6c = 0x50524946;
  local_68 = 0;
  uStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  uVar2 = fn_006f7a9c(DAT_008977e0);
  uVar3 = fn_00277960(uVar2,s_ArrangeItemTable_008c6766);
  iVar4 = fn_006b7664(uVar2,uVar3);
  iVar5 = fn_00147e6c(iVar4,&local_6c,4);
  if (iVar5 == 0) {
    iVar5 = fn_0012a25c(uVar2,uVar3);
    local_64 = fn_001287dc(iVar5 + -4,4);
    if (local_64 != 0) {
      fn_00301a9c(local_64,iVar4 + 4,iVar5 + -4);
      fn_00279ae4(uVar2,uVar3);
      goto LAB_006f0314;
    }
  }
  local_64 = 0;
LAB_006f0314:
  if (local_64 == 0) {
    fn_002feef8();
    return;
  }
  local_48 = fn_005f65ec();
  fn_006b5230(*(undefined4 *)(DAT_00897804 + 0x1c));
  fn_00107aac();
  local_5c = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),param_3);
  local_60 = fn_005f4448(local_64);
  local_68 = 0;
  local_60 = local_60 / 0x13c;
  if (local_60 != 0) {
    do {
      iVar5 = local_64 + local_68 * 0x13c;
      iVar4 = fn_003035b0(iVar5,local_5c);
      if ((iVar4 == 0) && (sVar1 = *(short *)(iVar5 + 0x10), sVar1 < 5)) {
        iVar4 = fn_00154ac8(0x3d);
        iVar6 = fn_00154ac8(0x3e);
        iVar7 = fn_00154ac8(0x3f);
        if (sVar1 == 0) {
          iVar4 = 1;
        }
        else if (sVar1 == 1) {
          iVar4 = 1;
        }
        else if (((sVar1 != 2) && (iVar4 = iVar6, sVar1 != 3)) && (iVar4 = iVar7, sVar1 != 4))
        goto LAB_006f06d0;
        if (iVar4 != 0) {
          iVar4 = 0;
          do {
            iVar6 = 0;
            do {
              iVar15 = iVar5 + iVar4 * 0x1e + iVar6 * 6;
              psVar16 = (short *)(iVar15 + 0x1c);
              iVar7 = fn_00163940((int)*psVar16);
              puVar11 = local_2c;
              uVar8 = 0;
              if (iVar7 != 0) {
                uVar8 = (uint)*psVar16;
              }
              if ((iVar7 != 0 && uVar8 != 0x3e9) && uVar8 != 1000) {
                puVar17 = (uint *)local_2c[1];
                uVar8 = uVar8 & 0xffff |
                        (int)*(short *)(iVar15 + 0x20) * (int)*(short *)(iVar5 + iVar4 * 2 + 0x12a)
                        * 0x10000;
                if (puVar17 == (uint *)local_2c[2]) {
                  uVar10 = (int)((int)puVar17 - *local_2c) >> 2;
                  if (uVar10 < (uint)((int)((int)local_2c[2] - *local_2c) >> 2)) {
                    local_2c[1] = (uint)(puVar17 + 1);
                    if (puVar17 != (uint *)0x0) {
                      *puVar17 = puVar17[-1];
                    }
                    puVar11 = puVar17 + -1;
                    puVar12 = puVar17;
                    if (puVar17 < puVar11) {
                      iVar7 = (int)puVar11 - (int)puVar17;
                      if (0 < iVar7) {
                        if (iVar7 * 0x20000000 < 0) {
                          puVar11 = puVar17 + -2;
                          puVar12 = puVar17 + -1;
                          *puVar12 = *puVar11;
                        }
                        for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
                          puVar12[-1] = puVar11[-1];
                          puVar11 = puVar11 + -2;
                          puVar12 = puVar12 + -2;
                          *puVar12 = *puVar11;
                        }
                      }
                    }
                    else {
                      while (puVar17 != puVar11) {
                        puVar11 = puVar11 + -1;
                        puVar12[-1] = *puVar11;
                        puVar12 = puVar12 + -1;
                      }
                    }
                    *puVar17 = uVar8;
                  }
                  else {
                    local_58 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
                    if (local_58 < uVar10 + 0x20) {
                      local_58 = uVar10 + 0x20;
                    }
                    puVar9 = (uint *)fn_00100fc6(local_58 << 2,0);
                    puVar13 = puVar9;
                    for (puVar12 = (uint *)*puVar11; puVar12 != puVar17; puVar12 = puVar12 + 1) {
                      if (puVar13 != (uint *)0x0) {
                        *puVar13 = *puVar12;
                      }
                      puVar13 = puVar13 + 1;
                    }
                    puVar12 = (uint *)((int)puVar9 + ((int)puVar17 - *puVar11 & 0xfffffffc));
                    if (puVar12 != (uint *)0x0) {
                      *puVar12 = uVar8;
                    }
                    puVar13 = (uint *)puVar11[1];
                    puVar12 = (uint *)((int)puVar9 + ((int)puVar17 - *puVar11 & 0xfffffffc));
                    for (; puVar17 != puVar13; puVar17 = puVar17 + 1) {
                      puVar12 = puVar12 + 1;
                      if (puVar12 != (uint *)0x0) {
                        *puVar12 = *puVar17;
                      }
                    }
                    uVar10 = *puVar11;
                    uVar14 = puVar11[1];
                    uVar8 = uVar10;
                    if (uVar14 < uVar10) {
                      do {
                        uVar8 = uVar8 + 4;
                      } while (uVar8 != uVar14);
                    }
                    fn_001008c4(uVar10,(int)(puVar11[2] - uVar10) >> 2,0);
                    puVar11[2] = (uint)(puVar9 + local_58);
                    *puVar11 = (uint)puVar9;
                    puVar11[1] = (uint)(puVar9 + ((int)(uVar14 - uVar10) >> 2) + 1);
                  }
                }
                else {
                  local_2c[1] = (uint)(puVar17 + 1);
                  if (puVar17 != (uint *)0x0) {
                    *puVar17 = uVar8;
                  }
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 5);
            iVar4 = iVar4 + 1;
          } while (iVar4 < 9);
        }
      }
LAB_006f06d0:
      local_68 = local_68 + 1;
    } while (local_68 < local_60);
  }
  fn_00107aac(local_48);
  fn_002feef8(local_64);
  return;
}


