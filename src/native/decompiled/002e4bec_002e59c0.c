#include "002e4bec_002e59c0.h"



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_002e59c0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  
  iVar1 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*param_3);
  if (iVar1 == 0) {
    puVar3 = &DAT_002e5ac8;
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (undefined *)fn_0022f584((char *)&DAT_002e5acc,0);
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14));
    if (*(int *)(iVar1 + 0xe0) == *param_3) {
      uVar2 = _DAT_00894274;
    }
    else {
      uVar2 = _DAT_0089427c;
    }
  }
  fn_0031b78c(param_1,param_2,7,puVar3);
  local_20 = uVar2;
  fn_002c37b4(param_1,param_2,7,&local_20);
  local_28 = &DAT_008f9cf4;
  local_24 = &DAT_008f9cf4;
  fn_002318cc(param_3,&local_28,&local_24);
  fn_0031b78c(param_1,param_2,1,local_28);
  fn_0031b78c(param_1,param_2,4,local_24);
  fn_001588d4(&local_24);
  fn_001588d4(&local_28);
  return;
}



void fn_002e5484(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar1 = *(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 4;
  if (uVar1 == 0) {
    return;
  }
  uVar8 = 1;
  sVar4 = *(short *)(*(int *)(param_1 + 0xf4) + 4);
  if (1 < uVar1) {
    do {
      iVar10 = *(int *)(param_1 + 0xf4);
      sVar5 = *(short *)(iVar10 + uVar8 * 0x10 + 4);
      if (sVar5 == sVar4) {
        iVar7 = uVar8 - 1;
        uVar1 = uVar8;
        while ((uVar1 = uVar1 + 1, uVar1 < (uint)(*(int *)(param_1 + 0xf8) - iVar10 >> 4) &&
               (*(short *)(iVar10 + uVar1 * 0x10 + 4) == sVar4))) {
          uVar8 = uVar8 + 1;
        }
        iVar10 = uVar8 + 1;
        for (; iVar7 < iVar10; iVar7 = iVar7 + 1) {
          iVar6 = iVar7 + 1;
          iVar2 = iVar7;
          if (iVar6 < iVar10) {
            do {
              if (*(uint *)(*(int *)(param_1 + 0xf4) + iVar6 * 0x10) <
                  *(uint *)(*(int *)(param_1 + 0xf4) + iVar2 * 0x10)) {
                iVar2 = iVar6;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar10);
          }
          puVar9 = (undefined4 *)(*(int *)(param_1 + 0xf4) + iVar2 * 0x10);
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0xf4) + iVar7 * 0x10);
          uVar15 = puVar9[1];
          uVar16 = puVar9[2];
          uVar17 = puVar9[3];
          uVar11 = *puVar3;
          uVar12 = puVar3[1];
          uVar13 = puVar3[2];
          uVar14 = puVar3[3];
          *puVar3 = *puVar9;
          puVar3[1] = uVar15;
          puVar3[2] = uVar16;
          puVar3[3] = uVar17;
          puVar3 = (undefined4 *)(*(int *)(param_1 + 0xf4) + iVar2 * 0x10);
          *puVar3 = uVar11;
          puVar3[1] = uVar12;
          puVar3[2] = uVar13;
          puVar3[3] = uVar14;
        }
        uVar8 = uVar8 + 1;
        sVar5 = *(short *)(*(int *)(param_1 + 0xf4) + uVar8 * 0x10 + 4);
      }
      uVar8 = uVar8 + 1;
      sVar4 = sVar5;
    } while (uVar8 < (uint)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 4));
  }
  return;
}



void fn_002e53e0(undefined4 *param_1)

{
  *param_1 = &DAT_00820b7c;
  fn_0037fb14(param_1);
  fn_0037fe64(param_1);
  fn_002feef8();
  return;
}



void fn_002e5200(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  fn_0037fc58();
  if (((uint)*(byte *)(*(int *)(param_1 + 0xac) + 8) == *(uint *)(param_1 + 0xb0)) &&
     ((uint)*(byte *)(*(int *)(param_1 + 0xac) + 9) == *(uint *)(param_1 + 0xb4))) {
    return;
  }
  fn_0037fba4(param_1);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x94));
  piVar5 = *(int **)(iVar3 + 0x10);
  uVar4 = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0xac) + 8);
  bVar2 = *(byte *)(*(int *)(param_1 + 0xac) + 9);
  do {
    iVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,(&DAT_00893dbc)[uVar4],1);
    bVar6 = uVar4 == (uint)bVar2 + (uint)bVar1 * 2;
    uVar4 = uVar4 + 1;
    *(byte *)(iVar3 + 0x44) = bVar6 | *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (uVar4 < 8);
  *(uint *)(param_1 + 0xb0) = (uint)*(byte *)(*(int *)(param_1 + 0xac) + 8);
  *(uint *)(param_1 + 0xb4) = (uint)*(byte *)(*(int *)(param_1 + 0xac) + 9);
  fn_0068ab44(param_1,0x100094f);
  return;
}



undefined4 * fn_002e51d0(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  iVar3 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)fn_0037fcf4(iVar3,param_1);
  *puVar4 = &DAT_00820b7c;
  puVar4[0x2a] = 1;
  fn_0037f918(puVar4,L"rom:/data/Layout/menu/colosseum_reception/upper/course_info.arc",
               (char *)&DAT_002e53bc,&DAT_002e53b4,unaff_r4);
  fn_0037fba4(puVar4);
  iVar3 = fn_00178f9c(puVar4[0x23],puVar4[0x25]);
  piVar6 = *(int **)(iVar3 + 0x10);
  uVar5 = 0;
  bVar1 = *(byte *)(puVar4[0x2b] + 8);
  bVar2 = *(byte *)(puVar4[0x2b] + 9);
  do {
    iVar3 = (**(code **)(*piVar6 + 0x2c))(piVar6,(&DAT_00893dbc)[uVar5],1);
    bVar7 = uVar5 == (uint)bVar2 + (uint)bVar1 * 2;
    uVar5 = uVar5 + 1;
    *(byte *)(iVar3 + 0x44) = bVar7 | *(byte *)(iVar3 + 0x44) & 0xfe;
  } while (uVar5 < 8);
  puVar4[0x2c] = (uint)*(byte *)(puVar4[0x2b] + 8);
  puVar4[0x2d] = (uint)*(byte *)(puVar4[0x2b] + 9);
  fn_0068ab44(puVar4,0x100094f);
  return puVar4;
}



undefined4 * fn_002e511c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00820a3c;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  return puVar1;
}



void fn_002e4bec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    fn_0068ab44(param_1,0x100094c);
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x002e4c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))();
    return;
  }
  iVar1 = fn_006bc9a4(param_1,param_2);
  if (iVar1 != 0) {
    fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xb4) + param_2 * 0xc + 4),0);
    fn_0068ab44(param_1,0x100094b);
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  fn_0068ab44(param_1,0x100094d);
  switch(*(undefined4 *)(*(int *)(param_1 + 0xb4) + param_2 * 0xc + 4)) {
  case 0x82:
    iVar1 = fn_0036bb48();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = fn_0022f584((char *)&DAT_002e4e80,0);
    break;
  case 0x83:
  case 0x87:
  case 0x88:
    goto switchD_002e4ccc_caseD_83;
  case 0x84:
    iVar1 = fn_0036bb20();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = fn_0022f584((char *)&DAT_002e4e98,0);
    break;
  case 0x85:
    iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    if (0 < iVar1) {
      return;
    }
    iVar1 = fn_0022f584((char *)&DAT_002e4eb8,0);
    break;
  case 0x86:
    uVar4 = *(undefined4 *)(DAT_00897804 + 0x18);
    iVar1 = fn_006b4f84(uVar4);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = fn_0024222c(uVar4,iVar3);
        if (*(char *)(iVar2 + 6) != '\0') {
          iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
          if (0 < iVar1) {
            return;
          }
          iVar1 = fn_0022f584((char *)&DAT_002e4ed8,0);
          goto LAB_002e4e4c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    iVar1 = fn_0022f584((char *)&DAT_002e4ef8,0);
    break;
  case 0x89:
    iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    goto joined_r0x002e4e38;
  case 0x8a:
    iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
joined_r0x002e4e38:
    if (0 < iVar1) {
      return;
    }
    iVar1 = fn_0022f584((char *)&DAT_002e4f1c,0);
    break;
  default:
    return;
  }
LAB_002e4e4c:
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    fn_0068974c(param_1,iVar1,0,1);
    return;
  }
switchD_002e4ccc_caseD_83:
  return;
}


