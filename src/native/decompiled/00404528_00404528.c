#include "00404528_00404528.h"



/* WARNING: Removing unreachable block (ram,0x00404e30) */

void fn_00404528(int param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short *psVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  char local_64 [4];
  uint local_60 [2];
  uint local_58 [13];
  
  uVar10 = 0;
  uVar9 = 0;
  local_80 = 0;
  iVar4 = fn_00174834(DAT_008977e4);
  local_58[0] = iVar4 + 0x180388;
  local_64[0] = '\x14';
  do {
    if ((*(char *)(local_58[0] + local_64[0] * 0x418 + -0x400a) == '\0') ||
       (iVar4 = fn_006f0a18(local_58[0],6), iVar4 != 0)) {
      uVar5 = fn_00182988(DAT_008977e4);
      iVar4 = fn_0026a548(uVar5,local_64);
      uVar10 = uVar10 + *(int *)(iVar4 + 0x14);
    }
    local_64[0] = local_64[0] + '\x01';
  } while (local_64[0] < '\x18');
  cVar2 = '\x10';
  do {
    iVar4 = fn_00174828(DAT_008977e4);
    iVar4 = iVar4 + cVar2 * 0x418;
    if (0 < *(short *)(iVar4 + -0x4080)) {
      cVar1 = *(char *)(iVar4 + -0x4019);
      bVar16 = cVar1 == '\0';
      if (bVar16) {
        cVar1 = *(char *)(iVar4 + -0x400a);
      }
      bVar17 = bVar16 && cVar1 == '\0';
      if (bVar16 && cVar1 == '\0') {
        bVar17 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar17) {
        iVar4 = fn_0068b334((int)*(char *)(iVar4 + -0x4027));
        local_80 = iVar4 + local_80 + 1;
      }
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x14');
  if (local_80 == 0) {
    cVar2 = '\x10';
    do {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + cVar2 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        iVar4 = fn_0068b334((int)*(char *)(iVar4 + -0x4027));
        local_80 = iVar4 + local_80 + 1;
      }
      cVar2 = cVar2 + '\x01';
    } while (cVar2 < '\x14');
  }
  local_78 = CONCAT31(((unsigned int)(local_78) >> 8) & 0xffffff,0x14);
  do {
    if ((*(char *)(local_58[0] + (char)local_78 * 0x418 + -0x400a) == '\0') ||
       (iVar4 = fn_006f0a18(local_58[0],6), iVar4 != 0)) {
      uVar5 = fn_00182988(DAT_008977e4);
      iVar4 = fn_0026a548(uVar5,&local_78);
      uVar9 = uVar9 + *(int *)(iVar4 + 0x18);
    }
    cVar2 = (char)local_78 + '\x01';
    local_78 = CONCAT31(((unsigned int)(local_78) >> 8) & 0xffffff,cVar2);
  } while (cVar2 < '\x18');
  cVar2 = '\x10';
  uVar23 = 0x3fc000003fa66666;
  lVar22 = 0x3c23d70a3f8ccccd;
  do {
    iVar4 = fn_00174828(DAT_008977e4);
    iVar4 = iVar4 + cVar2 * 0x418;
    psVar14 = (short *)(iVar4 + -0x4080);
    if (0 < *psVar14) {
      cVar1 = *(char *)(iVar4 + -0x4019);
      bVar16 = cVar1 == '\0';
      if (bVar16) {
        cVar1 = *(char *)(iVar4 + -0x400a);
      }
      bVar17 = bVar16 && cVar1 == '\0';
      if (bVar16 && cVar1 == '\0') {
        bVar17 = *(char *)(iVar4 + -0x4018) == '\0';
      }
      if (bVar17) {
        iVar11 = 0;
        uVar24 = fn_006f33f0(psVar14,0x193);
        puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
        if (0 < (int)uVar24) {
          lVar20 = lVar22 << 0x20;
          do {
            if ((int)uVar10 < 0x26259fc) {
              fVar18 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
              uVar10 = (uint)(fVar18 * (float)((ulonglong)lVar20 >> 0x20));
            }
            local_7c = 0;
            local_60[0] = uVar10;
            local_68 = 0x26259fc;
            if ((int)uVar10 < 0) {
              puVar6 = &local_7c;
            }
            if (uVar10 < 0x80000000) {
              puVar6 = local_60;
            }
            iVar11 = iVar11 + 1;
            if (0x26259fc < (int)*puVar6) {
              puVar6 = &local_68;
            }
            uVar10 = *puVar6;
            uVar24 = fn_006f33f0(psVar14,0x193);
            puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
          } while (iVar11 < (int)uVar24);
        }
        iVar11 = 0;
        puVar6 = (uint *)fn_006f33f0(psVar14,0x194);
        if (0 < (int)puVar6) {
          uVar21 = uVar23 & 0xffffffff;
          do {
            if ((int)uVar10 < 0x26259fc) {
              fVar18 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
              uVar10 = (uint)(fVar18 * (float)uVar21);
            }
            local_70 = 0;
            local_7c = uVar10;
            local_60[0] = 0x26259fc;
            if ((int)uVar10 < 0) {
              puVar6 = &local_70;
            }
            if (uVar10 < 0x80000000) {
              puVar6 = &local_7c;
            }
            iVar11 = iVar11 + 1;
            if (0x26259fc < (int)*puVar6) {
              puVar6 = local_60;
            }
            uVar10 = *puVar6;
            puVar6 = (uint *)fn_006f33f0(psVar14,0x194);
          } while (iVar11 < (int)puVar6);
        }
        iVar11 = 0;
        uVar24 = fn_006f33f0(psVar14,0x195);
        puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
        if (0 < (int)uVar24) {
          do {
            if ((int)uVar10 < 0x26259fc) {
              fVar18 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
              uVar10 = (uint)(fVar18 * (float)(uVar23 >> 0x20));
            }
            local_70 = 0;
            local_60[0] = uVar10;
            local_7c = 0x26259fc;
            if ((int)uVar10 < 0) {
              puVar6 = &local_70;
            }
            if (uVar10 < 0x80000000) {
              puVar6 = local_60;
            }
            iVar11 = iVar11 + 1;
            if (0x26259fc < (int)*puVar6) {
              puVar6 = &local_7c;
            }
            uVar10 = *puVar6;
            uVar24 = fn_006f33f0(psVar14,0x195);
            puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
          } while (iVar11 < (int)uVar24);
        }
        iVar11 = 0;
        uVar24 = fn_006f33f0(psVar14,0x196);
        puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
        if (0 < (int)uVar24) {
          lVar20 = lVar22 << 0x20;
          do {
            if ((int)uVar9 < 999999) {
              fVar18 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar9 = (uint)(fVar18 * (float)((ulonglong)lVar20 >> 0x20));
            }
            local_58[1] = 0;
            local_74 = uVar9;
            local_70 = 999999;
            if ((int)uVar9 < 0) {
              puVar6 = local_58 + 1;
            }
            if (uVar9 < 0x80000000) {
              puVar6 = &local_74;
            }
            iVar11 = iVar11 + 1;
            if (999999 < (int)*puVar6) {
              puVar6 = &local_70;
            }
            uVar9 = *puVar6;
            uVar24 = fn_006f33f0(psVar14,0x196);
            puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
          } while (iVar11 < (int)uVar24);
        }
        iVar11 = 0;
        puVar6 = (uint *)fn_006f33f0(psVar14,0x197);
        if (0 < (int)puVar6) {
          uVar21 = uVar23 & 0xffffffff;
          do {
            if ((int)uVar9 < 999999) {
              fVar18 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar9 = (uint)(fVar18 * (float)uVar21);
            }
            local_58[1] = 0;
            local_70 = 999999;
            local_68 = uVar9;
            if ((int)uVar9 < 0) {
              puVar6 = local_58 + 1;
            }
            if (uVar9 < 0x80000000) {
              puVar6 = &local_68;
            }
            iVar11 = iVar11 + 1;
            if (999999 < (int)*puVar6) {
              puVar6 = &local_70;
            }
            uVar9 = *puVar6;
            puVar6 = (uint *)fn_006f33f0(psVar14,0x197);
          } while (iVar11 < (int)puVar6);
        }
        iVar11 = 0;
        uVar24 = fn_006f33f0(psVar14,0x198);
        puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
        if (0 < (int)uVar24) {
          uVar21 = uVar23 >> 0x20;
          do {
            if ((int)uVar9 < 999999) {
              fVar18 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
              uVar9 = (uint)(fVar18 * (float)uVar21);
            }
            local_58[1] = 0;
            local_74 = uVar9;
            local_70 = 999999;
            if ((int)uVar9 < 0) {
              puVar6 = local_58 + 1;
            }
            if (uVar9 < 0x80000000) {
              puVar6 = &local_74;
            }
            iVar11 = iVar11 + 1;
            if (999999 < (int)*puVar6) {
              puVar6 = &local_70;
            }
            uVar9 = *puVar6;
            uVar24 = fn_006f33f0(psVar14,0x198);
            puVar6 = (uint *)((ulonglong)uVar24 >> 0x20);
          } while (iVar11 < (int)uVar24);
        }
        if (*psVar14 < 1) goto LAB_00404bbc;
      }
      iVar11 = fn_006f44fc(psVar14,0x1e6);
      if (iVar11 != 0) {
        iVar4 = fn_00300f74(*(short *)(iVar4 + -0x4064) * 100,(int)*(short *)(iVar4 + -0x4054));
        fVar18 = (float)VectorSignedToFloat(200 - iVar4,(byte)(in_fpscr >> 0x16) & 3);
        if ((int)uVar10 < 0x26259fc) {
          fVar19 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
          uVar10 = (uint)(fVar19 * fVar18 * (float)((ulonglong)lVar22 >> 0x20));
        }
        puVar6 = &local_70;
        local_68 = 0x26259fc;
        local_70 = uVar10;
        local_6c = 0;
        if ((int)uVar10 < 0) {
          puVar6 = &local_6c;
        }
        if (uVar10 < 0x80000000) {
          puVar6 = &local_70;
        }
        if (0x26259fc < (int)*puVar6) {
          puVar6 = &local_68;
        }
        uVar10 = *puVar6;
      }
    }
LAB_00404bbc:
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x14');
  iVar4 = fn_006f0a18(local_58[0],0);
  if (iVar4 != 0) {
    uVar10 = fn_0065cc20(uVar10,1);
  }
  iVar4 = fn_006f0a18(local_58[0],1);
  if (iVar4 != 0) {
    if ((int)uVar9 < 999999) {
      fVar18 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      uVar9 = (uint)(fVar18 * 8.0);
    }
    puVar6 = &local_78;
    local_6c = 0;
    local_78 = 999999;
    local_74 = uVar9;
    if ((int)uVar9 < 0) {
      puVar6 = &local_6c;
    }
    if (uVar9 < 0x80000000) {
      puVar6 = &local_74;
    }
    if (999999 < (int)*puVar6) {
      puVar6 = &local_78;
    }
    uVar9 = *puVar6;
  }
  if (local_80 == 0) {
    local_80 = uVar10 - 1;
  }
  else {
    local_80 = fn_00300f74(local_80 + uVar10 + -1,local_80);
  }
  puVar6 = (uint *)0x0;
  local_6c = 0;
  local_78 = 9999999;
  if ((int)local_80 < 0) {
    puVar6 = &local_6c;
  }
  if (local_80 < 0x80000000) {
    puVar6 = &local_80;
  }
  if (9999999 < (int)*puVar6) {
    puVar6 = &local_78;
  }
  uVar15 = *puVar6;
  *(uint *)(param_1 + 0x98) = uVar9;
  *(uint *)(param_1 + 0x94) = uVar15;
  iVar4 = fn_00174834(DAT_008977e4);
  iVar11 = (int)*(char *)(iVar4 + 0x185eec);
  uVar7 = fn_006b63fc(*(undefined4 *)(DAT_00897804 + 8));
  uVar8 = fn_006b5190(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar4 = *(int *)(param_1 + 0x94);
  if (iVar4 < 1) {
    iVar4 = *(int *)(param_1 + 0x98);
  }
  bVar16 = iVar4 < 1;
  if (bVar16) {
    uVar7 = 0;
  }
  *(bool *)(*(int *)(param_1 + 0x8c) + 0x3d) = bVar16;
  if (bVar16) {
    uVar8 = uVar7;
  }
  if ((iVar11 == 0 && uVar7 == 0) && uVar8 == 0) goto LAB_00404e84;
  uVar12 = 1;
  if (iVar11 != 0) {
    uVar12 = 2;
  }
  if (uVar7 != 0) {
    uVar12 = uVar12 << 1;
  }
  uVar3 = 4;
  uVar13 = 0;
  if (uVar8 != 0) {
    puVar6 = &local_68;
    if (4 < uVar8) {
      puVar6 = &local_6c;
    }
    local_68 = CONCAT31(((unsigned int)(local_68) >> 8) & 0xffffff,(char)uVar8);
    local_6c = CONCAT31(((unsigned int)(local_6c) >> 8) & 0xffffff,4);
    uVar13 = (uint)(byte)*puVar6;
    uVar12 = (int)(short)(ushort)(byte)(&DAT_007bb65c)[uVar13] * (int)(short)uVar12;
  }
  if (uVar12 < 0x20) {
    if (0xf < uVar12) {
      uVar3 = 3;
      goto LAB_00404db4;
    }
    if (7 < uVar12) {
      uVar3 = 2;
      goto LAB_00404db4;
    }
    if (3 < uVar12) {
      uVar3 = 1;
      goto LAB_00404db4;
    }
    if (1 < uVar12) {
      uVar3 = 0;
      goto LAB_00404db4;
    }
  }
  else {
LAB_00404db4:
    *(undefined1 *)(param_1 + 0x9c) = uVar3;
  }
  uVar5 = fn_0017dd54(*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(&DAT_007bb6e4 + *(char *)(param_1 + 0x9c) * 4),0);
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  uVar10 = fn_0065cc20(uVar10,1);
  fVar18 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  if ((int)uVar9 < 999999) {
    fVar19 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = (uint)(fVar19 * fVar18);
  }
  puVar6 = (uint *)0x0;
  local_6c = 999999;
  local_58[0] = 0;
  local_74 = uVar9;
  if ((int)uVar9 < 0) {
    puVar6 = local_58;
  }
  if (uVar9 < 0x80000000) {
    puVar6 = &local_74;
  }
  VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  if (999999 < (int)*puVar6) {
    puVar6 = &local_6c;
  }
  uVar9 = *puVar6;
  uVar15 = fn_0065cc20(uVar15,0);
  *(undefined1 *)(param_1 + 0x90) = 1;
  fn_00404fa8(param_1,iVar11,uVar7,uVar13);
LAB_00404e84:
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x30) = uVar15;
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x34) = uVar10;
  *(uint *)(*(int *)(param_1 + 0x8c) + 0x38) = uVar9;
  fn_0025ba9c(*(undefined4 *)(DAT_00897804 + 8),uVar9);
  return;
}


