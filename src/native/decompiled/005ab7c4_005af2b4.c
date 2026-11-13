#include "005ab7c4_005af2b4.h"



uint fn_005af2b4(int param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_48;
  undefined *puStack_44;
  undefined4 uStack_40;
  undefined4 local_34;
  int local_2c;
  
  local_2c = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  fn_0066173c();
  iVar3 = fn_002370a8();
  uVar6 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
    if (uVar1 <= uVar6) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + uVar6 * 4);
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    local_48 = DAT_00892bec;
    uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
    if (uVar1 <= uVar6) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
    }
    fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar6 * 4),&local_48);
    uVar1 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
    if (uVar1 <= uVar6) {
      fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + uVar6 * 4);
    uVar6 = uVar6 + 1;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  } while ((int)uVar6 < 9);
  uVar6 = 0;
  iVar4 = 0;
LAB_005af418:
  sVar2 = fn_0066128c(local_2c);
  iVar7 = iVar4;
  do {
    if (sVar2 != 0) {
      iVar4 = fn_00154ac8(0x19);
      if (iVar4 == 0) {
        bVar8 = SBORROW4(iVar3,iVar7);
        iVar4 = iVar3 - iVar7;
        if (iVar3 < iVar7) {
          bVar8 = SBORROW4(iVar7,6);
          iVar4 = iVar7 + -6;
        }
        if (iVar4 < 0 != bVar8) goto LAB_005af5f0;
        if (iVar7 == 8) {
          return uVar6;
        }
      }
      uVar5 = fn_0016a7c4((int)sVar2);
      uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + uVar6 * 4);
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
      uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
      }
      fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar6 * 4),uVar5);
      if (iVar3 < iVar7) {
        local_4c = DAT_00892bf4;
      }
      else {
        local_4c = DAT_00892bec;
      }
      uVar1 = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
      }
      fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar6 * 4),&local_4c);
      if (iVar3 < iVar7) {
        local_50[0] = -1;
        local_50[1] = -1;
        local_4c = 0x43ffff;
        local_48 = 0x450044;
        puStack_44 = &DAT_0040003f;
        uStack_40 = 0x41;
        uVar1 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
        if (uVar1 <= uVar6) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + uVar6 * 4);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
        local_34 = fn_00231ca0((int)local_50[iVar7],0);
        uVar1 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 2;
        if (uVar1 <= uVar6) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar6,uVar1);
        }
        fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xdc) + uVar6 * 4),local_34);
      }
      uVar6 = uVar6 + 1;
    }
LAB_005af5f0:
    iVar4 = iVar7 + 1;
    if (8 < iVar4) {
      return uVar6;
    }
    if (iVar4 == 0) goto LAB_005af418;
    sVar2 = fn_006616f4(local_2c,iVar7);
    iVar7 = iVar4;
  } while( true );
}



void fn_005aebd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_168 [10];
  char local_140 [296];
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar1 = fn_0028bcf4(iVar3);
  if ((iVar1 != 0) || (iVar1 = fn_0028bbc0(iVar3), iVar1 != 0)) {
    uVar2 = fn_002e3264(iVar3);
    iVar1 = fn_002febd8();
    if (iVar1 == 0) {
      iVar1 = fn_0022f584((char *)&DAT_005aed34,0);
LAB_005aecf0:
      if (iVar1 != 0) {
        fn_00190d50(*(undefined4 *)(param_1 + 200));
        return;
      }
    }
    else {
      fn_0017821c(local_168,&DAT_007c4df8,0x150);
      uVar4 = 0;
      do {
        iVar1 = fn_00147e6c(uVar2,local_168[uVar4 * 2],3);
        if (iVar1 == 0) {
          iVar1 = fn_00154ac8(local_168[uVar4 * 2 + 1]);
          if (iVar1 != 0) {
            local_168[4] = 0;
            local_168[5] = 0;
            local_168[6] = 0;
            local_168[7] = 0;
            local_168[8] = 0;
            local_168[9] = 0;
            builtin_strncpy(local_140,(char *)&DAT_005aed24,0xe);
            local_140[0xe] = '\0';
            local_140[0xf] = '\0';
            local_168[0] = uVar2;
            fn_0017d96c(local_168 + 4,0x15,0x14,local_140);
            iVar1 = fn_0022fd4c(local_168 + 4);
            goto LAB_005aecf0;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x2a);
    }
  }
  fn_005ca88c(param_1,*(undefined4 *)(param_1 + 200),8);
  return;
}



void fn_005aeae0(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2b);
  puVar1[0x16] = 0x14;
  *puVar1 = &DAT_00847938;
  *(undefined1 *)(puVar1 + 0x17) = 1;
  if (param_3 != (byte *)0x0) {
    puVar1[0x16] = (uint)*param_3;
  }
  return;
}



void fn_005ae398(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x19);
  *puVar1 = &DAT_00847910;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  return;
}



void fn_005ae148(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x14);
  *puVar1 = &DAT_008478e8;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x17] = 0xffffffff;
  puVar1[0x18] = 0;
  *(byte *)((int)puVar1 + 0x59) = ~(byte)(*(uint *)(puVar1[5] + 0x39c) >> 0xb) & 1;
  return;
}



void fn_005add70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x15);
  *puVar1 = &DAT_008478c0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  return;
}



void fn_005ac384(int param_1)

{
  uint uVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [86];
  short local_be [81];
  
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xdb);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00890b14) goto LAB_005ac3d0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005ac3d0:
  fn_0017821c(auStack_124,puVar3 + 2,0x104);
  iVar5 = fn_0020cb7c(auStack_114);
  uVar8 = 0;
  do {
    sVar2 = local_be[uVar8 * 2];
    uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2;
    if (sVar2 == 0) {
      if (uVar1 <= uVar8) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
      }
      iVar6 = *(int *)(param_1 + 0xb0);
      if (*(int *)(iVar6 + uVar8 * 4) != 0) {
        uVar1 = *(int *)(param_1 + 0xb4) - iVar6 >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0xb0) + uVar8 * 4);
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      }
    }
    else {
      if (uVar1 <= uVar8) {
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
      }
      iVar6 = *(int *)(param_1 + 0xb0);
      if (*(int *)(iVar6 + uVar8 * 4) != 0) {
        uVar1 = *(int *)(param_1 + 0xb4) - iVar6 >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        iVar6 = *(int *)(*(int *)(param_1 + 0xb0) + uVar8 * 4);
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
        uVar7 = fn_00231d50((int)sVar2);
        uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0) >> 2;
        if (uVar1 <= uVar8) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar8,uVar1);
        }
        fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar8 * 4),uVar7);
      }
      iVar5 = iVar5 + -1;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 7);
  fn_00688c04(*(undefined4 *)(param_1 + 0xac),iVar5,0);
  return;
}



undefined4 fn_005ab8b0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = fn_0022f750(*(undefined4 *)(&DAT_00890cb4 + param_3 * 4));
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = fn_0022f750(*(undefined4 *)(&DAT_00890cbc + param_3 * 4));
    return uVar1;
  }
  if (param_2 == 2) {
    uVar1 = fn_0022f750((&PTR_s_joukennnasi_00890ce0)[param_3]);
    return uVar1;
  }
  if (param_2 == 3) {
    uVar1 = fn_0022f750((&PTR_s_joukennnasi_00890d08)[param_3]);
    return uVar1;
  }
  return 0;
}



void fn_005ab7c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1[0x39];
  uVar3 = 0;
  iVar4 = *(int *)(iVar1 + 0x40);
  if (iVar4 == 0) {
    uVar3 = *(uint *)(iVar1 + 0x44);
  }
  else if (iVar4 == 1) {
    uVar3 = *(uint *)(iVar1 + 0x48);
  }
  else if (iVar4 == 2) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x4c);
  }
  else if (iVar4 == 3) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x4d);
  }
  uVar2 = 0;
  if (iVar4 == 0) {
    uVar2 = fn_0022f750(*(undefined4 *)(&DAT_00890cb4 + uVar3 * 4));
  }
  else if (iVar4 == 1) {
    uVar2 = fn_0022f750(*(undefined4 *)(&DAT_00890cbc + uVar3 * 4));
  }
  else if (iVar4 == 2) {
    uVar2 = fn_0022f750((&PTR_s_joukennnasi_00890ce0)[uVar3]);
  }
  else if (iVar4 == 3) {
    uVar2 = fn_0022f750((&PTR_s_joukennnasi_00890d08)[uVar3]);
  }
                    /* WARNING: Could not recover jumptable at 0x005ab89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,uVar2);
  return;
}


