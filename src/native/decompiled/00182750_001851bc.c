#include "00182750_001851bc.h"



undefined4 fn_001851bc(void)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar2 = DAT_008bf5f8;
  if (DAT_008bf604 != 0) {
    iVar1 = fn_00184c50(DAT_008bf5f8);
    if (iVar1 == 0) {
      if (DAT_008bf604 == 0) {
        puVar3 = &DAT_008bf600;
      }
      else {
        puVar3 = (uint *)(DAT_008bf604 + 0xc4);
      }
      if ((*puVar3 & 4) == 0) {
        if (DAT_008bf604 == 0) {
          puVar3 = &DAT_008bf600;
        }
        else {
          puVar3 = (uint *)(DAT_008bf604 + 0xc4);
        }
        if ((*puVar3 & 8) == 0) {
          return *(undefined4 *)(DAT_008bf604 + 200);
        }
      }
      uVar2 = 3;
    }
    else {
      uVar2 = 10;
    }
  }
  return uVar2;
}



int fn_0018501c(void)

{
  int iVar1;
  uint *puVar2;
  
LAB_00185024:
  do {
    iVar1 = DAT_008bf5f8;
    if (DAT_008bf604 != 0) {
      iVar1 = fn_00184c50();
      if (iVar1 != 0) goto LAB_00185024;
      if (DAT_008bf604 == 0) {
        puVar2 = &DAT_008bf600;
      }
      else {
        puVar2 = (uint *)(DAT_008bf604 + 0xc4);
      }
      if ((*puVar2 & 4) != 0) {
        return 3;
      }
      if (DAT_008bf604 == 0) {
        puVar2 = &DAT_008bf600;
      }
      else {
        puVar2 = (uint *)(DAT_008bf604 + 0xc4);
      }
      if ((*puVar2 & 8) != 0) {
        return 3;
      }
      iVar1 = *(int *)(DAT_008bf604 + 200);
    }
    if (iVar1 != 10) {
      return iVar1;
    }
  } while( true );
}



undefined4 fn_00184cd0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *local_298;
  uint local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined *local_280;
  uint local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 auStack_268 [4];
  uint local_260;
  uint local_25c [133];
  int local_48;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_294 = 0;
  local_290 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_298 = &DAT_0085238c;
  iVar1 = fn_001930d8(&local_294,param_2,1);
  if (iVar1 < 0) goto LAB_00184eac;
  fn_001560d8(&local_294,local_40);
  iVar1 = local_40[0];
  if (local_40[0] == 0) goto LAB_00184eac;
  local_27c = 0;
  local_278 = 0;
  local_274 = 0;
  local_270 = 0;
  local_26c = 0;
  local_280 = &DAT_008523fc;
  uVar2 = fn_001930d8(&local_27c,param_1,2);
  if ((((uVar2 & 0x3fc00) == 0x4400) && (99 < (uVar2 & 0x3ff))) && ((uVar2 & 0x3ff) < 0xb4)) {
    fn_001930b8();
    puVar5 = auStack_268;
    local_48 = local_40[0];
    local_30 = 0;
    local_2c = 0;
    fn_00102388(&local_30);
    iVar6 = param_1;
    while( true ) {
      uVar8 = fn_0010239a(iVar6,0x105,&local_30);
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar4 = (int)uVar8;
      if (iVar4 == 0) break;
      uVar8 = fn_00101ce8(puVar5,iVar6,iVar4,&local_30);
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0) break;
      puVar5 = puVar5 + 1;
      iVar6 = iVar6 + iVar4;
    }
    *puVar5 = 0;
    iVar6 = fn_0019303c(auStack_268,uVar3,local_48);
    if (-1 < iVar6) {
      uVar2 = fn_001930d8(&local_27c,param_1,2);
      goto LAB_00184e78;
    }
  }
  else {
LAB_00184e78:
    if (-1 < (int)uVar2) {
      if ((param_3 != -1) && (param_3 <= iVar1)) {
        iVar1 = param_3;
      }
      uVar7 = 0;
      uVar3 = fn_00192124(0x20000,0x20);
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          if (iVar1 < iVar6 + 0x20000) {
            local_260 = iVar1 - iVar6;
          }
          else {
            local_260 = 0x20000;
          }
          iVar4 = fn_0014d9ec(&local_294,&local_260,uVar3);
          if ((0xffffffffU - (iVar4 >> 0x1f) & local_260) == 0) {
LAB_00184f64:
            uVar7 = 0xb;
            break;
          }
          local_25c[0] = local_260;
          iVar4 = fn_00193178(&local_27c,local_25c,uVar3,local_260,1);
          if (iVar4 < 0) goto LAB_00184f64;
          iVar6 = iVar6 + 0x20000;
        } while (iVar6 < iVar1);
      }
      fn_001920f4(uVar3);
      if ((local_294 & 0xfffffffe) != 0) {
        if ((local_294 & 1) != 0) {
          fn_00146594();
        }
        fn_0015cf8c(local_294 & 0xfffffffe);
        local_294 = 0;
      }
      if ((local_27c & 0xfffffffe) != 0) {
        if ((local_27c & 1) != 0) {
          fn_00146594();
        }
        fn_0015cf8c(local_27c & 0xfffffffe);
        local_27c = 0;
      }
      if ((local_27c & 0xfffffffe) != 0) {
        if ((local_27c & 1) != 0) {
          fn_00146594();
        }
        fn_0015cf8c(local_27c & 0xfffffffe);
        local_27c = 0;
      }
      fn_00193004(&local_298,0);
      return uVar7;
    }
  }
  if ((local_27c & 0xfffffffe) != 0) {
    if ((local_27c & 1) != 0) {
      fn_00146594();
    }
    fn_0015cf8c(local_27c & 0xfffffffe);
    local_27c = 0;
  }
LAB_00184eac:
  fn_00193004(&local_298,0);
  return 0xb;
}



bool fn_00184c20(uint param_1)

{
  uint *puVar1;
  
  if (DAT_008bf604 == 0) {
    puVar1 = &DAT_008bf600;
  }
  else {
    puVar1 = (uint *)(DAT_008bf604 + 0xc4);
  }
  return (*puVar1 & 1 << (param_1 & 0xff)) != 0;
}



void fn_00182e6c(char *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_2 = 0xe40100;
  if (cVar1 == '\0') {
    param_2[1] = 0x30100;
    param_2[2] = 0x1010000;
    param_2 = param_2 + 3;
    *param_2 = 0xf0101;
  }
  else {
    param_2[1] = 0x30100;
    param_2[2] = (uint)*(uint3 *)(param_1 + 1) | (uint)(byte)param_1[5] << 0x14 |
                 (uint)(byte)param_1[4] << 0x18 | (uint)(byte)param_1[6] << 0x1c;
    param_2[3] = 0xf0101;
    param_2[4] = 6;
    param_2[5] = 0xf0102;
    param_2[6] = *(uint *)(param_1 + 7) & 0xffffff | (uint)(byte)param_1[10] << 0x18;
    param_2[7] = 0xf0103;
    param_2 = param_2 + 7;
  }
  if (param_3 == 0) {
    return;
  }
  fn_00182f2c(*(int *)(param_1 + 0xc) + 0x7c,param_2 + 1,1);
  return;
}



void fn_001829a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_20 [12];
  
  cVar1 = *(char *)(param_1 + 0x35);
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar2 = (int)cVar1;
    uVar6 = iVar2 - 0x10;
    if ((int)cVar1 - 0x20U < 2) {
      bVar8 = uVar6 < 4;
      if (!bVar8) {
        uVar6 = iVar2 - 0x18;
      }
      if ((bVar8 || uVar6 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      uVar3 = fn_00190e98(DAT_008977e4);
      fn_0019bab8(uVar3,uVar7);
    }
    else {
      bVar8 = uVar6 < 4;
      if (!bVar8) {
        uVar6 = iVar2 - 0x18;
      }
      if ((bVar8 || uVar6 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      uVar3 = fn_00190e98(DAT_008977e4);
      fn_00190ec0(uVar3,uVar7);
    }
    return;
  }
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 4);
  iVar2 = (int)cVar1;
  uVar6 = iVar2 - 0x10;
  bVar8 = uVar6 < 4;
  if (!bVar8) {
    uVar6 = iVar2 - 0x18;
  }
  if ((bVar8 || uVar6 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
    local_20[0] = 0x20;
  }
  else {
    local_20[0] = 0x21;
  }
  uVar3 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_00175dcc(uVar3,local_20);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_40 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x1c);
  local_44 = 0;
  local_3c = 0;
  iVar4 = fn_00174828(DAT_008977e4);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar4 = iVar4 + *(char *)(iVar5 + 0x35) * 0x418;
  cVar1 = *(char *)(iVar4 + -0x4027);
  if (('\x01' < cVar1) && (1 < (int)*(char *)(param_1 + 0x35) - 0x20U)) {
    if (((iVar5 == 0 || iVar4 == 0x4080) || iVar2 == 0) ||
       ((1 < (int)*(char *)(param_1 + 0x35) - 0x22U || (cVar1 != '\x02')))) {
      if ('\x02' < cVar1) {
        uVar7 = fn_0017fde4(uVar7);
        fn_00188c1c(&local_38,uVar7,&local_44,iVar5 + 0x24);
        return;
      }
    }
    else if ((*(int *)(iVar2 + 0x50) != 0) &&
            (*(char *)(iVar5 + 0x35) == *(char *)(*(int *)(iVar2 + 0x50) + 0x35))) {
      uVar7 = fn_0017fde4(*(undefined4 *)(iVar2 + 4));
      fn_00188968(&local_38,uVar7,&local_44);
      return;
    }
  }
  uVar7 = fn_0017fde4(uVar7);
  fn_0017ab7c(&local_38,uVar7,(int)*(char *)(iVar4 + -0x4027),&local_44,iVar5 + 0x24);
  return;
}



void fn_001828f0(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00182900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10),param_2,1);
  return;
}



void fn_00182750(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


