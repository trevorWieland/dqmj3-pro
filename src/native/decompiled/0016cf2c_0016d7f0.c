#include "0016cf2c_0016d7f0.h"



void fn_0016d7f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 != 1000) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (int)(char)(((uint)(iVar2 * 0x18) % 1000 != 0) + (char)((uint)(iVar2 * 0x18) / 1000));
    }
    if (*(int *)(param_1 + 0x11c) < iVar3) {
      fn_0017aaf0(&local_28,param_1);
      fn_0017a8a4(param_1,*(undefined4 *)(param_1 + *(int *)(param_1 + 0x11c) * 4 + 0x94),&local_28
                  );
      iVar2 = *(int *)(param_1 + *(int *)(param_1 + 0x11c) * 4 + 0x94);
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if ((uint)*(byte *)(param_1 + 0x120) * 0xfa < *(uint *)(param_1 + 0x110)) {
      fn_0016db28(param_1,1);
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1;
        uVar4 = uVar5 & 0xff;
      } while (uVar4 * 0xfa <= *(uint *)(param_1 + 0x110));
      *(char *)(param_1 + 0x120) = (char)uVar5;
      fn_0017aaf0(&local_24,param_1);
      uVar1 = local_24;
      uVar4 = 0;
      if (*(int *)(param_1 + 0x11c) != 0) {
        do {
          local_28 = uVar1;
          fn_0017a8a4(param_1,*(undefined4 *)(param_1 + uVar4 * 4 + 0x94),&local_28);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x11c));
      }
      uVar4 = 0;
      do {
        uVar5 = 0;
        do {
          local_20[0] = local_24;
          fn_0017a8a4(param_1,*(undefined4 *)(param_1 + uVar5 * 0x28 + uVar4 * 4 + 0x14),local_20);
          uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
      local_28 = local_24;
      fn_0017a8a4(param_1,*(undefined4 *)(param_1 + 0x8c),&local_28);
      local_28 = local_24;
      fn_0017a8a4(param_1,*(undefined4 *)(param_1 + 0x90),&local_28);
    }
  }
  return;
}



void fn_0016d4c8(int param_1,uint param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  iVar3 = *(int *)(param_1 + 0xfc);
  *(uint *)(iVar3 + 0x110) = param_2;
  *(uint *)(iVar3 + 0x114) = param_2;
  if (1000 < param_2) {
    *(undefined4 *)(iVar3 + 0x110) = 1000;
    *(undefined4 *)(iVar3 + 0x114) = 1000;
  }
  iVar7 = 0;
  *(undefined4 *)(iVar3 + 0x118) = 0;
  if (*(int *)(iVar3 + 0x110) == 1000) {
    fn_0016da8c(iVar3);
    return;
  }
  uVar4 = 0;
  do {
    uVar5 = uVar4 + 1;
    uVar4 = uVar5 & 0xff;
  } while (uVar4 * 0xfa <= *(uint *)(iVar3 + 0x110));
  *(char *)(iVar3 + 0x120) = (char)uVar5;
  fn_0017aaf0(&local_24,iVar3);
  fn_0016d9bc(iVar3);
  uVar1 = local_24;
  uVar4 = 0;
  do {
    uVar5 = 0;
    do {
      local_20[0] = uVar1;
      fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + uVar5 * 0x28 + uVar4 * 4 + 0x14),local_20);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 10);
  local_28 = uVar1;
  fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + 0x8c),&local_28);
  local_28 = uVar1;
  fn_0017a8a4(iVar3,*(undefined4 *)(iVar3 + 0x90),&local_28);
  iVar6 = *(int *)(iVar3 + 0x110);
  if (iVar6 != 0) {
    if (iVar6 == 1000) {
      iVar7 = 0x18;
    }
    else {
      iVar7 = (int)(char)(((uint)(iVar6 * 0x18) % 1000 != 0) + (char)((uint)(iVar6 * 0x18) / 1000));
    }
  }
  iVar6 = 0;
  *(int *)(iVar3 + 0x11c) = iVar7;
  do {
    iVar7 = iVar3 + iVar6 * 4;
    local_28 = local_24;
    fn_0017a8a4(iVar3,*(undefined4 *)(iVar7 + 0x94),&local_28);
    bVar2 = 0;
    if (*(int *)(iVar3 + 0x11c) != 0) {
      if (iVar6 < *(int *)(iVar3 + 0x11c)) {
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
    }
    iVar7 = *(int *)(iVar7 + 0x94);
    iVar6 = iVar6 + 1;
    *(byte *)(iVar7 + 0x44) = bVar2 | *(byte *)(iVar7 + 0x44) & 0xfe;
  } while (iVar6 < 0x18);
  return;
}



undefined4 fn_0016cf2c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  
  uVar11 = 0;
  uVar2 = fn_00182994(DAT_008977e4);
  iVar9 = (int)(char)param_2;
  iVar8 = (int)(char)param_1;
  uVar14 = fn_001659c0(uVar2,iVar8,iVar9);
  uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar10 = 1;
  do {
    uVar2 = fn_00182994(DAT_008977e4,uVar2);
    uVar15 = fn_00174c34(uVar2,uVar10,param_1,param_2);
    uVar16 = uVar15 & 0xffffffff00000000;
    iVar3 = (int)uVar15;
    if (iVar3 != 0) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar16 = fn_00174b40(uVar2,uVar10,param_1,param_2);
    }
    uVar2 = (undefined4)(uVar16 >> 0x20);
    if (uVar10 == 0xc || uVar10 == 0xd) {
      if (iVar3 != 0) {
        if (param_2 == 0) {
          if (0 < iVar3) {
            if (uVar10 != 7) {
              if ((int)uVar10 < 8) {
                if (4 < uVar10 - 2) goto LAB_0016d030;
              }
              else if (uVar10 != 10) {
                if ((int)uVar10 < 0xb) {
                  if (uVar10 != 8 && uVar10 != 9) {
LAB_0016d030:
                    uVar2 = fn_00182994(DAT_008977e4);
                    iVar5 = fn_00175324(uVar2,iVar8);
                    if (iVar5 == 0) goto LAB_0016d06c;
                  }
                }
                else if (uVar10 != 0xb && uVar10 != 0x52) goto LAB_0016d030;
              }
            }
            uVar2 = fn_00182994(DAT_008977e4);
            fn_00164c80(uVar2,uVar10 + 100,2);
          }
LAB_0016d06c:
          if (uVar10 == 0xc) {
            uVar2 = fn_00182994(DAT_008977e4);
            iVar5 = fn_00163a1c(uVar2,param_1);
            uVar2 = fn_00182994(DAT_008977e4);
            iVar4 = fn_00174aec(uVar2,param_1,0);
            if (iVar5 == 1 && iVar4 == 3) {
              uVar2 = fn_00182994(DAT_008977e4);
              fn_00164c80(uVar2,0x70,2);
            }
          }
          if (-1 < iVar3) goto LAB_0016cfe4;
          if ((uVar10 != 2 && uVar10 != 3) && (uVar10 != 4 && uVar10 != 5)) {
            uVar2 = fn_00182994(DAT_008977e4);
            iVar5 = fn_00175324(uVar2,iVar8);
            if (iVar5 == 0) goto LAB_0016d154;
          }
          uVar2 = fn_00182994(DAT_008977e4);
          fn_00164c80(uVar2,uVar10 + 300,2);
LAB_0016d154:
          uVar6 = uVar10 - 1;
          bVar13 = 9 < uVar6;
          bVar12 = uVar6 == 10;
          if (10 < uVar6) {
            bVar13 = 0xc < uVar10 - 0x10;
            bVar12 = uVar10 - 0x10 == 0xd;
          }
          if (bVar13 && !bVar12) {
            bVar13 = 2 < uVar10 - 0x3a;
            bVar12 = uVar10 - 0x3a == 3;
          }
          if (!bVar13 || bVar12) {
            if (uVar6 < 0xb) goto LAB_0016d178;
            uVar6 = uVar10 - 0x10;
            bVar13 = 0xc < uVar6;
            bVar12 = uVar6 == 0xd;
            if (0xd < uVar6) {
              bVar13 = 2 < uVar10 - 0x3a;
              bVar12 = uVar10 - 0x3a == 3;
            }
            if (!bVar13 || bVar12) {
LAB_0016d194:
              uVar11 = 0x2d;
            }
            else {
LAB_0016d19c:
              uVar11 = 0;
            }
          }
        }
        else {
          if (iVar3 < 1) goto LAB_0016d154;
LAB_0016cfe4:
          uVar6 = uVar10 - 1;
          bVar13 = 0xb < uVar6;
          bVar12 = uVar6 == 0xc;
          if (0xc < uVar6) {
            bVar13 = 0x3f < uVar10 - 0x12;
            bVar12 = uVar10 - 0x12 == 0x40;
          }
          if (bVar13 && !bVar12) goto LAB_0016d1a0;
          if (0xc < uVar6) {
            if (uVar10 - 0x12 < 0x41) goto LAB_0016d194;
            goto LAB_0016d19c;
          }
LAB_0016d178:
          uVar11 = 0x1e;
        }
      }
LAB_0016d1a0:
      uVar2 = fn_00182994(DAT_008977e4);
      uVar17 = fn_001754f0(uVar2,param_1,param_2);
      uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if (iVar3 != 0) {
        if ((int)uVar17 != 0) goto LAB_0016d330;
        if ((int)uVar16 == 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar5 = fn_0017591c(uVar2,param_1,param_2);
          if (iVar5 == 0) {
            uVar2 = 0;
            if (iVar3 < 1) {
              uVar6 = uVar10 - 1;
              if (4 < uVar6) {
                bVar12 = 8 < uVar10;
                if (uVar10 != 9) {
                  uVar6 = uVar10 - 0x10;
                  bVar12 = 1 < uVar6;
                }
                if ((bVar12 && (uVar10 != 9 && uVar6 != 2)) && (uVar10 != 0x14)) goto LAB_0016d484;
              }
            }
            else {
              bVar12 = 2 < uVar10;
              uVar6 = 0;
              if (uVar10 != 3) {
                uVar6 = uVar10 - 6;
                bVar12 = 6 < uVar6;
              }
              if (bVar12 && (uVar10 != 3 && uVar6 != 7)) {
                bVar13 = uVar10 != 0x10;
                bVar12 = uVar10 - 0x10 == 1;
                if (1 < uVar10 - 0x10) {
                  bVar13 = 5 < uVar10 - 0x54;
                  bVar12 = uVar10 - 0x54 == 6;
                }
                if ((bVar13 && !bVar12) && (uVar10 != 0x19)) {
                  if ((int)uVar10 < 0x1a) {
                    if ((uVar10 == 0x15 || uVar10 == 0x16) || (uVar10 == 0x17 || uVar10 == 0x18))
                    goto LAB_0016d2d0;
                  }
                  else if ((uVar10 == 0x52 || uVar10 == 0x5b) || uVar10 == 0x5f) goto LAB_0016d2d0;
                  goto LAB_0016d484;
                }
              }
            }
LAB_0016d2d0:
            fn_0017a270((int)uVar14);
            uVar2 = extraout_r1_00;
          }
          else {
            uVar2 = fn_00182994(DAT_008977e4);
            uVar17 = fn_0017591c(uVar2,param_1,param_2);
            uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
            if ((int)uVar17 != 0) {
              uVar2 = fn_00182994(DAT_008977e4);
              uVar1 = fn_001659c0(uVar2,iVar8,iVar9);
              uVar2 = fn_00182994(DAT_008977e4);
              fn_00179990(uVar2,(char *)&DAT_00188948,uVar1);
              uVar2 = extraout_r1;
              if (param_3 != 0) goto LAB_0016d46c;
            }
          }
        }
      }
    }
    else {
      if (uVar10 != 0x19) goto LAB_0016d484;
      uVar2 = fn_00182994(DAT_008977e4);
      uVar17 = fn_00174d30(uVar2,0x19,param_1,param_2);
      uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 == 0) {
        if ((iVar3 != 0) && ((int)uVar16 == 0)) {
          uVar2 = fn_00182994(DAT_008977e4);
          uVar17 = fn_0017591c(uVar2,param_1,param_2);
          uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 == 0) {
            if (0 < iVar3) {
              fn_0017a270((int)uVar14,0);
              uVar2 = extraout_r1_04;
            }
            goto LAB_0016d484;
          }
          uVar2 = fn_00182994(DAT_008977e4);
          uVar17 = fn_0017591c(uVar2,param_1,param_2);
          uVar2 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 == 0) goto LAB_0016d484;
          uVar2 = fn_00182994(DAT_008977e4);
          uVar1 = fn_001659c0(uVar2,iVar8,iVar9);
          uVar2 = fn_00182994(DAT_008977e4);
          fn_00179990(uVar2,(char *)&DAT_00188948,uVar1);
          uVar2 = extraout_r1_02;
          if (param_3 == 0) goto LAB_0016d484;
LAB_0016d46c:
          piVar7 = (int *)fn_00182994(DAT_008977e4);
          (**(code **)(*piVar7 + 0x14))(piVar7,(char *)&DAT_0017a370);
          uVar2 = extraout_r1_03;
        }
      }
      else {
LAB_0016d330:
        uVar2 = fn_00182994(DAT_008977e4);
        uVar6 = fn_001659c0(uVar2,iVar8,iVar9);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_001749e8(uVar2,uVar6 & 0xff,1);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_001757a4(uVar2,uVar6 & 0xff);
        fn_0017a71c(uVar6,param_4,param_3);
        fn_0017a37c(uVar6);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_001752d8(uVar2,uVar6 & 0xff);
        uVar2 = fn_00182994(DAT_008977e4);
        fn_00174c60(uVar2,uVar6 & 0xff);
        uVar2 = extraout_r1_01;
      }
    }
LAB_0016d484:
    uVar10 = uVar10 + 1;
    if (0x60 < (int)uVar10) {
      return uVar11;
    }
  } while( true );
}


