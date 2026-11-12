#include "0051a888_0051b440.h"



void fn_0051b440(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x15) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      fn_00656b0c(iVar1);
      fn_00656b7c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



undefined1 * fn_0051b374(int param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    return &DAT_e0a1482b;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    puVar1 = &DAT_e0a14827;
  }
  else {
    fn_0051a430(param_1);
    fn_0051a888(param_1);
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 *
fn_0051ab74(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  uVar1 = DAT_008bf4cc;
  local_30 = ((param_3 >> 0x10) << 0x18 | (param_3 >> 0x18) << 0x10) >> 0x10 |
             ((param_3 & 0xff) << 8 | param_3 >> 8 & 0xff) << 0x10;
  local_24 = ((param_6 >> 0x10) << 0x18 | (param_6 >> 0x18) << 0x10) >> 0x10 |
             ((param_6 & 0xff) << 8 | param_6 >> 8 & 0xff) << 0x10;
  local_2c = ((param_4 >> 0x10) << 0x18 | (param_4 >> 0x18) << 0x10) >> 0x10 |
             ((param_4 & 0xff) << 8 | param_4 >> 8 & 0xff) << 0x10;
  local_28 = ((param_5 >> 0x10) << 0x18 | (param_5 >> 0x18) << 0x10) >> 0x10 |
             ((param_5 & 0xff) << 8 | param_5 >> 8 & 0xff) << 0x10;
  piVar5 = *(int **)(param_1 + 0x10);
  uVar2 = fn_0050b080(DAT_008bf4cc,param_2);
  if ((uVar2 < 0x100000) || (uVar2 = fn_0050b080(uVar1,param_2), 0x3fffffff < uVar2)) {
    return &DAT_d8814829;
  }
  local_34 = *(undefined4 *)(param_1 + 0xc);
  iVar3 = (**(code **)(*piVar5 + 0x10))(piVar5,&local_34,param_2,0x10,0);
  puVar4 = (undefined1 *)0x0;
  if (iVar3 != 0) {
    fn_001694d4(iVar3,&local_30);
    puVar4 = (undefined1 *)fn_0050a490(piVar5);
  }
  return puVar4;
}



void fn_0051a888(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  int local_38 [5];
  
  local_38[0] = param_1[3];
  puVar1 = (undefined4 *)fn_0050953c(param_1[4],local_38);
  iVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))();
  if (iVar2 != 0) {
    fn_0051ac58(param_1);
    fn_0051ade4(param_1);
    return;
  }
  fVar13 = 1.3;
  fVar14 = 0.125;
  uVar15 = 0x3a83126f;
  do {
    piVar3 = (int *)fn_006d9a38(puVar1);
    iVar2 = piVar3[1];
    uVar7 = *(uint *)(iVar2 + 0x14);
    uVar9 = *(uint *)(iVar2 + 0x1c);
    uVar8 = *(uint *)(iVar2 + 0x18);
    uVar5 = *(uint *)(iVar2 + 0x20);
    uVar7 = ((uVar7 >> 0x10) << 0x18 | (uVar7 >> 0x18) << 0x10) >> 0x10 |
            ((uVar7 & 0xff) << 8 | uVar7 >> 8 & 0xff) << 0x10;
    uVar9 = ((uVar9 >> 0x10) << 0x18 | (uVar9 >> 0x18) << 0x10) >> 0x10 |
            ((uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff) << 0x10;
    uVar8 = ((uVar8 >> 0x10) << 0x18 | (uVar8 >> 0x18) << 0x10) >> 0x10 |
            ((uVar8 & 0xff) << 8 | uVar8 >> 8 & 0xff) << 0x10;
    if (uVar7 == 3) {
      if (*(char *)((int)param_1 + 0x59) == '\0') {
        *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(iVar2 + 1);
        fn_004ed810(param_1 + 0x20,piVar3 + 3);
        *(undefined1 *)(param_1 + 0x2a) = 1;
LAB_0051a9ac:
        (**(code **)(*param_1 + 8))(param_1,*(code **)(*param_1 + 8),0x80000,0);
      }
    }
    else if (uVar7 == 4) {
      if ((char)param_1[0xb] == '\x01') {
        if ((char)param_1[0x13] == *(char *)(iVar2 + 1)) {
          *(undefined1 *)(param_1 + 0xe) = 1;
        }
        goto LAB_0051a9ac;
      }
    }
    else if (uVar7 == 1) {
      if (*(char *)((int)param_1 + 0x59) == '\x01') {
        if (((char)param_1[0x1f] == *(char *)(iVar2 + 1)) &&
           (iVar2 = fn_006d70ac(param_1 + 0x20,piVar3 + 3), iVar2 != 0)) {
          param_1[0x25] = uVar9;
          param_1[0x26] = uVar9;
          pcVar6 = *(code **)(*param_1 + 8);
          piVar3 = param_1;
LAB_0051aa98:
          (*pcVar6)(piVar3,pcVar6,0x80000,0);
        }
      }
      else if (*(char *)((int)param_1 + 0x59) == '\x02') {
        if (((char)param_1[0x1f] != *(char *)(iVar2 + 1)) ||
           (iVar2 = fn_006d70ac(param_1 + 0x20,piVar3 + 3), iVar2 == 0)) {
          pcVar6 = *(code **)piVar3[3];
          piVar3 = piVar3 + 3;
          goto LAB_0051aa98;
        }
        param_1[0x1e] = *piVar3 + *(int *)(DAT_008c0634 + 8) + 0x3c + param_1[0x1e];
        param_1[0x24] = param_1[0x24] + 1;
      }
    }
    else if ((uVar7 == 2) && ((char)param_1[0xb] == '\x02' || (char)param_1[0xb] == '\x03')) {
      param_1[0x12] = uVar8;
      fVar12 = (float)VectorSignedToFloat(param_1[7],(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = (float)VectorUnsignedToFloat(param_1[8],(byte)(in_fpscr >> 0x16) & 3);
      fVar11 = (float)VectorSignedToFloat(param_1[10],(byte)(in_fpscr >> 0x16) & 3);
      DAT_008edb30 = uVar8;
      iVar4 = fn_00300f74((((uVar5 >> 0x10) << 0x18 | (uVar5 >> 0x18) << 0x10) >> 0x10 |
                           ((uVar5 & 0xff) << 8 | uVar5 >> 8 & 0xff) << 0x10) * 10000,
                           (int)(fVar13 * ((fVar12 * fVar14) / fVar10) * fVar11 * (float)uVar15) + 1
                          );
      iVar2 = 0;
      if (-1 < 10000 - iVar4) {
        iVar2 = 10000 - iVar4;
      }
      param_1[0x15] = iVar2;
      DAT_008edb28 = (undefined2)iVar2;
    }
    fn_0051ac58(param_1);
    fn_0051ade4(param_1);
    (**(code **)(*(int *)*puVar1 + 0x30))();
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))();
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}



void fn_0051ade4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint local_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x59);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      local_28 = 0;
      iStack_24 = 0;
      fn_004f01f4(&local_28);
      *(undefined1 *)(param_1 + 0x59) = 1;
      *(uint *)(param_1 + 0x60) = local_28;
      *(int *)(param_1 + 100) = iStack_24;
    }
  }
  else if (cVar1 == '\x01') {
    local_28 = 0;
    iStack_24 = 0;
    if (*(char *)(param_1 + 0x7c) != -3) {
      fn_004f01f4(&local_28);
      *(undefined1 *)(param_1 + 0x59) = 2;
      *(uint *)(param_1 + 0x68) = local_28;
      *(int *)(param_1 + 0x6c) = iStack_24;
      return;
    }
    fn_004f01f4(&local_28);
    iVar4 = local_28 - *(uint *)(param_1 + 0x60);
    iVar5 = iStack_24 - (*(int *)(param_1 + 100) + (uint)(local_28 < *(uint *)(param_1 + 0x60)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    iVar4 = fn_0011c134(iVar4,iVar5,*puVar2,puVar2[1]);
    if (2000 < iVar4) {
LAB_0051af34:
      *(undefined1 *)(param_1 + 0x7c) = 0xfd;
      *(undefined1 *)(param_1 + 0x59) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      fn_004ed714(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      return;
    }
  }
  else {
    if (cVar1 == '\x02') {
      local_28 = 0;
      iStack_24 = 0;
      fn_004f01f4(&local_28);
      iVar4 = local_28 - *(uint *)(param_1 + 0x68);
      iVar5 = iStack_24 - (*(int *)(param_1 + 0x6c) + (uint)(local_28 < *(uint *)(param_1 + 0x68)));
      puVar2 = (undefined4 *)fn_004f0ce8();
      iVar4 = fn_0011c134(iVar4,iVar5,*puVar2,puVar2[1]);
      if (*(int *)(param_1 + 0x28) < iVar4) {
        *(undefined1 *)(param_1 + 0x59) = 3;
      }
      return;
    }
    if (cVar1 == '\x03') {
      local_28 = 0;
      iStack_24 = 0;
      fn_004f01f4(&local_28);
      iVar4 = local_28 - *(uint *)(param_1 + 0x68);
      iVar5 = iStack_24 - (*(int *)(param_1 + 0x6c) + (uint)(local_28 < *(uint *)(param_1 + 0x68)));
      puVar2 = (undefined4 *)fn_004f0ce8();
      iVar4 = fn_0011c134(iVar4,iVar5,*puVar2,puVar2[1]);
      if (*(int *)(param_1 + 0x28) + 1000 < iVar4) {
        uVar3 = *(uint *)(param_1 + 0x48);
        bVar6 = uVar3 == 0xffffffff;
        if (bVar6) {
          uVar3 = (uint)*(byte *)(param_1 + 0x4c);
        }
        bVar7 = bVar6 && uVar3 == 0xfd;
        if (bVar6 && uVar3 == 0xfd) {
          bVar7 = *(char *)(param_1 + 0x16) == '\0';
        }
        if (bVar7) {
          fn_0051b484(param_1,*(undefined1 *)(param_1 + 0x7c));
        }
        goto LAB_0051af34;
      }
    }
  }
  return;
}



void fn_0051ac58(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  
  switch(*(undefined1 *)(param_1 + 0x2c)) {
  case 0:
    if (*(char *)(param_1 + 0x4c) == -3) {
      return;
    }
    uVar1 = 1;
    break;
  case 1:
    if (*(char *)(param_1 + 0x58) == '\0') {
      if (*(char *)(param_1 + 0x38) == '\0') {
        return;
      }
      local_20 = 0;
      local_1c = 0;
      fn_004f01f4(&local_20);
      *(undefined1 *)(param_1 + 0x2c) = 2;
      *(uint *)(param_1 + 0x40) = local_20;
      *(int *)(param_1 + 0x44) = local_1c;
      return;
    }
    goto LAB_0051acb8;
  case 2:
    if (*(char *)(param_1 + 0x58) != '\0') goto LAB_0051acb8;
    if (*(int *)(param_1 + 0x48) != -1) goto LAB_0051ad18;
    local_20 = 0;
    local_1c = 0;
    fn_004f01f4(&local_20);
    iVar3 = local_20 - *(uint *)(param_1 + 0x40);
    iVar4 = local_1c - (*(int *)(param_1 + 0x44) + (uint)(local_20 < *(uint *)(param_1 + 0x40)));
    puVar2 = (undefined4 *)fn_004f0ce8();
    iVar3 = fn_0011c134(iVar3,iVar4,*puVar2,puVar2[1]);
    if (iVar3 <= *(int *)(param_1 + 0x24)) {
      return;
    }
    uVar1 = 3;
    break;
  case 3:
    if (*(char *)(param_1 + 0x58) == '\0') {
      if (*(int *)(param_1 + 0x48) == -1) {
        local_20 = 0;
        local_1c = 0;
        fn_004f01f4(&local_20);
        iVar4 = local_20 - *(uint *)(param_1 + 0x40);
        iVar3 = local_1c - (*(int *)(param_1 + 0x44) + (uint)(local_20 < *(uint *)(param_1 + 0x40)))
        ;
        puVar2 = (undefined4 *)fn_004f0ce8();
        iVar3 = fn_0011c134(iVar4,iVar3,*puVar2,puVar2[1]);
        if (*(int *)(param_1 + 0x24) + 2000 < iVar3) {
          *(undefined1 *)(param_1 + 0x2c) = 5;
        }
        return;
      }
LAB_0051ad18:
      *(undefined1 *)(param_1 + 0x2c) = 4;
      return;
    }
LAB_0051acb8:
    *(undefined1 *)(param_1 + 0x2c) = 5;
    *(undefined1 *)(param_1 + 0x58) = 0;
    return;
  default:
    goto switchD_0051ac78_default;
  }
  *(undefined1 *)(param_1 + 0x2c) = uVar1;
switchD_0051ac78_default:
  return;
}


