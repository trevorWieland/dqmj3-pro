#include "004664cc_004664cc.h"



int fn_004664cc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  code *pcVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_24;
  undefined1 auStack_20 [4];
  
  *param_1 = &DAT_00852dc4;
  fn_00465808(param_1);
  if (param_1[0x2b] != 0) {
    fn_00472008(param_1[1] + 0x14);
    piVar8 = (int *)param_1[0x2b];
    puVar6 = (uint *)(piVar8 + 1);
    do {
      uVar1 = *puVar6 - 1;
      bVar13 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar13);
    *puVar6 = uVar1;
    bVar13 = uVar1 == 0;
    if (bVar13) {
      uVar1 = (uint)*(byte *)(piVar8 + 2);
    }
    if (bVar13 && uVar1 == 0) {
      *(undefined1 *)(piVar8 + 2) = 1;
      (**(code **)(*piVar8 + 4))(piVar8);
    }
    param_1[0x2b] = 0;
  }
  piVar8 = (int *)param_1[0x27];
  if ((int *)param_1[0x28] != piVar8) {
    do {
      iVar11 = *piVar8;
      iVar2 = fn_001249d0();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      (**(code **)(*(int *)(iVar2 + 0x50) + 8))();
      iVar2 = *(int *)(*(int *)(iVar11 + 0x14) + 8);
      if (iVar2 == *(int *)(*piVar8 + 0x14)) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(iVar2 + 0x18);
      }
      while (iVar11 != 0) {
        fn_00472008(param_1[1] + 0x14);
        iVar11 = *(int *)(iVar2 + 0xc);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar11 = *(int *)(iVar2 + 4);
          if (iVar2 == *(int *)(iVar11 + 0xc)) {
            do {
              iVar2 = iVar11;
              iVar11 = *(int *)(iVar2 + 4);
            } while (iVar2 == *(int *)(iVar11 + 0xc));
          }
          if (*(int *)(iVar2 + 0xc) != iVar11) {
            iVar2 = iVar11;
          }
        }
        else {
          do {
            iVar2 = iVar11;
            iVar11 = *(int *)(iVar2 + 8);
          } while (*(int *)(iVar2 + 8) != 0);
        }
        if (iVar2 == *(int *)(*piVar8 + 0x14)) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar2 + 0x18);
        }
      }
      iVar2 = fn_001249d0();
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc);
      }
      (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))();
      fn_0046bcb8(*piVar8);
      if ((*piVar8 != 0) && (iVar2 = fn_0046bfa0(), iVar2 != 0)) {
        if (*(code **)(iVar2 + -8) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar2 + -8))();
        }
      }
      piVar8 = piVar8 + 1;
    } while ((int *)param_1[0x28] != piVar8);
  }
  piVar8 = (int *)param_1[0x24];
  if ((int *)param_1[0x25] != piVar8) {
    do {
      iVar11 = *piVar8;
      iVar2 = *(int *)(*(int *)(iVar11 + 0x14) + 8);
      if (iVar2 != *(int *)(iVar11 + 0x14)) {
        do {
          piVar10 = *(int **)(iVar2 + 0x18);
          puVar6 = (uint *)(piVar10 + 1);
          do {
            uVar1 = *puVar6 - 1;
            bVar13 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar13);
          *puVar6 = uVar1;
          bVar13 = uVar1 == 0;
          if (bVar13) {
            uVar1 = (uint)*(byte *)(piVar10 + 2);
          }
          if (bVar13 && uVar1 == 0) {
            *(undefined1 *)(piVar10 + 2) = 1;
            (**(code **)(*piVar10 + 4))(piVar10);
          }
          iVar3 = *(int *)(iVar2 + 0xc);
          if (*(int *)(iVar2 + 0xc) == 0) {
            iVar3 = *(int *)(iVar2 + 4);
            if (iVar2 == *(int *)(iVar3 + 0xc)) {
              do {
                iVar2 = iVar3;
                iVar3 = *(int *)(iVar2 + 4);
              } while (iVar2 == *(int *)(iVar3 + 0xc));
            }
            if (*(int *)(iVar2 + 0xc) != iVar3) {
              iVar2 = iVar3;
            }
          }
          else {
            do {
              iVar2 = iVar3;
              iVar3 = *(int *)(iVar2 + 8);
            } while (*(int *)(iVar2 + 8) != 0);
          }
          fn_00767400(&local_24,iVar11 + 4);
        } while (iVar2 != *(int *)(iVar11 + 0x14));
      }
      iVar2 = *piVar8;
      if (iVar2 != 0) {
        fn_0048c3a4(iVar2);
        piVar10 = (int *)(iVar2 + 4);
        if (*(int *)(iVar2 + 0x14) != 0) {
          local_24 = *(int *)(iVar2 + 0x14);
          fn_00767a60(auStack_20,piVar10);
          iVar11 = *(int *)(iVar2 + 0x14);
          *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar2 + 8);
          *(int *)(iVar2 + 8) = iVar11;
          piVar4 = (int *)*piVar10;
          while (piVar4 != (int *)0x0) {
            *piVar10 = *piVar4;
            if (piVar4[2] != 0) {
              pcVar7 = *(code **)(piVar4[2] + -8);
              if (pcVar7 == (code *)0x0) {
                fn_0030233c();
              }
              else {
                (*pcVar7)();
              }
            }
            if (piVar4 != (int *)0x0) {
              if ((code *)piVar4[-2] == (code *)0x0) {
                fn_0030233c(piVar4 + -2);
              }
              else {
                (*(code *)piVar4[-2])();
              }
            }
            piVar4 = (int *)*piVar10;
          }
        }
        if (iVar2 != 0) {
          if (*(code **)(iVar2 + -8) == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (**(code **)(iVar2 + -8))();
          }
        }
      }
      piVar8 = piVar8 + 1;
    } while ((int *)param_1[0x25] != piVar8);
  }
  puVar12 = (undefined4 *)param_1[0x4c];
  if ((undefined4 *)param_1[0x4d] != puVar12) {
    do {
      piVar8 = (int *)*puVar12;
      if (piVar8 != (int *)0x0) {
        puVar6 = (uint *)(piVar8 + 1);
        do {
          uVar1 = *puVar6 - 1;
          bVar13 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar13);
        *puVar6 = uVar1;
        bVar13 = uVar1 == 0;
        if (bVar13) {
          uVar1 = (uint)*(byte *)(piVar8 + 2);
        }
        if (bVar13 && uVar1 == 0) {
          *(undefined1 *)(piVar8 + 2) = 1;
          (**(code **)(*piVar8 + 4))(piVar8);
        }
      }
      puVar12 = puVar12 + 1;
    } while ((undefined4 *)param_1[0x4d] != puVar12);
  }
  piVar8 = param_1 + 0xd0;
  if (param_1[0xd4] != 0) {
    local_24 = param_1[0xd4];
    fn_0077ba40(auStack_20,piVar8);
    iVar2 = param_1[0xd4];
    *(undefined4 *)(iVar2 + 0xc) = param_1[0xd1];
    param_1[0xd1] = iVar2;
    piVar10 = (int *)*piVar8;
    while (piVar10 != (int *)0x0) {
      *piVar8 = *piVar10;
      if (piVar10[2] != 0) {
        pcVar7 = *(code **)(piVar10[2] + -8);
        if (pcVar7 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar7)();
        }
      }
      if (piVar10 != (int *)0x0) {
        if ((code *)piVar10[-2] == (code *)0x0) {
          fn_0030233c(piVar10 + -2);
        }
        else {
          (*(code *)piVar10[-2])();
        }
      }
      piVar10 = (int *)*piVar8;
    }
  }
  iVar2 = fn_0045c774(param_1 + 0x80);
  *(undefined **)(iVar2 + -0x18) = &DAT_00853628;
  piVar8 = *(int **)(iVar2 + -0x10);
  if (piVar8 != (int *)0x0) {
    puVar6 = (uint *)(piVar8 + 1);
    do {
      uVar1 = *puVar6 - 1;
      bVar13 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar13);
    *puVar6 = uVar1;
    bVar13 = uVar1 == 0;
    if (bVar13) {
      uVar1 = (uint)*(byte *)(piVar8 + 2);
    }
    if (bVar13 && uVar1 == 0) {
      *(undefined1 *)(piVar8 + 2) = 1;
      (**(code **)(*piVar8 + 4))();
    }
  }
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0x14) = 0;
  *(undefined4 *)(iVar2 + -0xc) = 0;
  uVar14 = fn_00466f1c(iVar2 + -0x88);
  uVar1 = (uint)((ulonglong)uVar14 >> 0x20);
  iVar2 = (int)uVar14;
  if (*(int *)(iVar2 + -0x14) != 0) {
    pcVar7 = *(code **)(*(int *)(iVar2 + -0x14) + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
      uVar1 = extraout_r1_00;
    }
    else {
      (*pcVar7)();
      uVar1 = extraout_r1;
    }
  }
  if (*(int *)(iVar2 + -0x3c) != 0) {
    pcVar7 = *(code **)(*(int *)(iVar2 + -0x3c) + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
      uVar1 = extraout_r1_02;
    }
    else {
      (*pcVar7)();
      uVar1 = extraout_r1_01;
    }
  }
  uVar5 = *(uint *)(iVar2 + -0x48);
  uVar9 = *(uint *)(iVar2 + -0x44);
  if (uVar5 < uVar9) {
    uVar1 = uVar9 - uVar5;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 << 0x1d;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = uVar1 + 1;
  if ((int)uVar1 < ((int)(uVar9 - uVar5) >> 2) + 1) {
    do {
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < ((int)(uVar9 - uVar5) >> 2) + 1);
  }
  if (uVar5 != 0) {
    if (*(code **)(uVar5 - 8) == (code *)0x0) {
      fn_0030233c();
      uVar1 = extraout_r1_04;
    }
    else {
      (**(code **)(uVar5 - 8))();
      uVar1 = extraout_r1_03;
    }
  }
  uVar5 = *(uint *)(iVar2 + -0xdc);
  uVar9 = *(uint *)(iVar2 + -0xd8);
  if (uVar5 < uVar9) {
    uVar1 = uVar9 - uVar5;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 << 0x1d;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  uVar1 = uVar1 + 1;
  if ((int)uVar1 < ((int)(uVar9 - uVar5) >> 2) + 1) {
    do {
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < ((int)(uVar9 - uVar5) >> 2) + 1);
  }
  if (uVar5 != 0) {
    if (*(code **)(uVar5 - 8) == (code *)0x0) {
      fn_0030233c();
      uVar1 = extraout_r1_06;
    }
    else {
      (**(code **)(uVar5 - 8))();
      uVar1 = extraout_r1_05;
    }
  }
  uVar5 = *(uint *)(iVar2 + -0xe8);
  uVar9 = *(uint *)(iVar2 + -0xe4);
  if (uVar5 < uVar9) {
    uVar1 = uVar9 - uVar5;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 << 0x1d;
  }
  if (uVar5 < uVar9) {
    uVar1 = uVar1 >> 0x1f;
  }
  else {
    uVar1 = 0;
  }
  iVar11 = uVar1 + 1;
  if (iVar11 < ((int)(uVar9 - uVar5) >> 2) + 1) {
    do {
      iVar11 = iVar11 + 2;
    } while (iVar11 < ((int)(uVar9 - uVar5) >> 2) + 1);
  }
  if (uVar5 != 0) {
    if (*(code **)(uVar5 - 8) == (code *)0x0) {
      fn_0030233c();
      iVar11 = extraout_r1_08;
    }
    else {
      (**(code **)(uVar5 - 8))();
      iVar11 = extraout_r1_07;
    }
  }
  puVar12 = (undefined4 *)(iVar2 + -0x178);
  *puVar12 = &DAT_00855bcc;
  piVar8 = *(int **)(iVar2 + -0x174);
  if (piVar8 != (int *)0x0) {
    iVar11 = *(int *)(iVar2 + -0x100);
  }
  if (piVar8 != (int *)0x0 && iVar11 != 0) {
    (**(code **)(*piVar8 + 0x7c))(piVar8,iVar11,puVar12);
    iVar11 = extraout_r1_09;
  }
  *(undefined4 *)(iVar2 + -0x100) = 0;
  piVar8 = *(int **)(iVar2 + -0x174);
  if (piVar8 != (int *)0x0) {
    iVar11 = *(int *)(iVar2 + -0xfc);
  }
  if (piVar8 != (int *)0x0 && iVar11 != 0) {
    (**(code **)(*piVar8 + 0x74))(piVar8,iVar11,puVar12);
  }
  *(undefined4 *)(iVar2 + -0xfc) = 0;
  (**(code **)(*DAT_008b6404 + 0x10))(DAT_008b6404,iVar2 + -0x170);
  iVar2 = fn_0013ce98(iVar2 + -0x170);
  return iVar2 + -8;
}


