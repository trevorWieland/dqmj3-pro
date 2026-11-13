#include "decompiled.h"

/* Names these functions call and address, declared with the type this
 * unit gives them. A callee keeps an empty parameter list: the split
 * gives every function an address and the decompiler inferred each
 * signature from the callee body, so an empty list is the only contract
 * that holds at every call site. */

/* Data these functions address. A name carries the image address
 * it must have, so a reference resolves to the original object. */
extern undefined4 DAT_00893004; extern undefined4 DAT_00893008; extern undefined4 DAT_00893b64; extern undefined4 DAT_0089466c;
extern undefined4 DAT_00894678; extern undefined4 DAT_00894f68; extern undefined4 DAT_008950b4; extern undefined4 DAT_008950b8;
extern undefined4 DAT_008950b9; extern undefined4 DAT_008950ba; extern undefined4 DAT_008950bb; extern undefined4 DAT_008950bc;
extern undefined4 DAT_008950bd; extern undefined4 DAT_008950be; extern undefined4 DAT_008950bf; extern undefined4 DAT_008950c0;
extern undefined4 DAT_008950c1; extern undefined4 DAT_008950c2; extern undefined4 DAT_008950c3; extern undefined4 DAT_008950c4;
extern undefined4 DAT_008950c5; extern undefined4 DAT_008950c6; extern undefined4 DAT_008950c7; extern undefined4 DAT_008950c8;
extern undefined4 DAT_008950c9; extern undefined4 DAT_008950ca; extern undefined4 DAT_008950cb; extern undefined4 DAT_008950cc;
extern undefined4 DAT_008950cd; extern undefined4 DAT_008950ce; extern undefined4 DAT_008950cf; extern undefined4 DAT_008950d0;
extern undefined4 DAT_008950d1; extern undefined4 DAT_008950d2; extern undefined4 DAT_008950d3; extern undefined4 DAT_008950d4;
extern undefined4 DAT_008950d5; extern undefined4 DAT_008950d6; extern undefined4 DAT_008950d7; extern undefined4 DAT_008950d8;
extern undefined4 DAT_008950d9; extern undefined4 DAT_008950da; extern undefined4 DAT_008950db; extern undefined4 DAT_008950dc;
extern undefined4 DAT_008950e0; extern undefined4 DAT_008951fc; extern undefined4 DAT_008952c0; extern undefined4 DAT_008952c4;
extern undefined4 DAT_008952c8; extern undefined4 DAT_008952f0; extern undefined4 DAT_008952f4; extern undefined4 DAT_008952f8;
extern undefined4 DAT_00895bec; extern undefined4 DAT_00895bf0; extern undefined4 DAT_00895bf4; extern undefined4 DAT_00895c20;
extern undefined4 DAT_00895c40; extern undefined4 DAT_00895c44; extern undefined4 DAT_00895ca4; extern undefined4 DAT_00895ca8;
extern undefined4 DAT_00895d74; extern undefined4 DAT_00895d78; extern undefined4 DAT_0089663c; extern undefined4 DAT_00896640;
extern undefined4 DAT_00896644; extern undefined4 DAT_0089681c; extern undefined4 DAT_00896820; extern undefined4 DAT_00896821;
extern undefined4 DAT_00896822; extern undefined4 DAT_00896823; extern undefined4 DAT_00896824; extern undefined4 DAT_00896825;
extern undefined4 DAT_00896826; extern undefined4 DAT_00896827; extern undefined4 DAT_00896828; extern undefined4 DAT_00896829;
extern undefined4 DAT_0089682a; extern undefined4 DAT_0089682b; extern undefined4 DAT_0089682c; extern undefined4 DAT_0089682d;
extern undefined4 DAT_0089682e; extern undefined4 DAT_0089682f; extern undefined4 DAT_00896830; extern undefined4 DAT_00896831;
extern undefined4 DAT_00896832; extern undefined4 DAT_00896833; extern undefined4 DAT_00896834; extern undefined4 DAT_00896835;
extern undefined4 DAT_00896836; extern undefined4 DAT_00896837; extern undefined4 DAT_00896838; extern undefined4 DAT_00896839;
extern undefined4 DAT_0089683a; extern undefined4 DAT_0089683b; extern undefined4 DAT_0089683c; extern undefined4 DAT_0089683d;
extern undefined4 DAT_0089683e; extern undefined4 DAT_0089683f; extern undefined4 DAT_00896840; extern undefined4 DAT_00896841;
extern undefined4 DAT_00896842; extern undefined4 DAT_00896843; extern undefined4 DAT_0089684c; extern undefined4 DAT_00896850;
extern undefined4 DAT_00896890; extern undefined4 DAT_00896894; extern undefined4 DAT_00896898; extern undefined4 DAT_0089689c;
extern undefined4 DAT_0089690c; extern undefined4 DAT_00896910; extern undefined4 DAT_00896911; extern undefined4 DAT_00896912;
extern undefined4 DAT_00896913; extern undefined4 DAT_00896914; extern undefined4 DAT_00896915; extern undefined4 DAT_00896916;
extern undefined4 DAT_00896917; extern undefined4 DAT_00896918; extern undefined4 DAT_00896919; extern undefined4 DAT_0089691a;
extern undefined4 DAT_0089691b; extern undefined4 DAT_0089691c; extern undefined4 DAT_0089691d; extern undefined4 DAT_0089691e;
extern undefined4 DAT_0089691f; extern undefined4 DAT_00896920; extern undefined4 DAT_00896921; extern undefined4 DAT_00896922;
extern undefined4 DAT_00896923; extern undefined4 DAT_00896924; extern undefined4 DAT_00896925; extern undefined4 DAT_00896926;
extern undefined4 DAT_00896927; extern undefined4 DAT_00896928; extern undefined4 DAT_00896929; extern undefined4 DAT_0089692a;
extern undefined4 DAT_0089692b; extern undefined4 DAT_0089692c; extern undefined4 DAT_0089692d; extern undefined4 DAT_0089692e;
extern undefined4 DAT_0089692f; extern undefined4 DAT_00896930; extern undefined4 DAT_00896931; extern undefined4 DAT_00896932;
extern undefined4 DAT_00896933; extern undefined4 DAT_00896934; extern undefined4 DAT_00896938; extern undefined4 DAT_00896ac0;
extern undefined4 DAT_00896ac4; extern undefined4 DAT_0089701c; extern undefined4 DAT_00897020; extern undefined4 DAT_00897024;
extern undefined4 DAT_00897264; extern undefined4 DAT_00897268; extern undefined4 DAT_008ca138; extern undefined4 DAT_008ca13c;
extern undefined4 DAT_008ca140; extern undefined4 DAT_008ca144; extern undefined4 DAT_008ca148; extern undefined4 DAT_008ca14c;
extern undefined4 DAT_008cbabc; extern undefined4 DAT_008cbac0; extern undefined4 DAT_008cbac4; extern undefined4 DAT_008cbac8;
extern undefined4 DAT_008cbacc; extern undefined4 DAT_008cbad0; extern undefined4 DAT_008cbca8; extern undefined4 DAT_008cbcac;
extern undefined4 DAT_008cbcb0; extern undefined4 DAT_008cbcb4; extern undefined4 DAT_008cbcb8; extern undefined4 DAT_008cbcbc;
extern undefined4 DAT_008cbd08; extern undefined4 DAT_008cbd0c; extern undefined4 DAT_008cbd10; extern undefined4 DAT_008cbd14;
extern undefined4 DAT_008cbd18; extern undefined4 DAT_008cbd1c; extern undefined4 DAT_008cc334; extern undefined4 DAT_008cc338;
extern undefined4 DAT_008cc33c; extern undefined4 DAT_008cc340; extern undefined4 DAT_008cc344; extern undefined4 DAT_008cc348;
extern undefined4 DAT_008cc3dc; extern undefined4 DAT_008cc3e0; extern undefined4 DAT_008cc3e4; extern undefined4 DAT_008cc3e8;
extern undefined4 DAT_008cc3ec; extern undefined4 DAT_008cc3f0; extern undefined4 DAT_008cc46c; extern undefined4 DAT_008cc470;
extern undefined4 DAT_008cc474; extern undefined4 DAT_008cc478; extern undefined4 DAT_008cc47c; extern undefined4 DAT_008cc480;
extern undefined4 DAT_008cc4e4; extern undefined4 DAT_008cc4e8; extern undefined4 DAT_008cc4ec; extern undefined4 DAT_008cc4f0;
extern undefined4 DAT_008cc4f4; extern undefined4 DAT_008cc4f8; extern undefined4 DAT_008ccbb0; extern undefined4 DAT_008ccbb4;
extern undefined4 DAT_008ccbb8; extern undefined4 DAT_008ccbbc; extern undefined4 DAT_008ccbc0; extern undefined4 DAT_008ccbc4;
extern undefined4 DAT_008ccd48; extern undefined4 DAT_008ccd4c; extern undefined4 DAT_008ccd50; extern undefined4 DAT_008ccd54;
extern undefined4 DAT_008ccd58; extern undefined4 DAT_008ccd5c; extern undefined4 DAT_008ccd90; extern undefined4 DAT_008ccd94;
extern undefined4 DAT_008ccd98; extern undefined4 DAT_008ccd9c; extern undefined4 DAT_008ccda0; extern undefined4 DAT_008ccda4;
extern undefined4 DAT_008cce68; extern undefined4 DAT_008cce6c; extern undefined4 DAT_008cce70; extern undefined4 DAT_008cce74;
extern undefined4 DAT_008cce78; extern undefined4 DAT_008cce7c; extern undefined4 DAT_008ccfdc; extern undefined4 DAT_008ccfe0;
extern undefined4 DAT_008ccfe4; extern undefined4 DAT_008ccfe8; extern undefined4 DAT_008ccfec; extern undefined4 DAT_008ccff0;
extern undefined4 DAT_008cd6d4; extern undefined4 DAT_008cd6d8; extern undefined4 DAT_008cd6dc; extern undefined4 DAT_008cd6e0;
extern undefined4 DAT_008cd6e4; extern undefined4 DAT_008cd6e8; extern undefined4 DAT_008cda1c; extern undefined4 DAT_008cda20;
extern undefined4 DAT_008cda24; extern undefined4 DAT_008cda28; extern undefined4 DAT_008cda2c; extern undefined4 DAT_008cda30;
