#include "00504120_00537fe8.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_00537fe8(int param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar1 = DAT_008c3450;
  *DAT_008c3450 = DAT_008c3454 * 10 + 1U | 0x80000000;
  puVar1[1] = 0xf02c0;
  iVar3 = *(int *)(param_1 + 0x150);
  puVar1[3] = DAT_008c345c * 0x400000 - 0x100000U | 0xf02c1;
  puVar1[2] = (uint)(*(float *)(param_1 + 0x60) * *(float *)(param_1 + 0xb4));
  uVar5 = *(uint *)(param_1 + 0x74);
  puVar1[7] = *(uint *)(param_1 + 0x94);
  puVar1[8] = uVar5;
  fVar4 = *(float *)(param_1 + 0x6c) * DAT_008c3470;
  fVar6 = *(float *)(param_1 + 0x68) * DAT_008c346c;
  uVar5 = *(uint *)(param_1 + 0x48);
  uVar8 = *(uint *)(param_1 + 0x4c);
  puVar1[0x1c] = *(uint *)(param_1 + 0x50);
  puVar1[0x1d] = uVar8;
  puVar1[0x1e] = uVar5;
  puVar1[9] = (uint)fVar4;
  puVar1[10] = (uint)fVar6;
  iVar2 = param_1 + DAT_008c3460 * 0x10;
  puVar1[4] = *(uint *)(iVar2 + 0xc4);
  puVar1[5] = *(uint *)(iVar2 + 0xc0);
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar8 = *(uint *)(param_1 + 0x8c);
  puVar1[6] = *(uint *)(iVar2 + 0xbc);
  puVar1[0xb] = uVar8;
  puVar1[0xc] = uVar5;
  puVar1[0xd] = (uint)(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x84));
  puVar1[0xe] = (uint)(*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80));
  fVar17 = *(float *)(param_1 + 0x130);
  fVar10 = *(float *)(param_1 + 0x120);
  fVar11 = *(float *)(param_1 + 0x110);
  fVar7 = *(float *)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 0x134);
  fVar9 = *(float *)(param_1 + 0x138);
  fVar19 = *(float *)(param_1 + 300);
  fVar16 = *(float *)(param_1 + 0x124);
  fVar13 = *(float *)(param_1 + 0x128);
  fVar22 = *(float *)(param_1 + 0x11c);
  fVar15 = *(float *)(param_1 + 0x114);
  fVar12 = *(float *)(param_1 + 0x118);
  fVar21 = *(float *)(param_1 + 0x10c);
  fVar4 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0xc);
  puVar1[0x13] = *(uint *)(param_1 + 0x90);
  fVar20 = param_2[2];
  uVar5 = *(uint *)(iVar3 + 0x23c);
  fVar18 = param_2[1];
  puVar1[0x16] = (uint)(fVar11 * fVar7 + fVar15 * fVar4 + fVar12 + fVar21 * fVar6 + *param_2);
  puVar1[0x14] = (uint)(fVar17 * fVar7 + fVar14 * fVar4 + fVar9 + fVar19 * fVar6 + fVar20);
  puVar1[0x15] = (uint)(fVar10 * fVar7 + fVar16 * fVar4 + fVar13 + fVar22 * fVar6 + fVar18);
  puVar1[0x17] = 0;
  if ((uVar5 & 0x10) != 0) {
    uVar5 = *(uint *)(param_1 + 0x44);
    uVar8 = *(uint *)(param_1 + 0x40);
    puVar1[0x1a] = *(uint *)(param_1 + 0x3c);
    puVar1[0x18] = uVar5;
    puVar1[0x19] = uVar8;
  }
  return;
}



int fn_00529db0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  char *pcVar9;
  
  uVar2 = fn_002febd8((char *)&DAT_007e41a0);
  DAT_008ec114 = (**(code **)*param_1)(param_1,param_2 * 0xc,4,*(code **)*param_1,param_4);
  if (DAT_008ec114 == 0) {
    iVar3 = -0x279f8c0d;
  }
  else {
    fn_00101a1c(DAT_008ec114,&LAB_00528a38,0xc);
    iVar3 = DAT_008ec114;
    pcVar9 = (char *)&DAT_007e41a0;
    DAT_008ec118 = param_1;
    fn_00170704(&DAT_008ec0e0);
    if (DAT_008ec111 == '\0') {
      fn_001ad654(&DAT_008ec108,pcVar9,9);
      iVar6 = 0;
      DAT_008ec104 = uVar2;
      if (0 < param_2) {
        do {
          piVar1 = DAT_008ec0dc;
          piVar4 = (int *)(iVar3 + iVar6 * 0xc);
          if (DAT_008ec0dc == (int *)0x0) {
            piVar4[1] = (int)piVar4;
            *piVar4 = (int)piVar4;
            DAT_008ec0dc = piVar4;
          }
          else {
            piVar4[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar1 + 4) = piVar4;
            *piVar4 = *piVar1;
            *piVar1 = (int)piVar4;
          }
          iVar6 = iVar6 + 1;
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        } while (iVar6 < param_2);
      }
      iVar3 = fn_0019f340(&DAT_008ec0d0);
      if (iVar3 < 0) {
        fn_001707b4(&DAT_008ec0e0);
        fn_00170704(&DAT_008ec0e0);
        DAT_008ec112 = 1;
        fn_0044f450(&DAT_008ec0ec);
        while (piVar1 = DAT_008ec0d8, DAT_008ec0d8 != (int *)0x0) {
          if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
            DAT_008ec0d8 = (int *)0x0;
          }
          else {
            iVar6 = *DAT_008ec0d8;
            piVar4 = DAT_008ec0d8 + 1;
            DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
            *(int *)*piVar4 = iVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            svc_0x23();
            piVar1[2] = 0;
          }
          DAT_008ec0fc = DAT_008ec0fc + -1;
        }
        while (piVar1 = DAT_008ec0dc, DAT_008ec0dc != (int *)0x0) {
          DAT_008ec0f8 = DAT_008ec0f8 + -1;
          if ((int *)*DAT_008ec0dc == DAT_008ec0dc) {
            DAT_008ec0dc = (int *)0x0;
          }
          else {
            iVar6 = *DAT_008ec0dc;
            piVar4 = DAT_008ec0dc + 1;
            DAT_008ec0dc = (int *)DAT_008ec0dc[1];
            *(int *)*piVar4 = iVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            svc_0x23();
            piVar1[2] = 0;
          }
        }
        fn_001707b4(&DAT_008ec0e0);
        fn_00170704();
        puVar7 = DAT_008ec0d4;
        if (DAT_008ec0d4 != (undefined4 *)0x0) {
          do {
            if (puVar7[2] != 0) {
              svc_0x23();
              puVar7[2] = 0;
            }
            puVar5 = (undefined4 *)0x0;
            if (DAT_008ec0d4 != (undefined4 *)0x0) {
              puVar5 = (undefined4 *)*DAT_008ec0d4;
            }
            bVar8 = puVar5 != puVar7;
            if (bVar8) {
              puVar7 = (undefined4 *)puVar7[1];
            }
          } while (bVar8 && puVar7 != (undefined4 *)0x0);
        }
        while (DAT_008ec0f4 != 0) {
          fn_001707b4(&DAT_008ec0e0);
          fn_0012d6a4(100000000,0);
          fn_00170704(&DAT_008ec0e0);
        }
        DAT_008ec111 = '\0';
        fn_001707b4(&DAT_008ec0e0);
        fn_00170704();
        DAT_008ec112 = 1;
        fn_0044f450(&DAT_008ec0ec);
        while (piVar1 = DAT_008ec0d8, DAT_008ec0d8 != (int *)0x0) {
          if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
            DAT_008ec0d8 = (int *)0x0;
          }
          else {
            iVar6 = *DAT_008ec0d8;
            piVar4 = DAT_008ec0d8 + 1;
            DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
            *(int *)*piVar4 = iVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            svc_0x23();
            piVar1[2] = 0;
          }
          DAT_008ec0fc = DAT_008ec0fc + -1;
        }
        while (piVar1 = DAT_008ec0dc, DAT_008ec0dc != (int *)0x0) {
          DAT_008ec0f8 = DAT_008ec0f8 + -1;
          if ((int *)*DAT_008ec0dc == DAT_008ec0dc) {
            DAT_008ec0dc = (int *)0x0;
          }
          else {
            iVar6 = *DAT_008ec0dc;
            piVar4 = DAT_008ec0dc + 1;
            DAT_008ec0dc = (int *)DAT_008ec0dc[1];
            *(int *)*piVar4 = iVar6;
            *(int *)(*piVar1 + 4) = piVar1[1];
          }
          piVar1[1] = 0;
          *piVar1 = 0;
          if (piVar1[2] != 0) {
            svc_0x23();
            piVar1[2] = 0;
          }
        }
        fn_001707b4(&DAT_008ec0e0);
        fn_00170704(&DAT_008ec0e0);
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        DAT_008ec111 = '\x01';
        DAT_008ec112 = 0;
        fn_001707b4(&DAT_008ec0e0);
        iVar3 = 0;
      }
    }
    else {
      iVar3 = -0x375f8c07;
      fn_001707b4(&DAT_008ec0e0);
    }
    if (iVar3 < 0) {
      (**(code **)(*param_1 + 4))(param_1,DAT_008ec114);
      DAT_008ec114 = 0;
    }
  }
  return iVar3;
}



undefined1 * fn_0051d58c(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00509470();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_00509460();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf4d4 == (undefined4 *)0x0) {
    iVar1 = fn_004ecfe0(0x88);
    puVar3 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)fn_0051e110();
    }
    DAT_008bf4d4 = puVar3;
    puVar2 = (undefined1 *)fn_0051cfb4(puVar3,param_1);
    puVar3 = DAT_008bf4d4;
    if ((int)puVar2 < 0) {
      if (DAT_008bf4d4 != (undefined4 *)0x0) {
        *DAT_008bf4d4 = &DAT_00857348;
        fn_0050bc40();
        if (puVar3[0x1f] != 0) {
          fn_0050afe0();
          fn_004ecfd0();
        }
        fn_0051332c();
        fn_0051c494();
        fn_0050ffac();
        fn_00519230();
        fn_00519904();
        fn_0051ba98();
        fn_00518bc8();
        fn_0050b7b8();
        iVar1 = fn_0050cf00(puVar3 + 4);
        fn_004ecfd0(iVar1 + -0x10);
        DAT_008bf4d4 = (undefined4 *)0x0;
      }
      return puVar2;
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_d8a1482e;
  }
  return puVar2;
}



/* WARNING: Removing unreachable block (ram,0x00504240) */

undefined1 * fn_00504120(int param_1,undefined4 param_2,char *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_70 [72];
  undefined4 local_28;
  
  if (((*(char *)(param_1 + 100) == '\x01') || (*(int *)(DAT_008bf4cc + 0xa4) != 0)) ||
     ((param_3 != (char *)0x0 && (*param_3 == '\x01')))) {
LAB_00504438:
    return &DAT_e0a14827;
  }
  puVar1 = (undefined1 *)fn_004f74e4(*(undefined4 *)(param_1 + 0x4c));
  if (-1 < (int)puVar1) {
    puVar1 = (undefined1 *)0x0;
  }
  if (-1 < (int)puVar1) {
    iVar2 = fn_0050b80c(DAT_008bf4cc);
    iVar3 = fn_0051cae8(iVar2,*(undefined4 *)(param_1 + 0x50));
    if (iVar3 == 0) goto LAB_00504438;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    iVar3 = DAT_008c06a0;
    fn_004ed810(iVar2 + 4,DAT_008c06a0 + 0xc);
    fn_0051b784(iVar3,iVar2,iVar3 + 4);
    fn_00519324(DAT_008c0674,auStack_70);
    if (*(code **)(DAT_008bf4e0 + 0x44) == (code *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = (**(code **)(DAT_008bf4e0 + 0x44))();
    }
    fn_00519360(DAT_008c0674,auStack_70);
    puVar1 = (undefined1 *)fn_00518cb4(DAT_008c0674,iVar2,auStack_70);
    if ((int)puVar1 < 0) {
      (**(code **)(*DAT_008c0674 + 8))(DAT_008c0674,*(code **)(*DAT_008c0674 + 8),0x80000,0);
    }
    *(undefined1 *)(param_1 + 0x62) = 0xfe;
    *(undefined4 *)(param_1 + 0x70) = 0;
    iVar2 = fn_006d88c8(*(undefined4 *)(param_1 + 8));
    if ((iVar2 != 0) && (iVar2 = fn_006d88c8(*(undefined4 *)(param_1 + 8)), iVar2 != 5)) {
      (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),1);
    }
    iVar2 = fn_004f3610(*(undefined4 *)(param_1 + 8),param_2,param_3);
    if (iVar2 != 0) {
      fn_004efcf4(*(undefined4 *)(param_1 + 8),0);
    }
  }
  return puVar1;
}


