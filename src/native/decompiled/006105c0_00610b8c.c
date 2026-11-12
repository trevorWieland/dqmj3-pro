#include "006105c0_00610b8c.h"



bool fn_00610b8c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006cabd0(param_3);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = fn_006a7ab8(param_1);
  iVar1 = (int)uVar2 >> 0x1f;
  bVar4 = (uint)uVar5 < uVar2;
  return (int)(iVar3 - (iVar1 + (uint)bVar4)) < 0 ==
         (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar4));
}



bool fn_00610b64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad18(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610b34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,1,0xffffffff);
  return iVar1 <= iVar2;
}



bool fn_00610afc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006caad8(param_3);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = fn_006a7ab8(param_1);
  iVar1 = (int)uVar2 >> 0x1f;
  bVar4 = (uint)uVar5 < uVar2;
  return (int)(iVar3 - (iVar1 + (uint)bVar4)) < 0 ==
         (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar4));
}



bool fn_00610ad4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac54(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = param_1 == 0xe3;
  if (!(bool)uVar3) {
    if (param_1 == 0xe4) {
      uVar3 = 2;
    }
    else if (param_1 == 0xe5) {
      uVar3 = 3;
    }
  }
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae54(param_3,uVar3);
  return iVar1 <= iVar2;
}



bool fn_00610a48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006ca9d0(param_3);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = fn_006a7ab8(param_1);
  iVar1 = (int)uVar2 >> 0x1f;
  bVar4 = (uint)uVar5 < uVar2;
  return (int)(iVar3 - (iVar1 + (uint)bVar4)) < 0 ==
         (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar4));
}



bool fn_00610904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cacc0(param_3);
  return iVar1 <= iVar2;
}



bool fn_006108dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad54(param_3);
  return iVar1 <= iVar2;
}



bool fn_006108b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab18(param_3);
  return iVar1 <= iVar2;
}



bool fn_0061088c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac88(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610864(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caef8(param_3);
  return iVar1 <= iVar2;
}



bool fn_0061083c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab80(param_3);
  return iVar1 <= iVar2;
}



undefined8 fn_006107f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006caaf8(param_3);
  uVar5 = fn_0011c134((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe10,0);
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = (uint)uVar5;
  uVar3 = fn_006a7ab8(param_1);
  iVar1 = (int)uVar3 >> 0x1f;
  return CONCAT44(uVar2 - uVar3,
                  (uint)((int)(iVar4 - (iVar1 + (uint)(uVar2 < uVar3))) < 0 ==
                        (SBORROW4(iVar4,iVar1) != SBORROW4(iVar4 - iVar1,(uint)(uVar2 < uVar3)))));
}



undefined4 fn_00610770(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = 0;
  while (iVar2 = fn_006cac68(param_3,uVar6), iVar2 == 0) {
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) {
      return 0;
    }
  }
  iVar3 = fn_006caec4(param_3,uVar6);
  iVar4 = fn_006caea4(param_3,uVar6);
  iVar2 = (param_1 + -0x9d) * 8;
  iVar5 = *(int *)(&DAT_007c3308 + iVar2);
  bVar8 = SBORROW4(iVar5,iVar3);
  iVar1 = iVar5 - iVar3;
  bVar7 = iVar5 == iVar3;
  if (iVar5 <= iVar3) {
    iVar2 = *(int *)(&DAT_007c330c + iVar2);
    bVar8 = SBORROW4(iVar2,iVar4);
    iVar1 = iVar2 - iVar4;
    bVar7 = iVar2 == iVar4;
  }
  if (bVar7 || iVar1 < 0 != bVar8) {
    return 1;
  }
  return 0;
}



bool fn_00610748(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae40(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf0c(param_3);
  return iVar1 <= iVar2;
}



bool fn_006106f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa04(param_3);
  return iVar1 <= iVar2;
}



bool fn_006105e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa68(param_3);
  return iVar1 <= iVar2;
}



bool fn_006105c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cabf0(param_3);
  return iVar1 <= iVar2;
}


