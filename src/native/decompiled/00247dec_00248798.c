#include "00247dec_00248798.h"



void fn_00248798(undefined4 param_1)

{
  DAT_00896f40 = fn_0026455c(param_1,0x147,0);
  DAT_00896f44 = fn_002650cc(param_1,0x147);
  if (DAT_00896f44 == -1) {
    DAT_00896f44 = fn_00264d74(param_1,0x147,0);
  }
  return;
}



void fn_00248540(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = fn_0026483c(param_1,iVar2);
      (&DAT_008cd594)[iVar2] = uVar1;
      uVar1 = fn_00264684(param_1,iVar2);
      (&DAT_008cd5a4)[iVar2] = uVar1;
      DAT_00896f50 = fn_002648b8(param_1);
      if (DAT_00896f50 == -1) {
        DAT_00896f50 = fn_00264afc(param_1);
      }
      fn_00263560(param_2,(&DAT_008cd594)[iVar2],(&DAT_008cd5a4)[iVar2],DAT_00896f50,
                   (int)(char)iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}



undefined1 * fn_002483f4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined1 auStack_90 [68];
  undefined1 local_4c [12];
  undefined1 auStack_40 [44];
  
  fn_00692e98(auStack_40,param_1);
  fn_00183718(&local_d8,auStack_40,(char *)&DAT_00248538);
  local_e0 = local_c4;
  uStack_dc = uStack_c0;
  uVar2 = 0;
  uStack_f0 = uStack_d4;
  uStack_ec = uStack_d0;
  uStack_e8 = uStack_cc;
  uStack_e4 = uStack_c8;
  if (local_d8 != 0) {
    do {
      fn_00176ec8(auStack_90,&uStack_f0,uVar2);
      fn_0017821c(&uStack_d4,auStack_90,0x44);
      iVar1 = fn_003035b0(&uStack_d4,param_3);
      if (iVar1 == 0) {
        fn_00176ec8(auStack_90,&uStack_f0,uVar2);
        fn_0017821c(&uStack_d4,auStack_90,0x44);
        fn_00176ec8(auStack_90,&uStack_f0,uVar2);
        fn_0017821c(&uStack_d4,auStack_90,0x44);
        fn_006a67f8(param_2,local_4c);
        (**(code **)(*param_2 + 0x24))(param_2,local_4c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_d8);
  }
  return auStack_40;
}



/* WARNING: Removing unreachable block (ram,0x00248034) */
/* WARNING: Removing unreachable block (ram,0x0024803c) */
/* WARNING: Removing unreachable block (ram,0x00248044) */

void fn_00247fd4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined1 auStack_a8 [56];
  int local_70 [7];
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  
  fn_001028d4(auStack_a8,(char *)&DAT_00248398);
  fn_00183718(local_70,param_2,auStack_a8);
  local_b4 = (undefined4 *)0x0;
  local_b0 = (undefined4 *)0x0;
  local_ac = (undefined4 *)0x0;
  local_b4 = (undefined4 *)fn_00100fc6(0x180,0);
  local_ac = local_b4 + 0x60;
  local_b0 = local_b4;
  if (local_70[0] != 0) {
    fn_00183718(&local_54,param_2,auStack_a8);
    local_b8 = local_3c;
    local_c0 = local_44;
    uStack_bc = uStack_40;
    uStack_cc = uStack_50;
    uStack_c8 = uStack_4c;
    uStack_c4 = uStack_48;
    uVar7 = 0;
    if (local_54 != 0) {
      do {
        uVar8 = 0;
        puVar5 = local_b0;
        if (local_54 != 0) {
          do {
            fn_001028d4(auStack_a8,(char *)&DAT_002483a8,param_3,uVar7);
            iVar1 = fn_006f6e30(&uStack_cc,uVar8);
            iVar2 = fn_003035b0(iVar1,auStack_a8);
            puVar5 = local_b0;
            if (iVar2 == 0) {
              uVar12 = *(undefined4 *)(iVar1 + 0x20);
              uVar13 = *(undefined4 *)(iVar1 + 0x24);
              uVar14 = *(undefined4 *)(iVar1 + 0x28);
              if (local_b0 == local_ac) {
                uVar8 = ((int)local_b0 - (int)local_b4) / 0xc;
                if (uVar8 < (uint)(((int)local_ac - (int)local_b4) / 0xc)) {
                  if (local_b0 != (undefined4 *)0x0) {
                    *local_b0 = local_b0[-3];
                    local_b0[1] = local_b0[-2];
                    local_b0[2] = local_b0[-1];
                  }
                  puVar5 = local_b0 + -3;
                  puVar3 = local_b0;
                  if (local_b0 < puVar5) {
                    if (0 < (int)puVar5 - (int)local_b0) {
                      uVar8 = ((int)puVar5 - (int)local_b0) / 0xc;
                      if ((uVar8 & 1) != 0) {
                        puVar5 = local_b0 + -6;
                        puVar3 = local_b0 + -3;
                        *puVar3 = *puVar5;
                        local_b0[-2] = local_b0[-5];
                        local_b0[-1] = local_b0[-4];
                      }
                      for (iVar1 = (int)uVar8 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                        uVar10 = puVar5[-2];
                        uVar11 = puVar5[-1];
                        puVar3[-3] = puVar5[-3];
                        puVar3[-2] = uVar10;
                        puVar3[-1] = uVar11;
                        uVar10 = puVar5[-5];
                        uVar11 = puVar5[-4];
                        puVar3[-6] = puVar5[-6];
                        puVar3[-5] = uVar10;
                        puVar3[-4] = uVar11;
                        puVar3 = puVar3 + -6;
                        puVar5 = puVar5 + -6;
                      }
                    }
                  }
                  else {
                    while (local_b0 != puVar5) {
                      uVar10 = puVar5[-2];
                      uVar11 = puVar5[-1];
                      puVar3[-3] = puVar5[-3];
                      puVar3[-2] = uVar10;
                      puVar3[-1] = uVar11;
                      puVar5 = puVar5 + -3;
                      puVar3 = puVar3 + -3;
                    }
                  }
                  *local_b0 = uVar12;
                  local_b0[1] = uVar13;
                  local_b0[2] = uVar14;
                  puVar5 = local_b0 + 3;
                }
                else {
                  uVar9 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                  if (uVar9 < uVar8 + 0x20) {
                    uVar9 = uVar8 + 0x20;
                  }
                  puVar4 = (undefined4 *)fn_00100fc6(uVar9 * 0xc,0);
                  puVar3 = puVar4;
                  for (puVar6 = local_b4; puVar6 != puVar5; puVar6 = puVar6 + 3) {
                    if (puVar3 != (undefined4 *)0x0) {
                      uVar10 = puVar6[1];
                      uVar11 = puVar6[2];
                      *puVar3 = *puVar6;
                      puVar3[1] = uVar10;
                      puVar3[2] = uVar11;
                    }
                    puVar3 = puVar3 + 3;
                  }
                  puVar3 = puVar4 + (((int)puVar5 - (int)local_b4) / 0xc) * 3;
                  if (puVar3 != (undefined4 *)0x0) {
                    *puVar3 = uVar12;
                    puVar3[1] = uVar13;
                    puVar3[2] = uVar14;
                  }
                  puVar3 = puVar4 + (((int)puVar5 - (int)local_b4) / 0xc) * 3;
                  for (; puVar5 != local_b0; puVar5 = puVar5 + 3) {
                    puVar6 = puVar3 + 3;
                    if (puVar6 != (undefined4 *)0x0) {
                      uVar12 = puVar5[1];
                      uVar13 = puVar5[2];
                      *puVar6 = *puVar5;
                      puVar3[4] = uVar12;
                      puVar3[5] = uVar13;
                    }
                    puVar3 = puVar6;
                  }
                  iVar1 = (int)local_b0 - (int)local_b4;
                  puVar5 = local_b4;
                  if (local_b0 < local_b4) {
                    do {
                      puVar5 = puVar5 + 3;
                    } while (puVar5 != local_b0);
                  }
                  fn_001008c4(local_b4,((int)local_ac - (int)local_b4) / 0xc,0);
                  local_ac = puVar4 + uVar9 * 3;
                  local_b4 = puVar4;
                  puVar5 = puVar4 + (iVar1 / 0xc) * 3 + 3;
                }
              }
              else {
                puVar5 = local_b0 + 3;
                if (local_b0 != (undefined4 *)0x0) {
                  *local_b0 = uVar12;
                  local_b0[1] = uVar13;
                  local_b0[2] = uVar14;
                }
              }
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_54);
        }
        local_b0 = puVar5;
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_54);
    }
  }
  iVar1 = (int)local_b0 - (int)local_b4 >> 0x1f;
  if (((int)local_b0 - (int)local_b4) / 0xc + iVar1 != iVar1) {
    fn_002d096c(param_1,&local_b4);
  }
  puVar5 = local_b4;
  if (local_b0 < local_b4) {
    do {
      puVar5 = puVar5 + 3;
    } while (puVar5 != local_b0);
  }
  fn_001008c4(local_b4,((int)local_ac - (int)local_b4) / 0xc,0);
  return;
}



undefined4
fn_00247eb8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_00183718(&local_34);
  local_3c = local_20;
  uStack_38 = uStack_1c;
  uStack_4c = uStack_30;
  uStack_48 = uStack_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uVar5 = 0;
  if (local_34 != 0) {
    do {
      iVar1 = fn_006f6e30(&uStack_4c,uVar5);
      iVar2 = fn_003035b0(iVar1,param_4);
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x24);
        uVar4 = *(undefined4 *)(iVar1 + 0x28);
        *param_1 = *(undefined4 *)(iVar1 + 0x20);
        param_1[1] = uVar3;
        param_1[2] = uVar4;
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_34);
  }
  return 0;
}



int fn_00247dec(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00247138(param_1 + 0x18,4);
  iVar2 = fn_00247138(param_1 + 0x3d8,4);
  return iVar2 + iVar1;
}


