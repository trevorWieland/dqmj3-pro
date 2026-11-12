#include "005d38c8_005d4530ba.h"



void fn_005d4338(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d4484(iVar1,param_1);
  return;
}



void fn_005d430c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_002f68a4();
  if (iVar1 == 1) {
    fn_002c3d68(param_1);
    fn_003ca138(param_1);
    return;
  }
  return;
}



void fn_005d423c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_002f68a4(param_1);
    fn_0015b0f8();
    uVar2 = fn_0022f584((char *)&DAT_005d42ec,0);
    fn_0068974c(param_1,uVar2,1);
    return;
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x02') {
    *(undefined **)(param_1 + 0xc4) = &DAT_005d4238;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  else if (cVar1 == '\x03') {
    fn_0015a480();
    fn_006899f4(param_1,0xe2,1);
    fn_00689930(param_1,0,0);
    return;
  }
  return;
}


