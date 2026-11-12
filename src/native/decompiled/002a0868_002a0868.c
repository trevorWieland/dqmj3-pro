#include "002a0868_002a0868.h"



int fn_002a0868(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  float in_s0;
  float in_s1;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_2c;
  
  uVar17 = (ulonglong)param_5;
  fn_00182994(DAT_008977e4);
  iVar12 = (int)(char)param_2;
  uVar2 = fn_001659c0();
  uVar3 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001657c8(uVar3,iVar12);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00154c7c(uVar3,param_2,param_1,0);
  if (iVar4 != 0) {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00155348(uVar3,param_2,param_1);
    if (iVar4 != 0) {
      bVar15 = true;
      goto LAB_002a0904;
    }
  }
  bVar15 = false;
LAB_002a0904:
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_001754f0(uVar3,param_2,param_1);
  local_2c = param_3;
  if (iVar4 == 0) {
    if (bVar15) {
      fn_0017a2fc(param_1,0,param_2);
    }
    else {
      uVar17 = CONCAT44(0x40800000,(int)uVar17);
      fVar20 = 1.0;
      fVar18 = 30.0;
      uVar13 = 1;
LAB_002a095c:
      do {
        uVar3 = fn_00182994(DAT_008977e4);
        iVar4 = fn_00174c34(uVar3,uVar13,param_2,param_1);
        uVar3 = fn_00182994(DAT_008977e4);
        iVar5 = fn_00174d30(uVar3,uVar13,param_2,param_1);
        if (iVar5 != 0 || iVar4 != 0) {
          if (iVar4 == 0) {
            if (iVar5 != 0) {
              if (uVar13 == 4) {
LAB_002a0d28:
                iVar14 = uVar13 + 500;
                uVar3 = fn_00182994(DAT_008977e4);
                iVar6 = fn_001754ac(uVar3,uVar1);
                uVar3 = fn_00182994(DAT_008977e4);
LAB_002a0c20:
                fn_00164c80(uVar3,iVar6,iVar14);
              }
              else if ((int)uVar13 < 5) {
                if (uVar13 == 2 || uVar13 == 3) goto LAB_002a0d28;
              }
              else if (uVar13 == 5 || uVar13 == 0x42) goto LAB_002a0d28;
            }
          }
          else if (param_1 == 0) {
            if (iVar4 < 1) {
              if ((uVar13 == 2 || uVar13 == 3) || (uVar13 == 4 || uVar13 == 5)) {
                fn_00182994(DAT_008977e4);
                iVar6 = fn_00165248();
                if (iVar6 == 1) {
                  iVar6 = uVar13 + 300;
                  uVar3 = fn_00182994(DAT_008977e4);
                  iVar14 = 0;
                  goto LAB_002a0c20;
                }
                bVar15 = false;
                iVar14 = 0;
                uVar3 = param_2;
                uVar7 = fn_00182994(DAT_008977e4);
                iVar6 = fn_0016561c(uVar7,iVar12);
                if (0 < iVar6) {
                  do {
                    iVar6 = 1;
                    do {
                      uVar7 = fn_00182994(DAT_008977e4);
                      iVar8 = fn_00174b40(uVar7,iVar6,uVar3,iVar14);
                      uVar7 = fn_00182994(DAT_008977e4);
                      iVar9 = fn_00174c34(uVar7,iVar6,uVar3,iVar14);
                      if (iVar8 != 0 && iVar9 != 0) {
                        bVar15 = true;
                      }
                      iVar6 = iVar6 + 1;
                    } while (iVar6 < 0x61);
                    iVar14 = iVar14 + 1;
                    uVar7 = fn_00182994(DAT_008977e4);
                    iVar6 = fn_0016561c(uVar7,iVar12);
                  } while (iVar14 < iVar6);
                  if (bVar15) {
                    iVar6 = uVar13 + 100;
                    uVar3 = fn_00182994(DAT_008977e4);
                    iVar14 = 0;
                    goto LAB_002a0c20;
                  }
                }
              }
            }
            else {
              if (uVar13 != 7) {
                if ((int)uVar13 < 8) {
                  if (4 < uVar13 - 2) goto LAB_002a0c5c;
                }
                else if (uVar13 != 10) {
                  if ((int)uVar13 < 0xb) {
                    if (uVar13 == 8 || uVar13 == 9) goto LAB_002a0a00;
                  }
                  else if (uVar13 == 0xb || uVar13 == 0x52) goto LAB_002a0a00;
                  goto LAB_002a0c5c;
                }
              }
LAB_002a0a00:
              fn_00182994(DAT_008977e4);
              iVar6 = fn_00165248();
              if (iVar6 == 1) {
                iVar6 = uVar13 + 100;
                uVar3 = fn_00182994(DAT_008977e4);
                iVar14 = 2;
                goto LAB_002a0c20;
              }
              bVar15 = false;
              iVar14 = 0;
              uVar3 = param_2;
              uVar7 = fn_00182994(DAT_008977e4);
              iVar6 = fn_0016561c(uVar7,iVar12);
              if (0 < iVar6) {
                do {
                  iVar6 = 1;
                  do {
                    uVar7 = fn_00182994(DAT_008977e4);
                    iVar8 = fn_00174b40(uVar7,iVar6,uVar3,iVar14);
                    uVar7 = fn_00182994(DAT_008977e4);
                    iVar9 = fn_00174c34(uVar7,iVar6,uVar3,iVar14);
                    if (iVar8 != 0 && iVar9 != 0) {
                      bVar15 = true;
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < 0x61);
                  iVar14 = iVar14 + 1;
                  uVar7 = fn_00182994(DAT_008977e4);
                  iVar6 = fn_0016561c(uVar7,iVar12);
                } while (iVar14 < iVar6);
                if (bVar15) {
                  uVar3 = fn_00182994(DAT_008977e4);
                  fn_00164c80(uVar3,uVar13 + 100,2);
                }
              }
            }
          }
LAB_002a0c5c:
          uVar3 = fn_00182994(DAT_008977e4);
          iVar6 = fn_00174b40(uVar3,uVar13,param_2,param_1);
          uVar3 = fn_00182994(DAT_008977e4);
          uVar10 = fn_0017591c(uVar3,param_2,param_1);
          if (iVar6 == 0) {
            if (iVar4 != 0) {
              if (uVar10 == 0) {
                if (iVar4 < 1) {
                  if (uVar13 == 1) {
                    fn_0016ccc8(param_2,param_1);
                    piVar11 = (int *)fn_00182994(DAT_008977e4);
                    (**(code **)(*piVar11 + 0x14))(piVar11,(char *)&DAT_002a1064);
                    goto LAB_002a0f94;
                  }
                  uVar10 = uVar13 - 1;
                  if (4 < uVar10) {
                    bVar15 = 8 < uVar13;
                    if (uVar13 != 9) {
                      uVar10 = uVar13 - 0x10;
                      bVar15 = 1 < uVar10;
                    }
                    if ((bVar15 && (uVar13 != 9 && uVar10 != 2)) && (uVar13 != 0x14))
                    goto LAB_002a0f94;
                  }
                }
                else {
                  if (uVar13 == 1) goto LAB_002a0e78;
                  bVar15 = 2 < uVar13;
                  uVar10 = 0;
                  if (uVar13 != 3) {
                    uVar10 = uVar13 - 6;
                    bVar15 = 6 < uVar10;
                  }
                  if (bVar15 && (uVar13 != 3 && uVar10 != 7)) {
                    bVar16 = uVar13 != 0x10;
                    bVar15 = uVar13 - 0x10 == 1;
                    if (1 < uVar13 - 0x10) {
                      bVar16 = 5 < uVar13 - 0x54;
                      bVar15 = uVar13 - 0x54 == 6;
                    }
                    if ((bVar16 && !bVar15) && (uVar13 != 0x19)) {
                      if ((int)uVar13 < 0x1a) {
                        if ((uVar13 == 0x15 || uVar13 == 0x16) || (uVar13 == 0x17 || uVar13 == 0x18)
                           ) goto LAB_002a0ea0;
                      }
                      else if ((uVar13 == 0x52 || uVar13 == 0x5b) || uVar13 == 0x5f)
                      goto LAB_002a0ea0;
                      goto LAB_002a0f94;
                    }
                  }
                }
LAB_002a0ea0:
                uVar3 = fn_00182994(DAT_008977e4);
                uVar3 = fn_00174bac(uVar3,uVar2 & 0xff);
                fn_0017a7fc(uVar3,0);
                fVar19 = in_s0;
                in_s0 = fVar20;
                uVar3 = fn_00182994(DAT_008977e4);
                in_s1 = (float)(int)in_s1;
                fVar20 = in_s0;
                fn_001755cc(uVar3,uVar2 & 0xff,7,0,1,(int)fVar19,in_s1);
                piVar11 = (int *)fn_00182994(DAT_008977e4);
                (**(code **)(*piVar11 + 0x14))(piVar11,(char *)&DAT_002a1064);
              }
              else if (iVar4 < 1) {
                if ((uVar13 == 1) || (uVar13 != 0xe && uVar13 != 0xf)) goto LAB_002a0e00;
              }
              else if ((uVar13 == 1) || (uVar13 != 0xe && uVar13 != 0xf)) {
LAB_002a0e00:
                fn_0016c1f4(uVar2,(char *)&DAT_002a1050);
              }
            }
          }
          else if (iVar4 != 0) {
            if (iVar4 < 1) {
              bVar15 = 0xf < uVar13;
              if (uVar13 != 0x10) {
                uVar10 = uVar13 - 0x12;
                bVar15 = 0x3a < uVar10;
              }
              if (!bVar15 || (uVar13 == 0x10 || uVar10 == 0x3b)) {
                uVar3 = fn_00182994(DAT_008977e4);
                fn_00182c40(uVar3,uVar2 & 0xff,7,4);
                if (local_2c != -1) {
                  uVar3 = fn_00182994(DAT_008977e4);
                  fn_001483c0(uVar3,local_2c);
                }
                uVar3 = fn_00182994(DAT_008977e4);
                in_s0 = (float)(uVar17 >> 0x20);
                fn_0016a6d0(uVar3,uVar2 & 0xff,0);
              }
            }
            else if (uVar13 - 6 < 8) {
              uVar3 = fn_00182994(DAT_008977e4);
              fn_00182c40(uVar3,uVar2 & 0xff,7,4);
              if (local_2c != -1) {
                uVar3 = fn_00182994(DAT_008977e4);
                fn_001483c0(uVar3,local_2c);
              }
              uVar3 = fn_00182994(DAT_008977e4);
              in_s0 = (float)(uVar17 >> 0x20);
              local_2c = fn_0016a6d0(uVar3,uVar2 & 0xff,0);
            }
            if (uVar13 == 1) {
LAB_002a0e78:
              fn_0016ccc8(param_2,param_1);
            }
          }
LAB_002a0f94:
          uVar3 = fn_00182994(DAT_008977e4);
          iVar4 = fn_001754f0(uVar3,param_2,param_1);
          if (uVar13 == 0x45) {
            if ((iVar5 != 0) && (iVar4 == 0)) {
              in_s0 = fVar18;
              uVar3 = fn_00182994(DAT_008977e4);
              fVar18 = in_s0;
              fn_0015ad60(uVar3,uVar2 & 0xff);
            }
            uVar13 = 0x46;
            goto LAB_002a095c;
          }
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < 0x61);
    }
  }
  fn_002a0224(param_2,param_1,0,param_4,(int)uVar17);
  uVar3 = fn_00182994(DAT_008977e4);
  fn_0016498c(uVar3,param_2,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  fn_001649ec(uVar3,iVar12,(int)(char)param_1);
  return local_2c;
}


