#include "0069f6b8_0069ff6c.h"



void fn_0069ff6c(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  int *piStack_30;
  int local_2c;
  uint *puStack_28;
  
  iVar1 = param_1[0x68];
  bVar13 = iVar1 == 0;
  if (bVar13) {
    iVar1 = param_1[0x69];
  }
  if ((bVar13 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    piStack_30 = param_1;
    local_2c = param_2;
    puStack_28 = param_3;
    if ((char)param_1[0x67] == '\0') {
      if ((char)param_1[0x61] == '\0') {
        iVar1 = fn_0068cafc(DAT_008977e8);
        (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
        fn_0018d060(param_1[0x17],7,4);
        uVar19 = 0;
        while (uVar3 = (undefined4)uVar19, param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
          if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0))
          {
            DAT_008f9e2c = (undefined4)uVar19;
            DAT_008f9e30 = DAT_008f9e2c;
            DAT_008f9e34 = DAT_008f9e2c;
          }
          uVar3 = fn_006a2620(param_1,&DAT_008f9e2c);
          puVar11 = (undefined4 *)param_3[1];
          if (puVar11 == (undefined4 *)param_3[2]) {
            uVar6 = (int)((int)puVar11 - *param_3) >> 2;
            if (uVar6 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
              param_3[1] = (uint)(puVar11 + 1);
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = puVar11[-1];
              }
              puVar8 = puVar11 + -1;
              puVar9 = puVar11;
              if (puVar11 < puVar8) {
                if (0 < (int)puVar8 - (int)puVar11) {
                  iVar2 = (int)puVar8 - (int)puVar11 >> 2;
                  iVar7 = 0;
                  do {
                    iVar2 = iVar2 + -1;
                    puVar11[iVar7 + -1] = puVar8[iVar7 + -1];
                    iVar7 = iVar7 + -1;
                  } while (iVar2 != 0);
                }
              }
              else {
                while (puVar11 != puVar8) {
                  puVar8 = puVar8 + -1;
                  puVar9[-1] = *puVar8;
                  puVar9 = puVar9 + -1;
                }
              }
              *puVar11 = uVar3;
            }
            else {
              uVar12 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
              if (uVar12 < uVar6 + 0x20) {
                uVar12 = uVar6 + 0x20;
              }
              puVar4 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
              puVar9 = puVar4;
              for (puVar8 = (undefined4 *)*param_3; puVar8 != puVar11; puVar8 = puVar8 + 1) {
                if (puVar9 != (undefined4 *)0x0) {
                  *puVar9 = *puVar8;
                }
                puVar9 = puVar9 + 1;
              }
              puVar8 = (undefined4 *)(((int)puVar11 - *param_3 & 0xfffffffc) + (int)puVar4);
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = uVar3;
              }
              puVar9 = (undefined4 *)param_3[1];
              puVar8 = (undefined4 *)(((int)puVar11 - *param_3 & 0xfffffffc) + (int)puVar4);
              for (; puVar11 != puVar9; puVar11 = puVar11 + 1) {
                puVar8 = puVar8 + 1;
                if (puVar8 != (undefined4 *)0x0) {
                  *puVar8 = *puVar11;
                }
              }
              uVar5 = *param_3;
              uVar10 = param_3[1];
              uVar6 = uVar5;
              if (uVar10 < uVar5) {
                do {
                  uVar6 = uVar6 + 4;
                } while (uVar6 != uVar10);
              }
              fn_001008c4(uVar5,(int)(param_3[2] - uVar5) >> 2,0);
              param_3[2] = (uint)(puVar4 + uVar12);
              param_3[1] = (uint)(puVar4 + ((int)(uVar10 - uVar5) >> 2) + 1);
              *param_3 = (uint)puVar4;
            }
          }
          else {
            param_3[1] = (uint)(puVar11 + 1);
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = uVar3;
            }
          }
        }
        *(undefined1 *)((int)param_1 + 0x185) = 0;
        fVar17 = (float)param_1[2] - *(float *)(local_2c + 8);
        fVar16 = (float)param_1[3] - *(float *)(local_2c + 0xc);
        fVar14 = (float)param_1[4] - *(float *)(local_2c + 0x10);
        fVar18 = 1.0 / SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14);
        fVar15 = *(float *)(iVar1 + 0x1f0);
        param_1[0x23] = (int)(fVar17 * fVar18 * fVar15);
        param_1[0x24] = (int)(fVar16 * fVar18 * fVar15);
        param_1[0x25] = (int)(fVar14 * fVar18 * fVar15);
        fVar14 = -(fVar17 * fVar18);
        fn_00525bd0();
        local_44 = fVar14 * 0.024543693;
        local_48 = uVar3;
        local_40 = uVar3;
        (**(code **)(*param_1 + 0x24))(param_1,&local_48);
        fn_006a2584(param_1,*(undefined4 *)(iVar1 + 500));
        fn_006a2388(param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0x61) = 0;
      }
    }
    else {
      fn_006a69c8(param_1);
    }
  }
  return;
}



void fn_0069fe38(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(int *)(param_2 + 8));
      }
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      iVar3 = *(int *)(iVar1 + 0xac);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar3;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      iVar3 = 0x41f00000;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0xb0));
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



undefined4 fn_0069fb88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x1a0);
  bVar3 = iVar2 != 0;
  if (!bVar3) {
    iVar2 = *(int *)(param_1 + 0x1a4);
  }
  if ((bVar3 || iVar2 != 0) || (*(char *)(param_1 + 0x1e4) != '\0')) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x19c) != '\0') {
      fn_006a69c8(param_1);
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0069fb68(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x120) = in_s0 * 10000.0 * 9.259259e-06;
  return;
}



void fn_0069fb50(int param_1)

{
  float in_s0;
  
  *(int *)(param_1 + 0x11c) = (int)(in_s0 * 30.0);
  return;
}



bool fn_0069fb20(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x156) == '\x01';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x160);
  }
  return bVar1 && param_1 == 10;
}



void fn_0069fa18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  fVar5 = 0.01;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
    VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar1 = (**(code **)(*param_1 + 0xa4))(param_1);
  if (iVar1 == 0) {
    iVar1 = param_1[0x47];
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
    fVar4 = (float)VectorSignedToFloat(param_1[0x47],(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorSignedToFloat(200 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = (int)(fVar3 * fVar4 * fVar5);
  }
  VectorSignedToFloat(iVar1 + -1,(byte)(in_fpscr >> 0x16) & 3);
  fn_001a4a80(iVar1 + -1);
  return;
}



void fn_0069f70c(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(int *)(param_2 + 8));
      }
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      iVar3 = *(int *)(iVar1 + 0x30);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar3;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      iVar3 = 0x41f00000;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x34));
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



void fn_0069f6ec(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x118) = in_s0 * 10000.0 * 9.259259e-06;
  return;
}



void fn_0069f6d4(int param_1)

{
  float in_s0;
  
  *(int *)(param_1 + 0x124) = (int)(in_s0 * 30.0);
  return;
}



void fn_0069f6b8(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x134) = in_s0;
  *(undefined4 *)(param_1 + 0x138) = in_s0;
  return;
}


