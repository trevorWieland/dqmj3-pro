#include "0064d9ac_0064dfdc.h"



void fn_0064dfdc(int param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_r8;
  short local_38 [2];
  undefined1 local_34 [4];
  uint local_30;
  int local_2c;
  
  local_38[0] = 0;
  local_34[0] = 0;
  iVar5 = fn_0064d9ac(param_1,param_5,param_3,param_4,local_38,local_34);
  if (iVar5 == 0) {
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x14) == '\0') {
      cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x3fa);
      if (cVar1 == '\0' || cVar1 == '\t') {
        fn_0064e7dc(param_1,param_5,local_38);
      }
      else {
        local_30 = fn_00660ab8();
        if (*(char *)(*(int *)(param_1 + 0xc) + 0x5c) < '\x01') {
          local_2c = param_1;
          iVar5 = fn_0061be08((int)*(char *)(param_1 + 4));
          if (iVar5 == 0) {
            iVar5 = 0x10;
          }
          else {
            iVar5 = 0x14;
          }
          iVar6 = fn_0061be08((int)*(char *)(param_1 + 4));
          uVar3 = local_30;
          bVar2 = *(byte *)(param_1 + 4);
          if (iVar6 != 0) {
            unaff_r8 = 0x18;
          }
          uVar7 = local_30 & 0xffff;
          if (iVar6 == 0) {
            unaff_r8 = 0x14;
          }
          for (; iVar5 < unaff_r8; iVar5 = (int)(char)((char)iVar5 + '\x01')) {
            iVar6 = fn_006f14a4(local_2c,iVar5);
            if ((iVar6 != 0) &&
               (iVar6 = fn_006f1a78(param_1,(int)(short)uVar3,
                                     (int)((uVar7 | (uint)bVar2 << 0x10) << 8) >> 0x18,iVar5,0,1),
               iVar6 != 0)) goto LAB_0064e12c;
          }
          local_38[0] = 3;
        }
        else {
LAB_0064e12c:
          local_38[0] = (short)local_30;
        }
      }
    }
    else {
      local_38[0] = fn_00660ab8();
    }
  }
  iVar5 = (int)local_38[0];
  *param_2 = local_38[0];
  *(undefined1 *)(param_2 + 1) = local_34[0];
  *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)(param_1 + 4);
  uVar8 = fn_0065e448(iVar5,param_5);
  uVar4 = fn_0063b5c0(param_1,iVar5,uVar8);
  *(undefined1 *)(param_2 + 2) = uVar4;
  return;
}



bool fn_0064dfb0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = fn_00182944((uint)bVar1);
  return *(char *)(param_2 + (uint)bVar1 + 0x5b) <= iVar2;
}



bool fn_0064df84(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = fn_00182924((uint)bVar1);
  return iVar2 <= *(char *)(param_2 + (uint)bVar1 + 0x5b);
}



undefined4 fn_0064df40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = fn_0068fd00((int)(short)iVar2,(int)*(char *)(param_2 + iVar2 + 0x5b));
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x61);
  return 0;
}



bool fn_0064df1c(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_00163cbc(param_2);
  return uVar1 == *param_1;
}



int fn_0064df00(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f4044(param_2);
  return iVar1 + *(short *)(param_2 + 0x1e) * 2;
}



undefined4
fn_0064d9ac(int param_1,int param_2,int param_3,undefined4 param_4,short *param_5,
            undefined1 *param_6)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  uint *puVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int extraout_r1;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  short *local_70;
  short *local_6c;
  short *local_68;
  uint local_54 [2];
  int local_4c;
  short local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  int local_3c;
  int iStack_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  if ((*(char *)(param_1 + 0x24) == '\0') || (uVar15 = 0, param_2 != 0)) {
    local_70 = (short *)0x0;
    local_6c = (short *)0x0;
    local_68 = (short *)0x0;
    pbVar12 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
    local_7c = (uint)*pbVar12;
    iStack_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    uStack_28 = param_4;
    if (0x1fffffff < local_7c) {
      fn_002ff628(8,&DAT_008c763f,&DAT_008c763f,local_7c,0x1fffffff);
    }
    if ((uint)((int)local_68 - (int)local_70 >> 3) < local_7c) {
      uVar13 = (int)local_6c - (int)local_70 >> 3;
      local_54[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_54[0] < uVar13 + 0x20) {
        local_54[0] = uVar13 + 0x20;
      }
      puVar4 = local_54;
      if (local_54[0] <= local_7c) {
        puVar4 = &local_7c;
      }
      uVar13 = *puVar4;
      psVar5 = (short *)fn_00100fc6(uVar13 << 3,0);
      psVar9 = psVar5;
      for (psVar6 = local_70; psVar6 != local_6c; psVar6 = psVar6 + 4) {
        if (psVar9 != (short *)0x0) {
          uVar15 = *(undefined4 *)(psVar6 + 2);
          *(undefined4 *)psVar9 = *(undefined4 *)psVar6;
          *(undefined4 *)(psVar9 + 2) = uVar15;
        }
        psVar9 = psVar9 + 4;
      }
      psVar9 = local_70;
      if (local_6c < local_70) {
        do {
          psVar9 = psVar9 + 4;
        } while (psVar9 != local_6c);
      }
      fn_001008c4(local_70,(int)local_68 - (int)local_70 >> 3,0);
      local_6c = (short *)(((int)local_6c - (int)local_70 & 0xfffffff8U) + (int)psVar5);
      local_68 = psVar5 + uVar13 * 4;
      local_70 = psVar5;
    }
    local_78 = 0;
    local_74 = -0x80;
    if (local_6c == local_68) {
      fn_00796c50(&local_70,local_6c,&local_78);
      psVar9 = local_6c;
    }
    else {
      psVar9 = local_6c + 4;
      if (local_6c != (short *)0x0) {
        local_6c[0] = 0;
        local_6c[1] = 0;
        local_6c[2] = -0x80;
        local_6c[3] = -1;
      }
    }
    local_6c = psVar9;
    iVar11 = 0;
    if (*pbVar12 != 0) {
      do {
        iVar7 = fn_006f4ba8(*(undefined4 *)(param_1 + 0x10),
                             (int)*(short *)(pbVar12 + iVar11 * 2 + 4));
        if ((iVar7 != 0) || (psVar9 = local_6c, *(char *)(*(int *)(param_1 + 0xc) + 0x59) == '\x04')
           ) {
          uVar3 = (undefined1)iVar11;
          local_78 = (local_78 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(uVar3,*(undefined2 *)(pbVar12 + iVar11 * 2 + 4))) & 0xffffff);
          iVar7 = fn_00691994();
          if ((iVar7 == 0) ||
             (psVar9 = local_6c, *(char *)(param_1 + 0x24) == '\0' && local_2c == 0)) {
            local_44 = (short)local_78;
            local_41 = (undefined1)local_2c;
            local_40 = (undefined1)uStack_28;
            local_4c = local_30;
            bVar1 = pbVar12[iVar11 + 0xe0];
            local_42 = uVar3;
            if ((bVar1 == 2) ||
               ((*(char *)(*(int *)(param_1 + 0x10) + 0x14) != '\0' &&
                (iVar7 = fn_00691e94((int)(short)local_78), iVar7 == 0)))) {
LAB_0064dd04:
              iVar7 = -0x80;
            }
            else {
              cVar2 = *(char *)(*(int *)(param_1 + 0xc) + 0x3fa);
              if (cVar2 == '\0' || cVar2 == '\t') {
                local_3c = 0;
                iVar7 = fn_0065e38c((int)local_44,*(undefined1 *)(*(int *)(param_1 + 0xc) + 0x5a),
                                     bVar1);
                if (iVar7 == -0x80) goto LAB_0064dd34;
              }
              else {
                iVar7 = 0;
                local_3c = 1;
              }
              iVar8 = fn_0065e460((int)local_44);
              iVar14 = 0;
              if (0 < iVar8) {
                do {
                  psVar9 = (short *)fn_0065e400((int)local_44,iVar14);
                  iVar10 = fn_0065e494((int)*psVar9,local_4c);
                  if (iVar10 != 0) {
                    iVar10 = fn_0063b53c(param_1,&local_44,psVar9);
                    if (iVar10 == -0x80) goto LAB_0064dd04;
                    iVar7 = iVar7 + iVar10;
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar8);
              }
              if ((local_3c == 0) && (-1 < iVar7)) {
                uVar13 = fn_0063a5a4();
                iVar7 = iVar7 + uVar13 % 0x32;
              }
            }
LAB_0064dd34:
            local_74 = iVar7;
            psVar9 = local_6c;
            if (-1 < iVar7) {
              if (iVar7 != *(int *)(local_70 + 2)) {
                if (iVar7 <= *(int *)(local_70 + 2)) goto LAB_0064ddf4;
                psVar9 = local_70;
                if (local_70 != local_6c) {
                  do {
                    psVar9 = psVar9 + 4;
                  } while (psVar9 != local_6c);
                  local_6c = (short *)((int)local_6c - ((int)local_6c - (int)local_70 & 0xfffffff8U)
                                      );
                }
              }
              if (local_6c == local_68) {
                fn_00796c50(&local_70,local_6c,&local_78);
                psVar9 = local_6c;
              }
              else {
                psVar9 = local_6c + 4;
                if (local_6c != (short *)0x0) {
                  *(undefined4 *)local_6c = local_78;
                  *(int *)(local_6c + 2) = iVar7;
                }
              }
            }
          }
        }
LAB_0064ddf4:
        local_6c = psVar9;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)*pbVar12);
    }
    if (*local_70 == 0) {
      psVar9 = local_70;
      if (local_6c < local_70) {
        do {
          psVar9 = psVar9 + 4;
        } while (psVar9 != local_6c);
      }
      fn_001008c4(local_70,(int)local_68 - (int)local_70 >> 3,0);
      return 0;
    }
    iVar11 = (int)local_6c - (int)local_70;
    uVar15 = fn_0063a5a4();
    fn_00169f1c(uVar15,iVar11 >> 3);
    *param_5 = local_70[extraout_r1 * 4];
    *param_6 = (char)(local_70 + extraout_r1 * 4)[1];
    psVar9 = local_70;
    if (local_6c < local_70) {
      do {
        psVar9 = psVar9 + 4;
      } while (psVar9 != local_6c);
    }
    fn_001008c4(local_70,(int)local_68 - (int)local_70 >> 3,0);
    uVar15 = 1;
  }
  return uVar15;
}


