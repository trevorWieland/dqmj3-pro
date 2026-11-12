#include "0021ed50_00221cfc.h"



void fn_00221cfc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x1c8) < 0) {
      return;
    }
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x1c8) != -1) {
      return;
    }
    switch(*(undefined1 *)(param_1 + 0x20c)) {
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      goto switchD_00221d30_caseD_2;
    default:
      if (-1 < *(int *)(param_1 + 0x1cc)) {
        return;
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (iVar1 != 1) {
        local_20 = 0x40400000;
        local_1c = 0x40c00000;
      }
      if (*(char *)(param_1 + 0x243) == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 0x184);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x17c);
      }
      uVar2 = fn_0017fde4(uVar2);
      uVar2 = fn_00179bfc(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7545,uVar2,1,&local_24);
    }
  }
  *(undefined4 *)(param_1 + 0x1c8) = uVar2;
switchD_00221d30_caseD_2:
  return;
}



void fn_0021ed50(int param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  int local_5c [4];
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  
  if (param_2 != 2) {
    if (param_2 == 4) {
      iVar1 = *(int *)(param_1 + 0xa0);
      goto LAB_0021eda8;
    }
    if ((param_2 != 0xb) && ((param_2 != 0xe || (*(int *)(param_1 + 0x234) == 0)))) {
      iVar1 = *(int *)(param_1 + 100);
      goto LAB_0021eda8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x7c);
LAB_0021eda8:
  local_4c = fn_0021de78(param_1);
  if (iVar1 != 0) {
    uVar12 = CONCAT44(-(param_3[2] * *(float *)(param_1 + 0x188)),
                      *param_3 * *(float *)(param_1 + 0x188));
    iVar10 = -1;
    uVar13 = 0;
    iVar6 = 0;
    iVar9 = -1;
    if ((param_2 == 2 || param_2 == 0xb) || (param_2 == 0xc || param_2 == 0xd)) {
      iVar10 = fn_00145b00(0xc0,&DAT_00812c8c);
      iVar6 = 0;
      if (iVar10 != 0) {
        iVar6 = fn_005532f8(iVar10,*(undefined4 *)(param_1 + 0xb0));
      }
      local_40 = (undefined4)((ulonglong)uVar13 >> 0x20);
      local_48 = (int)uVar12;
      local_44 = (int)((ulonglong)uVar12 >> 0x20);
      fn_0054ca94(iVar6,&local_48);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
      fn_0018a69c(iVar1,iVar6);
      iVar10 = fn_001c86f4(*(undefined4 *)(param_1 + 4),(char *)&DAT_0021f0e0,iVar6,
                            *(undefined4 *)(param_1 + 0x10));
      piVar2 = (int *)fn_001c8a8c(*(undefined4 *)(param_1 + 4),iVar10);
      (**(code **)(*piVar2 + 0x50))(piVar2,1);
    }
    if ((param_2 == 0xe) && (param_4 != 0)) {
      iVar3 = fn_006892dc(*(undefined4 *)(param_1 + 0xe0));
      iVar9 = fn_001c86f4(*(undefined4 *)(param_1 + 4),(char *)&DAT_0021f0e8,iVar3,
                           *(undefined4 *)(param_1 + 0x10));
      piVar2 = (int *)fn_001c8a8c(*(undefined4 *)(param_1 + 4),iVar9);
      (**(code **)(*piVar2 + 0x50))(piVar2,1);
      iVar10 = iVar9;
    }
    else {
      iVar3 = fn_006892dc(*(undefined4 *)(param_1 + param_2 * 4 + 0xa4));
    }
    local_40 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_48 = (int)uVar12;
    local_44 = (int)((ulonglong)uVar12 >> 0x20);
    fn_0054ca94(iVar3,&local_48);
    if (param_4 == 0) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
    }
    else {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
    }
    fn_0018a69c(iVar1,iVar3);
    piVar2 = *(int **)(param_1 + 0x200);
    iVar11 = *(int *)(param_1 + 0x214);
    iVar8 = *(int *)(param_1 + 0x20c);
    piVar5 = (int *)(param_1 + 0x1fc);
    local_48 = param_2;
    local_44 = iVar10;
    local_3c = iVar6;
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x204);
      if (piVar2 == *(int **)(param_1 + 0x208)) {
        if (*piVar5 == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar4 = *(uint *)(*piVar5 + 4);
          uVar7 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar7 < uVar4 + 0x20) {
            uVar7 = uVar4 + 0x20;
          }
        }
        piVar2 = (int *)fn_00100fc6(0xc,0);
        iVar10 = fn_00100fc6(uVar7 * 0x1c,0);
        piVar2[2] = iVar10;
        *piVar2 = *piVar5;
        piVar2[1] = uVar7;
        *piVar5 = (int)piVar2;
        piVar2 = (int *)piVar2[2];
        *(int **)(param_1 + 0x204) = piVar2;
        *(int **)(param_1 + 0x208) = piVar2 + uVar7 * 7;
      }
      *(int **)(param_1 + 0x204) = piVar2 + 7;
    }
    else {
      *(int *)(param_1 + 0x200) = *piVar2;
    }
    if (piVar2 + 2 != (int *)0x0) {
      piVar2[2] = iVar11;
      piVar2[3] = local_48;
      piVar2[4] = local_44;
      piVar2[5] = iVar3;
      piVar2[6] = local_3c;
    }
    *piVar2 = iVar8;
    piVar2[1] = *(int *)(iVar8 + 4);
    **(int **)(iVar8 + 4) = (int)piVar2;
    *(int **)(iVar8 + 4) = piVar2;
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    if (local_4c != 0) {
      iVar10 = 1;
      do {
        uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar13 = CONCAT44(uVar14,uVar14);
        iVar6 = 0xc;
        while( true ) {
          iVar6 = fn_006892dc(*(undefined4 *)(param_1 + iVar6 * 4 + 0xa4));
          *(int *)(iVar6 + 0x1c) = (int)uVar12;
          *(int *)(iVar6 + 0x20) = (int)((ulonglong)uVar12 >> 0x20);
          *(int *)(iVar6 + 0x24) = (int)uVar13;
          *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xee | 0x10;
          fn_0018a69c(iVar1,iVar6);
          piVar2 = *(int **)(param_1 + 0x6a8);
          local_5c[0] = iVar6;
          if (piVar2 == *(int **)(param_1 + 0x6ac)) {
            fn_00798eb0(param_1 + 0x6a4,piVar2,local_5c);
          }
          else {
            *(int **)(param_1 + 0x6a8) = piVar2 + 1;
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar6;
            }
          }
          iVar10 = iVar10 + 1;
          if (2 < iVar10) goto LAB_0021f120;
          if (iVar10 == 1) break;
          iVar6 = 0xd;
        }
      } while( true );
    }
LAB_0021f120:
    if (iVar9 != -1) {
      *(int *)(param_1 + 0x6b8) = iVar9;
      *(int *)(param_1 + 0x6b4) = iVar11;
    }
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
  }
  return;
}


