#include "001667b8_00166d54.h"



undefined4 fn_00166d54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int *local_14;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_00159164(param_1,param_2,0x8004000,&local_10);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_14 = (int *)fn_00190c50(*(undefined4 *)(local_10 + 4));
    local_18 = 0xa008000;
    if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1,&local_18);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_00166b2c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_stack_00000000;
  uint *local_40;
  int *local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  local_40 = &local_30;
  local_2c = (int *)0x0;
  local_30 = 0x1000001;
  local_3c = (int *)(uint)(in_stack_00000000 != 0);
  local_38 = (uint)*(char *)(*(int *)(param_1 + 0x8c) + 0xa8);
  iVar1 = fn_0016a054(param_1);
  if (iVar1 == 0) {
    if (((local_30 & 0x8000000) != 0) &&
       (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  piVar4 = local_2c;
  piVar2 = (int *)fn_002fece8(0x40);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = 0;
    *piVar2 = (int)&DAT_008516d0;
    piVar2[2] = 0;
    piVar2[6] = 0x1000001;
    piVar2[7] = 0;
    piVar2[8] = 0x1000001;
    piVar2[9] = 0;
    piVar2[10] = 0;
    piVar2[0xb] = 0;
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    local_38 = 0x8002000;
    local_34 = piVar4;
    if (piVar4 == (int *)0x0) goto code_r0x00166c34;
    piVar4[1] = piVar4[1] + 1;
    fn_0019e864(piVar2 + 8,&local_38);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar3 = local_34[1], local_34[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    piVar2[5] = iVar1;
    piVar2[3] = 0;
    piVar2[4] = 0;
    fn_0019e8c4(iVar1 + 0x44,piVar2);
  }
  local_40 = (uint *)0x8000100;
  local_3c = piVar2;
  if (piVar2 != (int *)0x0) {
    piVar2[1] = piVar2[1] + 1;
    fn_00173d1c(param_1,&local_40);
    if ((((uint)local_40 & 0x8000000) != 0) &&
       (iVar1 = local_3c[1], local_3c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    if (((local_30 & 0x8000000) != 0) &&
       (iVar1 = local_2c[1], local_2c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    return 0;
  }
code_r0x00166c34:
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



int fn_00166b28(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0019e94c(param_1,1);
  if (iVar1 == 0) {
    if ((param_1 + 0xe1000000 < 0x600000) || (param_1 == 0x1f600000)) {
      iVar1 = param_1 + 0xf9000000;
    }
    else {
      iVar1 = fn_00170868();
      if ((iVar1 == 0) || (iVar1 = fn_00170880(param_1,1), iVar1 == 0)) {
        uVar2 = fn_001708e4();
        iVar1 = fn_001708cc();
        if ((uVar2 == 0) || ((param_1 < uVar2 || (iVar1 + uVar2 <= param_1)))) {
          return 0;
        }
        if (uVar2 < 0x30000000) {
          iVar1 = param_1 + 0xc000000;
        }
        else {
          iVar1 = param_1 + 0xf0000000;
        }
        return iVar1;
      }
    }
  }
  return iVar1;
}



undefined4 fn_00166ad8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0x20000) {
    iVar2 = fn_0013e068();
    if (iVar2 == 0) {
      uVar1 = 0x1f000000;
    }
    else {
      uVar1 = 0x1f180000;
    }
    return uVar1;
  }
  if (param_1 == 0x30000) {
    iVar2 = fn_0013e068(0x30000);
    if (iVar2 == 0) {
      uVar1 = 0x1f300000;
    }
    else {
      uVar1 = 0x1f380000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_00166a9c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x20000) {
    fn_0013e068();
    return 0x1f2fffff;
  }
  if (param_1 == 0x30000) {
    fn_0013e068(0x30000);
    uVar1 = 0x1f5fffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_00166a94(undefined4 param_1)

{
  return param_1;
}



void fn_00166900(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  if (DAT_008bf790 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < DAT_008bf794) {
    uVar10 = 0;
    puVar6 = DAT_008bf790;
    if (param_2 != 0) {
      do {
        puVar7 = (undefined4 *)(param_3 + uVar10 * 4);
        uVar1 = param_2 - uVar10;
        puVar8 = puVar7 + 1;
        if (0x80 < uVar1) {
          uVar1 = 0x80;
        }
        *puVar6 = *puVar7;
        uVar9 = uVar1 & 0xfffffffe;
        puVar6[1] = uVar1 * 0x100000 - 0x100000 | param_1 | 0xf0000;
        puVar7 = puVar6;
        while (puVar6 = puVar7 + 2, (uVar1 & 0xe) != 0) {
          puVar3 = puVar8 + 1;
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 2;
          puVar7[3] = *puVar3;
          uVar9 = uVar9 - 2;
          puVar7 = puVar6;
          uVar1 = uVar9;
        }
        if (uVar9 < 0x80000000) {
          iVar5 = 0;
          iVar2 = (int)((-0xf - uVar9) + ((uint)((int)(-0xf - uVar9) >> 0x1f) >> 0x1c)) >> 4;
          for (iVar11 = 0; -iVar11 != iVar2 && iVar11 <= -iVar2; iVar11 = iVar11 + 1) {
            puVar3 = puVar8 + iVar5 + -1;
            iVar4 = 8;
            puVar7 = puVar6 + iVar5 + -1;
            do {
              iVar4 = iVar4 + -1;
              puVar7[1] = puVar3[1];
              puVar3 = puVar3 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar3;
            } while (iVar4 != 0);
            iVar5 = iVar5 + 0x10;
          }
          puVar6 = puVar6 + iVar2 * -0x10;
        }
        else {
          do {
            uVar9 = uVar9 - 0x10;
            iVar2 = (int)puVar6 - (int)puVar8 >> 2;
            bVar12 = iVar2 == 0;
            iVar5 = iVar2;
            if (0 < iVar2) {
              iVar5 = 0x10 - iVar2;
              bVar12 = iVar2 == 0x10;
            }
            if (bVar12 || iVar5 < 0 != (0 < iVar2 && SBORROW4(0x10,iVar2))) {
              fn_0018437c(puVar6,puVar8,0x40);
              puVar8 = puVar8 + 0x10;
              puVar6 = puVar6 + 0x10;
            }
            else {
              iVar2 = 0;
              do {
                puVar3 = puVar8 + 1;
                iVar2 = iVar2 + 2;
                puVar7 = puVar6 + 1;
                *puVar6 = *puVar8;
                puVar8 = puVar8 + 2;
                puVar6 = puVar6 + 2;
                *puVar7 = *puVar3;
              } while (iVar2 < 0x10);
            }
          } while (uVar9 != 0);
        }
        uVar10 = uVar10 + 0x80;
      } while (uVar10 < param_2);
    }
    DAT_008bf790 = puVar6;
  }
  else {
    DAT_008bf790 = DAT_008bf794;
  }
  return;
}



void fn_00166818(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  *(undefined4 *)(iVar1 + 0x54) = *param_2;
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  return;
}



bool fn_00166804(int param_1)

{
  return '\0' < *(char *)(param_1 + 0xa9);
}



bool fn_001667f0(int param_1)

{
  return '\0' < *(char *)(param_1 + 0xaa);
}



bool fn_001667e0(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) != 0;
}



uint fn_001667c8(int param_1,uint param_2)

{
  return *(uint *)(param_1 + ((int)param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



byte fn_001667b8(byte *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 0xff) & 1;
}


