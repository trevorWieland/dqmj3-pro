#include "006c8ce8_006cfb30.h"



int fn_006cfb30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_004527b0(param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar1 != -0x375ef410) {
      return iVar1;
    }
    fn_0044fd88(1,0);
    iVar2 = iVar2 + 1;
    DAT_0089a619 = 1;
  } while (iVar2 < 3);
  DAT_0089a619 = 1;
  return iVar1;
}



void fn_006ceb64(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
    param_2 = param_2 + 4;
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x5c) == '\0') goto LAB_006cebd0;
  if (*(char *)(param_1 + 0x5d) == '\0') {
    if (*(char *)(param_1 + 0x5e) == '\0') goto LAB_006ced4c;
  }
  else if ((*(char *)(param_1 + 0x5d) == '\x01') && (*(char *)(param_1 + 0x5e) == '\x01')) {
LAB_006ced4c:
    uVar2 = 2;
    goto LAB_006cebd0;
  }
  uVar2 = 1;
LAB_006cebd0:
  *param_2 = uVar2;
  param_2[1] = 0xf0040;
  puVar3 = (undefined4 *)fn_00182e6c(param_1,param_2 + 2,0);
  if (*(char *)(param_1 + 0x10) != '\0') {
    *puVar3 = 0xe40000;
    puVar3[1] = 0x30100;
    puVar3[2] = 0x1010000;
    puVar3[3] = 0xf0101;
    puVar3[4] = (uint)*(byte *)(param_1 + 0x11);
    puVar3[5] = 0xf0102;
    puVar3 = puVar3 + 6;
  }
  puVar4 = (uint *)fn_00176688(param_1 + 0x18,puVar3,0);
  *puVar4 = (uint)(*(char *)(param_1 + 0x30) != '\0') | (uint)*(byte *)(param_1 + 0x32) << 4 |
            (uint)*(byte *)(param_1 + 0x31) << 8;
  puVar4[1] = 0x30104;
  puVar4[2] = (uint)(*(char *)(param_1 + 0x38) != '\0') | (uint)*(byte *)(param_1 + 0x3c) << 4 |
              (uint)*(byte *)(param_1 + 0x39) << 8 | *(int *)(param_1 + 0x40) << 0x10 |
              *(int *)(param_1 + 0x44) << 0x18;
  puVar4[3] = 0xf0105;
  puVar4[4] = (uint)*(byte *)(param_1 + 0x48) | (uint)*(byte *)(param_1 + 0x49) << 4 |
              (uint)*(byte *)(param_1 + 0x4a) << 8;
  puVar4[5] = 0xf0106;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x58) + 0x50);
  uVar7 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    uVar7 = 0x100;
  }
  if ((bVar1 & 2) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x200;
  }
  if ((bVar1 & 4) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x400;
  }
  if ((bVar1 & 8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x800;
  }
  if (*(char *)(param_1 + 0x55) == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1000;
  }
  puVar4[6] = uVar6 | (uint)(*(char *)(param_1 + 0x54) != '\0') |
                      (uint)*(byte *)(param_1 + 0x56) << 4 | uVar7 | uVar8 | uVar9 | uVar5;
  puVar4[7] = 0xf0107;
  uVar2 = fn_006ced78(param_1 + 100,puVar4 + 8);
  fn_00182f2c(param_1 + 0x7c,uVar2,0);
  return;
}



int fn_006ca964(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar2 = 1;
  do {
    uVar4 = uVar2 & 0xff;
    if ((((param_2 != 0) || (iVar1 = fn_006a7ae8(uVar4), iVar1 == param_3)) &&
        (iVar1 = fn_006a7b08(uVar4), iVar1 != 0)) && (iVar1 = fn_00289500(uVar4), iVar1 != 0)) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf8);
  return iVar3;
}



void fn_006c9598(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  undefined *puVar4;
  short *psVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      puVar4 = &UNK_007bdbd0;
      goto LAB_006c95f4;
    }
    puVar4 = &UNK_007bdb94;
  }
  else {
    if (param_5 == 0) {
      puVar4 = &UNK_007bda90;
LAB_006c95f4:
      puVar4 = puVar4 + *(int *)(&DAT_007bda30 + param_2 * 4) * 0x34;
      goto LAB_006c9608;
    }
    puVar4 = &DAT_007bda54;
  }
  puVar4 = puVar4 + *(int *)(&DAT_007bda30 + param_2 * 4) * 0xc;
  do {
    do {
      if (param_5 == 0) {
LAB_006c9608:
        uVar1 = 0x1a;
      }
      else {
        uVar1 = 6;
      }
      iVar2 = fn_00163868(uVar1);
      puVar7 = (undefined4 *)(int)*(short *)(puVar4 + iVar2 * 2);
    } while ((puVar7 == (undefined4 *)0x0) || (iVar2 = fn_0068f818(puVar7), iVar2 == 0));
    psVar3 = (short *)param_3[1];
    psVar5 = (short *)*param_3;
    while( true ) {
      if (psVar5 != psVar3) {
        puVar6 = (undefined4 *)(int)*psVar5;
      }
      if (psVar5 == psVar3 || puVar6 == puVar7) break;
      psVar5 = psVar5 + 1;
    }
  } while (psVar5 != psVar3);
  return;
}



void fn_006c8ce8(int param_1,int *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  uint *puVar5;
  short *psVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  short *local_74;
  short *local_70;
  short *local_6c;
  undefined4 local_68;
  short *local_64;
  short *local_60;
  short *local_5c;
  short local_58 [2];
  short local_54 [4];
  uint local_4c [2];
  undefined4 local_44;
  
  uVar8 = 0;
  local_44 = 0;
  local_64 = (short *)0x0;
  local_60 = (short *)0x0;
  local_5c = (short *)0x0;
  if (param_2[1] - *param_2 >> 1 != 0) {
    do {
      if (local_60 == local_5c) {
        fn_0079e460(&local_64,local_60);
        psVar7 = local_60;
      }
      else {
        psVar7 = local_60 + 1;
        if (local_60 != (short *)0x0) {
          *local_60 = *(short *)(*(int *)(param_1 + 0x24) + *(short *)(*param_2 + uVar8 * 2) * 0x40)
          ;
        }
      }
      local_60 = psVar7;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_2[1] - *param_2 >> 1));
  }
  psVar6 = local_60;
  psVar7 = local_64;
  psVar11 = local_64 + 1;
  if (psVar11 != local_60) {
    iVar9 = (int)local_60 - (int)psVar11;
    fn_007b33f0(psVar11,local_60,iVar9 >> 1,fn_0065c2e8);
    if (iVar9 < 0x21) {
      for (psVar7 = psVar7 + 2; psVar7 != psVar6; psVar7 = psVar7 + 1) {
        local_54[0] = *psVar7;
        iVar9 = fn_0065c2e8(local_54,psVar11);
        if (iVar9 == 0) {
          local_68 = CONCAT22(((unsigned int)(local_68) >> 16) & 0xffff,local_54[0]);
          iVar9 = fn_0065c2e8(&local_68,psVar7 + -1);
          psVar3 = psVar7 + -1;
          psVar4 = psVar7;
          while (psVar10 = psVar3, iVar9 != 0) {
            *psVar4 = *psVar10;
            iVar9 = fn_0065c2e8(&local_68,psVar10 + -1);
            psVar3 = psVar10 + -1;
            psVar4 = psVar10;
          }
          *psVar4 = (short)local_68;
        }
        else {
          psVar4 = psVar7 + 1;
          psVar3 = psVar7;
          if (psVar11 < psVar7) {
            iVar9 = (int)psVar7 - (int)psVar11;
            if (0 < iVar9) {
              if (iVar9 * 0x40000000 < 0) {
                psVar3 = psVar7 + -1;
                *psVar7 = *psVar3;
                psVar4 = psVar7;
              }
              for (iVar9 = iVar9 >> 2; iVar9 != 0; iVar9 = iVar9 + -1) {
                psVar4[-1] = psVar3[-1];
                psVar3 = psVar3 + -2;
                psVar4 = psVar4 + -2;
                *psVar4 = *psVar3;
              }
            }
          }
          else {
            while (psVar11 != psVar3) {
              psVar4 = psVar4 + -1;
              *psVar4 = psVar3[-1];
              psVar3 = psVar3 + -1;
            }
          }
          *psVar11 = local_54[0];
        }
      }
    }
    else {
      for (psVar4 = psVar7 + 2; psVar4 != psVar7 + 0x11; psVar4 = psVar4 + 1) {
        local_54[0] = *psVar4;
        iVar9 = fn_0065c2e8(local_54,psVar11);
        if (iVar9 == 0) {
          local_58[0] = local_54[0];
          iVar9 = fn_0065c2e8(local_58,psVar4 + -1);
          psVar10 = psVar4 + -1;
          psVar3 = psVar4;
          while (psVar2 = psVar10, iVar9 != 0) {
            *psVar3 = *psVar2;
            iVar9 = fn_0065c2e8(local_58,psVar2 + -1);
            psVar10 = psVar2 + -1;
            psVar3 = psVar2;
          }
          *psVar3 = local_58[0];
        }
        else {
          psVar3 = psVar4 + 1;
          psVar10 = psVar4;
          if (psVar11 < psVar4) {
            iVar9 = (int)psVar4 - (int)psVar11;
            if (0 < iVar9) {
              if (iVar9 * 0x40000000 < 0) {
                psVar10 = psVar4 + -1;
                *psVar4 = *psVar10;
                psVar3 = psVar4;
              }
              for (iVar9 = iVar9 >> 2; iVar9 != 0; iVar9 = iVar9 + -1) {
                psVar3[-1] = psVar10[-1];
                psVar10 = psVar10 + -2;
                psVar3 = psVar3 + -2;
                *psVar3 = *psVar10;
              }
            }
          }
          else {
            while (psVar11 != psVar10) {
              psVar3 = psVar3 + -1;
              *psVar3 = psVar10[-1];
              psVar10 = psVar10 + -1;
            }
          }
          *psVar11 = local_54[0];
        }
      }
      for (psVar7 = psVar7 + 0x11; psVar7 != psVar6; psVar7 = psVar7 + 1) {
        local_68 = (local_68 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)(local_68 >> 0x10)) & 0xffff) << 16);
        local_68 = CONCAT22(((unsigned int)(local_68) >> 16) & 0xffff,*psVar7);
        iVar9 = fn_0065c2e8(&local_68,psVar7 + -1);
        psVar4 = psVar7 + -1;
        psVar11 = psVar7;
        while (psVar3 = psVar4, iVar9 != 0) {
          *psVar11 = *psVar3;
          iVar9 = fn_0065c2e8(&local_68,psVar3 + -1);
          psVar4 = psVar3 + -1;
          psVar11 = psVar3;
        }
        *psVar11 = (short)local_68;
      }
    }
  }
  iVar9 = fn_0066173c((int)*local_64);
  if (iVar9 < 2) {
    sVar1 = *local_64;
    *local_64 = local_64[1];
    local_64[1] = sVar1;
    local_44 = 1;
  }
  local_74 = (short *)0x0;
  local_70 = (short *)0x0;
  local_6c = (short *)0x0;
  local_68 = 0x20;
  local_4c[0] = (int)local_60 - (int)local_64 >> 1;
  puVar5 = local_4c;
  if (local_4c[0] < 0x20) {
    puVar5 = &local_68;
  }
  uVar8 = *puVar5;
  local_74 = (short *)fn_00100fc6(uVar8 << 1,0);
  psVar6 = local_74;
  for (psVar7 = local_64; psVar7 != local_60; psVar7 = psVar7 + 1) {
    if (psVar6 != (short *)0x0) {
      *psVar6 = *psVar7;
    }
    psVar6 = psVar6 + 1;
  }
  local_70 = local_74 + ((int)local_60 - (int)local_64 >> 1);
  local_6c = local_74 + uVar8;
  fn_003634fc(10,&local_74,1,0,local_44);
  psVar7 = local_74;
  if (local_70 < local_74) {
    do {
      psVar7 = psVar7 + 1;
    } while (psVar7 != local_70);
  }
  fn_001008c4(local_74,(int)local_6c - (int)local_74 >> 1,0);
  psVar7 = local_64;
  if (local_60 < local_64) {
    do {
      psVar7 = psVar7 + 1;
    } while (psVar7 != local_60);
  }
  fn_001008c4(local_64,(int)local_5c - (int)local_64 >> 1,0);
  return;
}


