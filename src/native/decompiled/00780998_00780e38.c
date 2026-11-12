#include "00780998_00780e38.h"



void fn_00780e38(int param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint in_s0;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)in_s0;
  iVar2 = *(int *)(param_1 + 0x10);
  sVar1 = *(short *)(**(int **)(param_1 + 0xc) + 6);
  if (sVar1 == 4) {
    uVar6 = 0;
    if (iVar2 != 0) {
      do {
        uVar3 = (uint)*(ushort *)(*param_3 + uVar6 * 2);
        if (uVar3 != 0xffff) {
          fn_007814a8(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4),
                       *(int *)(param_2 + 0xc) + uVar3 * 0x40);
          puVar4 = (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
          *puVar4 = *puVar4 | 2;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  else if (sVar1 == 7) {
    uVar6 = 0;
    if (iVar2 != 0) {
      do {
        uVar3 = (uint)*(ushort *)(*param_3 + uVar6 * 2);
        if (uVar3 != 0xffff) {
          fn_006e0a34(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 4),
                       *(int *)(param_2 + 0xc) + uVar3 * 0x40);
          puVar4 = (uint *)(*(int *)(param_2 + 0xc) + uVar3 * 0x40);
          *puVar4 = *puVar4 | 2;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x10));
      return;
    }
  }
  else {
    uVar6 = 0;
    if (iVar2 != 0) {
      do {
        uVar3 = (uint)*(ushort *)(*param_3 + uVar6 * 2);
        if (uVar3 != 0xffff) {
          iVar5 = *(int *)(param_2 + 0x14);
          fVar7 = (float)uVar9;
          iVar2 = *(int *)(*(int *)(param_1 + 0xc) + uVar6 * 4);
          fn_006df72c(iVar2 + 8);
          iVar8 = VectorFloatToUnsigned(fVar7,3);
          if (*(float *)(iVar2 + 0xc) == fVar7) {
            iVar8 = iVar8 + 1;
          }
          fn_001781f0(iVar5 + uVar3 * 0x30,*(int *)(iVar2 + 0x14) + iVar8 * 0x30);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x10));
    }
  }
  return;
}



void fn_00780a7c(int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float in_s0;
  float fVar13;
  float in_s1;
  ulonglong uVar14;
  float local_58 [9];
  int local_34;
  int *local_30;
  int *piStack_2c;
  int *local_28;
  
  uVar10 = 0;
  uVar14 = (ulonglong)(uint)in_s0;
  local_34 = param_1;
  local_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      uVar3 = (uint)*(ushort *)(*param_3 + uVar10 * 2);
      if (uVar3 != 0xffff) {
        iVar11 = *local_30 + uVar3 * 0x158;
        iVar9 = *(int *)(*(int *)(local_34 + 0xc) + uVar10 * 4);
        sVar1 = *(short *)(iVar9 + 6);
        fVar13 = (float)uVar14;
        if (sVar1 == 0) {
          in_s0 = fVar13;
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fn_006df85c(*(undefined4 *)(iVar9 + 0xc));
              in_s0 = fVar13;
              in_s1 = fVar13;
            }
            else {
              in_s1 = *(float *)(iVar9 + 0xc);
            }
          }
          sVar1 = *(short *)(iVar9 + 4);
          if (sVar1 == 0x14) {
            *(float *)(iVar11 + 0xf8) = in_s1;
          }
          else {
            if (sVar1 == 0x17) {
              iVar11 = iVar11 + 0x70;
            }
            else {
              if (sVar1 != 0x1a) goto switchD_00780c44_caseD_14;
              iVar11 = iVar11 + 0x88;
            }
            *(float *)(iVar11 + 0xa0) = in_s1;
          }
        }
        else if (sVar1 == 2) {
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar5 = (float *)(iVar11 + 0xf0);
            break;
          default:
            pfVar5 = (float *)0x0;
            break;
          case 0x15:
            pfVar5 = (float *)(iVar11 + 0xfc);
            break;
          case 0x16:
            pfVar5 = (float *)(iVar11 + 0x108);
            break;
          case 0x18:
            pfVar5 = (float *)(iVar11 + 0x114);
            break;
          case 0x19:
            pfVar5 = (float *)(iVar11 + 0x120);
            break;
          case 0x1b:
            pfVar5 = (float *)(iVar11 + 300);
          }
          local_58[0] = *pfVar5;
          local_58[1] = pfVar5[1];
          uVar3 = 0;
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                in_s0 = (float)uVar14;
                fn_006df85c(*(undefined4 *)(iVar4 + 0xc));
              }
              else {
                in_s0 = *(float *)(iVar4 + 0xc);
              }
              local_58[uVar3] = in_s0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 2);
          switch(*(undefined2 *)(iVar9 + 4)) {
          case 0x13:
            pfVar5 = (float *)(iVar11 + 0xf0);
            break;
          default:
            goto switchD_00780c44_caseD_14;
          case 0x15:
            pfVar5 = (float *)(iVar11 + 0xfc);
            break;
          case 0x16:
            pfVar5 = (float *)(iVar11 + 0x108);
            break;
          case 0x18:
            pfVar5 = (float *)(iVar11 + 0x114);
            break;
          case 0x19:
            pfVar5 = (float *)(iVar11 + 0x120);
            break;
          case 0x1b:
            pfVar5 = (float *)(iVar11 + 300);
          }
          *pfVar5 = local_58[0];
          pfVar5[1] = local_58[1];
        }
        else if (sVar1 == 5) {
          uVar3 = 0;
          do {
            if ((*(uint *)(iVar9 + 8) & 0x100 << (uVar3 & 0xff)) == 0) {
              iVar4 = iVar9 + uVar3 * 4;
              if ((*(uint *)(iVar9 + 8) & 1 << (uVar3 & 0xff)) == 0) {
                in_s0 = (float)uVar14;
                fn_006df85c(*(undefined4 *)(iVar4 + 0xc));
              }
              else {
                in_s0 = *(float *)(iVar4 + 0xc);
              }
              local_58[uVar3] = in_s0;
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < 4);
          fn_00549f9c(iVar11,local_58,~(*(uint *)(iVar9 + 8) & 0xf00) << 8,
                       *(undefined2 *)(iVar9 + 4));
        }
        else if (sVar1 == 6) {
          if ((*(uint *)(iVar9 + 8) & 0x100) == 0) {
            if ((*(uint *)(iVar9 + 8) & 1) == 0) {
              fn_006df85c(*(undefined4 *)(iVar9 + 0xc));
              in_s0 = fVar13;
            }
            else {
              in_s0 = *(float *)(iVar9 + 0xc);
            }
          }
          in_s0 = (float)(int)in_s0;
          sVar1 = *(short *)(iVar9 + 4);
          puVar6 = *(undefined4 **)(*local_28 + (int)in_s0 * 4);
          if (sVar1 == 0xd) {
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = *puVar6;
            bVar12 = cVar7 != '\f';
            if (bVar12) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x144) = puVar6[1];
            *(undefined4 *)(iVar11 + 0x140) = uVar8;
            if (!bVar12) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfe;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 1;
            }
          }
          else if (sVar1 == 0xf) {
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = puVar6[2];
            bVar12 = cVar7 != '\f';
            if (bVar12) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x14c) = puVar6[3];
            *(undefined4 *)(iVar11 + 0x148) = uVar8;
            if (!bVar12) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfd;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 2;
            }
          }
          else {
            if (sVar1 != 0x11) goto switchD_00780c44_caseD_14;
            cVar7 = *(char *)(puVar6 + 6);
            uVar8 = puVar6[4];
            bVar12 = cVar7 != '\f';
            if (bVar12) {
              cVar7 = '\0';
            }
            *(undefined4 *)(iVar11 + 0x154) = puVar6[5];
            *(undefined4 *)(iVar11 + 0x150) = uVar8;
            if (!bVar12) {
              cVar7 = '\x01';
            }
            if (cVar7 == '\0') {
              bVar2 = *(byte *)(iVar11 + 2) & 0xfb;
            }
            else {
              bVar2 = *(byte *)(iVar11 + 2) | 4;
            }
          }
          *(byte *)(iVar11 + 2) = bVar2;
        }
      }
switchD_00780c44_caseD_14:
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(local_34 + 0x10));
  }
  return;
}



void fn_00780998(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  uint in_fpscr;
  float in_s0;
  int iVar4;
  float fVar5;
  
  fn_006df72c();
  in_s0 = in_s0 - *param_1;
  iVar4 = VectorFloatToUnsigned(in_s0,3);
  fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = in_s0 - fVar5;
  if (fVar5 == 0.0) {
    pfVar1 = (float *)((int)param_1[3] + iVar4 * 0xc);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = fVar5;
    param_2[1] = fVar3;
    return;
  }
  fVar3 = param_1[3];
  if (param_1[1] == in_s0) {
    pfVar1 = (float *)(iVar4 * 0xc + 0xc + (int)fVar3);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    param_2[2] = pfVar1[2];
    *param_2 = fVar5;
    param_2[1] = fVar3;
    return;
  }
  pfVar1 = (float *)((int)fVar3 + iVar4 * 0xc);
  pfVar2 = (float *)(iVar4 * 0xc + 0xc + (int)fVar3);
  *param_2 = *pfVar1 + fVar5 * (*pfVar2 - *pfVar1);
  param_2[1] = pfVar1[1] + fVar5 * (pfVar2[1] - pfVar1[1]);
  param_2[2] = pfVar1[2] + fVar5 * (pfVar2[2] - pfVar1[2]);
  return;
}


