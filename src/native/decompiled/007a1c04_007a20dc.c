#include "007a1c04_007a20dc.h"



void fn_007a20dc(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar1 = puVar2 + 4, puVar1 != param_2) {
    local_40 = *puVar1;
    uStack_3c = puVar2[5];
    uStack_38 = puVar2[6];
    uStack_34 = puVar2[7];
    iVar3 = (*param_3)(&local_40,param_1);
    if (iVar3 == 0) {
      local_30 = local_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
      iVar3 = (*param_3)(&local_30);
      puVar4 = puVar1;
      while (puVar6 = puVar2, iVar3 != 0) {
        uVar5 = puVar6[1];
        uVar7 = puVar6[2];
        uVar8 = puVar6[3];
        *puVar4 = *puVar6;
        puVar4[1] = uVar5;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        iVar3 = (*param_3)(&local_30,puVar6 + -4);
        puVar2 = puVar6 + -4;
        puVar4 = puVar6;
      }
      *puVar4 = local_30;
      puVar4[1] = uStack_2c;
      puVar4[2] = uStack_28;
      puVar4[3] = uStack_24;
      puVar2 = puVar1;
    }
    else {
      puVar4 = puVar2 + 8;
      puVar6 = puVar1;
      if (param_1 < puVar1) {
        iVar3 = (int)puVar1 - (int)param_1;
        if (0 < iVar3) {
          if (iVar3 * 0x8000000 < 0) {
            *puVar1 = *puVar2;
            puVar2[5] = puVar2[1];
            puVar2[6] = puVar2[2];
            puVar2[7] = puVar2[3];
            puVar4 = puVar1;
            puVar6 = puVar2;
          }
          for (iVar3 = iVar3 >> 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar5 = puVar6[-3];
            uVar7 = puVar6[-2];
            uVar8 = puVar6[-1];
            puVar4[-4] = puVar6[-4];
            puVar4[-3] = uVar5;
            puVar4[-2] = uVar7;
            puVar4[-1] = uVar8;
            uVar5 = puVar6[-7];
            uVar7 = puVar6[-6];
            uVar8 = puVar6[-5];
            puVar4[-8] = puVar6[-8];
            puVar4[-7] = uVar5;
            puVar4[-6] = uVar7;
            puVar4[-5] = uVar8;
            puVar4 = puVar4 + -8;
            puVar6 = puVar6 + -8;
          }
        }
      }
      else {
        while (param_1 != puVar6) {
          uVar5 = puVar6[-3];
          uVar7 = puVar6[-2];
          uVar8 = puVar6[-1];
          puVar4[-4] = puVar6[-4];
          puVar4[-3] = uVar5;
          puVar4[-2] = uVar7;
          puVar4[-1] = uVar8;
          puVar4 = puVar4 + -4;
          puVar6 = puVar6 + -4;
        }
      }
      *param_1 = local_40;
      param_1[1] = uStack_3c;
      param_1[2] = uStack_38;
      param_1[3] = uStack_34;
      puVar2 = puVar1;
    }
  }
  return;
}



void fn_007a1f1c(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_1 != param_2) {
    param_4 = param_1 + 4;
  }
  if (param_1 == param_2 || param_4 == param_2) {
    return;
  }
  do {
    uVar5 = *param_4;
    uVar7 = param_4[3];
    uVar8 = param_4[1];
    uVar9 = param_4[2];
    if ((uVar5 == 0) || ((*param_1 != 0 && (uVar5 == 0 || *param_1 <= uVar5)))) {
      puVar1 = param_4 + -4;
      puVar3 = param_4;
      if ((uVar5 != 0) && ((puVar2 = param_4, *puVar1 == 0 || (uVar5 != 0 && uVar5 < *puVar1)))) {
        do {
          puVar3 = puVar1;
          uVar6 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          puVar1 = puVar3 + -4;
          if (uVar5 == 0) break;
          puVar2 = puVar3;
        } while ((*puVar1 == 0) || (uVar5 != 0 && uVar5 < *puVar1));
      }
      *puVar3 = uVar5;
      puVar3[3] = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
    }
    else {
      puVar3 = param_4 + 4;
      puVar1 = param_4;
      if (param_1 < param_4) {
        iVar4 = (int)param_4 - (int)param_1;
        if (0 < iVar4) {
          if (iVar4 * 0x8000000 < 0) {
            puVar1 = param_4 + -4;
            *param_4 = param_4[-4];
            param_4[1] = param_4[-3];
            param_4[2] = param_4[-2];
            param_4[3] = param_4[-1];
            puVar3 = param_4;
          }
          for (iVar4 = iVar4 >> 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar6 = puVar1[-3];
            uVar10 = puVar1[-2];
            uVar11 = puVar1[-1];
            puVar3[-4] = puVar1[-4];
            puVar3[-3] = uVar6;
            puVar3[-2] = uVar10;
            puVar3[-1] = uVar11;
            uVar6 = puVar1[-7];
            uVar10 = puVar1[-6];
            uVar11 = puVar1[-5];
            puVar3[-8] = puVar1[-8];
            puVar3[-7] = uVar6;
            puVar3[-6] = uVar10;
            puVar3[-5] = uVar11;
            puVar1 = puVar1 + -8;
            puVar3 = puVar3 + -8;
          }
        }
      }
      else {
        for (; param_1 != puVar1; puVar1 = puVar1 + -4) {
          uVar6 = puVar1[-3];
          uVar10 = puVar1[-2];
          uVar11 = puVar1[-1];
          puVar3[-4] = puVar1[-4];
          puVar3[-3] = uVar6;
          puVar3[-2] = uVar10;
          puVar3[-1] = uVar11;
          puVar3 = puVar3 + -4;
        }
      }
      *param_1 = uVar5;
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar7;
    }
    param_4 = param_4 + 4;
    if (param_4 == param_2) {
      return;
    }
  } while( true );
}



void fn_007a1d3c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint local_218 [60];
  uint local_128 [65];
  
  if (param_1 == param_2) {
    return;
  }
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 0x3c;
    if (puVar1 == param_2) {
      return;
    }
    fn_0017821c(local_128,puVar1,0xf0);
    if ((local_128[0] == 0) || ((*param_1 != 0 && (local_128[0] == 0 || *param_1 <= local_128[0]))))
    {
      fn_0017821c(local_218,local_128,0xf0);
      puVar4 = puVar1 + -0x3c;
      puVar3 = puVar1;
      if ((local_218[0] != 0) &&
         ((puVar5 = puVar1, *puVar4 == 0 || (local_218[0] != 0 && local_218[0] < *puVar4)))) {
        do {
          puVar3 = puVar4;
          fn_0017821c(puVar5,puVar3,0xf0);
          puVar4 = puVar3 + -0x3c;
          if (local_218[0] == 0) break;
          puVar5 = puVar3;
        } while ((*puVar4 == 0) || (local_218[0] != 0 && local_218[0] < *puVar4));
      }
      puVar4 = local_218;
    }
    else {
      puVar3 = puVar1 + 0x3c;
      puVar4 = puVar1;
      if (param_1 < puVar1) {
        uVar6 = (int)puVar1 - (int)param_1;
        if (0 < (int)uVar6) {
          iVar2 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
          if (((iVar2 >> 7) - (iVar2 >> 0x1f) & 1U) != 0) {
            puVar4 = puVar1 + -0x3c;
            fn_0017821c(puVar1,puVar4,0xf0);
            puVar3 = puVar1;
          }
          iVar2 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
          for (iVar2 = (iVar2 >> 7) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
            fn_0017821c(puVar3 + -0x3c,puVar4 + -0x3c,0xf0);
            puVar4 = puVar4 + -0x78;
            puVar3 = puVar3 + -0x78;
            fn_0017821c(puVar3,puVar4,0xf0);
          }
        }
      }
      else {
        while (param_1 != puVar4) {
          puVar3 = puVar3 + -0x3c;
          fn_0017821c(puVar3,puVar4 + -0x3c,0xf0);
          puVar4 = puVar4 + -0x3c;
        }
      }
      puVar3 = param_1;
      puVar4 = local_128;
    }
    fn_0017821c(puVar3,puVar4,0xf0);
  } while( true );
}



undefined4 * fn_007a1ca0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 < param_2) {
    uVar5 = (int)param_2 - (int)param_1;
    if (0 < (int)uVar5) {
      puVar1 = param_3;
      puVar2 = param_2;
      if ((int)(uVar5 * 0x10000000) < 0) {
        puVar2 = param_2 + -2;
        puVar1 = param_3 + -2;
        uVar4 = param_2[-1];
        *puVar1 = *puVar2;
        param_3[-1] = uVar4;
      }
      for (iVar3 = (int)uVar5 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar4 = puVar2[-1];
        puVar1[-2] = puVar2[-2];
        puVar1[-1] = uVar4;
        uVar4 = puVar2[-3];
        puVar1[-4] = puVar2[-4];
        puVar1[-3] = uVar4;
        puVar1 = puVar1 + -4;
        puVar2 = puVar2 + -4;
      }
      param_3 = (undefined4 *)((int)param_3 - (uVar5 & 0xfffffff8));
    }
  }
  else {
    while (param_1 != param_2) {
      uVar4 = param_2[-1];
      param_3[-2] = param_2[-2];
      param_3[-1] = uVar4;
      param_2 = param_2 + -2;
      param_3 = param_3 + -2;
    }
  }
  return param_3;
}



int fn_007a1c04(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x34) {
    *(undefined1 *)(param_3 + -0x30) = *(undefined1 *)(param_2 + -0x30);
    *(undefined1 *)(param_3 + -0x2f) = *(undefined1 *)(param_2 + -0x2f);
    *(undefined1 *)(param_3 + -0x2e) = *(undefined1 *)(param_2 + -0x2e);
    *(undefined4 *)(param_3 + -0x2c) = *(undefined4 *)(param_2 + -0x2c);
    fn_006f94f4(param_3 + -0x28,param_2 + -0x28);
    *(undefined4 *)(param_3 + -0x28) = *(undefined4 *)(param_2 + -0x28);
    *(undefined2 *)(param_3 + -0x28) = *(undefined2 *)(param_2 + -0x28);
    *(undefined2 *)(param_3 + -0x28) = *(undefined2 *)(param_2 + -0x28);
    *(undefined2 *)(param_3 + -0x28) = *(undefined2 *)(param_2 + -0x28);
    *(undefined1 *)(param_3 + -0x1e) = *(undefined1 *)(param_2 + -0x1e);
    uVar1 = *(undefined4 *)(param_2 + -0x18);
    uVar2 = *(undefined4 *)(param_2 + -0x14);
    uVar3 = *(undefined4 *)(param_2 + -0x10);
    uVar4 = *(undefined4 *)(param_2 + -0xc);
    uVar5 = *(undefined4 *)(param_2 + -8);
    uVar6 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(param_3 + -0x1c) = *(undefined4 *)(param_2 + -0x1c);
    *(undefined4 *)(param_3 + -0x18) = uVar1;
    *(undefined4 *)(param_3 + -0x14) = uVar2;
    *(undefined4 *)(param_3 + -0x10) = uVar3;
    *(undefined4 *)(param_3 + -0xc) = uVar4;
    *(undefined4 *)(param_3 + -8) = uVar5;
    *(undefined4 *)(param_3 + -4) = uVar6;
    param_3 = param_3 + -0x34;
  }
  return param_3;
}


