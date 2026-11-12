#include "002dd188_002de434.h"



void fn_002de434(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint local_48 [5];
  undefined4 local_34;
  undefined4 *local_30 [3];
  
  uVar7 = 0;
  local_34 = *(undefined4 *)(DAT_00897804 + 0x14);
  do {
    iVar6 = (int)(short)(*(int *)(*(int *)(param_1 + 0xf4) + 8) -
                         *(int *)(*(int *)(param_1 + 0xf4) + 4) >> 1);
    iVar1 = fn_006ba284(param_1);
    iVar1 = uVar7 + iVar1 * 10;
    if (iVar1 < iVar6) {
      iVar1 = fn_002b1390(*(undefined4 *)(param_1 + 0xf4),(int)(short)iVar1);
      fn_0023097c(local_30,iVar1,0);
      fn_0031b78c(param_1,uVar7,0,local_30[0]);
      uVar2 = fn_00660e0c(iVar1);
      if ((iVar1 == 0x42 || iVar1 == 0x44) || iVar1 == 0x46) {
        uVar3 = fn_006b63fc(*(undefined4 *)(DAT_00897804 + 8));
        uVar2 = uVar2 & (uVar3 ^ 1);
      }
      else if (iVar1 == 0x45) {
        iVar6 = fn_006b2a40(*(undefined4 *)(DAT_00897804 + 0x28));
        uVar2 = uVar2 & iVar6 != 0;
      }
      if (uVar2 == 0) {
        local_48[0] = DAT_00891d3c;
        fn_002c37e0(param_1,uVar7,local_48);
      }
      else {
        local_48[0] = DAT_00891d34;
        fn_002c37e0(param_1,uVar7,local_48);
      }
      uVar4 = fn_006b2aa0(local_34,iVar1);
      fn_002c3df8(param_1,uVar7,4,uVar4);
      iVar1 = fn_006ba284(param_1);
      iVar6 = uVar7 + iVar1 * 10;
      iVar1 = *(int *)(param_1 + 0xf4);
      if (iVar6 < (short)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 1)) {
        uVar4 = fn_002b1390(iVar1,(int)(short)iVar6);
        iVar1 = fn_006bb474(*(undefined4 *)(param_1 + 0xf4),uVar4);
        if (iVar1 == 0) {
          fn_002c32c4(param_1,uVar7,1);
        }
        else {
          fn_002c32c4(param_1,uVar7,0);
        }
      }
      if (local_30[0] != &DAT_008f9cf4) {
        piVar5 = local_30[0] + -3;
        iVar1 = *piVar5;
        if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_30[0] + -3,local_30[0][-2] + 8,0);
        }
      }
    }
    else if (9 < iVar6) {
      uVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar2 <= uVar7) {
        local_48[0] = uVar2;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar7);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar7 * 4),0xffffffff);
      fn_002c32c4(param_1,uVar7,0);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 10);
  return;
}



undefined4 fn_002ddcf4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951d8) goto LAB_002ddd3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002ddd3c:
  *(undefined4 **)(param_1 + 0xa8) = puVar1;
  fn_002c8194(param_1);
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = fn_00303fd0(iVar3,*(undefined4 *)(param_1 + 0xa0));
  }
  iVar3 = *(int *)(param_1 + 0xac);
  if (iVar3 != iVar4) {
    if (iVar3 != 0) {
      fn_002feef8(iVar3);
    }
    *(int *)(param_1 + 0xac) = iVar4;
  }
  fn_00689efc(param_1,0x2c,0);
  uVar5 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x20) = uVar5;
  return 1;
}



void fn_002ddb34(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x70) + 0x90))();
  if (-1 < iVar2) {
    if (*(char *)(param_1 + 0x98) == '\0') {
      if (iVar2 != 0) {
        fn_002dde40(param_1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      if ((DAT_00897850 != 0) && (iVar2 = fn_0066eb04(), iVar2 != 0)) {
        fn_001296e8(DAT_00898840);
        fn_005f3c7c(0);
        uVar3 = fn_0022f584((char *)&DAT_002ddccc,0);
        fn_00689710(param_1,uVar3);
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
        *(undefined1 *)(param_1 + 0x90) = 1;
        goto LAB_002ddb88;
      }
      fn_00303f80(*(undefined4 *)(param_1 + 0xac));
      uVar1 = 2;
    }
    else {
      if (iVar2 == 0) {
        fn_002dde40(param_1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      uVar3 = fn_0022f584((char *)&DAT_002ddca4,0);
      fn_00689710(param_1,uVar3);
      uVar1 = 3;
    }
    *(undefined1 *)(param_1 + 0x90) = uVar1;
  }
LAB_002ddb88:
  iVar2 = (**(code **)(**(int **)(param_1 + 0x70) + 0x6c))();
  if (-1 < iVar2) {
    fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar2 * 4),1);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x70) + 100))();
  if (iVar2 < 0) {
    return;
  }
  fn_002c8a38(param_1);
  return;
}



void fn_002dde40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00891a10) goto LAB_002dde84;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002dde84:
  if (*(char *)(puVar2 + 0xb) == '\x05') {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    return;
  }
  fn_006899f4(param_1,0xd4,0,1);
  return;
}



void fn_002ddadc(undefined4 param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00897804 + 0x14);
  fn_00163940(param_2);
  puVar1 = (ushort *)(*(int *)(iVar2 + 4) + 0x8a4 + ((int)(param_2 << 0x10) >> 0x14) * 2);
  *puVar1 = *puVar1 | (ushort)(1 << (param_2 & 0xf));
  return;
}



int fn_002dd494(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_5) {
    do {
      sVar1 = fn_002dd4ec(param_1,param_2,param_3,param_4);
      iVar2 = iVar2 + 1;
      iVar3 = (int)(short)(sVar1 + (short)iVar3);
    } while (iVar2 < param_5);
  }
  return iVar3;
}



undefined4 fn_002dd188(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar8 = 1;
  uStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar1 = fn_00660ec0(param_3);
  local_3c = fn_00660ea8(local_28);
  local_40 = fn_0020e5dc(param_2,0);
  local_44 = fn_0020e5dc(param_2,1);
  local_48 = fn_0020e5dc(param_2,2);
  local_4c = fn_0020e5dc(param_2,3);
  local_50 = fn_0020e5dc(param_2,4);
  iVar2 = fn_0020e5dc(param_2,5);
  fn_0020bbc4(auStack_58,param_2);
  iVar3 = fn_006c0028(auStack_54);
  iVar4 = fn_006bf5bc(auStack_54);
  iVar5 = fn_006c0114(auStack_54);
  iVar6 = fn_006bf5c8(auStack_54);
  if (iVar1 != 0xe) {
    if (iVar1 < 0xf) {
      if (iVar1 != 0xb) {
        if (iVar1 < 0xc) {
          if (iVar1 != 1 && iVar1 != 2) goto LAB_002dd2bc;
        }
        else if (iVar1 != 0xc && iVar1 != 0xd) goto LAB_002dd2bc;
      }
    }
    else if (iVar1 != 0x11) {
      if (iVar1 < 0x12) {
        if (iVar1 != 0xf && iVar1 != 0x10) goto LAB_002dd2bc;
      }
      else if (iVar1 != 0x12 && iVar1 != 0x23) goto LAB_002dd2bc;
    }
  }
  if (iVar4 == 0) {
    uVar8 = 0;
  }
LAB_002dd2bc:
  if (iVar1 == 0xe) {
    if (*(short *)(param_2 + 0x88) != local_48) {
      return uVar8;
    }
  }
  else if (iVar1 < 0xf) {
    if (iVar1 == 0xb) {
      if (*(short *)(param_2 + 0x3a) != 999) {
        return uVar8;
      }
    }
    else if (iVar1 < 0xc) {
      if (iVar1 == 1) {
        if (iVar4 != iVar3) {
          return uVar8;
        }
      }
      else if (iVar1 == 2) {
        if (iVar6 != iVar5) {
          return uVar8;
        }
      }
      else if (iVar1 == 3) {
        if (local_3c == 1) {
          bVar9 = SBORROW4(iVar4,iVar3);
          iVar1 = iVar4 - iVar3;
          if (iVar3 <= iVar4) {
            bVar9 = SBORROW4(iVar6,iVar5);
            iVar1 = iVar6 - iVar5;
          }
          if (iVar1 < 0 != bVar9) {
            return uVar8;
          }
        }
        else if (iVar4 < 1) {
          return uVar8;
        }
      }
    }
    else if (iVar1 == 0xc) {
      if (*(short *)(param_2 + 0x84) != local_40) {
        return uVar8;
      }
    }
    else if ((iVar1 == 0xd) && (*(short *)(param_2 + 0x86) != local_44)) {
      return uVar8;
    }
  }
  else if (iVar1 == 0x11) {
    if (*(short *)(param_2 + 0x8e) != iVar2) {
      return uVar8;
    }
  }
  else if (iVar1 < 0x12) {
    if (iVar1 == 0xf) {
      if (*(short *)(param_2 + 0x8a) != local_4c) {
        return uVar8;
      }
    }
    else if ((iVar1 == 0x10) && (*(short *)(param_2 + 0x8c) != local_50)) {
      return uVar8;
    }
  }
  else if (iVar1 == 0x12) {
    iVar1 = fn_002467dc(param_2);
    if (iVar1 != 0) {
      return uVar8;
    }
  }
  else if (iVar1 == 0x23) {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    iVar1 = fn_006c02d4(auStack_54,&local_50,7);
    uVar7 = fn_00660d60(local_28);
    iVar2 = fn_006aed48(auStack_58,uVar7);
    if (iVar2 != 0) {
      uVar8 = 0;
    }
    iVar2 = fn_0020cb7c(param_2);
    if (iVar1 < iVar2) {
      return uVar8;
    }
  }
  return 0;
}


