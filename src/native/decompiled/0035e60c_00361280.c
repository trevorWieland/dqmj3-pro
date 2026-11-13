#include "0035e60c_00361280.h"



void fn_00361280(int param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  iVar3 = fn_002fb61c();
  if ((iVar3 == 0) && (iVar3 = fn_00341260(0xffffffff), iVar3 == 0)) {
    iVar8 = 0;
    iVar9 = *(int *)(DAT_008977e0 + 0xa8);
    iVar3 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28)) / 0x2c;
    if (0 < iVar3) {
      uVar14 = 0;
      do {
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar8 * 0x2c);
        if (puVar7[9] == iVar9) {
          iVar4 = *(int *)(puVar7[5] + 8);
          iVar5 = fn_006f7a84(DAT_008977e0);
          fVar12 = *(float *)(iVar4 + 0x14) - *(float *)(iVar5 + 0x20);
          fVar11 = *(float *)(iVar4 + 0x18) - *(float *)(iVar5 + 0x24);
          fVar10 = *(float *)(iVar4 + 0x1c) - *(float *)(iVar5 + 0x28);
          fVar13 = (float)uVar14;
          bVar1 = fVar12 == fVar13;
          fVar2 = *(float *)(iVar4 + 0x18);
          if (bVar1) {
            fVar2 = fVar11;
          }
          if (((!bVar1 || (!bVar1 || fVar2 != fVar13)) || fVar10 != fVar13) &&
             (0x461c3fff < (int)(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10))) {
            iVar4 = fn_00145b00(0x1b8,&DAT_00812c8c);
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = fn_002a747c(iVar4,puVar7 + 1,*puVar7);
            }
            uVar6 = fn_002ff310(2);
            *(undefined4 *)(iVar4 + 0x13c) = uVar6;
            uVar6 = fn_006f7a70(DAT_008977e0);
            fn_002fe310(uVar6,iVar4,0xffffffff);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar3);
    }
  }
  return;
}



void fn_0035e60c(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint extraout_r1;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  bool bVar17;
  int *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = fn_002fb61c();
  if (iVar3 != 0) {
    fn_006f7a70(DAT_008977e0);
    bVar2 = 0;
    do {
      local_48 = (int *)0x0;
      local_44 = (int *)0x0;
      local_40 = 0;
      iVar3 = fn_006f7a0c(DAT_008977e0);
      (**(code **)(**(int **)(iVar3 + 0x50) + 0x5c))(*(int **)(iVar3 + 0x50),&local_48,bVar2);
      if (local_48 == local_44) {
        fn_001008c4(local_48,(local_40 - (int)local_48) / 0x28,0);
      }
      else {
        uVar4 = fn_006f7a70(DAT_008977e0);
        local_3c = 0;
        local_34 = 0;
        local_30 = 0;
        iVar14 = 0;
        local_2c = 0;
        iVar3 = ((int)local_44 - (int)local_48) / 0x28;
        piVar13 = local_48;
        piVar8 = local_44;
        if (0 < iVar3) {
          do {
            piVar13 = local_48 + iVar14 * 10;
            fn_001782b8(&local_34,*piVar13,8);
            uVar5 = (uint)(char)local_34;
            uVar12 = extraout_r1;
            if (uVar5 == 0x6f) {
              uVar12 = (uint)((unsigned int)(local_34) >> 8) & 0xff;
            }
            if (uVar5 == 0x6f && uVar12 == 0x5f) {
              iVar10 = *(int *)(param_1 + 0x14);
              iVar9 = 0;
              if (0 < iVar10) {
                do {
                  iVar16 = *(int *)(param_1 + 0x10) + iVar9 * 9;
                  iVar6 = fn_00147e6c(iVar16,&local_34,8);
                  if (iVar6 == 0) {
                    uVar15 = *(undefined1 *)(iVar16 + 8);
                    goto LAB_0035e7b0;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar10);
              }
              uVar15 = 0;
LAB_0035e7b0:
              iVar10 = -1;
              iVar9 = fn_0026e5c4(uVar15);
              if (iVar9 != 0) {
                uVar7 = fn_006f7a9c(DAT_008977e0);
                iVar10 = fn_006b77f0(uVar7,&local_34);
                if (iVar10 == -1) {
                  iVar10 = fn_002772e4(uVar7,&local_34);
                }
              }
              piVar8 = (int *)fn_006c2a94(param_1,uVar15);
              fn_00300300(uVar4,piVar8,iVar10,bVar2);
              (**(code **)(*piVar8 + 0x10))(piVar8,piVar13 + 1);
              (**(code **)(*piVar8 + 0x14))(piVar8,piVar13 + 4);
              (**(code **)(*piVar8 + 0x18))(piVar8,piVar13 + 7);
              piVar8[0x4e] = piVar8[0x4e] | 8;
              fn_001d96a0(piVar8,&DAT_007bef6c);
              fn_003605bc(param_1,uVar15,piVar8,*piVar13);
            }
            else {
              if (uVar5 == 0x66) {
                uVar12 = (uint)((unsigned int)(local_34) >> 8) & 0xff;
              }
              if (uVar5 == 0x66 && uVar12 == 0x6c) {
                if (((DAT_008918d0 & 1) == 0) && (iVar9 = fn_00303afc(&DAT_008918d0), iVar9 != 0))
                {
                  DAT_008918c9 = fn_002febd8((char *)&DAT_007bef78);
                }
                iVar9 = fn_00147e6c(&local_34,(char *)&DAT_007bef78,DAT_008918c9);
                if (iVar9 == 0) {
                  if (local_3c == 0) {
                    iVar10 = fn_00145b00(0x2c,&DAT_00812c8c);
                    iVar9 = 0;
                    if (iVar10 != 0) {
                      iVar9 = fn_003d4e30();
                    }
                    local_3c = iVar9;
                  }
                  fn_003d4df8(local_3c,piVar13 + 1,piVar13 + 4,piVar13 + 7);
                }
              }
              else {
                if (uVar5 == 0x61) {
                  uVar12 = (uint)((unsigned int)(local_34) >> 8) & 0xff;
                }
                if (uVar5 == 0x61 && uVar12 == 0x72) {
                  if (((DAT_008918d4 & 1) == 0) && (iVar9 = fn_00303afc(&DAT_008918d4), iVar9 != 0)
                     ) {
                    DAT_008918ca = fn_002febd8((char *)&DAT_007bef50);
                  }
                  iVar9 = fn_00147e6c(&local_34,(char *)&DAT_007bef50,DAT_008918ca);
                  if (iVar9 == 0) {
                    if (local_3c == 0) {
                      iVar10 = fn_00145b00(0x2c,&DAT_00812c8c);
                      iVar9 = 0;
                      if (iVar10 != 0) {
                        iVar9 = fn_003d4e30();
                      }
                      local_3c = iVar9;
                    }
                    fn_003d46b8(local_3c,piVar13 + 1,piVar13 + 4,piVar13 + 7);
                  }
                }
                else {
                  bVar17 = uVar5 == 0x73;
                  if (bVar17) {
                    uVar5 = (uint)((unsigned int)(local_34) >> 8) & 0xff;
                  }
                  if (bVar17 && uVar5 == 0x74) {
                    if (((DAT_008918d8 & 1) == 0) &&
                       (iVar9 = fn_00303afc(&DAT_008918d8), iVar9 != 0)) {
                      DAT_008918cb = fn_002febd8((char *)&DAT_007bef4a);
                    }
                    iVar9 = fn_00147e6c(&local_34,(char *)&DAT_007bef4a,DAT_008918cb);
                    if (iVar9 == 0) {
                      if (local_3c == 0) {
                        iVar10 = fn_00145b00(0x2c,&DAT_00812c8c);
                        iVar9 = 0;
                        if (iVar10 != 0) {
                          iVar9 = fn_003d4e30();
                        }
                        local_3c = iVar9;
                      }
                      fn_003d4e14(local_3c,piVar13 + 1);
                    }
                  }
                }
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar3);
          piVar13 = local_48;
          piVar8 = local_44;
          if (local_3c != 0) {
            fn_00423c94(uVar4,bVar2,local_3c);
            piVar13 = local_48;
            piVar8 = local_44;
          }
        }
        for (; piVar1 = local_44, piVar13 != local_44; piVar13 = piVar13 + 10) {
          local_44 = piVar8;
          if ((undefined1 *)*piVar13 != &DAT_008f9d04) {
            piVar11 = (int *)((undefined1 *)*piVar13 + -0xc);
            iVar3 = *piVar11;
            if (iVar3 == -1) {
LAB_0035eac0:
              fn_001008c4(*piVar13 + -0xc,*(int *)(*piVar13 + -8) + 0xe,0);
            }
            else if (piVar11 != &DAT_008f9cf8) {
              *piVar11 = iVar3 + -1;
              if (iVar3 == 0) goto LAB_0035eac0;
            }
          }
          piVar8 = local_44;
          local_44 = piVar1;
        }
        local_44 = piVar8;
        fn_001008c4(local_48,(local_40 - (int)local_48) / 0x28,0);
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < 10);
  }
  return;
}


