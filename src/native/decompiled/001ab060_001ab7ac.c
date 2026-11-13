#include "001ab060_001ab7ac.h"



/* WARNING: Removing unreachable block (ram,0x001ab800) */

uint * fn_001ab7ac(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = fn_001ab258();
  uVar2 = fn_001ab34c(param_1,uVar2,0);
  puVar3 = (uint *)fn_001ab5e4(param_1 + 0x3c,uVar2,0);
  *puVar3 = *(uint *)(param_1 + 0x76) & 0xffffff | (uint)*(byte *)(param_1 + 0x79) << 0x18;
  puVar3[1] = 0xf0099;
  puVar3[2] = *(uint *)(param_1 + 100) >> 0x10 | *(uint *)(param_1 + 100) << 0x10;
  puVar3[3] = 0xf009a;
  cVar1 = *(char *)(param_1 + 0x6c);
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\f') {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  puVar3[4] = (uint)*(byte *)(param_1 + 0x6b) << 1 | iVar6 << 2 | iVar4 << 4 |
              (uint)*(byte *)(param_1 + 0x69) << 8 | (uint)*(byte *)(param_1 + 0x6a) << 0xc |
              (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar5 = 0;
  puVar3[5] = 0xf009b;
  if (*(char *)(param_1 + 0x6c) == '\x03' || *(char *)(param_1 + 0x6c) == '\0') {
    puVar3[6] = 0;
    puVar3[7] = 0xf009c;
    goto LAB_001ab968;
  }
  fVar8 = *(float *)(param_1 + 0x70);
  fVar9 = 0.0;
  if ((fVar8 != 0.0) && ((uint)ABS(fVar8) >> 0x17 != 0xff)) {
    fVar8 = (fVar8 + 16.0) * 256.0;
    if (0.0 <= fVar8) {
      bVar7 = SBORROW4((int)fVar8,0x46000000);
      iVar6 = (int)fVar8 + -0x46000000;
      if ((int)fVar8 < 0x46000000) {
        bVar7 = SBORROW4((int)fVar8,0x45800000);
        iVar6 = (int)fVar8 + -0x45800000;
        fVar9 = fVar8;
      }
      else {
        fVar9 = 8191.0;
      }
      if (iVar6 < 0 == bVar7) {
        uVar5 = VectorFloatToUnsigned(fVar9 - 4096.0,3);
        goto LAB_001ab94c;
      }
    }
    uVar5 = VectorFloatToUnsigned(fVar9 + 4096.0,3);
  }
LAB_001ab94c:
  puVar3[6] = uVar5 | (uint)*(byte *)(param_1 + 0x75) << 0x10 |
              (uint)*(byte *)(param_1 + 0x74) << 0x18;
  puVar3[7] = 0xf009c;
LAB_001ab968:
  puVar3[8] = *(uint *)(param_1 + 0x60) >> 3;
  puVar3[9] = 0xf009d;
  puVar3[10] = (uint)*(byte *)(param_1 + 0x68);
  puVar3[0xb] = 0xf009e;
  return puVar3 + 0xc;
}



uint * fn_001ab5e4(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0) {
    param_2 = (uint *)fn_001ab258(param_1[8],param_2,1);
  }
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = 0xf0091;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = 0xf0092;
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar2 = 2;
  }
  else {
    iVar2 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar4 << 2 | iVar2 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar3 = 0;
  param_2[5] = 0xf0093;
  if ((char)param_1[3] == '\x03' || (char)param_1[3] == '\0') {
    param_2[6] = 0;
    param_2[7] = 0xf0094;
    goto LAB_001ab760;
  }
  fVar6 = (float)param_1[4];
  fVar7 = 0.0;
  if ((fVar6 != 0.0) && ((uint)ABS(fVar6) >> 0x17 != 0xff)) {
    fVar6 = (fVar6 + 16.0) * 256.0;
    if (0.0 <= fVar6) {
      bVar5 = SBORROW4((int)fVar6,0x46000000);
      iVar4 = (int)fVar6 + -0x46000000;
      if ((int)fVar6 < 0x46000000) {
        bVar5 = SBORROW4((int)fVar6,0x45800000);
        iVar4 = (int)fVar6 + -0x45800000;
        fVar7 = fVar6;
      }
      else {
        fVar7 = 8191.0;
      }
      if (iVar4 < 0 == bVar5) {
        uVar3 = VectorFloatToUnsigned(fVar7 - 4096.0,3);
        goto LAB_001ab744;
      }
    }
    uVar3 = VectorFloatToUnsigned(fVar7 + 4096.0,3);
  }
LAB_001ab744:
  param_2[6] = uVar3 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18
  ;
  param_2[7] = 0xf0094;
LAB_001ab760:
  param_2[8] = *param_1 >> 3;
  param_2[9] = 0xf0095;
  param_2[10] = (uint)(byte)param_1[2];
  param_2[0xb] = 0xf0096;
  return param_2 + 0xc;
}



uint * fn_001ab34c(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 != 0) {
    param_2 = (uint *)fn_001ab258(param_1[0xe],param_2,1);
  }
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = 0xf0081;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = 0xf0082;
  uVar3 = (uint)(byte)param_1[7];
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar5 << 2 | iVar4 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(uVar3 == 2 || uVar3 == 4) << 0x14 |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18 | uVar3 << 0x1c;
  param_2[5] = 0xf0083;
  uVar3 = 0;
  if ((char)param_1[3] != '\x03' && (char)param_1[3] != '\0') {
    fVar7 = (float)param_1[4];
    fVar8 = 0.0;
    if ((fVar7 != 0.0) && ((uint)ABS(fVar7) >> 0x17 != 0xff)) {
      fVar7 = (fVar7 + 16.0) * 256.0;
      if (0.0 <= fVar7) {
        bVar6 = SBORROW4((int)fVar7,0x46000000);
        iVar5 = (int)fVar7 + -0x46000000;
        if ((int)fVar7 < 0x46000000) {
          bVar6 = SBORROW4((int)fVar7,0x45800000);
          iVar5 = (int)fVar7 + -0x45800000;
          fVar8 = fVar7;
        }
        else {
          fVar8 = 8191.0;
        }
        if (iVar5 < 0 == bVar6) {
          uVar3 = VectorFloatToUnsigned(fVar8 - 4096.0,3);
          goto LAB_001ab4c8;
        }
      }
      uVar3 = VectorFloatToUnsigned(fVar8 + 4096.0,3);
    }
LAB_001ab4c8:
    uVar3 = uVar3 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18;
  }
  param_2[6] = uVar3;
  param_2[7] = 0xf0084;
  puVar2 = param_2 + 8;
  cVar1 = (char)param_1[7];
  if ((cVar1 == '\0' || cVar1 == '\x03') || cVar1 == '\x02') {
    *puVar2 = *param_1 >> 3;
    param_2[9] = 0xf0085;
    puVar2 = param_2 + 9;
  }
  else {
    if (cVar1 != '\x01' && cVar1 != '\x04') goto LAB_001ab594;
    *puVar2 = param_1[8] >> 3;
    param_2[9] = 0xf0085;
    param_2[10] = param_1[9] >> 3 & 0xe03fffff;
    param_2[0xb] = 0xf0086;
    param_2[0xc] = param_1[10] >> 3 & 0xe03fffff;
    param_2[0xd] = 0xf0087;
    param_2[0xe] = param_1[0xb] >> 3 & 0xe03fffff;
    param_2[0xf] = 0xf0088;
    param_2[0x10] = param_1[0xc] >> 3 & 0xe03fffff;
    param_2[0x11] = 0xf0089;
    puVar2 = param_2 + 0x13;
    param_2[0x12] = param_1[0xd] >> 3 & 0xe03fffff;
    *puVar2 = 0xf008a;
  }
  puVar2 = puVar2 + 1;
LAB_001ab594:
  *puVar2 = (uint)(byte)param_1[2];
  puVar2[1] = 0xf008e;
  return puVar2 + 2;
}



uint * fn_001ab258(int param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = (uint)&DAT_00200080;
    puVar1 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar1 = 0;
  }
  *param_2 = (uint)(*(char *)(param_1 + 0x1c) != '\x05') |
             (uint)(*(char *)(param_1 + 0x58) != '\0') << 1 |
             (uint)(*(char *)(param_1 + 0x7c) != '\0') << 2 | (uint)*(byte *)(param_1 + 0xa1) << 8 |
             (uint)(*(char *)(param_1 + 0xa0) != '\0') << 10 |
             (uint)(*(char *)(param_1 + 0x7d) != '\0') << 0xd | 0x1000;
  param_2[1] = 0xf0080;
  param_2[2] = (uint)(*(char *)(param_1 + 0x1c) != '\x05') |
               (uint)(*(char *)(param_1 + 0x58) != '\0') << 1 |
               (uint)(*(char *)(param_1 + 0x7c) != '\0') << 2 | (uint)*(byte *)(param_1 + 0xa1) << 8
               | (uint)(*(char *)(param_1 + 0xa0) != '\0') << 10 |
               (uint)(*(char *)(param_1 + 0x7d) != '\0') << 0xd | 0x11000;
  param_2[3] = 0xf0080;
  return param_2 + 4;
}



int * fn_001ab060(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint local_30;
  int *local_2c;
  uint local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  
  local_30 = 0x1000001;
  local_2c = (int *)0x0;
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  local_28 = 0x1000001;
  local_24 = (int *)0x0;
  do {
    piVar1 = (int *)fn_001a8604(*(undefined4 *)(param_1 + 4),0,&local_30,&local_20,&local_28);
    if (piVar1 == (int *)&DAT_ffffffff) {
      if (((local_28 & 0x8000000) != 0) &&
         (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_24 + 8))();
      }
      if (((local_20 & 0x8000000) != 0) &&
         (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      if (((local_30 & 0x8000000) != 0) &&
         (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)(*local_2c + 8))();
      }
      return (int *)0x0;
    }
    if (((local_30 & 0x8000000) != 0) &&
       (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    local_30 = 0x5000002;
    local_2c = piVar1;
  } while (local_24 != param_2);
  piVar1 = local_1c + 7;
  if (((local_28 & 0x8000000) != 0) &&
     (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  return piVar1;
}


