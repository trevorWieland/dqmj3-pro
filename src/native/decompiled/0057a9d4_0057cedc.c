#include "0057a9d4_0057cedc.h"



undefined4 fn_0057cedc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  undefined1 local_68;
  undefined1 local_66;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined1 local_54;
  undefined1 local_52;
  uint local_4c;
  uint uStack_48;
  int local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  fn_002bf4f4(&local_7c);
  local_7c = DAT_008930e0;
  local_78 = DAT_008930e4;
  local_2c = 1;
  local_66 = 0;
  local_68 = 1;
  local_52 = 0;
  local_30 = 0;
  local_34 = 1;
  local_54 = 1;
  fn_002be0c4(param_1,&local_7c);
  iVar2 = fn_00145b00(0x8d8,&DAT_00812c8c);
  if (iVar2 != 0) {
    fn_00301f50(iVar2,0x8d8);
  }
  if (param_1[0x35] != iVar2) {
    fn_002feef8();
    param_1[0x35] = iVar2;
  }
  fn_002e8c7c(param_1[0x35]);
  iVar2 = param_1[0x28];
  uVar14 = 0;
  if (param_1[0x29] - iVar2 >> 2 != 0) {
    do {
      iVar3 = param_1[0x35] + 0x150;
      while( true ) {
        uVar1 = param_1[0x29] - iVar2 >> 2;
        if (uVar1 <= uVar14) {
          fn_002ff628(9,&DAT_008c7655,&DAT_008c7655,uVar14,uVar1);
        }
        iVar2 = *(int *)(param_1[0x28] + uVar14 * 4);
        if (iVar2 != 0) {
          iVar8 = 0;
          iVar4 = iVar8;
          do {
            piVar7 = (int *)(iVar3 + iVar8 * 0xf0);
            if (*piVar7 != 0) {
              fn_00345a7c(iVar2,piVar7,iVar4);
              iVar4 = iVar4 + 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
        }
        iVar2 = param_1[0x28];
        uVar14 = uVar14 + 1;
        if ((uint)(param_1[0x29] - iVar2 >> 2) <= uVar14) goto LAB_0057d03c;
        if (uVar14 == 0) break;
        if (uVar14 == 1) {
          iVar3 = param_1[0x35] + 0x514;
        }
      }
    } while( true );
  }
LAB_0057d03c:
  iVar2 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  piVar13 = *(int **)(iVar2 + 0x10);
  iVar3 = fn_00172c98(iVar2,(char *)&DAT_0057d38c);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_00172c98(iVar2,(char *)&DAT_0057d398);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  iVar3 = fn_00172c98(iVar2,(char *)&DAT_0057d3a4);
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  iVar4 = (**(code **)(*piVar13 + 0x2c))(piVar13,(char *)&DAT_0057d3b0,1);
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  uVar5 = fn_0022f750((char *)&DAT_0057d3c0);
  uVar6 = fn_00172c98(iVar2,(char *)&DAT_0057d3d8);
  iVar2 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar2 != 0) {
    piVar7 = (int *)fn_0031fee0(iVar2,param_1[1],uVar6,1,param_1[0x12]);
  }
  piVar12 = (int *)param_1[0x36];
  if (piVar12 != piVar7) {
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    param_1[0x36] = (int)piVar7;
  }
  (**(code **)(*(int *)param_1[0x36] + 0x10))();
  fn_0031fe38(param_1[0x36],uVar5);
  iVar2 = (**(code **)(*piVar13 + 0x2c))(piVar13,(char *)&DAT_0057d3f4,1);
  iVar4 = (**(code **)(*piVar13 + 0x2c))(piVar13,(char *)&DAT_0057d404,1);
  iVar8 = (**(code **)(*piVar13 + 0x2c))(piVar13,(char *)&DAT_0057d414,1);
  iVar9 = (**(code **)(*piVar13 + 0x2c))(piVar13,(char *)&DAT_0057d424,1);
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  *(byte *)(iVar8 + 0x44) = *(byte *)(iVar8 + 0x44) & 0xfe;
  *(byte *)(iVar9 + 0x44) = *(byte *)(iVar9 + 0x44) & 0xfe;
  iVar2 = fn_00145b00(0x30,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar2 != 0) {
    piVar7 = (int *)fn_002b20c0(iVar2,param_1[1],iVar3,1,param_1[0x12],1,0);
  }
  piVar13 = (int *)param_1[0x37];
  if (piVar13 != piVar7) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    param_1[0x37] = (int)piVar7;
  }
  (**(code **)(*(int *)param_1[0x37] + 0x10))();
  fn_002b20a4(param_1[0x37],0);
  iVar2 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar2 != 0) {
    piVar7 = (int *)fn_001caa80(iVar2,param_1[1],1);
  }
  piVar13 = (int *)param_1[0x38];
  if (piVar13 != piVar7) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    param_1[0x38] = (int)piVar7;
  }
  *(int **)(param_1[0x38] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x38] + 0x24))((int *)param_1[0x38],1);
  *(undefined1 *)(param_1[0x38] + 0x45) = 0;
  *(undefined1 *)(param_1[0x38] + 0x44) = 1;
  *(undefined4 *)(param_1[0x38] + 0x10) = 0x100094e;
  fn_001c9d44(param_1[0x38],0,*(undefined4 *)(param_1[0x37] + 0x1c),0);
  *(undefined1 *)(param_1[0x38] + 0x46) = 0;
  fn_00245330(param_1,param_1[0x38]);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar10 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar11 == &DAT_008963ac) goto LAB_0057d44c;
      puVar11 = (undefined4 *)*puVar11;
    } while (puVar11 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_0057d44c:
  param_1[0x3b] = (int)puVar10;
  param_1[0x3c] = *(int *)(puVar10[0x10] + 4);
  (**(code **)(*param_1 + 0x15c))(param_1,0,1);
  uVar14 = local_4c;
  if (uStack_48 < local_4c) {
    do {
      uVar14 = uVar14 + 4;
    } while (uVar14 != uStack_48);
  }
  fn_001008c4(local_4c,(int)(local_44 - local_4c) >> 2,0);
  uVar14 = local_60;
  if (local_5c < local_60) {
    do {
      uVar14 = uVar14 + 4;
    } while (uVar14 != local_5c);
  }
  fn_001008c4(local_60,(int)(local_58 - local_60) >> 2,0);
  uVar14 = local_74;
  if (local_70 < local_74) {
    do {
      uVar14 = uVar14 + 4;
    } while (uVar14 != local_70);
  }
  fn_001008c4(local_74,(int)(local_6c - local_74) >> 2,0);
  return 1;
}



undefined4 fn_0057a9d4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  wchar16 *local_6c;
  char *pcStack_68;
  int local_64;
  undefined4 local_60;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [4];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_38;
  undefined1 auStack_30 [32];
  
  fn_0057a168();
  uVar3 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar3);
  iVar2 = fn_006b84b0(uVar3);
  fn_00397774(&local_6c);
  local_6c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_68 = (char *)&DAT_0057ab38;
  if (iVar1 + iVar2 < 9) {
    local_64 = iVar1 + iVar2;
  }
  else {
    local_64 = 9;
  }
  local_60 = 0;
  uVar3 = fn_0057a3c4(param_1);
  fn_00147974(auStack_50,uVar3);
  local_40 = 0;
  local_3f = 0;
  local_3e = 1;
  uVar3 = fn_0022f750(&DAT_0057ab4c);
  fn_00147974(auStack_4c,uVar3);
  local_38 = 2;
  fn_00397618(param_1,&local_6c);
  fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
  iVar1 = param_1[0x1d];
  *(undefined1 *)(iVar1 + 0x81) = 0;
  fn_0031f3f4(iVar1,0);
  fn_00100414(auStack_30,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_44);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  fn_0057a3dc(param_1);
  fn_0057a634(param_1);
  fn_0057a348(param_1);
  fn_0057a4f8(param_1);
  (**(code **)(*param_1 + 0x144))(param_1);
  fn_005d189c(param_1,param_1[0x42]);
  return 1;
}


