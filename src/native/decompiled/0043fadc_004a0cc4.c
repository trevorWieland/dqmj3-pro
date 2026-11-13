#include "0043fadc_004a0cc4.h"



undefined8 fn_004a0cc4(int param_1)

{
  uint uVar1;
  int local_10;
  
  if ((param_1 == 0) || (DAT_008a646c == '\0')) {
    return 0;
  }
  local_10 = param_1;
  uVar1 = (**(code **)(*DAT_008a6470 + 0x14))(DAT_008a6470,&local_10,4);
  return CONCAT44(uVar1 >> 0x12,param_1);
}



undefined4
fn_00477c4c(int param_1,uint param_2,ushort *param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  ushort local_60 [4];
  undefined1 auStack_58 [4];
  int *local_54;
  int *local_48;
  int local_44;
  int iStack_34;
  uint uStack_30;
  ushort *local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  iVar3 = fn_001249d0();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  bVar1 = false;
  local_60[0] = 0;
  if (((param_2 == 0) &&
      (puVar5 = *(ushort **)(param_1 + 0x144), puVar5 != *(ushort **)(param_1 + 0x148))) &&
     (*(int *)(*(int *)(puVar5 + 2) + 0x30) == param_5)) {
    param_2 = (uint)*puVar5;
  }
  iVar3 = fn_004790f8(param_1,param_2);
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + 1;
    local_60[0] = *(ushort *)(iVar3 + 0xe) << 8 | *(ushort *)(iVar3 + 0xe) >> 8;
  }
  if (local_60[0] == 0) {
    iVar3 = fn_004773f4(param_1,param_2,local_60,param_5,param_6,param_7);
    if (iVar3 == 0) {
      fn_004b7748();
      fn_00468fb0();
      (**(code **)(*piVar4 + 0xc))(piVar4);
      return 0;
    }
    if (param_4 != 0) {
      bVar1 = true;
      fn_004b4c44(auStack_58);
      (**(code **)(*DAT_008b6404 + 8))(DAT_008b6404,auStack_58);
      while (uVar2 = local_60[0], local_44 != 0) {
        iVar3 = *local_48;
        fn_0017695c(iVar3 + 8);
        *(ushort *)(*(int *)(iVar3 + 0xc) + 6) = uVar2 << 8 | uVar2 >> 8;
        *(undefined1 *)(iVar3 + 0x6d) = 0;
        (**(code **)(*DAT_008b6404 + 0x30))(DAT_008b6404,local_60[0]);
        if (DAT_008b637e == '\0') {
LAB_00477df8:
          iVar3 = DAT_008e76a8;
LAB_00477dfc:
          uVar8 = 0;
          if (iVar3 != 0) goto LAB_00477e04;
        }
        else {
          puVar6 = (uint *)fn_001775e8(DAT_008b63d8);
          uVar7 = *puVar6;
          if (uVar7 == 0) goto LAB_00477df8;
          if (uVar7 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
            iVar3 = *(int *)(*(int *)(*DAT_008e76e4 + uVar7 * 4) + 8);
            goto LAB_00477dfc;
          }
          fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x48,0xe0000003,0);
          iVar3 = -1;
LAB_00477e04:
          uVar8 = *(undefined4 *)(iVar3 + 0xc);
        }
        fn_004b755c(uVar8,*local_48 + 8);
        piVar9 = (int *)*local_48;
        if (piVar9 != local_48) {
          *(int *)piVar9[1] = *piVar9;
          *(int *)(*piVar9 + 4) = piVar9[1];
          local_44 = local_44 + -1;
          (**(code **)piVar9[2])(piVar9 + 2);
          *piVar9 = (int)local_54;
          local_54 = piVar9;
        }
      }
      fn_00786480(auStack_58);
    }
  }
  if (local_2c != (ushort *)0x0) {
    *local_2c = local_60[0];
  }
  if (bVar1) {
    *(ushort *)(param_1 + 0xb0) = local_60[0];
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
  return 1;
}



undefined4 * fn_0045503c(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_008b63b4 == (code *)0x0) {
    puVar1 = (undefined4 *)fn_002fecec((param_1 + 3U & 0xfffffffc) + 8);
  }
  else {
    puVar1 = (undefined4 *)(*DAT_008b63b4)();
  }
  *puVar1 = DAT_008b63b8;
  return puVar1 + 2;
}



void fn_00447520(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined4 local_3c [3];
  undefined4 *local_30;
  undefined4 local_2c [2];
  
  uVar6 = 0;
  local_5c = 0xd0e0f;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      fn_0031b764(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar6 * 4),1);
      iVar1 = fn_006ba284(param_1);
      uVar4 = iVar1 * 7 + uVar6;
      if ((int)uVar4 < *(int *)(param_1 + 0xf8)) {
        uVar5 = *(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 1;
        if (uVar5 <= uVar4) {
          fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar4,uVar5);
        }
        iVar1 = (int)*(short *)(*(int *)(param_1 + 0xec) + uVar4 * 2);
        if ((iVar1 == 0x385 || iVar1 == 0x386) || (iVar1 == 0x387 || iVar1 == 0x388)) {
          local_4c = 1;
        }
        else {
          local_4c = fn_002e8120();
        }
        iVar2 = fn_00661714(iVar1);
        fn_00166824(&local_58,&UNK_007c7a9c + iVar2 * 8);
        local_48 = local_58;
        uStack_44 = uStack_54;
        if (local_4c == 0) {
          iVar2 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
          if ((iVar2 < 500) &&
             (iVar2 = fn_006f5bec(*(undefined4 *)(param_1 + 0xe0),&local_48,0), iVar2 != 0)) {
            puVar7 = (undefined4 *)&DAT_00895e5c;
            goto LAB_004476c0;
          }
        }
        puVar7 = (undefined4 *)&DAT_00895e64;
LAB_004476c0:
        fn_002317d8(&local_40,iVar1,0);
        fn_0031b78c(param_1,uVar6,0,local_40);
        local_3c[0] = *puVar7;
        fn_002c37b4(param_1,uVar6,0,local_3c);
        uVar4 = 0;
        uVar5 = 0;
LAB_0044771c:
        iVar1 = (int)*(short *)((int)local_3c + uVar5 * 2 + -0xc);
        if (0 < iVar1) {
          fn_002301d8(&local_30,uVar5 & 0xff,iVar1,1,0);
          fn_0031b78c(param_1,uVar6,*(undefined1 *)((int)local_3c + (uVar4 - 0x20)),local_30);
          local_2c[0] = *puVar7;
          fn_002c37b4(param_1,uVar6,*(undefined1 *)((int)local_3c + (uVar4 - 0x20)),local_2c);
          uVar4 = uVar4 + 1;
          if (local_30 != &DAT_008f9cf4) {
            piVar3 = local_30 + -3;
            iVar1 = *piVar3;
            if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0))))
            {
              fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
            }
          }
        }
LAB_004477c0:
        uVar5 = uVar5 + 1;
        if ((int)uVar5 < 4) goto LAB_00447714;
        if (local_4c != 0) {
          uVar4 = 0;
          goto LAB_004477e4;
        }
        for (; uVar4 < 3; uVar4 = uVar4 + 1) {
LAB_004477e4:
          fn_0031b78c(param_1,uVar6,*(undefined1 *)((int)local_3c + (uVar4 - 0x20)),&DAT_004478c0);
        }
        if (local_40 != &DAT_008f9cf4) {
          piVar3 = local_40 + -3;
          iVar1 = *piVar3;
          if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
            fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
          }
        }
        goto LAB_0044784c;
      }
      if (6 < *(int *)(param_1 + 0xf8)) {
        uVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
        if (uVar4 <= uVar6) {
          fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar4);
        }
        fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar6 * 4),0xffffffff);
      }
LAB_0044784c:
      uVar6 = uVar6 + 1;
      iVar1 = fn_006ba274(param_1);
    } while ((int)uVar6 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
LAB_00447714:
  if (uVar4 < 3) goto LAB_0044771c;
  goto LAB_004477c0;
}



undefined4 fn_0043fadc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [36];
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_result.arc",
                       &DAT_0043fddc,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_0043fde8,&DAT_0043fde4,0,1,0)
  ;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar1);
  uVar2 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar3 = fn_001827b0(uVar1,(char *)&DAT_0043fe00);
  fn_00190d50(uVar3,uVar2);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar2 = fn_0029650c(*(undefined1 *)(iVar4 + 0x32));
  uVar3 = fn_001827b0(uVar1,(char *)&DAT_0043fe10);
  fn_00190d50(uVar3,uVar2);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  fn_001028d4(auStack_40,(char *)&DAT_0043fe20,*(byte *)(iVar4 + 0x33) + 1,1);
  uVar2 = fn_0022f750(auStack_40);
  uVar3 = fn_001827b0(uVar1,(char *)&DAT_0043fe30);
  fn_00190d50(uVar3,uVar2);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  fn_00231700(auStack_80,0x20,(int)*(short *)(iVar4 + 0x30),0);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe40);
  fn_00190d50(uVar2,auStack_80);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar6 = *(uint *)(iVar4 + 0x24);
  iVar4 = (int)((longlong)(int)uVar6 * -0x6e5d4c3b + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe54);
  fn_00688c04(uVar2,(iVar4 >> 10) - (iVar4 >> 0x1f),0);
  iVar4 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar5 = (iVar4 >> 4) - (iVar4 >> 0x1f);
  iVar4 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe68);
  fn_00688c04(uVar2,uVar5 + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * -0x3c,2);
  iVar4 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  uVar5 = (uVar6 + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * -0x1e) * 100;
  iVar4 = (int)((longlong)(int)uVar5 * -0x77777777 + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe78);
  fn_00688c04(uVar2,(iVar4 >> 4) - (iVar4 >> 0x1f),2);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar3 = *(undefined4 *)(iVar4 + 0x28);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe88);
  fn_00688c04(uVar2,uVar3,0);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  uVar3 = *(undefined4 *)(iVar4 + 0x2c);
  uVar2 = fn_001827b0(uVar1,(char *)&DAT_0043fe94);
  fn_00688c04(uVar2,uVar3,0);
  iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
  if (*(char *)(iVar4 + 0x34) == '\0') {
    uVar2 = fn_0022f750((char *)&DAT_0043fea4);
    uVar1 = fn_001827b0(uVar1,(char *)&DAT_0043febc);
    fn_00190d50(uVar1,uVar2);
  }
  else {
    iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
    if (*(char *)(iVar4 + 0x34) == '\x01') {
      uVar2 = fn_0022f750((char *)&DAT_0043fec8);
      uVar1 = fn_001827b0(uVar1,(char *)&DAT_0043febc);
      fn_00190d50(uVar1,uVar2);
    }
    else {
      iVar4 = fn_006bec1c(*(undefined4 *)(DAT_00897804 + 0x40));
      if (*(char *)(iVar4 + 0x34) == '\x02') {
        uVar2 = fn_0022f750((char *)&DAT_0043ff18);
        uVar1 = fn_001827b0(uVar1,(char *)&DAT_0043febc);
        fn_00190d50(uVar1,uVar2);
      }
    }
  }
  return 1;
}


