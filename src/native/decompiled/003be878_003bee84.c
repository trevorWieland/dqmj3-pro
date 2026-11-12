#include "003be878_003bee84.h"



undefined4 fn_003bee84(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  uint local_40;
  char *local_3c;
  uint uStack_38;
  char *local_34;
  int local_30;
  int local_2c;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_0089574c,DAT_00895750,DAT_00895754);
  iVar2 = 0;
  do {
    uVar1 = fn_001c8c60(param_1[0x19],param_1[0x1a],(&DAT_0089578c)[iVar2]);
    iVar7 = iVar2 + 1;
    *(undefined4 *)(param_1[0x36] + iVar2 * 4) = uVar1;
    iVar2 = iVar7;
  } while (iVar7 < 2);
  iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar10 = *(int **)(iVar2 + 0x10);
  iVar2 = fn_00154ac8(0x9a);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar10 + 0x2c))(piVar10,DAT_00895758,1);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    iVar2 = (**(code **)(*piVar10 + 0x2c))(piVar10,DAT_0089575c,1);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  fn_003bf43c(param_1,param_1 + 0x39,0);
  fn_003bf43c(param_1,param_1 + 0x3b,1);
  uVar1 = fn_006b64d0(*(undefined4 *)(DAT_00897804 + 8));
  fn_0036ee14(piVar10,uVar1);
  uVar11 = *(undefined4 *)(DAT_00897804 + 0x24);
  local_40 = fn_006b8130(uVar11,2);
  uVar1 = fn_006b8130(uVar11,1);
  uVar11 = fn_006b8130(uVar11,0);
  fn_0036e37c(piVar10,local_40,uVar1,uVar11);
  uVar8 = 0;
  do {
    local_40 = uVar8;
    fn_0017d96c(&uStack_38,0x10,0xf,DAT_00895760);
    piVar3 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,&uStack_38,1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a930) goto LAB_003bf040;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003bf040:
    uVar9 = param_1[0x28] - param_1[0x27] >> 2;
    if (uVar9 <= uVar8) {
      local_40 = uVar9;
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8);
    }
    *(int **)(param_1[0x27] + uVar8 * 4) = piVar3;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 7);
  fn_003bf608(param_1,1);
  uVar1 = fn_00247024();
  fn_0036e8fc(piVar10,uVar1);
  local_34 = *(char **)(DAT_00897804 + 0xc);
  local_2c = fn_006b846c();
  local_30 = fn_006b8600(local_34);
  iVar2 = 0;
  iVar7 = 0;
  do {
    iVar6 = param_1[0x2a];
    uVar1 = fn_0036e9e4(piVar10,iVar2,param_1[1],param_1[0x12]);
    *(undefined4 *)(iVar6 + iVar2 * 4) = uVar1;
    iVar6 = 0;
    do {
      if (3 < iVar7) break;
      iVar6 = fn_00144df4(local_34,iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar6 == 0);
    iVar5 = fn_0028aad0(local_34,iVar6);
    if ((iVar6 == local_2c) || (iVar6 != local_30)) {
      local_3c = (char *)0x0;
    }
    else {
      local_3c = (char *)0x1;
    }
    local_40 = 0;
    uStack_38 = 0;
    fn_002b415c(*(undefined4 *)(param_1[0x2a] + iVar2 * 4),iVar5);
    *(undefined1 *)(*(int *)(param_1[0x2a] + iVar2 * 4) + 0x1d) = 1;
    iVar6 = (**(code **)(*piVar10 + 0x2c))(piVar10,(&PTR_s_Null_mon_s_00_008957bc)[iVar2],1);
    *(byte *)(iVar6 + 0x44) = iVar5 != 0 | *(byte *)(iVar6 + 0x44) & 0xfe;
    fn_0036e4bc(iVar5,piVar10,iVar2,0);
    piVar3 = (int *)(**(code **)(*piVar10 + 0x2c))
                              (piVar10,(&PTR_s_navimap_hp_mp_hp_00_008957cc)[iVar2],1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_003bf224;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003bf224:
    *(int **)(param_1[0x30] + iVar2 * 4) = piVar3;
    iVar2 = iVar2 + 1;
    *(byte *)(piVar3 + 0x11) = iVar5 != 0 | *(byte *)(piVar3 + 0x11) & 0xfe;
    if (3 < iVar2) {
      fn_003bed3c(param_1);
      iVar2 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
      piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x10) + 0x2c))
                                (*(int **)(iVar2 + 0x10),(char *)&DAT_003bf428,1);
      uVar8 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (uVar8 == 0) {
        *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xfe;
      }
      else {
        uVar9 = 0;
        local_40 = 0;
        local_3c = (char *)&DAT_00860cb4;
        uStack_38 = 0;
        local_34 = "ic_partner_02";
        local_30 = 0;
        do {
          if ((&local_40)[uVar9] != 0) {
            iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,(&local_40)[uVar9],1);
            *(byte *)(iVar2 + 0x44) = uVar9 == uVar8 | *(byte *)(iVar2 + 0x44) & 0xfe;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 5);
      }
      iVar2 = (**(code **)(*piVar10 + 0x2c))(piVar10,(char *)&DAT_003bf35c,1);
      param_1[0x2e] = iVar2;
      return 1;
    }
  } while( true );
}



undefined1 * fn_003bed3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined4 local_30;
  
  iVar4 = 0;
  iVar5 = 0;
  uVar9 = 0x3f800000;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    iVar1 = fn_00144df4(uVar6,iVar5);
    puVar3 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      iVar1 = fn_0028aad0(uVar6,iVar1);
      puVar3 = (undefined1 *)0x0;
      if (iVar1 != 0) {
        fn_0020bbc4(auStack_38);
        uVar2 = fn_006bf5bc(auStack_34);
        fVar10 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        uVar2 = fn_006c0028(auStack_34);
        iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + iVar4 * 4);
        fVar8 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar1 + 0x34) = fVar10 / fVar8;
        *(undefined4 *)(iVar1 + 0x38) = uVar9;
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
        uVar7 = (uint)((int)(fVar10 / fVar8) < 0x3e4cccce);
        if (*(uint *)(*(int *)(param_1 + 0xcc) + iVar4 * 4) != uVar7) {
          local_30 = fn_001c8888(*(undefined4 *)(param_1 + 100),
                                  *(undefined4 *)(*(int *)(param_1 + 0xd8) + uVar7 * 4));
          iVar1 = fn_006e1ee8(*(undefined4 *)(*(int *)(param_1 + 0xc0) + iVar4 * 4));
          fn_0019501c(*(undefined4 *)(iVar1 + 0x78),local_30);
          *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
          *(uint *)(*(int *)(param_1 + 0xcc) + iVar4 * 4) = uVar7;
        }
        puVar3 = auStack_38;
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 4);
  return puVar3;
}



void fn_003bea50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar3 = fn_0022cdf0();
  if (iVar3 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  bVar9 = *(short *)(param_1 + 0xc4) != sVar1;
  if (bVar9) {
    fn_0022cdb4(param_1,sVar1 != 0);
    fn_0031c080(*(undefined4 *)(param_1 + 0x94),sVar1 != 0);
    *(short *)(param_1 + 0xc4) = sVar1;
  }
  iVar3 = fn_003492bc(*(undefined4 *)(param_1 + 0x98));
  if (iVar3 == 1) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    fn_0022cecc(param_1);
    bVar9 = true;
    fn_0068ab44(param_1,0x100094f);
  }
  else if (iVar3 == 2) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    fn_0022cecc(param_1);
    bVar9 = true;
    fn_0068ab44(param_1,0x100094f);
  }
  if (*(short *)(param_1 + 0xc4) != 0) {
    iVar3 = 0;
    iVar6 = 0;
    do {
      fn_0042ec00(*(undefined4 *)(param_1 + 0x98),iVar6,&local_28,(int)&local_28 + 2);
      iVar6 = iVar6 + 1;
      if ((short)local_28 != 0) {
        iVar3 = iVar3 + 1;
      }
    } while (iVar6 < 7);
    if (1 < iVar3 + 1) {
      iVar3 = (iVar3 + 1) / 2;
      goto LAB_003beb94;
    }
  }
  iVar3 = 1;
LAB_003beb94:
  if (*(int *)(param_1 + 0x80) != iVar3) {
    *(int *)(param_1 + 0x80) = iVar3;
    *(undefined4 *)(param_1 + 0x84) = 0;
    fn_0022cecc(param_1);
    bVar9 = true;
  }
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != *(char *)(param_1 + 0xc6)) {
    bVar9 = true;
    *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x338);
  }
  iVar3 = 0;
  do {
    local_28 = 0;
    uVar8 = iVar3 + *(int *)(param_1 + 0x84) * 2;
    uVar7 = 0;
    if (uVar8 < 7) {
      fn_0042ec00(*(undefined4 *)(param_1 + 0x98),uVar8,&local_28,(int)&local_28 + 2);
      uVar7 = *(uint *)(param_1 + (iVar3 + *(int *)(param_1 + 0x84) * 2) * 4 + 0xa8);
    }
    uVar4 = (uint)(short)local_28;
    bVar2 = 0;
    if (uVar4 != (int)(short)uVar7 || bVar9) {
      if (*(short *)(param_1 + 0xc4) == 0 || uVar4 == 0) {
        uVar5 = 0;
        uVar4 = uVar5;
      }
      else {
        uVar5 = local_28 >> 0x10;
      }
      fn_003bbbdc(param_1,iVar3,uVar4,uVar5);
      bVar2 = 1;
    }
    if (((int)(short)local_28 != (int)(short)uVar7) || (local_28 >> 0x10 != uVar7 >> 0x10 || bVar9))
    {
      fn_003be878(param_1,&local_28,iVar3);
      bVar2 = 1;
    }
    if ((bool)(bVar2 & uVar8 < 7)) {
      *(uint *)(param_1 + (iVar3 + *(int *)(param_1 + 0x84) * 2) * 4 + 0xa8) = local_28;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  fn_003bbde0(param_1);
  iVar3 = fn_00688920(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),"ic_guest");
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  return;
}



void fn_003be878(int param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_2c;
  
  bVar8 = *(short *)(param_1 + 0xc4) != 0;
  sVar1 = 0;
  if (bVar8) {
    sVar1 = *param_2;
  }
  if (!bVar8 || sVar1 == 0) {
    iVar6 = 0;
    do {
      fn_00190d50(*(undefined4 *)(param_1 + iVar6 * 8 + param_3 * 4 + 200),&LAB_003bea1c);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 10);
    return;
  }
  iVar6 = fn_0068f654();
  iVar2 = fn_0068f708((int)*param_2,param_2[1]);
  iVar7 = 0;
  do {
    if (iVar7 < iVar6) {
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == '\0') {
        local_2c = fn_0068f7c4((int)*param_2,iVar7 + 1U & 0xff);
        iVar5 = fn_0068f7f8((int)*param_2,iVar7 + 1U & 0xff);
        if (local_2c == 0) {
          if (iVar5 == 0) goto LAB_003be9a4;
          puVar4 = (undefined4 *)fn_0016a7c4(iVar5);
          uVar3 = *(undefined4 *)(param_1 + iVar7 * 8 + param_3 * 4 + 200);
        }
        else {
          fn_0022f818(&local_58,0x15,local_2c,0);
          uVar3 = *(undefined4 *)(param_1 + iVar7 * 8 + param_3 * 4 + 200);
          puVar4 = &local_58;
        }
        fn_00190d50(uVar3,puVar4);
      }
      else {
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        fn_0022ef60(&local_58,9);
        fn_00190d50(*(undefined4 *)(param_1 + iVar7 * 8 + param_3 * 4 + 200),&local_58);
      }
LAB_003be9a4:
      iVar5 = *(int *)(param_1 + iVar7 * 8 + param_3 * 4 + 200);
      if (iVar7 < iVar2) {
        uVar3 = DAT_00895570;
      }
      else {
        uVar3 = DAT_00895578;
      }
      *(undefined4 *)(iVar5 + 0xac) = uVar3;
      *(undefined4 *)(iVar5 + 0xb0) = uVar3;
    }
    else {
      fn_00190d50(*(undefined4 *)(param_1 + iVar7 * 8 + param_3 * 4 + 200),&LAB_003bea1c);
    }
    iVar7 = iVar7 + 1;
    if (9 < iVar7) {
      return;
    }
  } while( true );
}


