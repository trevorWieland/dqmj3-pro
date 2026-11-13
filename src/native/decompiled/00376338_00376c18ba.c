#include "00376338_00376c18ba.h"



void fn_00376634(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar6 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xffffffff;
  iVar7 = 0x14;
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + iVar7 * 0x418;
    iVar3 = fn_001a46f4((int)*(short *)(iVar2 + -0x4080));
    if (iVar3 != 0) {
      *(undefined1 *)((int)&local_3c + iVar7) = *(undefined1 *)(iVar2 + -0x4027);
      iVar6 = (int)(char)((char)iVar6 + '\x01');
    }
    iVar7 = (int)(char)((char)iVar7 + '\x01');
  } while (iVar7 < 0x18);
  uVar8 = 0;
  do {
    uVar4 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb534)[uVar8]);
    fn_00190d50(uVar4,&DAT_00376310);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0xe);
  uVar8 = extraout_r1;
  if (iVar6 == 2) {
    uVar5 = (uint)(char)local_28;
    uVar8 = extraout_r1;
    if (uVar5 != 0) {
      uVar8 = uVar5;
    }
    if (uVar5 < 2) {
      if (((unsigned int)(local_28) >> 8) & 0xff == 3) {
        iVar7 = 5;
        goto LAB_0037675c;
      }
    }
    else if ((uVar8 == 3) && (((unsigned int)(local_28) >> 8) & 0xff < 2)) {
      iVar7 = 6;
      goto LAB_0037675c;
    }
  }
  iVar7 = iVar6;
LAB_0037675c:
  iVar2 = 0x14;
  if (0 < iVar6) {
    do {
      iVar3 = fn_00174828(DAT_008977e4,uVar8);
      cVar1 = (char)iVar2;
      iVar3 = iVar3 + cVar1 * 0x418;
      uVar9 = fn_001a46f4((int)*(short *)(iVar3 + -0x4080));
      uVar8 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
        fn_001028d4(&local_68,(char *)&DAT_0085dc74,iVar7,cVar1 + -0x14);
        fn_001827b0(*(undefined4 *)(param_1 + 100),&local_68);
        uVar8 = (uint)*(byte *)(iVar3 + -0x4019);
        if (uVar8 == 0) {
          fn_00190d50();
          uVar8 = extraout_r1_00;
        }
      }
      iVar2 = (int)(char)(cVar1 + '\x01');
    } while (iVar2 + -0x14 < iVar6);
  }
  return;
}



void fn_00376568(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
  if (*(char *)(param_1 + 0x78) != '\0') {
    iVar1 = fn_00182988(DAT_008977e4);
    iVar1 = fn_006b8a1c(iVar1 + 0x38c);
    if (*(int *)(param_1 + 0x84) != iVar1) {
      iVar3 = 0;
      *(int *)(param_1 + 0x84) = iVar1;
      do {
        uVar2 = fn_006888c0(*(undefined4 *)(param_1 + 100),(&DAT_007bb56c)[iVar3]);
        fn_0019ba04(uVar2,*(undefined4 *)(param_1 + 0x74),
                     (&PTR_s_time_count_0_bflim_00890850)[iVar1 % 10],0);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 / 10;
      } while (iVar3 < 2);
    }
  }
  fn_0068a5a8(param_1);
  return;
}



void fn_00376538(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00376c18(iVar1,param_1);
  return;
}


