#include "00519f34_0051a430.h"



void fn_0051a430(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  uint local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  if ((char)param_1[0xb] == '\x01') {
    local_48 = 0;
    iStack_44 = 0;
    fn_004f01f4(&local_48);
    iVar8 = local_48 - param_1[0xc];
    iVar10 = iStack_44 - (param_1[0xd] + (uint)(local_48 < (uint)param_1[0xc]));
    puVar5 = (undefined4 *)fn_004f0ce8();
    iVar8 = fn_0011c134(iVar8,iVar10,*puVar5,puVar5[1]);
    if (0x96 < iVar8) {
      puVar4 = (undefined1 *)
               fn_0051ab74(param_1,(char)param_1[0x13],3,0xffffffff,0xffffffff,0xffffffff);
      if (((int)puVar4 < 0) && (puVar4 == &DAT_d8814829)) {
        *(undefined1 *)(param_1 + 0x16) = 1;
      }
      local_40 = 0;
      iStack_3c = 0;
      fn_004f01f4(&local_40);
      param_1[0xc] = local_40;
      param_1[0xd] = iStack_3c;
    }
  }
  else if ((char)param_1[0xb] == '\x02') {
    local_48 = 0;
    iStack_44 = 0;
    fn_004f01f4(&local_48);
    iVar10 = local_48 - param_1[0x10];
    iVar8 = iStack_44 - (param_1[0x11] + (uint)(local_48 < (uint)param_1[0x10]));
    puVar5 = (undefined4 *)fn_004f0ce8();
    uVar2 = fn_0011c134(iVar10,iVar8,*puVar5,puVar5[1]);
    iVar10 = param_1[8];
    iVar8 = param_1[0x14];
    fVar14 = 130.0;
    fVar15 = 0.01;
    uVar17 = 0x3a83126f;
    iVar7 = 0;
    do {
      fVar16 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = (float)VectorSignedToFloat(param_1[7],(byte)(in_fpscr >> 0x16) & 3);
      if (iVar10 * 8 * iVar8 < (int)(fVar13 * fVar14 * fVar15 * fVar16 * (float)uVar17)) {
        puVar5 = (undefined4 *)param_1[6];
        uVar6 = param_1[0x14];
        *puVar5 = 0x1000000;
        puVar5[2] = ((uVar6 >> 0x10) << 0x18 | (uVar6 >> 0x18) << 0x10) >> 0x10 |
                    ((uVar6 & 0xff) << 8 | uVar6 >> 8 & 0xff) << 0x10;
        puVar5[1] = 0xffffffff;
        puVar5[3] = 0xffffffff;
        iVar11 = param_1[4];
        uVar9 = (param_1[8] - *(int *)(DAT_008c0634 + 8)) - 0x3c;
        uVar6 = fn_006d9934(iVar11);
        if (uVar6 < uVar9) {
          (**(code **)(*param_1 + 8))(param_1,*(code **)(*param_1 + 8),0x80000,0);
          uVar9 = fn_006d9934(iVar11);
        }
        iVar11 = param_1[6];
        uVar1 = (undefined1)param_1[0x13];
        piVar12 = (int *)param_1[4];
        uVar18 = DAT_008bf4cc;
        uVar6 = fn_0050b080(DAT_008bf4cc,uVar1);
        if ((uVar6 < 0x100000) || (uVar6 = fn_0050b080(uVar18,uVar1), 0x3fffffff < uVar6)) {
          puVar4 = &DAT_d8814829;
        }
        else {
          local_40 = param_1[3];
          iVar3 = (**(code **)(*piVar12 + 0x10))(piVar12,&local_40,uVar1,uVar9,0);
          puVar4 = (undefined1 *)0x0;
          if (iVar3 != 0) {
            fn_001694d4(iVar3,iVar11);
            puVar4 = (undefined1 *)fn_0050a490(piVar12);
          }
        }
        if (-1 < (int)puVar4) {
          puVar4 = (undefined1 *)0x0;
          param_1[0x14] = param_1[0x14] + 1;
        }
        if (((int)puVar4 < 0) && (puVar4 == &DAT_d8814829)) {
          *(undefined1 *)(param_1 + 0x16) = 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
  }
  if (*(char *)((int)param_1 + 0x59) == '\x01') {
    local_48 = 0;
    iStack_44 = 0;
    fn_004f01f4(&local_48);
    iVar8 = local_48 - param_1[0x28];
    iVar10 = iStack_44 - (param_1[0x29] + (uint)(local_48 < (uint)param_1[0x28]));
    puVar5 = (undefined4 *)fn_004f0ce8();
    iVar8 = fn_0011c134(iVar8,iVar10,*puVar5,puVar5[1]);
    if (100 < iVar8) {
      fn_0051ab74(param_1,(char)param_1[0x1f],4,0xffffffff,0xffffffff,0xffffffff);
      local_40 = 0;
      iStack_3c = 0;
      fn_004f01f4(&local_40);
      param_1[0x28] = local_40;
      param_1[0x29] = iStack_3c;
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x59) == '\x03') {
    local_48 = 0;
    iStack_44 = 0;
    fn_004f01f4(&local_48);
    iVar8 = local_48 - param_1[0x1c];
    iVar10 = iStack_44 - (param_1[0x1d] + (uint)(local_48 < (uint)param_1[0x1c]));
    puVar5 = (undefined4 *)fn_004f0ce8();
    iVar8 = fn_0011c134(iVar8,iVar10,*puVar5,puVar5[1]);
    if (100 < iVar8) {
      fVar14 = (float)VectorSignedToFloat(param_1[0x1e],(byte)(in_fpscr >> 0x16) & 3);
      fVar15 = (float)VectorSignedToFloat(param_1[10],(byte)(in_fpscr >> 0x16) & 3);
      fn_0051ab74(param_1,(char)param_1[0x1f],2,(int)((fVar14 * 8.0 * 1000.0) / fVar15),0xffffffff,
                   param_1[0x24]);
      local_40 = 0;
      iStack_3c = 0;
      fn_004f01f4(&local_40);
      param_1[0x1c] = local_40;
      param_1[0x1d] = iStack_3c;
    }
  }
  return;
}



undefined8 fn_0051a24c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14821);
  }
  uVar1 = fn_004ed2e8();
  uVar5 = fn_00656e14(0x596,uVar1);
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  iVar2 = (int)uVar5;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      puVar4 = (undefined1 *)(iVar2 + uVar3);
      uVar3 = uVar3 + 1;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    } while (uVar3 < 0x596);
  }
  *(int *)(param_1 + 0x18) = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x4c) = 0xfd;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0xfd;
    fn_004ed714(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    return 0;
  }
  if (DAT_008c0630 != 0) {
    uVar3 = 8;
  }
  return CONCAT44(uVar3,0xe0614820);
}



ulonglong fn_0051a1dc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    return CONCAT44(1,param_1);
  }
  if (DAT_008c0630 == 0) {
    return (ulonglong)CONCAT14(cVar1,&DAT_008c0630);
  }
  return CONCAT44(4,DAT_008c0630);
}



undefined4 * fn_0051a110(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_0085726c;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  if (DAT_008bf4a0 != 0) {
    uVar2 = fn_004eea84(DAT_008bf4a0,5);
    fn_004f161c(uVar2,(char *)&DAT_0051a178);
    if (DAT_008bf4a0 != 0) {
      uVar2 = fn_004eea84(DAT_008bf4a0,6);
      fn_004f161c(uVar2,(char *)&DAT_0051a1a0);
    }
  }
  return puVar1;
}



undefined1 * fn_0051a07c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  
  fn_00519c84();
  iVar1 = DAT_008bf4cc;
  if (DAT_008bf4cc - 0x100000U < 0x3ff00000) {
    for (piVar4 = (int *)(DAT_008bf4cc + 0x3c);
        piVar4 != (int *)(iVar1 + *(int *)(iVar1 + 0x38) * 4 + 0x3c); piVar4 = piVar4 + 1) {
      iVar3 = fn_006db038(*(undefined4 *)(*piVar4 + 0x24));
      if ((iVar3 != 0) &&
         (puVar2 = (undefined1 *)
                   fn_00517930(*(undefined4 *)(*piVar4 + 0x24),*(undefined4 *)(param_1 + 0x10)),
         (int)puVar2 < 0)) {
        return puVar2;
      }
    }
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



undefined1 *
fn_00519f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int unaff_r4;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  
  uVar5 = param_4 - 0x100000;
  bVar7 = uVar5 < 0x3ff00000;
  if (bVar7) {
    uVar5 = param_5 - 0x100000;
  }
  bVar8 = uVar5 < 0x3ff00000;
  if (bVar7 && bVar8) {
    uVar5 = param_6 - 0x100000;
  }
  if ((bVar7 && bVar8) && uVar5 < 0x3ff00000) {
    iVar2 = fn_0050b080(DAT_008bf4cc,param_2,param_3,param_4,param_1,param_2,param_3,param_4);
    if (iVar2 != 0) {
      unaff_r4 = *(int *)(iVar2 + 0x24);
    }
    if (iVar2 == 0 || unaff_r4 == 0) {
      return &DAT_d8814829;
    }
    iVar3 = fn_006db038(unaff_r4);
    iVar2 = DAT_008bf4cc;
    if (iVar3 == 0) {
      return (undefined1 *)0xd1614828;
    }
    iVar3 = fn_0050b080(DAT_008bf4cc,param_2);
    if (iVar3 != *(int *)(iVar2 + 0xa4)) {
      puVar4 = (undefined1 *)fn_00517618(unaff_r4,param_4,param_5,param_3);
      if ((int)puVar4 < 0) {
        return puVar4;
      }
      if (DAT_008bf4a0 != 0) {
        uVar6 = *(undefined4 *)(unaff_r4 + 0x30);
        uVar9 = fn_004eea84(DAT_008bf4a0,6);
        fn_004f15b4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,0);
      }
      uVar1 = *(undefined1 *)(unaff_r4 + 9);
      fn_0050b080(iVar2,*(undefined1 *)(unaff_r4 + 8));
      iVar2 = fn_0050b080(DAT_008bf4cc,uVar1);
      fn_004ed810(param_6,iVar2 + 4);
      return (undefined1 *)0x0;
    }
  }
  return (undefined1 *)0xe0e14826;
}


