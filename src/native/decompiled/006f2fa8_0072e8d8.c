#include "006f2fa8_0072e8d8.h"



void fn_0072e8d8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar1 = DAT_008bfab0;
  uVar7 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  uVar8 = 0x1010000;
  if (1 < param_1) {
    if (param_1 == 2) {
      uVar8 = 0x2020000;
    }
    else {
      if (param_1 != 3) {
        return;
      }
      uVar8 = 0x2030000;
    }
  }
  iVar6 = -param_2;
  if (uVar7 != 0x8517) {
    if (uVar7 < 0x8517) {
      if (uVar7 == 0xde1) {
        piVar3 = DAT_008bfad8;
        if (*(int *)(DAT_008bfab0 + *(int *)(DAT_008bfab0 + 0x58) * 4 + 0x5c) != 0) {
          piVar3 = (int *)DAT_008bfad8[*(int *)(DAT_008bfab0 + 0x58) + 0x204];
        }
        if (param_2 == 0) {
          iVar6 = 1;
        }
        iVar2 = *piVar3;
        iVar5 = iVar2 + 0x34;
        goto LAB_0072e9ec;
      }
      if (uVar7 != 0x8515 && uVar7 != 0x8516) {
        return;
      }
    }
    else if ((uVar7 != 0x8518 && uVar7 != 0x8519) && uVar7 != 0x851a) {
      return;
    }
  }
  if (*(int *)(DAT_008bfab0 + *(int *)(DAT_008bfab0 + 0x58) * 4 + 0x68) == 0) {
    iVar2 = DAT_008bfad8[1];
  }
  else {
    iVar2 = *(int *)DAT_008bfad8[*(int *)(DAT_008bfab0 + 0x58) + 0x207];
  }
  if (param_2 == 0) {
    iVar6 = 1;
  }
  iVar5 = iVar2 + uVar7 * 0x44 + -0x235960;
LAB_0072e9ec:
  fn_00743b5c(iVar2,iVar5,iVar6,param_3,param_4,param_5,param_6,param_7,uVar8);
  uVar4 = *(int *)(iVar1 + 0x58) + 10;
  uVar7 = uVar4 >> 5;
  *(uint *)(iVar1 + uVar7 * 4) = *(uint *)(iVar1 + uVar7 * 4) | 1 << (uVar4 & 0x1f);
  return;
}



void fn_00703e40(void)

{
  DAT_0089a504 = 0;
  fn_00303b10(&DAT_0089a504,fn_0079ef50,0x100000);
  return;
}



void fn_00700470(void)

{
  DAT_00898154 = 0;
  fn_00303b10(&DAT_00898154,fn_0079eeac,0x100000);
  return;
}



undefined4 fn_006f96a0(void)

{
  return *(undefined4 *)(*(int *)(DAT_008bf798 + 8) + 0x1c);
}



undefined4 fn_006f9688(void)

{
  return *(undefined4 *)(*(int *)(DAT_008bf798 + 8) + 0xc);
}



void fn_006f7998(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x1e0) != 0) && (*(char *)(param_1 + 0x208) != -1)) {
    cVar1 = fn_00682c34(0);
    fn_006afd2c(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(param_1 + 0x1e0),(int)cVar1,
                 (int)*(char *)(param_1 + 0x208));
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_006f7580(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4);
  fn_002240d8(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4),1);
  return;
}



void fn_006f7134(void)

{
  fn_0028c5e0(*(undefined4 *)(DAT_008977e0 + 0x28));
  return;
}



void fn_006f5dec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x5b4) == 0) {
    iVar1 = *(int *)(iVar3 + 0x8c);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
    if (iVar1 != 0 && iVar2 != 0) {
      *(undefined4 *)(iVar3 + 0x5b4) = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  return;
}



void fn_006f5d6c(undefined4 param_1,int param_2)

{
  fn_006e9e24(*(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18),param_2 != 0);
  return;
}



void fn_006f4114(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  undefined4 local_20;
  
  psVar4 = (short *)&local_20;
  psVar6 = (short *)&local_20;
  local_20 = param_4;
  iVar3 = fn_006924c4(param_2);
  local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)iVar3) & 0xffff);
  if (iVar3 == 0) {
    return;
  }
  if (iVar3 == 10000) {
    iVar3 = (int)(short)(*(short *)(param_1 + 0x1e) + 1U & 0xfffe) / 2;
    local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)iVar3) & 0xffff);
    if (iVar3 < 1) {
LAB_006f4460:
      psVar6 = &DAT_007d5db2;
    }
LAB_006f41f8:
    local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*psVar6) & 0xffff);
  }
  else {
    if (iVar3 == 0x2711) {
      local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*(short *)(param_1 + 0x1e)) & 0xffff);
      if (*(short *)(param_1 + 0x1e) < 1) {
        psVar4 = &DAT_007d5db2;
      }
      local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*psVar4) & 0xffff);
    }
    else {
      if (iVar3 != 0x2712) {
        if ('\0' < *(char *)(param_1 + 0x8c)) {
          local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(0) & 0xffff);
          return;
        }
        if ((*(byte *)(param_1 + 0x32e) >> 4 & 1) == 0) {
          if ((*(byte *)(param_1 + 0x32e) >> 5 & 1) != 0) {
            local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(iVar3 / 2)) & 0xffff);
          }
        }
        else {
          local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)((int)(iVar3 * 3 + ((uint)(iVar3 * 3 >> 0x1f) >> 0x1e)) >> 2)) & 0xffff);
        }
        bVar1 = *(byte *)(param_1 + 0x325);
        if ((bVar1 >> 3 & 1) == 0) {
          if ((bVar1 >> 4 & 1) == 0) {
            if ((bVar1 >> 5 & 1) == 0) {
              if ((bVar1 >> 6 & 1) != 0) {
                local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 6) / 2)) & 0xffff);
              }
            }
            else {
              local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 5) / 2)) & 0xffff);
            }
          }
          else {
            local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 4) / 2)) & 0xffff);
          }
        }
        else {
          local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 3) / 2)) & 0xffff);
        }
        if (*(char *)(param_1 + 0x32a) < '\0') {
          local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 3) / 2)) & 0xffff);
        }
        else if ((*(byte *)(param_1 + 0x32b) & 1) == 0) {
          if ((*(byte *)(param_1 + 0x32b) >> 1 & 1) != 0) {
            local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 5) / 2)) & 0xffff);
          }
        }
        else {
          local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)(((short)local_20 * 4) / 2)) & 0xffff);
        }
        iVar3 = (int)(short)local_20;
        iVar7 = 0;
        do {
          psVar4 = (short *)fn_00660bd8((int)(short)iVar7);
          if ((*(byte *)(param_1 + ((int)*psVar4 >> 3) + 0x31c) >> ((int)*psVar4 & 7U) & 1) != 0) {
            iVar5 = fn_00660bd8((int)(short)iVar7);
            iVar5 = fn_00691a0c(param_2,*(undefined1 *)(iVar5 + 2));
            if (iVar5 != 0) {
              iVar3 = iVar3 / 2;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 10);
        if ((((*(byte *)(param_1 + 0x321) >> 1 & 1) != 0) &&
            (iVar7 = fn_00163a00(param_2), iVar7 == 4)) ||
           (((*(byte *)(param_1 + 0x321) >> 2 & 1) != 0 &&
            (iVar7 = fn_00163a00(param_2), iVar7 == 5)))) {
          iVar3 = iVar3 / 2;
        }
        if (((*(byte *)(param_1 + 0x321) & 1) != 0) &&
           ((iVar7 = fn_006924f4(param_2), iVar7 != 0 ||
            (iVar7 = fn_006925f4(param_2), iVar7 != 0)))) {
          iVar3 = iVar3 / 2;
        }
        sVar2 = (short)iVar3;
        if ('\0' < *(char *)(param_1 + 0xac)) {
          sVar2 = (short)(iVar3 << 1);
        }
        if (*(char *)(param_1 + 0x350) < '\0') {
          sVar2 = sVar2 << 1;
        }
        if (sVar2 < 1) goto LAB_006f4460;
        goto LAB_006f41f8;
      }
      local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*(short *)(param_1 + 0x1e)) & 0xffff);
      if ((short)local_20 < 0x96) {
        local_20 = (local_20 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(0x96) & 0xffff);
      }
    }
  }
  return;
}



void fn_006f2fa8(int param_1)

{
  short sVar1;
  uint *puVar2;
  uint local_30;
  undefined2 local_2c [2];
  uint local_28;
  undefined1 local_24;
  undefined4 local_1c;
  undefined2 local_18;
  
  local_1c = 0x80002;
  local_18 = 200;
  sVar1 = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x3e) + *(short *)(param_1 + 0x4a);
  puVar2 = &local_28;
  if (sVar1 < 1) {
    puVar2 = &local_30;
  }
  local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,sVar1);
  local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,1);
  local_2c[0] = 9999;
  local_24 = *(undefined1 *)(param_1 + 0x406);
  if (9999 < (short)*puVar2) {
    puVar2 = (uint *)local_2c;
  }
  local_30 = 0x80002;
  local_2c[0] = 200;
  local_28 = (uint)('\0' < *(char *)(param_1 + 0xa9));
  fn_0063a10c((int)(short)*puVar2,(int)*(char *)(param_1 + 0x5e),&DAT_007d5dc8,9);
  return;
}


