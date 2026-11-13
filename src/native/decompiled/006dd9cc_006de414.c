#include "006dd9cc_006de414.h"



void fn_006de414(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x19);
  }
  if (iVar2 != 0) {
    cVar1 = cVar1 + -1;
  }
  else {
    cVar1 = '\x01';
  }
  uVar3 = fn_006dfc84(*(undefined4 *)(param_1 + 0x18),*param_2,(~*(byte *)(param_3 + 2) & 1) == 0,
                       cVar1);
  if (*(int *)(param_1 + 8) == 0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = *(char *)(*(int *)(param_1 + 8) + 0x19) + -1;
  }
  uVar3 = fn_006dfde8(*(int *)(param_1 + 0x18) + 0x10,uVar3,(~*(byte *)(param_3 + 2) & 2) == 0,
                       cVar1);
  if (*(int *)(param_1 + 0xc) == 0) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x19) + -1;
  }
  uVar3 = fn_006dff44(*(int *)(param_1 + 0x18) + 0x20,uVar3,(~*(byte *)(param_3 + 2) & 4) == 0,
                       cVar1);
  *param_2 = uVar3;
  return;
}



void fn_006de18c(undefined4 param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  
  uVar1 = 0;
  do {
    iVar2 = *(int *)(*param_4 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + uVar1 * 4 + 0x238);
    if (iVar2 != 0) {
      local_24 = 0xf01c5;
      local_28 = (uVar1 & 0xff) * 0x100 + 0x800;
      fn_001694e4(*param_2,&local_28,8);
      *param_2 = *param_2 + 8;
      fn_0044ee24(param_2,*(undefined4 *)(iVar2 + 4),*(int *)(iVar2 + 8) << 2);
    }
    iVar2 = *(int *)(*param_4 + (uint)*(ushort *)(param_3 + 0x20) * 0x278 + uVar1 * 4 + 600);
    if (iVar2 != 0) {
      local_24 = 0xf01c5;
      local_28 = (uVar1 & 0xff) * 0x100 + 0x1000;
      fn_001694e4(*param_2,&local_28,8);
      *param_2 = *param_2 + 8;
      fn_0044ee24(param_2,*(undefined4 *)(iVar2 + 4),*(int *)(iVar2 + 8) << 2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return;
}



void fn_006dde58(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if ((*param_3 & 1) == 0) {
    puVar5 = (undefined4 *)fn_0016fe54(*param_2,1);
    *param_2 = (int)puVar5;
    if ((*param_3 & 0x20) == 0) {
      puVar4 = puVar5 + 2;
      *puVar5 = 0;
      puVar5[1] = 0xf004e;
    }
    else {
      puVar4 = (undefined4 *)fn_006dd1a4(param_4 + 0x2f,puVar5);
    }
    *param_2 = (int)puVar4;
  }
  else {
    iVar2 = *param_4 + (uint)param_3[0x10] * 0x278;
    iVar8 = iVar2 + 4;
    fn_006de298(param_1,param_2,iVar8);
    if ((*param_3 & 0x80) == 0) {
      fn_006dd568(param_1,param_4,param_3);
      *(byte *)(iVar2 + 0x191) = *(byte *)(*param_1 + 6) & 1;
      *(char *)(iVar2 + 0x192) = (char)((*(byte *)(*param_1 + 6) & 2) >> 1);
      *(char *)(iVar2 + 0x193) = (char)((*(byte *)(*param_1 + 6) & 4) >> 2);
      *(char *)(iVar2 + 0x194) = (char)((*(byte *)(*param_1 + 6) & 8) >> 3);
      *(char *)(iVar2 + 0x195) = (char)((*(byte *)(*param_1 + 6) & 0x10) >> 4);
      *(byte *)(iVar2 + 0x188) = *(byte *)(*param_1 + 0xa4) & 0xf;
      *(undefined1 *)(iVar2 + 0x189) = *(undefined1 *)(*param_1 + 0xa5);
      *(undefined1 *)(iVar2 + 0x18b) = *(undefined1 *)(*param_1 + 0xa6);
      *(undefined1 *)(iVar2 + 0x18c) = *(undefined1 *)(*param_1 + 0xa7);
      iVar2 = *(int *)(param_3 + *(int *)(param_3 + 0xe) * 2 + 10);
      uVar3 = fn_006cef98(iVar8,iVar2,1);
      puVar5 = (undefined4 *)fn_006cf208(iVar8,uVar3);
      if ((*param_3 & 0x20) == 0) {
        puVar4 = puVar5 + 2;
        *puVar5 = 0;
        puVar5[1] = 0xf004e;
      }
      else {
        puVar4 = (undefined4 *)fn_006dd1a4(param_4 + 0x2f,puVar5);
      }
      uVar6 = ((int)puVar4 - iVar2 & 0xfffffffcU) + 8;
      if (((uVar6 & 0xf) != 0) && (uVar6 = 4 - ((uVar6 & 0xf) >> 2), 0 < (int)uVar6)) {
        puVar5 = puVar4 + -1;
        if ((uVar6 & 1) != 0) {
          *puVar4 = 0;
          puVar5 = puVar4;
        }
        for (iVar8 = (int)uVar6 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar5[1] = 0;
          puVar5 = puVar5 + 2;
          *puVar5 = 0;
        }
        puVar4 = puVar4 + uVar6;
      }
      iVar8 = fn_00189790(puVar4,1);
      uVar3 = *(undefined4 *)(param_3 + *(int *)(param_3 + 0xe) * 2 + 10);
      *(int *)(param_3 + 8) = iVar8 - iVar2 >> 2;
      *(undefined4 *)(param_3 + 6) = uVar3;
      *param_3 = *param_3 & 0xfeff | 0x80;
      fn_0044ee24(param_2,uVar3,*(int *)(param_3 + 8) << 2);
    }
    else {
      fn_0044ee24(param_2,*(undefined4 *)(param_3 + 6),*(int *)(param_3 + 8) << 2);
      iVar2 = 0;
      do {
        if (*(char *)(iVar8 + iVar2 + 0x164) != '\0') {
          iVar7 = iVar8 + iVar2 * 0x2c;
          puVar5 = (undefined4 *)*param_2;
          bVar1 = *(byte *)(iVar7 + 4);
          *puVar5 = *(undefined4 *)(iVar7 + 0x14);
          puVar5[1] = (uint)bVar1 * 0x10 + 0x144 | 0x803f0000;
          puVar5[2] = *(undefined4 *)(iVar7 + 0x18);
          puVar5[3] = *(undefined4 *)(iVar7 + 0x28);
          puVar5[4] = *(undefined4 *)(iVar7 + 0x2c);
          puVar5[5] = 0;
          *param_2 = (int)(puVar5 + 6);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
    }
  }
  fn_0044ee24(param_2,*(undefined4 *)(*param_1 + 200),*(int *)(*param_1 + 0xcc) << 2);
  fn_0044ee24(param_2,param_1[4],param_1[5] << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa0),*(int *)(param_3 + 0xa2) << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa4),*(int *)(param_3 + 0xa6) << 2);
  fn_0044ee24(param_2,*(undefined4 *)(param_3 + 0xa8),*(int *)(param_3 + 0xaa) << 2);
  return;
}



void fn_006de298(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  byte local_2c [8];
  
  puVar2 = (uint *)*param_2;
  fn_001694e4(puVar2,*param_1 + 0xa8,0x18);
  *param_2 = *param_2 + 0x18;
  uVar1 = puVar2[2];
  puVar2[2] = uVar1 & 0xfffff8ff;
  puVar2[2] = uVar1 & 0xfffff8ff | (uint)*(byte *)(param_3 + 0x19c) << 8;
  uVar1 = puVar2[4];
  puVar2[4] = uVar1 & 0xfffff8ff;
  puVar2[4] = uVar1 & 0xfffff8ff | (uint)*(byte *)(param_3 + 0x19e) << 8;
  uVar1 = 0;
  do {
    pbVar3 = *(byte **)(*param_1 + uVar1 * 4 + 0x8c);
    if (pbVar3 != (byte *)0x0) {
      local_2c[uVar1] = *pbVar3 & 1;
      fn_001694e4(*param_2,&DAT_007d853c + (uVar1 & 0xff) * 8,8);
      *param_2 = *param_2 + 8;
      fn_0044ee24(param_2,*(undefined4 *)(pbVar3 + 4));
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  *puVar2 = (uint)(local_2c[0] == 0) << 1 | (uint)(local_2c[1] == '\0') << 5 |
            (uint)(*(char *)(param_3 + 0x19d) == '\0') << 9 | (uint)(local_2c[2] == '\0') << 0xd |
            (uint)(local_2c[5] == '\0') << 0x11 | (uint)(local_2c[4] == '\0') << 0x15 |
            (uint)(local_2c[3] == '\0') << 0x19;
  return;
}



void fn_006dd9cc(int *param_1,int *param_2,ushort *param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = *(uint *)(param_3 + 4);
  bVar10 = (uVar2 & 0xfffff) >> 0x10 != 0xb;
  if (!bVar10) {
    piVar7 = (int *)*param_2;
    *piVar7 = param_4[0x35];
    piVar7[1] = 0xf00f3;
    *param_2 = (int)(piVar7 + 2);
    piVar7[2] = param_4[0x35];
    piVar7[3] = 0xf00fb;
    *param_2 = (int)(piVar7 + 4);
  }
  if ((*param_3 & 0x400) != 0) {
    puVar8 = (undefined4 *)*param_2;
    *puVar8 = *(undefined4 *)(param_3 + (uVar2 & 0xf) * 2 + 0x12);
    puVar8[1] = 0xf00c3;
    *param_2 = (int)(puVar8 + 2);
    puVar8[2] = *(undefined4 *)((int)param_3 + ((uVar2 & 0xf0) >> 2) + 0x24);
    puVar8[3] = 0xf00cb;
    *param_2 = (int)(puVar8 + 4);
    puVar8[4] = *(undefined4 *)((int)param_3 + ((uVar2 & 0xf00) >> 6) + 0x24);
    puVar8[5] = 0xf00d3;
    *param_2 = (int)(puVar8 + 6);
    puVar8[6] = *(undefined4 *)((int)param_3 + ((uVar2 & 0xf000) >> 10) + 0x24);
    puVar8[7] = 0xf00db;
    *param_2 = (int)(puVar8 + 8);
    if (bVar10) {
      puVar8[8] = *(undefined4 *)((int)param_3 + ((uVar2 & 0xf0000) >> 0xe) + 0x24);
      puVar8[9] = 0xf00f3;
      *param_2 = (int)(puVar8 + 10);
      puVar8[10] = *(undefined4 *)((int)param_3 + ((uVar2 & 0xf00000) >> 0x12) + 0x24);
      puVar8[0xb] = 0xf00fb;
      *param_2 = (int)(puVar8 + 0xc);
    }
  }
  if ((*param_3 & 0x800) != 0) {
    puVar8 = (undefined4 *)*param_2;
    *puVar8 = *(undefined4 *)(param_3 + 0x2a);
    puVar8[1] = 0xf0103;
    *param_2 = (int)(puVar8 + 2);
  }
  iVar3 = fn_00548750(param_3 + 0x2c,param_3,param_4);
  if (iVar3 != 0) {
    puVar4 = (uint *)fn_0044ed28(*param_2,*(undefined1 *)
                                            (*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xce),
                                  param_3 + 0x2c,8);
    *param_2 = (int)puVar4;
    if ((char)param_3[0x74] != '\0') {
      *puVar4 = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xe6) | 0x80000000;
      puVar4[1] = 0x804f02c0;
      puVar4[2] = *(uint *)(param_3 + 0x72);
      puVar4[3] = *(uint *)(param_3 + 0x70);
      puVar4[4] = *(uint *)(param_3 + 0x6e);
      puVar4[5] = *(uint *)(param_3 + 0x6c);
      *param_2 = (int)(puVar4 + 6);
    }
  }
  if ((*param_3 & 0x8000) != 0) {
    puVar8 = (undefined4 *)*param_2;
    *puVar8 = *(undefined4 *)(param_3 + 0x9a);
    puVar8[1] = 0xf0081;
    *param_2 = (int)(puVar8 + 2);
    puVar8[2] = *(undefined4 *)(param_3 + 0x9c);
    puVar8[3] = 0xf0091;
    *param_2 = (int)(puVar8 + 4);
    puVar8[4] = *(undefined4 *)(param_3 + 0x9e);
    puVar8[5] = 0xf0099;
    *param_2 = (int)(puVar8 + 6);
  }
  if ((*param_3 & 0x200) != 0) {
    uVar2 = *(uint *)(param_3 + 0x20);
    uVar5 = *(uint *)(param_3 + 0x22);
    fVar11 = (float)VectorSignedToFloat((uVar2 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)VectorSignedToFloat(uVar2 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = (float)VectorSignedToFloat((uVar2 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
    fVar15 = (float)VectorSignedToFloat(uVar5 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = (float)VectorSignedToFloat((uVar5 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
    puVar4 = (uint *)*param_2;
    uVar2 = *(uint *)(*param_1 + 0x88);
    fVar17 = (float)VectorSignedToFloat((uVar5 & 0xffffff) >> 0x10,(byte)(in_fpscr >> 0x16) & 3);
    fVar16 = (float)VectorSignedToFloat(uVar5 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
    *puVar4 = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xf6) | 0x80000000;
    puVar4[1] = 0x804f02c0;
    puVar4[2] = uVar2;
    puVar4[3] = (uint)(fVar11 * 0.003921569);
    puVar4[4] = (uint)(fVar13 * 0.003921569);
    puVar4[5] = (uint)(fVar14 * 0.003921569);
    *param_2 = (int)(puVar4 + 6);
    puVar4[6] = *(byte *)(*(int *)(*(int *)(*param_1 + 8) + 0x24) + 0xfe) | 0x80000000;
    puVar4[7] = 0x804f02c0;
    puVar4[8] = (uint)(fVar16 * 0.003921569);
    puVar4[9] = (uint)(fVar17 * 0.003921569);
    puVar4[10] = (uint)(fVar12 * 0.003921569);
    puVar4[0xb] = (uint)(fVar15 * 0.003921569);
    *param_2 = (int)(puVar4 + 0xc);
  }
  if ((*param_3 & 1) != 0) {
    pbVar6 = (byte *)(*param_4 + (uint)param_3[0x10] * 0x278);
    pbVar9 = pbVar6 + 4;
    if ((*pbVar6 & 1) != 0 || (*param_3 & 0x200) != 0) {
      fn_006de4dc(param_1,param_2,param_4,param_3);
      puVar4 = (uint *)*param_2;
      *puVar4 = (uint)pbVar6[6] | (uint)pbVar6[5] << 10 | (uint)*pbVar9 << 0x14;
      puVar4[1] = 0xf01c0;
      *param_2 = (int)(puVar4 + 2);
    }
    if ((*(byte *)(*param_4 + (uint)param_3[0x10] * 0x278) & 2) != 0) {
      iVar3 = 0;
      do {
        if (pbVar9[iVar3 + 0x164] != 0) {
          puVar8 = (undefined4 *)*param_2;
          bVar1 = pbVar9[iVar3 * 0x2c + 4];
          *puVar8 = *(undefined4 *)(pbVar9 + iVar3 * 0x2c + 0x20);
          puVar8[1] = (uint)bVar1 * 0x10 + 0x14a | 0x801f0000;
          puVar8[2] = *(undefined4 *)(pbVar9 + iVar3 * 0x2c + 0x24);
          puVar8[3] = 0;
          *param_2 = (int)(puVar8 + 4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
    }
  }
  return;
}


