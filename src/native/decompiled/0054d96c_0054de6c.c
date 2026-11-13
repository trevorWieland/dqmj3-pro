#include "0054d96c_0054de6c.h"



undefined4 fn_0054de6c(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 == '\0') {
    return param_2;
  }
  puVar2 = (undefined4 *)fn_00560a5c(param_1);
  if (*(byte *)(param_1 + 0x32) < *(byte *)(param_1 + 0x31)) {
    puVar2 = (undefined4 *)fn_00560938(param_1);
  }
  if (*(byte *)(param_1 + 0x34) < *(byte *)(param_1 + 0x33)) {
    puVar2 = (undefined4 *)fn_00560a88(param_1,puVar2,0);
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x618);
  puVar2[1] = 0xf02b1;
  uVar3 = fn_005608dc(param_1,puVar2 + 2,cVar1);
  uVar3 = fn_006e611c(param_1,uVar3);
  return uVar3;
}



undefined4 fn_0054d96c(int *param_1,undefined4 param_2,int *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_f0 [2];
  undefined1 *local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int *local_a0;
  uint local_9c;
  undefined4 local_94;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  
  if ((*(short *)((int)param_3 + 0xce) == 0) || (param_3[0x2d] == 0)) {
    return param_2;
  }
  iVar2 = fn_006e1ee8(param_3);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = param_3[0x3e];
  }
  if (iVar2 != 0 && iVar3 != 0) {
    if ((char)param_1[0xc] != '\0') {
      param_2 = fn_0054f158(param_1);
    }
    iVar3 = param_3[0x3e];
    if (*(char *)(iVar3 + 0x45) == '\0') {
      local_60 = 0xffffffff;
      local_5c = 0xffffffff;
      if (*(int *)(param_4 + 0xb0) == 0) {
        return param_2;
      }
      (**(code **)(*param_3 + 0x74))(param_3,*(int *)(param_4 + 0xb0),&local_60,&local_94);
      uVar5 = 0;
      uVar6 = 0;
      if ((*(byte *)(param_3 + 0x34) & 0x80) != 0) {
        iVar2 = param_3[0x3f];
        if (iVar2 == 0) {
          uVar6 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar2 + 8);
          uVar6 = *(undefined1 *)(iVar2 + 0xd);
        }
      }
      if ((*(byte *)(param_3 + 0x34) & 8) == 0) {
        (**(code **)(*param_1 + 0x18))(param_1,iVar3,0,local_94,uVar5,uVar6);
      }
      else {
        (**(code **)(*param_1 + 0x18))(param_1,iVar3,&local_60,local_94,uVar5,uVar6);
      }
    }
    if (*(int *)(iVar3 + 4) == 0) {
      return param_2;
    }
    iVar2 = fn_006e1ee8(param_3);
    fn_006e29c0(param_3,auStack_90);
    local_f0[1] = 0;
    local_e4 = 0;
    local_c0 = 0.0;
    local_bc = 0.0;
    local_b8 = 0.0;
    local_b0 = 1.0;
    local_ac = 1.0;
    local_a8 = 1.0;
    local_e8 = auStack_90;
    local_9c = (uint)((*(byte *)(param_3 + 0x34) & 0x10) != 0);
    uVar7 = *(uint *)(iVar2 + 0x6c);
    uVar4 = (uint)*(byte *)((int)param_3 + 0x46);
    local_d4 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    local_e0 = (float)VectorUnsignedToFloat(uVar7 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
    local_dc = (float)VectorUnsignedToFloat((uVar7 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
    local_d8 = (float)VectorUnsignedToFloat((uVar7 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3)
    ;
    local_e0 = local_e0 * 0.003921569;
    local_dc = local_dc * 0.003921569;
    local_d4 = local_d4 * 0.003921569;
    local_d8 = local_d8 * 0.003921569;
    uVar7 = *(uint *)(iVar2 + 0x70);
    fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = (float)VectorUnsignedToFloat(uVar7 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
    local_c8 = (float)VectorUnsignedToFloat((uVar7 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3)
    ;
    local_d0 = (float)VectorUnsignedToFloat(uVar7 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
    local_cc = (float)VectorUnsignedToFloat((uVar7 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
    local_c8 = local_c8 * 0.003921569;
    local_d0 = local_d0 * 0.003921569;
    local_cc = local_cc * 0.003921569;
    local_c4 = fVar11 * 0.003921569 * fVar12 * 0.003921569;
    local_a0 = param_3 + 0x2b;
    uVar1 = *(ushort *)(iVar2 + 0x74);
    uVar7 = (uint)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      local_b4 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      local_b4 = local_b4 * 0.003921569;
      local_a4 = local_b4;
    }
    else {
      iVar10 = (uVar1 >> 1 & 0x18) + (uVar7 & 3) * 0x20 + ((uVar7 & 0xf) >> 2) * 0x14;
      uVar9 = uVar1 >> 6 & 8;
      if ((uVar1 & 0x1000) == 0) {
        iVar10 = uVar9 + iVar10 + (uVar1 >> 8 & 0xc) + (uVar1 >> 4 & 0x1c);
      }
      else {
        iVar10 = iVar10 + uVar9 + (uVar1 >> 8 & 0xc) + ((uVar7 & 0x1ff) >> 6) * 0xc;
      }
      pbVar8 = (byte *)(iVar10 + ((uVar7 & 0x7fff) >> 0xd) * 0x14 + *(int *)(iVar2 + 0x78));
      local_b4 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar12 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      local_c0 = (float)VectorUnsignedToFloat((uint)*pbVar8,(byte)(in_fpscr >> 0x16) & 3);
      local_bc = (float)VectorUnsignedToFloat((uint)pbVar8[1],(byte)(in_fpscr >> 0x16) & 3);
      local_b8 = (float)VectorUnsignedToFloat((uint)pbVar8[2],(byte)(in_fpscr >> 0x16) & 3);
      local_b4 = local_b4 * 0.003921569;
      local_c0 = local_c0 * 0.003921569;
      local_bc = local_bc * 0.003921569;
      local_b8 = local_b8 * 0.003921569;
      local_b0 = (float)VectorUnsignedToFloat((uint)pbVar8[3],(byte)(in_fpscr >> 0x16) & 3);
      local_ac = (float)VectorUnsignedToFloat((uint)pbVar8[4],(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorUnsignedToFloat((uint)pbVar8[6],(byte)(in_fpscr >> 0x16) & 3);
      local_a8 = (float)VectorUnsignedToFloat((uint)pbVar8[5],(byte)(in_fpscr >> 0x16) & 3);
      local_b0 = local_b0 * 0.003921569;
      local_ac = local_ac * 0.003921569;
      local_a8 = local_a8 * 0.003921569;
      local_a4 = fVar11 * 0.003921569 * fVar12 * 0.003921569;
    }
    local_f0[0] = iVar3;
    if (*(char *)((int)param_1 + 0x61e) == '\x06') {
      param_2 = fn_00560bcc(param_1,param_2);
    }
    *(undefined1 *)((int)param_1 + 0x61e) = 5;
    uVar5 = fn_0054e5b8(param_1,param_2,iVar2);
    fVar15 = local_a8;
    fVar14 = local_ac;
    fVar13 = local_b0;
    fVar16 = local_c8;
    fVar12 = local_cc;
    fVar11 = local_d0;
    if ((*(byte *)(param_3 + 0x34) & 0x20) != 0) {
      local_d0 = local_e0;
      local_cc = local_dc;
      local_c8 = local_d8;
      local_b0 = local_c0;
      local_ac = local_bc;
      local_a8 = local_b8;
      local_9c = local_9c & 0xfffffffe;
      uVar5 = (**(code **)(*param_1 + 0x14))(param_1,uVar5,local_f0);
      local_9c = local_9c | 1;
      local_d0 = fVar11;
      local_cc = fVar12;
      local_c8 = fVar16;
      local_b0 = fVar13;
      local_ac = fVar14;
      local_a8 = fVar15;
    }
    uVar5 = (**(code **)(*param_1 + 0x14))(param_1,uVar5,local_f0);
    uVar5 = fn_0054f1dc(param_1,uVar5,1);
    *(undefined2 *)(param_1 + 0x18a) = 1;
    return uVar5;
  }
  return param_2;
}


