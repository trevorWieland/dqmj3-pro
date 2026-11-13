#include "006c7f9c_006c89bc.h"



void fn_006c89bc(int param_1,int param_2)

{
  fn_0078ef08(param_2);
  fn_0078e9a4(param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0x70));
  return;
}



/* WARNING: Removing unreachable block (ram,0x006c8974) */

int fn_006c887c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int local_28 [6];
  
  piVar4 = local_28;
  iVar2 = fn_006c9754();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24) + *(short *)(iVar2 + 2) * 0x40;
  }
  iVar3 = fn_006c9754(param_1,param_2);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x38),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x60),(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = fVar5 * fVar6 * 0.1;
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  if (*(char *)(iVar2 + 7) == '\0') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
joined_r0x006c8914:
    if (sVar1 == param_2) {
      fVar5 = fVar5 * 5.0;
      fn_006f9f20();
      goto LAB_006c895c;
    }
  }
  else if (*(char *)(iVar2 + 7) == '\x02') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
    goto joined_r0x006c8914;
  }
  fn_006f9f20();
LAB_006c895c:
  local_28[0] = (int)fVar5;
  local_28[1] = 9999999;
  local_28[2] = 1;
  if ((int)fVar5 < 1) {
    piVar4 = local_28 + 2;
  }
  if (9999999 < *piVar4) {
    piVar4 = local_28 + 1;
  }
  return *piVar4;
}



int fn_006c879c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = fn_006c9754();
  if (param_3 < (uint)(*(int *)(iVar1 + 0x424) - *(int *)(iVar1 + 0x420) >> 1)) {
    iVar1 = (int)*(short *)(*(int *)(iVar1 + 0x420) + param_3 * 2);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



undefined4 fn_006c85d4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar3 = 0;
  iVar1 = (param_1[1] - *param_1) / 0x54;
  if (0 < iVar1) {
    do {
      iVar2 = *param_1 + iVar3 * 0x54;
      local_30 = *(float *)(param_2 + 0x20) - *(float *)(iVar2 + 0x18);
      local_2c = *(float *)(param_2 + 0x24) - *(float *)(iVar2 + 0x1c);
      local_28 = *(float *)(param_2 + 0x28) - *(float *)(iVar2 + 0x20);
      fn_0016947c(&local_30,iVar2 + 0x24);
      local_30 = *(float *)(iVar2 + 0x18) + local_30;
      local_2c = *(float *)(iVar2 + 0x1c) + local_2c;
      local_28 = *(float *)(iVar2 + 0x20) + local_28;
      iVar2 = fn_005f1b48(iVar2,iVar2 + 0xc,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  iVar1 = (param_1[4] - param_1[3]) / 0x54;
  if (0 < iVar1) {
    do {
      iVar2 = param_1[3] + iVar3 * 0x54;
      local_30 = *(float *)(param_2 + 0x20) - *(float *)(iVar2 + 0x18);
      local_2c = *(float *)(param_2 + 0x24) - *(float *)(iVar2 + 0x1c);
      local_28 = *(float *)(param_2 + 0x28) - *(float *)(iVar2 + 0x20);
      fn_0016947c(&local_30,iVar2 + 0x24);
      local_30 = *(float *)(iVar2 + 0x18) + local_30;
      local_28 = *(float *)(iVar2 + 0x20) + local_28;
      local_2c = *(float *)(iVar2 + 0x1c) + local_2c;
      iVar2 = fn_005f1b48(iVar2,iVar2 + 0xc,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



undefined4 fn_006c83f0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar3 = 0;
  iVar1 = (param_1[4] - param_1[3]) / 0x54;
  if (0 < iVar1) {
    do {
      iVar2 = param_1[3] + iVar3 * 0x54;
      local_30 = *(float *)(param_2 + 0x20) - *(float *)(iVar2 + 0x18);
      local_2c = *(float *)(param_2 + 0x24) - *(float *)(iVar2 + 0x1c);
      local_28 = *(float *)(param_2 + 0x28) - *(float *)(iVar2 + 0x20);
      fn_0016947c(&local_30,iVar2 + 0x24);
      local_30 = *(float *)(iVar2 + 0x18) + local_30;
      local_2c = *(float *)(iVar2 + 0x1c) + local_2c;
      local_28 = *(float *)(iVar2 + 0x20) + local_28;
      iVar2 = fn_005f1b48(iVar2,iVar2 + 0xc,&local_30);
      if (iVar2 != 0) {
        return 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  iVar1 = (param_1[1] - *param_1) / 0x54;
  if (0 < iVar1) {
    do {
      iVar2 = *param_1 + iVar3 * 0x54;
      local_30 = *(float *)(param_2 + 0x20) - *(float *)(iVar2 + 0x18);
      local_2c = *(float *)(param_2 + 0x24) - *(float *)(iVar2 + 0x1c);
      local_28 = *(float *)(param_2 + 0x28) - *(float *)(iVar2 + 0x20);
      fn_0016947c(&local_30,iVar2 + 0x24);
      local_30 = *(float *)(iVar2 + 0x18) + local_30;
      local_2c = *(float *)(iVar2 + 0x1c) + local_2c;
      local_28 = *(float *)(iVar2 + 0x20) + local_28;
      iVar2 = fn_005f1b48(iVar2,iVar2 + 0xc,&local_30);
      if (iVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



int fn_006c83a0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x22);
  cVar2 = *(char *)(param_1 + 0x14);
  iVar4 = 0;
  if ((param_2 != 0) || (iVar3 = fn_0038d598(*(undefined4 *)(param_1 + 4)), iVar3 != 0)) {
    iVar4 = (int)*(short *)(param_1 + (char)(cVar1 * '\n' + -10 + cVar2) * 2 + 0x44);
  }
  return iVar4;
}



int fn_006c832c(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x10) + 4) + 8;
}



undefined4 fn_006c8304(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar1;
}



int fn_006c80c8(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar9 = (int *)*param_1;
  local_28 = 100 - param_4;
  local_30 = 0;
  local_34 = -1;
  local_48 = 0;
  local_3c = param_3;
  local_38 = param_2;
  do {
    iVar3 = fn_00333df8(local_38,local_48);
    if (iVar3 != 0) {
      iVar4 = fn_00373bbc(local_48);
      iVar10 = 0;
      if (0 < iVar4) {
        do {
          puVar5 = (ushort *)fn_00373b18(local_48,iVar10);
          uVar2 = local_3c;
          local_44 = 0;
          uVar6 = fn_00144810(DAT_008977e8);
          iVar7 = fn_006a8a34(uVar6,uVar2 & 0xff);
          uVar6 = fn_00144810(DAT_008977e8);
          local_2c = fn_006a873c(uVar6,0);
          uVar6 = fn_00144810(DAT_008977e8);
          iVar8 = fn_006a8a34(uVar6,local_2c);
          local_40 = local_28 + (iVar7 - iVar8) * 4;
          piVar11 = &local_44;
          if (local_44 < local_40) {
            piVar11 = &local_40;
          }
          iVar7 = *piVar11 / 2;
          if (0 < iVar7) {
            do {
              if (*(char *)(*piVar9 + (((piVar9[3] - iVar7) + 0x31) % 0x32) * 300 + 0x12a) != '\0')
              {
                iVar7 = *piVar9 + (((piVar9[3] - iVar7) + 0x31) % 0x32) * 300;
                goto LAB_006c827c;
              }
              iVar7 = iVar7 + -1;
            } while (0 < iVar7);
          }
          iVar7 = *piVar9 + ((piVar9[3] + 0x31) % 0x32) * 300;
LAB_006c827c:
          iVar7 = (*(code *)(&PTR_LAB_007c95e8)[*puVar5])(iVar7,local_3c);
          if (iVar7 == 0) {
            cVar1 = *(char *)((int)puVar5 + 3);
          }
          else {
            cVar1 = (char)puVar5[1];
          }
          iVar10 = iVar10 + 1;
          if (cVar1 == -0x80) {
            iVar3 = -100;
          }
          else {
            iVar3 = iVar3 + cVar1;
          }
        } while (iVar10 < iVar4);
      }
      iVar4 = fn_00163868(0x14);
      if (local_30 < iVar4 + iVar3) {
        local_34 = local_48;
        local_30 = iVar4 + iVar3;
      }
    }
    local_48 = local_48 + 1;
    if (0x11 < local_48) {
      return local_34;
    }
  } while( true );
}



int fn_006c7ff8(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (0 < param_2) {
    do {
      if (*(char *)(*piVar1 + (((piVar1[3] - param_2) + 0x31) % 0x32) * 300 + 0x12a) != '\0') {
        return *piVar1 + (((piVar1[3] - param_2) + 0x31) % 0x32) * 300;
      }
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return *piVar1 + ((piVar1[3] + 0x31) % 0x32) * 300;
}



int fn_006c7fd0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return (int)*(short *)(iVar1 + 8);
}



int fn_006c7f9c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006c2578(*(undefined4 *)(DAT_00897834 + 0x20),*(undefined1 *)(param_1 + 4));
  return (int)*(short *)(iVar1 + param_2 * 0x18 + 0x10);
}


