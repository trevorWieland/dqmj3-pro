#include "00573348_0057503c.h"



void fn_0057503c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_a0 [128];
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\0') goto switchD_0057506c_caseD_0;
  switch(*(undefined1 *)(param_1 + 0x119)) {
  case 1:
    iVar5 = fn_0031154c(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
    iVar2 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
    fn_0015b0f8(iVar5);
    fn_0015b0f8(iVar5 - iVar2);
    *(undefined1 *)(param_1 + 0x119) = 2;
    uVar4 = fn_0022f584(DAT_00898ac4,0);
    fn_0068974c(param_1,uVar4,0,1);
    iVar5 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar5 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar5 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    break;
  case 2:
    goto switchD_0057506c_caseD_2;
  case 3:
    if (cVar1 == '\x01') break;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined1 *)(param_1 + 0x119) = 5;
        fn_0057609c(param_1);
        fn_00301f50(auStack_a0,0x80);
        uVar4 = fn_0022f584(DAT_00898ad4,0);
        fn_00101a50(auStack_a0,0x80,&DAT_00575cdc,*(undefined4 *)(param_1 + 0x128),uVar4);
        fn_0068974c(param_1,auStack_a0,0,1);
        iVar5 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar5 + 0x38) = 0;
        *(undefined1 *)(iVar5 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      break;
    }
    goto switchD_0057506c_caseD_2;
  case 4:
    if (cVar1 == '\x01') break;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined1 *)(param_1 + 0x119) = 6;
        fn_00575cec(param_1);
        fn_00301f50(auStack_a0,0x80);
        uVar4 = fn_0022f584(DAT_00898ad8,0);
        uVar3 = fn_0022f584(DAT_00898adc,0);
        fn_00101a50(auStack_a0,0x80,&DAT_00575cd4,uVar4,*(undefined4 *)(param_1 + 0x128),uVar3);
        fn_0068974c(param_1,auStack_a0,0,1);
        iVar5 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar5 + 0x38) = 0;
        *(undefined1 *)(iVar5 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x118) = 1;
      }
      break;
    }
    goto switchD_0057506c_caseD_2;
  case 5:
    *(undefined1 *)(param_1 + 0x119) = 10;
    uVar4 = fn_0022f584(DAT_00898aec,0);
    fn_0068974c(param_1,uVar4,1,1);
    iVar5 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar5 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar5 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 9) = 0;
    break;
  case 6:
    fn_00574e84(param_1);
    break;
  case 7:
  case 8:
  case 9:
    fn_00575f7c(param_1,0x100094b);
    break;
  case 10:
    if (cVar1 == '\x01') break;
    if (cVar1 == '\x02') goto LAB_00575464;
    if (cVar1 != '\x03') break;
    goto switchD_0057506c_caseD_2;
  case 0xb:
    if (cVar1 == '\x01') break;
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 == 0) goto LAB_005753c8;
        *(undefined1 *)(param_1 + 0x119) = 0xc;
        uVar4 = fn_0022f584(DAT_00898af4,0);
        fn_0068974c(param_1,uVar4,1,1);
        iVar5 = *(int *)(param_1 + 0x5c);
        *(undefined4 *)(iVar5 + 0x38) = 0;
        *(undefined1 *)(iVar5 + 0x5f) = 1;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
        *(undefined1 *)(param_1 + 0x118) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 9) = 0;
      }
      break;
    }
switchD_0057506c_caseD_2:
    *(undefined1 *)(param_1 + 0x118) = 0;
    break;
  case 0xc:
    if (cVar1 == '\x01') break;
    if (cVar1 == '\x02') {
      fn_002b0bcc(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c),
                   (int)(char)-(char)(*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2));
LAB_005753c8:
      fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x11c),0);
      fn_00575bac(param_1);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (cVar1 != '\x03') break;
LAB_00575464:
    fn_00575f7c(param_1,0);
    break;
  case 0xd:
    fn_00576598(param_1);
  }
switchD_0057506c_caseD_0:
  uVar6 = fn_006f6a5c(param_1);
  if ((uVar6 & 0x100000) == 0) {
    uVar6 = fn_006f6a5c(param_1);
    if ((uVar6 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 2;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0x18) = 1;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x40) = *(int *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}



undefined4 fn_00573348(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  char **ppcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  char *local_d4;
  undefined1 auStack_d0 [32];
  char *local_b0 [4];
  undefined1 auStack_a0 [72];
  char *local_58 [13];
  
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_flash_ranking.arc",
                       &DAT_005736f8,1,1);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),uVar2,(char *)&DAT_00573704,
                       &DAT_00573700,0,1,0);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x7c),uVar2);
  uVar3 = fn_00172c98(uVar2,(char *)&DAT_00573720);
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0xc0);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00895c1c) goto LAB_005733f8;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005733f8:
  local_d4 = (char *)0x3;
  local_b0[0] = (char *)&DAT_0086776c;
  local_b0[1] = (char *)&DAT_0086771c;
  local_b0[2] = (char *)&DAT_0086777c;
  local_58[3] = (char *)&DAT_0086778c;
  local_58[4] = (char *)&DAT_0086772c;
  local_58[5] = "tb_time_03_16";
  local_58[9] = (char *)&DAT_008677ac;
  local_58[10] = (char *)&DAT_0086773c;
  local_58[0xb] = "tb_time_03_17";
  local_58[6] = (char *)&DAT_008677cc;
  local_58[7] = (char *)&DAT_0086774c;
  local_58[8] = "tb_time_03_18";
  local_58[0] = (char *)&DAT_008677ec;
  local_58[1] = (char *)&DAT_0086775c;
  local_58[2] = (char *)&DAT_008677fc;
  iVar10 = DAT_0089783c + 0xaa;
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_00573738);
  fn_00190d50(uVar6,iVar10);
  iVar10 = (int)((longlong)(int)puVar4[7] * -0x6e5d4c3b + ((ulonglong)(uint)puVar4[7] << 0x20) >>
                0x20);
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_0057374c);
  fn_00688c04(uVar6,(iVar10 >> 10) - (iVar10 >> 0x1f),0);
  iVar10 = (int)((longlong)(int)puVar4[7] * -0x77777777 + ((ulonglong)(uint)puVar4[7] << 0x20) >>
                0x20);
  uVar9 = (iVar10 >> 4) - (iVar10 >> 0x1f);
  iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_0057375c);
  fn_00688c04(uVar6,uVar9 + ((iVar10 >> 5) - (iVar10 >> 0x1f)) * -0x3c,2);
  uVar9 = puVar4[7];
  iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
  uVar9 = (uVar9 + ((iVar10 >> 4) - (iVar10 >> 0x1f)) * -0x1e) * 100;
  iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_0057376c);
  fn_00688c04(uVar6,(iVar10 >> 4) - (iVar10 >> 0x1f),2);
  sVar1 = fn_006c3b74(*(undefined4 *)(DAT_00897804 + 0x44));
  fn_00231700(auStack_a0,0x20,(int)sVar1,0);
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_00573780);
  fn_00190d50(uVar6,auStack_a0);
  iVar10 = 0;
  if (0 < (int)puVar4[5]) {
    iVar11 = puVar4[3];
    do {
      if (*(char *)(iVar11 + iVar10 * 0x128 + 0x123) != '\0') {
        uVar6 = fn_001827b0(uVar2,(char *)&DAT_00573790);
        fn_00688c04(uVar6,*(undefined4 *)(iVar11 + iVar10 * 0x128),0);
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)puVar4[5]);
  }
  uVar12 = puVar4[6];
  uVar6 = fn_001827b0(uVar2,(char *)&DAT_0057379c);
  fn_00688c04(uVar6,uVar12,0);
  uVar9 = puVar4[8];
  if (uVar9 == 0xffffffff) {
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737a8);
    fn_00190d50(uVar6,&DAT_00573700);
    iVar10 = fn_001828f0(uVar2,(char *)&DAT_005737bc);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737d0);
    fn_00190d50(uVar6,&DAT_00573700);
    iVar10 = fn_001828f0(uVar2,(char *)&DAT_005737e4);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737f8);
    fn_00190d50(uVar6,&DAT_00573700);
  }
  else {
    iVar10 = (int)((longlong)(int)uVar9 * -0x6e5d4c3b + ((ulonglong)uVar9 << 0x20) >> 0x20);
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737a8);
    fn_00688c04(uVar6,(iVar10 >> 10) - (iVar10 >> 0x1f),0);
    iVar10 = fn_001828f0(uVar2,(char *)&DAT_005737bc);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe | 1;
    iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
    uVar7 = (iVar10 >> 4) - (iVar10 >> 0x1f);
    iVar10 = (int)((longlong)(int)uVar7 * -0x77777777 + ((ulonglong)uVar7 << 0x20) >> 0x20);
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737d0);
    fn_00688c04(uVar6,uVar7 + ((iVar10 >> 5) - (iVar10 >> 0x1f)) * -0x3c,2);
    iVar10 = fn_001828f0(uVar2,(char *)&DAT_005737e4);
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe | 1;
    iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
    uVar9 = (uVar9 + ((iVar10 >> 4) - (iVar10 >> 0x1f)) * -0x1e) * 100;
    iVar10 = (int)((longlong)(int)uVar9 * -0x77777777 + ((ulonglong)uVar9 << 0x20) >> 0x20);
    uVar6 = fn_001827b0(uVar2,(char *)&DAT_005737f8);
    fn_00688c04(uVar6,(iVar10 >> 4) - (iVar10 >> 0x1f),2);
  }
  iVar10 = fn_00689210(uVar3,(char *)&DAT_00573bd8);
  if (iVar10 != 0) {
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
  }
  iVar10 = fn_0068897c(uVar3,(char *)&DAT_00573be8);
  if (iVar10 != 0) {
    uVar3 = fn_0022f750((char *)&DAT_00573bf4);
    fn_00190d50(iVar10,uVar3);
  }
  ppcVar8 = local_b0 + 3;
  if ((int)local_d4 <= (int)puVar4[4]) {
    ppcVar8 = &local_d4;
  }
  local_b0[3] = (char *)puVar4[4];
  iVar10 = 0;
  if (0 < (int)*ppcVar8) {
    do {
      uVar9 = *(uint *)(puVar4[2] + iVar10 * 0x128 + 4);
      uVar3 = fn_001827b0(uVar2,local_b0[iVar10]);
      fn_00688c04(uVar3,uVar9 / 0x708,0);
      iVar11 = fn_001828f0(uVar2,local_58[iVar10 + 3]);
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe | 1;
      uVar9 = *(uint *)(puVar4[2] + iVar10 * 0x128 + 4) / 0x1e;
      uVar3 = fn_001827b0(uVar2,local_58[iVar10 + 9],uVar9 * -0x77777777);
      fn_00688c04(uVar3,uVar9 % 0x3c,2);
      iVar11 = fn_001828f0(uVar2,local_58[iVar10 + 6]);
      *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe | 1;
      uVar9 = *(uint *)(puVar4[2] + iVar10 * 0x128 + 4);
      uVar3 = fn_001827b0(uVar2,local_58[iVar10]);
      fn_00688c04(uVar3,((uVar9 % 0x1e) * 100) / 0x1e,2);
      fn_001028d4(auStack_d0,(char *)&DAT_00573c04,iVar10 + 1);
      iVar11 = puVar4[2];
      uVar3 = fn_001827b0(uVar2,auStack_d0);
      fn_00190d50(uVar3,iVar11 + iVar10 * 0x128 + 0x24);
      if (*(char *)(puVar4[2] + iVar10 * 0x128 + 0x123) == '\0') {
        fn_001028d4(auStack_d0,(char *)&DAT_00573c1c,iVar10 + 1);
        iVar11 = fn_001828f0(uVar2,auStack_d0);
        *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
      }
      ppcVar8 = &local_d4;
      if ((int)puVar4[4] < (int)local_d4) {
        ppcVar8 = local_b0 + 3;
      }
      local_b0[3] = (char *)puVar4[4];
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)*ppcVar8);
    if (2 < iVar10) goto LAB_00573b94;
  }
  do {
    iVar11 = fn_001827b0(uVar2,local_b0[iVar10]);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    iVar11 = fn_001828f0(uVar2,local_58[iVar10 + 3]);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    iVar11 = fn_001827b0(uVar2,local_58[iVar10 + 9]);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    iVar11 = fn_001828f0(uVar2,local_58[iVar10 + 6]);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    iVar11 = fn_001827b0(uVar2,local_58[iVar10]);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    fn_001028d4(auStack_d0,(char *)&DAT_00573c04,iVar10 + 1);
    iVar11 = fn_001827b0(uVar2,auStack_d0);
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
    fn_001028d4(auStack_d0,(char *)&DAT_00573c1c,iVar10 + 1);
    iVar11 = fn_001828f0(uVar2,auStack_d0);
    iVar10 = iVar10 + 1;
    *(byte *)(iVar11 + 0x44) = *(byte *)(iVar11 + 0x44) & 0xfe;
  } while (iVar10 < 3);
LAB_00573b94:
  iVar10 = fn_00689220(uVar2,(char *)&DAT_00573720);
  if ((iVar10 != 0) && (iVar10 = fn_00689210(iVar10,(char *)&DAT_00573c38), iVar10 != 0)) {
    *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
  }
  return 1;
}


