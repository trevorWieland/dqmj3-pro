#include "00750ec0_0076410c.h"



void fn_0076410c(undefined2 *param_1,undefined2 *param_2,code *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 local_30 [2];
  undefined2 local_2c [4];
  
  if (param_1 != param_2) {
    fn_007b33f0(param_1,param_2,(int)param_2 - (int)param_1 >> 1,param_3);
    if ((int)param_2 - (int)param_1 < 0x21) {
      puVar5 = param_1 + 1;
      if (puVar5 != param_2) {
        do {
          local_30[0] = *puVar5;
          iVar1 = (*param_3)(local_30,param_1);
          if (iVar1 == 0) {
            local_2c[0] = local_30[0];
            iVar1 = (*param_3)(local_2c,puVar5 + -1);
            puVar2 = puVar5 + -1;
            puVar3 = puVar5;
            while (puVar4 = puVar2, iVar1 != 0) {
              *puVar3 = *puVar4;
              iVar1 = (*param_3)(local_2c,puVar4 + -1);
              puVar2 = puVar4 + -1;
              puVar3 = puVar4;
            }
            *puVar3 = local_2c[0];
          }
          else {
            puVar3 = puVar5 + 1;
            puVar2 = puVar5;
            if (param_1 < puVar5) {
              iVar1 = (int)puVar5 - (int)param_1;
              if (0 < iVar1) {
                if (iVar1 * 0x40000000 < 0) {
                  puVar2 = puVar5 + -1;
                  *puVar5 = *puVar2;
                  puVar3 = puVar5;
                }
                for (iVar1 = iVar1 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar3[-1] = puVar2[-1];
                  puVar2 = puVar2 + -2;
                  puVar3 = puVar3 + -2;
                  *puVar3 = *puVar2;
                }
              }
            }
            else {
              while (param_1 != puVar2) {
                puVar3 = puVar3 + -1;
                *puVar3 = puVar2[-1];
                puVar2 = puVar2 + -1;
              }
            }
            *param_1 = local_30[0];
          }
          puVar5 = puVar5 + 1;
        } while (puVar5 != param_2);
        return;
      }
    }
    else {
      puVar5 = param_1;
      while (puVar3 = puVar5 + 1, puVar3 != param_1 + 0x10) {
        local_30[0] = *puVar3;
        iVar1 = (*param_3)(local_30,param_1);
        if (iVar1 == 0) {
          local_2c[0] = local_30[0];
          iVar1 = (*param_3)(local_2c);
          puVar2 = puVar3;
          while (puVar4 = puVar5, iVar1 != 0) {
            *puVar2 = *puVar4;
            iVar1 = (*param_3)(local_2c,puVar4 + -1);
            puVar5 = puVar4 + -1;
            puVar2 = puVar4;
          }
          *puVar2 = local_2c[0];
          puVar5 = puVar3;
        }
        else {
          puVar2 = puVar5 + 2;
          puVar4 = puVar3;
          if (param_1 < puVar3) {
            iVar1 = (int)puVar3 - (int)param_1;
            if (0 < iVar1) {
              if (iVar1 * 0x40000000 < 0) {
                *puVar3 = *puVar5;
                puVar2 = puVar3;
                puVar4 = puVar5;
              }
              for (iVar1 = iVar1 >> 2; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar2[-1] = puVar4[-1];
                puVar4 = puVar4 + -2;
                puVar2 = puVar2 + -2;
                *puVar2 = *puVar4;
              }
            }
          }
          else {
            while (param_1 != puVar4) {
              puVar2 = puVar2 + -1;
              *puVar2 = puVar4[-1];
              puVar4 = puVar4 + -1;
            }
          }
          *param_1 = local_30[0];
          puVar5 = puVar3;
        }
      }
      for (param_1 = param_1 + 0x10; param_1 != param_2; param_1 = param_1 + 1) {
        local_30[0] = *param_1;
        iVar1 = (*param_3)(local_30,param_1 + -1);
        puVar3 = param_1 + -1;
        puVar5 = param_1;
        while (puVar2 = puVar3, iVar1 != 0) {
          *puVar5 = *puVar2;
          iVar1 = (*param_3)(local_30,puVar2 + -1);
          puVar3 = puVar2 + -1;
          puVar5 = puVar2;
        }
        *puVar5 = local_30[0];
      }
    }
  }
  return;
}



void fn_00763a8c(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0') {
    switch(*(undefined4 *)(param_1 + 0x104)) {
    case 0:
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      return;
    case 7:
      if (*(char *)(*(int *)(param_1 + 300) + 0x5f) != '\0') {
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      fn_002ccc34(*(undefined4 *)(param_1 + 300));
      return;
    }
  }
  return;
}



uint fn_0075adf8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  
  puVar2 = (uint *)fn_0075dfc8();
  uVar3 = *puVar2;
  fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar4 * *(float *)(param_1 + 0x18) == in_s0 ||
      puVar2 == (uint *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 8 + -8)) {
    VectorUnsignedToFloat(uVar3 >> 0xc,(byte)(in_fpscr >> 0x16) & 3);
    return uVar3 >> 0xc;
  }
  uVar1 = puVar2[2] >> 0xc;
  VectorUnsignedToFloat(puVar2[2] & 0xfff,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)((int)puVar2 + 6),(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar3 >> 0xc,(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar2[3],(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = fn_00525480((int)*(short *)((int)puVar2 + 6),(int)(short)puVar2[3],uVar1,uVar3 >> 0xc);
  return uVar3;
}



uint fn_0075acd8(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float in_s0;
  float fVar5;
  
  pbVar1 = (byte *)fn_0075d8d0();
  fVar5 = (float)VectorUnsignedToFloat((uint)*pbVar1,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar5 * *(float *)(param_1 + 0x18) == in_s0 ||
      pbVar1 == (byte *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 6 + -6)) {
    VectorUnsignedToFloat((uint)*(ushort *)(pbVar1 + 1),(byte)(in_fpscr >> 0x16) & 3);
    return (uint)*(ushort *)(pbVar1 + 1);
  }
  VectorUnsignedToFloat((uint)pbVar1[6],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)*(ushort *)(pbVar1 + 1),(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)CONCAT11(pbVar1[8],pbVar1[7]),(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = (char)pbVar1[5] * 0x10 + (uint)(pbVar1[4] >> 4);
  iVar4 = (uint)pbVar1[9] + (char)(pbVar1[10] << 4) * 0x10;
  VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = fn_00525480(iVar2,iVar4);
  return uVar3;
}



uint fn_0075aadc(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  uint in_fpscr;
  float in_s0;
  float fVar3;
  
  puVar1 = (ushort *)fn_0075cdc8();
  fVar3 = (float)VectorUnsignedToFloat((uint)*puVar1,(byte)(in_fpscr >> 0x16) & 3);
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar3 * 0.03125 * *(float *)(param_1 + 0x18) == in_s0 ||
      puVar1 == (ushort *)(*(int *)(param_1 + 0x20) + (uint)*(ushort *)(param_1 + 0xe) * 6 + -6)) {
    VectorUnsignedToFloat((uint)puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
    return (uint)puVar1[1];
  }
  VectorUnsignedToFloat((uint)puVar1[3],(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar1[5],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)puVar1[1],(byte)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat((uint)puVar1[4],(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(short)puVar1[2],(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = fn_00525480((int)(short)puVar1[2],(int)(short)puVar1[5],(uint)puVar1[4]);
  return uVar2;
}



int fn_0075a958(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint in_fpscr;
  float in_s0;
  uint uVar5;
  int iVar6;
  float fVar7;
  
  pbVar1 = *(byte **)(param_1 + 0x20);
  pbVar4 = pbVar1 + (uint)*(ushort *)(param_1 + 0xe) * 4 + -4;
  uVar5 = VectorFloatToUnsigned(in_s0 / *(float *)(param_1 + 0x18),3);
  pbVar2 = pbVar1;
  if ((*pbVar1 <= uVar5) && (pbVar2 = pbVar4, uVar5 < *pbVar4)) {
    fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(in_fpscr >> 0x16) & 3);
    iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * in_s0,3);
    pbVar2 = pbVar1 + iVar6 * 4;
    pbVar1 = pbVar2;
    if (uVar5 < *pbVar2) {
      do {
        pbVar2 = pbVar2 + -4;
      } while (uVar5 < *pbVar2);
    }
    else {
      do {
        pbVar2 = pbVar1;
        pbVar1 = pbVar2 + 4;
      } while (pbVar2[4] <= uVar5);
    }
  }
  fVar7 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = in_fpscr & 0xfffffff;
  if (fVar7 * *(float *)(param_1 + 0x18) == in_s0 || pbVar2 == pbVar4) {
    iVar6 = (uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100;
    VectorUnsignedToFloat(iVar6,(byte)(uVar5 >> 0x16) & 3);
    return iVar6;
  }
  VectorUnsignedToFloat((uint)pbVar2[4],(byte)(uVar5 >> 0x16) & 3);
  iVar3 = (char)pbVar2[3] * 0x10 + (uint)(pbVar2[2] >> 4);
  VectorUnsignedToFloat((uint)pbVar2[1] + (pbVar2[2] & 0xf) * 0x100,(byte)(uVar5 >> 0x16) & 3);
  iVar6 = (char)pbVar2[7] * 0x10 + (uint)(pbVar2[6] >> 4);
  VectorSignedToFloat(iVar6,(byte)(uVar5 >> 0x16) & 3);
  VectorUnsignedToFloat((uint)pbVar2[5] + (pbVar2[6] & 0xf) * 0x100,(byte)(uVar5 >> 0x16) & 3);
  VectorSignedToFloat(iVar3,(byte)(uVar5 >> 0x16) & 3);
  iVar6 = fn_00525480(iVar6,iVar3);
  return iVar6;
}



void fn_00754610(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_00855ae4;
  iVar1 = param_1[1];
  iVar4 = param_1[3];
  if (iVar1 == iVar4) {
    return;
  }
  do {
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = *(int *)(iVar1 + 8);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 8) = iVar3;
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    if (param_1[1] == iVar1) {
      param_1[1] = iVar2;
    }
    if (param_1[2] == iVar1) {
      param_1[2] = iVar3;
    }
    param_1[4] = param_1[4] + -1;
    iVar1 = iVar2;
  } while (iVar2 != iVar4);
  return;
}



void fn_00750ec0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_18 [4];
  undefined1 auStack_14 [8];
  
  puVar1 = (undefined4 *)fn_00479cd8(param_1,2,auStack_14);
  *puVar1 = &DAT_0085440c;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  *(undefined1 *)(puVar1 + 0x1d) = 1;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  iVar2 = fn_0048cc04(puVar1 + 0x24,0);
  iVar2 = fn_004a28d4(iVar2 + 0x78);
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(undefined **)(iVar2 + 0xa0) = &DAT_00854dd0;
  *(undefined1 *)(iVar2 + 0xa4) = 0;
  iVar2 = fn_0013d40c(iVar2 + 0xb0);
  iVar2 = fn_0075499c(iVar2 + 8,0);
  iVar2 = fn_0075499c(iVar2 + 0xc,0);
  iVar2 = fn_001676b0(iVar2 + 0xc,0);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined **)(iVar2 + -0x30) = &DAT_00853c5c;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  local_18[0] = 1;
  iVar2 = fn_004b8d18(iVar2 + 0x18,local_18);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  return;
}


