#include "single_007458f4_2.h"



void fn_007458f4(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  uint local_30;
  uint *puStack_2c;
  
  puVar1 = DAT_008bfab0;
  fVar7 = (float)VectorSignedToFloat(DAT_008bfab0[10],(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 * 0.5;
  uVar2 = 0;
  if (ABS(fVar7) != 0.0) {
    uVar2 = ((uint)ABS(fVar7) >> 0x17) - 0x40;
  }
  bVar6 = -1 < (int)uVar2;
  if (bVar6) {
    uVar2 = ((uint)fVar7 & 0x7fffff) >> 7 | uVar2 << 0x10;
  }
  if (bVar6) {
    uVar2 = uVar2 | ((uint)fVar7 >> 0x1f) << 0x17;
  }
  else {
    uVar2 = ((uint)fVar7 >> 0x1f) << 0x17;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = uVar2;
    DAT_008bf790[1] = 0xf0041;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  puStack_2c = DAT_008bf790;
  fVar7 = (float)VectorSignedToFloat(puVar1[0xb],(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = fVar7 * 0.5;
  iVar3 = 0;
  if (ABS(fVar7) != 0.0) {
    iVar3 = ((uint)ABS(fVar7) >> 0x17) - 0x40;
  }
  if (iVar3 < 0) {
    uVar2 = ((uint)fVar7 >> 0x1f) << 0x17;
  }
  else {
    uVar2 = ((uint)fVar7 & 0x7fffff) >> 7 | iVar3 << 0x10 | ((uint)fVar7 >> 0x1f) << 0x17;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = uVar2;
    DAT_008bf790[1] = 0xf0043;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  local_30 = puVar1[10];
  if (local_30 != 0) {
    puStack_2c = (uint *)puVar1[0xb];
  }
  if (local_30 != 0 && puStack_2c != (uint *)0x0) {
    iVar3 = 0;
    do {
      uVar2 = (&local_30)[iVar3];
      if (uVar2 == 0x280) {
        (&local_30)[iVar3] = 0x36999999;
      }
      else if ((int)uVar2 < 0x281) {
        if (uVar2 == 400) {
          (&local_30)[iVar3] = 0x3747ae14;
        }
        else {
          if ((int)uVar2 < 0x191) {
            if (uVar2 == 0xf0) {
              uVar2 = 0x38111111;
            }
            else if (uVar2 == 0x140) {
              uVar2 = 0x37999999;
            }
            else {
LAB_00745a98:
              fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
              fVar7 = 2.0 / fVar7;
              if (ABS(fVar7) == 0.0) {
                iVar4 = 0;
LAB_00745adc:
                uVar2 = (uint)fVar7 & 0x7fffff | iVar4 << 0x17 | ((uint)fVar7 >> 0x1f) << 0x1e;
              }
              else {
                iVar4 = ((uint)ABS(fVar7) >> 0x17) - 0x40;
                if (-1 < iVar4) goto LAB_00745adc;
                uVar2 = ((uint)fVar7 >> 0x1f) << 0x1e;
              }
              (&local_30)[iVar3] = uVar2;
              uVar2 = uVar2 << 1;
            }
          }
          else if (uVar2 == 0x1e0) {
            uVar2 = 0x37111111;
          }
          else {
            if (uVar2 != 600) goto LAB_00745a98;
            uVar2 = 0x36b4e81b;
          }
LAB_00745af0:
          (&local_30)[iVar3] = uVar2;
        }
      }
      else {
        if (uVar2 != 800) {
          if (uVar2 == 0x400) {
            uVar2 = 0x36000000;
          }
          else if (uVar2 == 0x4b0) {
            uVar2 = 0x35b4e81b;
          }
          else {
            if (uVar2 != 0x500) goto LAB_00745a98;
            uVar2 = 0x35999999;
          }
          goto LAB_00745af0;
        }
        (&local_30)[iVar3] = 0x3647ae14;
      }
      if (DAT_008bf790 < DAT_008bf794) {
        *DAT_008bf790 = (&local_30)[iVar3];
        DAT_008bf790[1] = iVar3 * 2 + 0x42U | 0xf0000;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  if (DAT_008bf790 < DAT_008bf794) {
    uVar2 = puVar1[8];
    uVar5 = puVar1[9];
    DAT_008bf790[1] = 0xf0068;
    *DAT_008bf790 = uVar2 | uVar5 << 0x10;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfab8;
    DAT_008bf790[1] = 0x30107;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  uVar2 = DAT_008bfad4;
  if (DAT_008bf790 < DAT_008bf794) {
    DAT_008bf790[1] = 0x80126;
    *DAT_008bf790 = uVar2;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (*(char *)((int)puVar1 + 0x64f) == '\0') {
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 0;
      DAT_008bf790[1] = 0x10062;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 0;
      DAT_008bf790[1] = 0x10118;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
  }
  else {
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 1;
      DAT_008bf790[1] = 0x10062;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      DAT_008bf790[1] = 0x10118;
      *DAT_008bf790 = 1;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfacc;
    DAT_008bf790[1] = 0x10061;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfad0;
    DAT_008bf790[1] = 0x7006a;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfac4;
    DAT_008bf790[1] = 0xf0102;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (*(char *)((int)puVar1 + 0x64d) == '\0') {
    if (DAT_008bf790 < DAT_008bf794) {
      if ((char)puVar1[0x193] == '\0') {
        uVar2 = 0x1010000;
      }
      else {
        uVar2 = DAT_008bfab4;
      }
      *DAT_008bf790 = uVar2;
      DAT_008bf790[1] = 0xf0101;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    if (DAT_008bf790 < DAT_008bf794) {
      DAT_008bf790[1] = 0x20100;
      *DAT_008bf790 = 0x100;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
  }
  else if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = 0;
    DAT_008bf790[1] = 0x20100;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if ((char)puVar1[0xf] == '\0') {
    if (DAT_008bf790 < DAT_008bf794) {
      *DAT_008bf790 = 0;
      DAT_008bf790[1] = 0xf0040;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
  }
  else if (DAT_008bf790 < DAT_008bf794) {
    if ((puVar1[0xe] == 0x404) == (puVar1[0xd] == 0x901)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    *DAT_008bf790 = uVar2;
    DAT_008bf790[1] = 0xf0040;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = (uint)(*(char *)((int)puVar1 + 0x693) != '\0');
    DAT_008bf790[1] = 0x1011b;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfabc;
    DAT_008bf790[1] = 0xf0105;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfac0;
    DAT_008bf790[1] = 0xf0106;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = DAT_008bfac8;
    DAT_008bf790[1] = 0xf0103;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  *puVar1 = *puVar1 | 0x100;
  return;
}


