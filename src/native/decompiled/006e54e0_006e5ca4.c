#include "006e54e0_006e5ca4.h"



int fn_006e5ca4(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_006e5c60(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0xc) + param_1);
  if ((short)puVar1[param_2 * 2 + 1] == 0x5900) {
    if (param_2 < *puVar1) {
      return puVar1[param_2 * 2 + 2] + (int)puVar1;
    }
  }
  else if ((short)puVar1[param_2 * 2 + 1] == 0x5903) {
    return 0;
  }
  return 0;
}



byte * fn_006e5bac(short *param_1,uint param_2)

{
  short sVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  sVar1 = *param_1;
  puVar4 = (uint *)((int)param_1 + *(int *)(param_1 + 2));
  if (sVar1 == 0x6000) {
    pbVar2 = (byte *)(puVar4[1] + (int)puVar4);
  }
  else {
    if (sVar1 == 0x6001) {
      uVar5 = *puVar4;
      uVar3 = 0;
      if (uVar5 != 0) {
        do {
          if (param_2 <= *(byte *)((int)puVar4 + uVar3 + 4)) {
            uVar3 = *(uint *)((int)puVar4 + (uVar5 + 3 & 0xfffffffc) + uVar3 * 8 + 8);
            goto LAB_006e5c58;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
    }
    else {
      if (sVar1 != 0x6002) {
        return (byte *)0x0;
      }
      uVar3 = (uint)(byte)*puVar4;
      bVar7 = param_2 <= uVar3;
      bVar6 = uVar3 == param_2;
      if (!bVar7 || bVar6) {
        bVar7 = *(byte *)((int)puVar4 + 1) <= param_2;
        bVar6 = param_2 == *(byte *)((int)puVar4 + 1);
      }
      if (!bVar7 || bVar6) {
        uVar3 = puVar4[(param_2 - uVar3) * 2 + 2];
LAB_006e5c58:
        return (byte *)(uVar3 + (int)puVar4);
      }
    }
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}



undefined4 fn_006e54e0(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  uVar11 = *(undefined4 *)(param_2 + 300);
  uVar9 = 0;
  iVar17 = 0;
  pbVar12 = *(byte **)(param_2 + 0x20);
  bVar5 = false;
  bVar18 = true;
  *(byte **)(param_2 + 0x20) = pbVar12 + 1;
  uVar15 = (uint)*pbVar12;
  if (uVar15 == 0xa2) {
    *(byte **)(param_2 + 0x20) = pbVar12 + 2;
    uVar15 = (uint)pbVar12[1];
    bVar18 = *(char *)(param_2 + 0x24) != '\0';
  }
  if (uVar15 == 0xa3) {
    pbVar12 = *(byte **)(param_2 + 0x20);
    iVar17 = 2;
    *(byte **)(param_2 + 0x20) = pbVar12 + 1;
    uVar15 = (uint)*pbVar12;
  }
  else if (uVar15 == 0xa4) {
    pbVar12 = *(byte **)(param_2 + 0x20);
    iVar17 = 4;
    *(byte **)(param_2 + 0x20) = pbVar12 + 1;
    uVar15 = (uint)*pbVar12;
  }
  else if (uVar15 == 0xa5) {
    pbVar12 = *(byte **)(param_2 + 0x20);
    iVar17 = 5;
    *(byte **)(param_2 + 0x20) = pbVar12 + 1;
    uVar15 = (uint)*pbVar12;
  }
  if (uVar15 == 0xa0) {
    pbVar12 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar12 + 1;
    bVar1 = *pbVar12;
    uVar9 = 4;
LAB_006e55e8:
    uVar15 = (uint)bVar1;
    bVar5 = true;
  }
  else if (uVar15 == 0xa1) {
    pbVar12 = *(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = pbVar12 + 1;
    bVar1 = *pbVar12;
    uVar9 = 5;
    goto LAB_006e55e8;
  }
  if ((uVar15 & 0x80) == 0) {
    puVar13 = *(undefined1 **)(param_2 + 0x20);
    if (!bVar5) {
      uVar9 = 3;
    }
    *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
    uVar2 = *puVar13;
    iVar17 = fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
    iVar10 = (int)*(char *)(param_2 + 0xf4) + uVar15;
    if (!bVar18) {
      return 0;
    }
    uVar9 = UnsignedSaturate(iVar10,7);
    UnsignedDoesSaturate(iVar10,7);
    if ((*(char *)(param_2 + 0x7a) == '\0') && (param_3 != 0)) {
      if (iVar17 < 1) {
        iVar10 = -1;
      }
      else {
        iVar10 = iVar17;
      }
      (**(code **)(*param_1 + 0xc))
                (param_1,param_2,uVar9,uVar2,iVar10,(int)*(char *)(param_2 + 0x26));
    }
    cVar6 = *(char *)(param_2 + 0x25);
    if (cVar6 == '\0') {
      return 0;
    }
    if (iVar17 == 0) {
      cVar6 = '\x01';
    }
    *(int *)(param_2 + 0x7c) = iVar17;
    if (iVar17 == 0) {
      *(char *)(param_2 + 0x80) = cVar6;
      return 0;
    }
    return 0;
  }
  switch((int)(uVar15 & 0xf0) >> 4) {
  case 8:
    if (uVar15 == 0x88) {
      puVar13 = *(undefined1 **)(param_2 + 0x20);
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 1;
      uVar2 = *puVar13;
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 2;
      uVar3 = puVar13[1];
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 3;
      uVar4 = puVar13[2];
      *(undefined1 **)(param_2 + 0x20) = puVar13 + 4;
      if (bVar18) {
        (**(code **)(*param_1 + 8))
                  (param_1,param_2,0x88,uVar2,(uint)CONCAT21(CONCAT11(uVar3,uVar4),puVar13[3]));
        return 0;
      }
      return 0;
    }
    if (uVar15 < 0x88) {
      if (uVar15 == 0x80) {
        if (!bVar5) {
          uVar9 = 3;
        }
        uVar9 = fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
        if (bVar18) {
          *(undefined4 *)(param_2 + 0x7c) = uVar9;
          return 0;
        }
        return 0;
      }
      if (uVar15 != 0x81) {
        return 0;
      }
      if (!bVar5) {
        uVar9 = 3;
      }
      fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
    }
    else if (uVar15 == 0x89) {
      iVar17 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar17 + 1;
      *(int *)(param_2 + 0x20) = iVar17 + 2;
      *(int *)(param_2 + 0x20) = iVar17 + 3;
    }
    else {
      if (uVar15 != 0x8a) {
        return 0;
      }
      iVar17 = *(int *)(param_2 + 0x20);
      *(int *)(param_2 + 0x20) = iVar17 + 1;
      *(int *)(param_2 + 0x20) = iVar17 + 2;
      *(int *)(param_2 + 0x20) = iVar17 + 3;
    }
    break;
  case 9:
    break;
  default:
    goto LAB_006e5934;
  case 0xb:
  case 0xc:
  case 0xd:
    if (!bVar5) {
      uVar9 = 1;
    }
    fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
    if (iVar17 != 0) {
      fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,iVar17);
    }
    if (!bVar18) {
      return 0;
    }
    goto LAB_006e576c;
  case 0xe:
    if (!bVar5) {
      uVar9 = 2;
    }
    fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
    break;
  case 0xf:
    if (uVar15 == 0xf0) {
      pbVar14 = *(byte **)(param_2 + 0x20);
      pbVar12 = pbVar14 + 1;
      *(byte **)(param_2 + 0x20) = pbVar12;
      uVar16 = (uint)*pbVar14;
      uVar15 = uVar16 & 0xf0;
      if (uVar15 != 0xa0) {
        if (uVar15 < 0xa0) {
          if (uVar15 != 0x80 && uVar15 != 0x90) {
            return 0;
          }
          *(byte **)(param_2 + 0x20) = pbVar14 + 2;
          bVar1 = *pbVar12;
          if (!bVar5) {
            uVar9 = 2;
          }
          sVar7 = fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
          if (bVar18) {
            (**(code **)(*param_1 + 8))(param_1,param_2,uVar16 + 0xf000,bVar1,(int)sVar7);
            return 0;
          }
          return 0;
        }
        if (uVar15 != 0xb0) {
          if (uVar15 != 0xe0) {
            return 0;
          }
          if (!bVar5) {
            uVar9 = 2;
          }
          uVar8 = fn_006e5a5c(param_1,param_2 + 0x20,uVar11,param_2,uVar9);
          goto joined_r0x006e5a38;
        }
      }
      *(byte **)(param_2 + 0x20) = pbVar14 + 2;
      uVar8 = (ushort)*pbVar12;
joined_r0x006e5a38:
      if (bVar18) {
        (**(code **)(*param_1 + 8))(param_1,param_2,uVar16 + 0xf000,uVar8,0);
        return 0;
      }
      return 0;
    }
    if (uVar15 == 0xfe) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 2;
      return 0;
    }
    if (uVar15 == 0xff) {
      if (bVar18) {
        return 1;
      }
      return 0;
    }
  }
  if (bVar18) {
LAB_006e576c:
    (**(code **)(*param_1 + 8))(param_1,param_2,uVar15);
  }
LAB_006e5934:
  return 0;
}



uint fn_006e5a5c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = 0;
  switch(param_5) {
  case 1:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    uVar9 = (uint)*pbVar4;
    break;
  case 2:
    puVar8 = (undefined1 *)*param_2;
    *param_2 = puVar8 + 1;
    uVar2 = *puVar8;
    *param_2 = puVar8 + 2;
    uVar9 = (uint)CONCAT11(uVar2,puVar8[1]);
    break;
  case 3:
    uVar9 = 0;
    do {
      pbVar4 = (byte *)*param_2;
      *param_2 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar9 = bVar1 & 0x7f | uVar9 << 7;
    } while ((bVar1 & 0x80) != 0);
    break;
  case 4:
    puVar8 = (undefined1 *)*param_2;
    *param_2 = puVar8 + 1;
    uVar2 = *puVar8;
    *param_2 = puVar8 + 2;
    iVar10 = (int)CONCAT11(uVar2,puVar8[1]);
    *param_2 = puVar8 + 3;
    uVar2 = puVar8[2];
    *param_2 = puVar8 + 4;
    uVar3 = puVar8[3];
    iVar6 = fn_00172f98();
    uVar9 = iVar10 + (((CONCAT11(uVar2,uVar3) - iVar10) + 1) * iVar6 >> 0x10);
    break;
  case 5:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    uVar7 = (uint)*pbVar4;
    if (uVar7 < 0x20) {
      psVar5 = (short *)fn_0055e210(param_3);
    }
    else {
      if (0x2f < uVar7) {
        return 0;
      }
      psVar5 = (short *)fn_0055a4dc(param_4,uVar7 - 0x20);
    }
    if (psVar5 != (short *)0x0) {
      uVar9 = (uint)*psVar5;
    }
  }
  return uVar9;
}


