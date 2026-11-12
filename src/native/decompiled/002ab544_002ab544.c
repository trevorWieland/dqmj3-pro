#include "002ab544_002ab544.h"



void fn_002ab544(int *param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  
  fn_002acc2c();
  if (0 < param_1[0xb]) {
    param_1[0xb] = param_1[0xb] + -1;
    return;
  }
  uVar3 = fn_006f7a48(DAT_008977e0);
  switch((char)param_1[1]) {
  default:
    goto switchD_002ab57c_caseD_0;
  case '\x01':
    fn_006f72b4(DAT_008977e0);
    uVar7 = fn_006b1564();
    uVar8 = fn_006a7e1c(uVar3);
    uVar9 = fn_006a7eb8(uVar3);
    iVar6 = (**(code **)(*param_1 + 0x68))(param_1);
    if (iVar6 == 0) {
      uVar8 = uVar8 | uVar7;
    }
    else {
      uVar9 = uVar9 | uVar7;
      uVar8 = fn_006a7ca4(uVar3);
    }
    if (uVar8 == 0) {
      fn_006f72b4();
      iVar6 = fn_006b1550();
      if (iVar6 != 0) {
        fn_006f72b4(DAT_008977e0);
        iVar6 = fn_006b1c64();
        if (iVar6 != 0) {
          fn_00274d34(param_1[2],0);
          fn_00696994(DAT_008977e0,0xd2,0);
          fn_00698fb8(DAT_008977e0,0);
          goto LAB_002ac82c;
        }
      }
      iVar6 = fn_006a7d2c(uVar3);
      if ((iVar6 == 0) || ((char)param_1[0xc] != '\0')) {
        iVar6 = fn_006a7e5c(uVar3);
        if (iVar6 != 0) {
          iVar6 = param_1[3];
          uVar7 = param_1[8] - param_1[7];
          bVar12 = iVar6 == 0;
          iVar4 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
          iVar4 = (iVar4 >> 4) - (iVar4 >> 0x1f);
          if (-1 < iVar6) {
            bVar12 = iVar4 == iVar6;
          }
          if (((!bVar12 && (-1 < iVar6 && iVar6 <= iVar4)) &&
              (iVar6 = param_1[7] + iVar6 * 0x1c, *(char *)(iVar6 + 0x14) != '\0')) &&
             (*(char *)(param_1[2] + 8) != '\x02')) {
            piVar11 = *(int **)(iVar6 + 4);
            fn_00275800(param_1[2],0);
            switch((char)piVar11[0x37]) {
            case '\x01':
              *(undefined1 *)((int)param_1 + 5) = 1;
              break;
            case '\x02':
              if ((char)piVar11[0x5f] == '!') {
                uVar2 = 4;
              }
              else {
                uVar2 = 5;
              }
              *(undefined1 *)((int)param_1 + 5) = uVar2;
              break;
            case '\x03':
              *(undefined1 *)((int)param_1 + 5) = 3;
              break;
            case '\x04':
              *(undefined1 *)((int)param_1 + 5) = 2;
              break;
            case '\x05':
              *(undefined1 *)((int)param_1 + 5) = 6;
            }
            iVar6 = fn_006a9948(piVar11);
            if ((iVar6 == 0) && ((float)piVar11[0x3e] <= 0.0)) {
              fn_00273534(param_1[2],piVar11);
              (**(code **)(*piVar11 + 0xe0))(piVar11,1);
                    /* WARNING: Subroutine does not return */
              fn_001638a0();
            }
            fn_002af244(param_1);
            goto LAB_002ac82c;
          }
        }
        iVar6 = fn_006a7f18(uVar3);
        if (iVar6 == 0) {
          iVar6 = fn_006a7ed0(uVar3);
          if (iVar6 == 0) {
            if (uVar9 == 0) {
              fn_002aba84(param_1);
            }
            else {
              iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
              if (iVar6 != 0) {
                iVar6 = (**(code **)(*param_1 + 100))(param_1);
                if (iVar6 != 0) {
                  fn_006f7a84(DAT_008977e0);
                  iVar6 = fn_006ab108();
                  if (iVar6 == 0) {
                    if (*(char *)((int)param_1 + 0x31) == '\0') {
                      (**(code **)(*(int *)param_1[0x15] + 8))();
                    }
                    fn_002aafbc(param_1,1);
                    goto LAB_002ac82c;
                  }
                }
                iVar6 = fn_00154ac8(0x4f);
                if (iVar6 == 0) {
                  fn_006f7a84(DAT_008977e0);
                  iVar6 = fn_006ab108();
                  if (iVar6 != 0) goto LAB_002ac7d4;
                  fn_006f7a84(DAT_008977e0);
                  iVar6 = fn_006aa580();
                  if (iVar6 == 0) {
                    fn_006945fc(DAT_008977e0,(char *)&DAT_002ae98c);
                  }
                  else {
                    if ((char)param_1[0x17] != '\0') goto LAB_002ac7d4;
                    fn_006945fc(DAT_008977e0,(char *)&DAT_002ae9a4);
                  }
                }
                else {
LAB_002ac7d4:
                  fn_006945fc(DAT_008977e0,(char *)&DAT_002ae970);
                }
                fn_005fecfc();
              }
            }
          }
          else {
            iVar6 = (**(code **)(*param_1 + 0x68))(param_1);
            if (((iVar6 == 0) && (iVar6 = (**(code **)(*param_1 + 0x74))(param_1), iVar6 != 0)) &&
               (iVar6 = (**(code **)(*param_1 + 100))(param_1), iVar6 != 0)) {
              fn_00699648(DAT_008977e0,0xff,1,1,0x14);
              uVar10 = fn_006f7a48(DAT_008977e0);
              fn_00128744(uVar10,0xffffffff);
              fn_006f72b4(DAT_008977e0);
              fn_0021afb8();
              *(undefined1 *)(param_1 + 1) = 0xc;
            }
          }
        }
        else {
          fn_002ad8e8(param_1,uVar3);
        }
      }
      else {
        param_1[3] = -1;
      }
    }
    else {
      iVar6 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
      if (iVar6 == 0) {
        (**(code **)(*param_1 + 0x38))(param_1);
      }
    }
LAB_002ac82c:
    iVar6 = fn_006a7dd4(uVar3);
    fVar14 = 1.0;
    if (iVar6 == 0) {
      iVar6 = fn_006a7dec(uVar3);
      if (iVar6 == 0) {
        return;
      }
      uVar3 = fn_006f7a5c(DAT_008977e0);
      fVar13 = 45.0;
      fVar1 = fVar14 + (float)param_1[0xd];
      if (45.0 < fVar14 + (float)param_1[0xd]) goto LAB_002ac8a8;
    }
    else {
      uVar3 = fn_006f7a5c(DAT_008977e0);
      fVar13 = 15.0;
      fVar1 = (float)param_1[0xd] - fVar14;
      if ((float)param_1[0xd] - fVar14 < 15.0) goto LAB_002ac8a8;
    }
    fVar13 = fVar1;
LAB_002ac8a8:
    param_1[0xd] = (int)fVar13;
    fn_0017fe34();
    fn_001d6600(uVar3);
    return;
  case '\x04':
    fn_006f72b4(DAT_008977e0);
    iVar6 = fn_006b1564();
    if ((iVar6 == 0) || (iVar6 = (**(code **)(*param_1 + 0x68))(param_1), iVar6 != 0)) {
      switch(*(undefined1 *)((int)param_1 + 5)) {
      default:
        goto switchD_002ad4fc_caseD_0;
      case 1:
        iVar6 = fn_006a7e68(uVar3);
        if (iVar6 != 0) {
          iVar6 = fn_00154ac8(0x48);
          if (iVar6 == 0) {
            return;
          }
          iVar6 = fn_006f6fe8(*(undefined4 *)(DAT_008977e0 + 0x40));
          if (iVar6 != 0) {
            return;
          }
          iVar4 = *(int *)(param_1[7] + param_1[3] * 0x1c + 4);
          iVar6 = fn_006b1384(iVar4);
          if (iVar6 == 0) {
            return;
          }
          piVar11 = *(int **)(iVar4 + 0x198);
          (**(code **)(*piVar11 + 8))(piVar11,1);
                    /* WARNING: Could not recover jumptable at 0x002ad5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x94))(param_1);
          return;
        }
        iVar6 = fn_006a7ec4(uVar3);
        if (iVar6 == 0) {
          iVar6 = fn_006a7e5c(uVar3);
          if ((iVar6 != 0) || (iVar6 = fn_006a7e1c(uVar3), iVar6 != 0)) {
code_r0x002ad640:
                    /* WARNING: Subroutine does not return */
            fn_001638a0();
          }
          fn_006f72b4(DAT_008977e0);
          iVar6 = fn_006b1564();
          if (iVar6 != 0) goto code_r0x002ad640;
          iVar6 = fn_006a7e8c(uVar3);
          if (iVar6 == 0) {
            iVar6 = fn_006a7e98(uVar3);
            if (iVar6 == 0) {
              return;
            }
            iVar6 = fn_00154ac8(0x39);
            if (iVar6 == 0) {
              return;
            }
            iVar6 = param_1[2];
            if (*(char *)(iVar6 + 8) == '\t') {
              return;
            }
            if (*(char *)(iVar6 + 0x48) == '\0') {
              uVar2 = 1;
            }
            else {
              if (*(char *)(iVar6 + 0x48) != '\x01') goto code_r0x00275798;
              uVar2 = 0;
            }
            *(undefined1 *)(iVar6 + 0x48) = uVar2;
code_r0x00275798:
            fn_00275604();
            return;
          }
          iVar6 = fn_00154ac8(0x39);
          if (iVar6 == 0) {
            return;
          }
          iVar6 = param_1[2];
          if (*(char *)(iVar6 + 8) == '\t') {
            return;
          }
          if (*(char *)(iVar6 + 0x48) == '\0') {
            uVar2 = 1;
          }
          else {
            if (*(char *)(iVar6 + 0x48) != '\x01') goto code_r0x002755fc;
            uVar2 = 0;
          }
          *(undefined1 *)(iVar6 + 0x48) = uVar2;
code_r0x002755fc:
          fn_00275604();
          return;
        }
        iVar6 = fn_00154ac8(0x46);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = fn_00271ef0(param_1[2]);
        break;
      case 2:
      case 4:
      case 5:
      case 6:
        iVar6 = fn_006f75ac(DAT_008977e0);
        iVar6 = fn_001759d0(*(undefined4 *)(iVar6 + 8));
        if (iVar6 != 0) {
          return;
        }
        iVar6 = fn_006ac0d8(*(undefined4 *)(DAT_008977e0 + 0x30),4);
        if (iVar6 != 0) {
          return;
        }
        fn_00275800(param_1[2],0);
        fn_00274348(param_1[2]);
        fn_002abbf4(param_1);
        param_1[3] = -1;
        fn_00274d34(param_1[2],1);
        fn_00270664(param_1[2],1);
        fn_006f72b4(DAT_008977e0);
        fn_0021a4cc();
        if ((int *)param_1[0x16] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x16] + 0x14))();
        }
        *(undefined1 *)(param_1 + 1) = 1;
        return;
      case 3:
        if (*(char *)(*(int *)(param_1[7] + param_1[3] * 0x1c + 4) + 0x18b) == '\0') {
          iVar6 = fn_006f75ac(DAT_008977e0);
          iVar6 = fn_001759d0(*(undefined4 *)(iVar6 + 8));
          if (iVar6 != 0) {
            return;
          }
          iVar6 = fn_006ac0d8(*(undefined4 *)(DAT_008977e0 + 0x30),4);
          if (iVar6 == 0) {
            fn_00275800(param_1[2],0);
            fn_00274348(param_1[2]);
            fn_002abbf4(param_1);
            param_1[3] = -1;
            fn_00274d34(param_1[2],1);
            fn_00270664(param_1[2],1);
            fn_006f72b4(DAT_008977e0);
            fn_0021a4cc();
            *(undefined1 *)(param_1 + 1) = 1;
            return;
          }
          return;
        }
        iVar6 = fn_006a7ec4(uVar3);
        if (iVar6 == 0) {
          iVar6 = fn_006a7e5c(uVar3);
          if ((iVar6 == 0) && (iVar6 = fn_006a7e1c(uVar3), iVar6 == 0)) {
            fn_006f72b4(DAT_008977e0);
            iVar6 = fn_006b1564();
            if (iVar6 == 0) {
              return;
            }
          }
          goto code_r0x002ad640;
        }
        iVar6 = fn_00154ac8(0x46);
        if (iVar6 == 0) {
          return;
        }
        iVar6 = fn_00271ef0(param_1[2]);
      }
      if (iVar6 != 0) {
        *(undefined1 *)(param_1 + 1) = 5;
        return;
      }
switchD_002ad4fc_caseD_0:
      return;
    }
    iVar6 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
    break;
  case '\x05':
    fn_006f72b4(DAT_008977e0);
    iVar6 = fn_006b1564();
    if ((iVar6 == 0) || (iVar6 = (**(code **)(*param_1 + 0x68))(param_1), iVar6 != 0)) {
      iVar6 = fn_006a7e5c(uVar3);
      iVar4 = fn_006a7e1c(uVar3);
      iVar5 = fn_006a7ec4(uVar3);
      if (iVar5 == 0 && (iVar6 == 0 && iVar4 == 0)) {
        return;
      }
      iVar6 = fn_002723b8(param_1[2]);
      if (iVar6 == 0) {
        return;
      }
      uVar2 = 4;
LAB_002ab768:
      *(undefined1 *)(param_1 + 1) = uVar2;
      return;
    }
    iVar6 = fn_001cf540(*(undefined4 *)(DAT_008977e0 + 0x30));
    break;
  case '\b':
    fn_002aca88(param_1);
    return;
  case '\x0f':
    uVar3 = fn_006f75ac(DAT_008977e0);
    iVar6 = fn_006b5398();
    if (iVar6 != 0) {
      fn_0016b40c(uVar3);
      fn_002abbf4(param_1);
      fn_001f0fb4(*(undefined4 *)(DAT_008977e0 + 0x30),9,0);
      uVar3 = fn_006f7a48(DAT_008977e0);
      fn_00128744(uVar3,2);
      fn_00270664(param_1[2],1);
      uVar2 = 1;
      goto LAB_002ab768;
    }
    goto switchD_002ab57c_caseD_0;
  }
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002ab6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1);
    return;
  }
switchD_002ab57c_caseD_0:
  return;
}


