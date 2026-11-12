#include "005e8e90_00603934.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_00603934(void)

{
  int iVar1;
  int *piVar2;
  
  while( true ) {
    iVar1 = 0;
    do {
      if ((&DAT_008d1898)[iVar1] != 0) {
        svc_0x24();
        if (*(int *)(&DAT_008d1898)[iVar1] < 0) {
          fn_0015e294();
        }
        *(undefined1 *)((&DAT_008d1898)[iVar1] + 4) = 1;
        piVar2 = (int *)(&DAT_008d1898)[iVar1];
        fn_0015e304(piVar2);
        if (*piVar2 != 0) {
          svc_0x23();
          *piVar2 = 0;
        }
        piVar2 = (int *)(&DAT_008d1898)[iVar1];
        fn_0015e304(piVar2);
        if (*piVar2 != 0) {
          svc_0x23();
          *piVar2 = 0;
        }
        fn_007407d4((&DAT_008d1898)[iVar1]);
        (&DAT_008d1898)[iVar1] = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x1f);
    if (DAT_00899eb4 == '\0') break;
    fn_0012d6a4(1000000000,0,DAT_00899eb8);
  }
  return;
}



undefined4 fn_00600e10(ushort *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 == 0) {
    if (*param_2 == 0) {
      return 0;
    }
    return 0;
  }
  if (*param_2 != 0) {
    uVar1 = fn_002894f8(*(undefined4 *)(DAT_00897804 + 0x24));
    uVar2 = fn_002894f8(*(undefined4 *)(DAT_00897804 + 0x24),(int)*param_2);
    if ((uVar1 & uVar2) == 0) {
      if (uVar1 == 0 && uVar2 == 0) {
        return 0;
      }
      if (uVar2 != 0) {
        return 0;
      }
    }
    else {
      if (*param_1 == 0) {
        if (*param_2 == 0) {
          return 0;
        }
        return 0;
      }
      if (*param_2 != 0) {
        uVar1 = fn_006a7a78(*param_1 & 0xff);
        uVar2 = fn_006a7a78((char)*param_2);
        if (uVar2 <= uVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



void fn_005ffc54(int *param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  iVar4 = DAT_008977e0;
  fVar11 = 1.0;
  if (param_1[5] == 0) {
    if (*(char *)((int)param_1 + 5) == '\0') goto LAB_006000cc;
    fVar11 = 1.0;
    iVar3 = fn_006f7a48(DAT_008977e0);
    cVar1 = *(char *)(iVar3 + 4);
    if (((*(char *)(iVar4 + 0x170) == -1) && (iVar4 = fn_006f7a30(iVar4), iVar4 == 0)) &&
       (cVar1 == '\0' || cVar1 == '\x03')) {
      fVar9 = (float)param_1[2] + (float)param_1[3];
      param_1[2] = (int)fVar9;
      if (0x45a8bfff < (int)fVar9) {
        fVar9 = fVar9 - 5400.0;
        param_1[2] = (int)fVar9;
        iVar4 = fn_006f7a0c(DAT_008977e0);
        (**(code **)(**(int **)(*(int *)(iVar4 + 0x30) + 0x24) + 0x24))();
        in_fpscr = in_fpscr & 0xfffffff;
        if (((fVar9 <= 7800.0) ||
            (uVar5 = in_fpscr | (uint)(9600.0 < fVar9) << 0x1f | (uint)(fVar9 == 9600.0) << 0x1e,
            in_fpscr = uVar5 | (uint)NAN(fVar9) << 0x1c, bVar2 = (byte)(uVar5 >> 0x18),
            (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) &&
           ((in_fpscr = in_fpscr & 0xfffffff, fVar9 <= 15000.0 ||
            (uVar5 = in_fpscr | (uint)(16800.0 < fVar9) << 0x1f | (uint)(fVar9 == 16800.0) << 0x1e,
            in_fpscr = uVar5 | (uint)NAN(fVar9) << 0x1c, bVar2 = (byte)(uVar5 >> 0x18),
            (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))))) {
          uVar5 = (**(code **)(*param_1 + 0x34))(param_1);
          if (uVar5 != *(byte *)(param_1 + 1)) {
            param_4 = *(code **)(*param_1 + 0x20);
            (*param_4)(param_1,*(byte *)(param_1 + 1) == 0,300);
          }
        }
      }
    }
  }
  if (*(char *)((int)param_1 + 5) == '\0') goto LAB_006000cc;
  iVar4 = fn_006f7a0c(DAT_008977e0);
  iVar4 = fn_006c3aa4(*(undefined4 *)(iVar4 + 0x30));
  if (iVar4 == 0) {
    fn_006f7a84(DAT_008977e0);
    iVar4 = fn_006ab184();
    if (iVar4 != 0) goto LAB_005ffdf0;
    pcVar6 = (char *)param_1[6];
    iVar4 = 0;
    if (*pcVar6 != '\0') {
      iVar4 = *(int *)(pcVar6 + 4);
    }
    if (*pcVar6 != '\0' && iVar4 != -1) {
      uVar10 = 0x3d4ccccd;
      goto LAB_005ffe0c;
    }
  }
  else {
LAB_005ffdf0:
    pcVar6 = (char *)param_1[6];
    iVar4 = 0;
    if (*pcVar6 != '\0') {
      iVar4 = *(int *)(pcVar6 + 4);
    }
    if (*pcVar6 != '\0' && iVar4 != -1) {
      uVar10 = 0xbd4ccccd;
LAB_005ffe0c:
      *(undefined4 *)(pcVar6 + 0x14) = uVar10;
    }
  }
  pcVar6 = (char *)param_1[5];
  if (pcVar6 == (char *)0x0) {
    if ((char)param_1[1] == '\x01') {
      iVar4 = param_1[6];
      uVar10 = 2;
    }
    else {
LAB_005ffebc:
      iVar4 = param_1[6];
      uVar10 = 0;
    }
LAB_005ffec4:
    fn_005ff8c0(iVar4,uVar10);
  }
  else {
    if (*pcVar6 == '\x01') {
      if (*(int *)(pcVar6 + 4) != 0) {
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorUnsignedToFloat(*(int *)(pcVar6 + 4),(byte)(in_fpscr >> 0x16) & 3);
        if ((int)(fVar9 / fVar12) < 0x3f000001) goto LAB_005ffec8;
      }
LAB_005ffeb0:
      iVar4 = param_1[6];
      uVar10 = 1;
      goto LAB_005ffec4;
    }
    if (*pcVar6 == '\0') {
      if (*(int *)(pcVar6 + 4) != 0) {
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorUnsignedToFloat(*(int *)(pcVar6 + 4),(byte)(in_fpscr >> 0x16) & 3);
        if ((int)(fVar9 / fVar12) < 0x3f000000) goto LAB_005ffeb0;
      }
      goto LAB_005ffebc;
    }
  }
LAB_005ffec8:
  pcVar6 = (char *)param_1[6];
  iVar4 = 0;
  if (*pcVar6 != '\0') {
    iVar4 = *(int *)(pcVar6 + 4);
  }
  if (*pcVar6 != '\0' && iVar4 != -1) {
    fVar9 = *(float *)(pcVar6 + 0x18) + *(float *)(pcVar6 + 0x14);
    *(float *)(pcVar6 + 0x18) = fVar9;
    if ((int)fVar9 < 0x3f800001) {
      in_fpscr = in_fpscr & 0xfffffff;
      if (fVar9 < 0.0) {
        pcVar6[0x18] = '\0';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        goto LAB_005fff14;
      }
    }
    else {
      *(float *)(pcVar6 + 0x18) = fVar11;
LAB_005fff14:
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
    }
    fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(pcVar6 + 4));
  }
  bVar8 = *(char *)((int)param_1 + 5) != '\0';
  if (bVar8) {
    param_4 = (code *)param_1[7];
  }
  if (bVar8 && param_4 != (code *)0x0) {
    pcVar6 = (char *)param_1[5];
    if (pcVar6 == (char *)0x0) {
      if ((char)param_1[1] == '\x01') {
        fn_00687fc4(param_4,0,0xff);
      }
      else {
        fn_00687fc4(param_4,0xff,0);
      }
    }
    else if (*pcVar6 == '\x01') {
      iVar4 = *(int *)(pcVar6 + 4);
      if (iVar4 != 0) {
        fVar12 = (float)VectorUnsignedToFloat
                                  (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar9 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        if ((int)(fVar12 / fVar9) < 0x3f000000) {
          fVar12 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
          fVar9 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
          fVar9 = (fVar12 / fVar9) * 2.0;
          if (0x3f800000 < (int)fVar9) {
            fVar9 = fVar11;
          }
          fn_00687fc4(param_4,0xff - (int)(fVar9 * 255.0));
        }
      }
    }
    else if (*pcVar6 == '\0') {
      iVar4 = *(int *)(pcVar6 + 4);
      if (iVar4 != 0) {
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        if ((int)(fVar9 / fVar12) < 0x3f000001) goto LAB_006000cc;
      }
      fVar9 = fVar11;
      if (iVar4 != 0) {
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(pcVar6 + 8),(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        fVar9 = fVar9 / fVar12;
      }
      fVar9 = (fVar9 - 0.5) * 2.0;
      if (0x3f800000 < (int)fVar9) {
        fVar9 = fVar11;
      }
      fn_00687fc4(param_4,(int)(fVar9 * 255.0),0xff - (int)(fVar9 * 255.0));
    }
  }
LAB_006000cc:
  puVar7 = (undefined1 *)param_1[5];
  if (puVar7 != (undefined1 *)0x0) {
    uVar5 = *(int *)(puVar7 + 8) + 1;
    *(uint *)(puVar7 + 8) = uVar5;
    if (uVar5 <= *(uint *)(puVar7 + 4)) {
      if (*(int *)(param_1[5] + 4) != 0) {
        fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
        fVar11 = (float)VectorUnsignedToFloat(*(int *)(param_1[5] + 4),(byte)(in_fpscr >> 0x16) & 3)
        ;
        if ((int)(fVar9 / fVar11) < 0x3f000001) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 1) = *puVar7;
      return;
    }
    *(undefined1 *)(param_1 + 1) = *puVar7;
    if (param_1[5] != 0) {
      fn_002feef8();
      param_1[5] = 0;
    }
  }
  return;
}



int * fn_005e8e90(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_005e8d9c(iVar1,0);
  }
  if (*param_1 != iVar2) {
    fn_002feef8(*param_1);
    *param_1 = iVar2;
  }
  return param_1;
}


