#include "0024b640_0024bdc8ba.h"



void fn_0024bbc0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_r10;
  
  iVar2 = fn_006b6e94();
  if (0 < iVar2) {
    unaff_r10 = &DAT_00896f34;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = fn_006b6d3c(param_1,iVar5);
      iVar4 = fn_006ba7d4();
      if (iVar4 == 0) {
        fn_002625d0(param_1,iVar3);
        cVar1 = *(char *)(iVar3 + 100);
        iVar4 = fn_00261d04(param_1,unaff_r10[3],unaff_r10[4]);
        fn_00232f80(iVar4,iVar3 + 8);
        *(char *)(iVar4 + 0x7c) = cVar1;
        fn_0024bdc8((int)cVar1,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}



undefined1 *
fn_0024bb30(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_44 [7];
  undefined1 local_28 [8];
  undefined1 auStack_20 [16];
  
  if (param_3 == 0) {
    return param_1;
  }
  fn_00692e98(auStack_20,param_3);
  fn_00183718(local_44,auStack_20,(char *)&DAT_0024bbb4);
  local_28[0] = 0;
  fn_0079c770(&DAT_008cd570,local_44[0],local_28);
  fn_0024b640(param_1,param_2,auStack_20,param_4,param_5);
  return auStack_20;
}


