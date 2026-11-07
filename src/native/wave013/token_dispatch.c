#include "pattern_tokens.h"

int pattern_dispatch_ascii(PatternLexer *lexer, PatternToken **token)
{
    switch (lexer->text[lexer->position]) {
    case 0x2e:
        return fn_004beed0(lexer, token);
    case 0x2b:
        return fn_004bef10(lexer, token);
    case 0x24:
        return fn_004bef50(lexer, token);
    case 0x2d:
        return fn_004befa0(lexer, token);
    case 0x2a:
        return fn_004bf874(lexer, token);
    case 0x3f:
        return fn_004bf8b4(lexer, token);
    case 0x26:
        return fn_004bf8f4(lexer, token);
    case 0x5c:
        return fn_004bf974(lexer, token);
    case 0x7b:
        return fn_004bf9e0(lexer, token);
    case 0x5e:
        return fn_004bfc08(lexer, token);
    case 0x7c:
        return fn_004bfc48(lexer, token);
    case 0x28:
        return fn_004bfda4(lexer, token);
    case 0x29:
        return fn_004bfde4(lexer, token);
    case 0x5b:
        return fn_004bfe24(lexer, token);
    case 0x5d:
        return fn_004bfe8c(lexer, token);
    default:
        return fn_004bf840(lexer, token);
    }
}

int pattern_dispatch_escape(PatternLexer *lexer, PatternToken **token)
{
    switch (lexer->text[lexer->position]) {
    case 0x30:
        return fn_004bf248(lexer, token);
    case 0x41:
        return fn_004bf378(lexer, token);
    case 0x42:
        return fn_004bf3a4(lexer, token);
    case 0x44:
        return fn_004bf3d0(lexer, token);
    case 0x50:
        return fn_004bf3fc(lexer, token);
    case 0x53:
        return fn_004bf490(lexer, token);
    case 0x57:
        return fn_004bf4bc(lexer, token);
    case 0x5a:
        return fn_004bf4e8(lexer, token);
    case 0x61:
        return fn_004bf514(lexer, token);
    case 0x62:
        return fn_004bf540(lexer, token);
    case 0x63:
        return fn_004bf56c(lexer, token);
    case 0x64:
        return fn_004bf5d8(lexer, token);
    case 0x65:
        return fn_004bf604(lexer, token);
    case 0x66:
        return fn_004bf630(lexer, token);
    case 0x6e:
        return fn_004bf65c(lexer, token);
    case 0x70:
        return fn_004bf688(lexer, token);
    case 0x72:
        return fn_004bf71c(lexer, token);
    case 0x73:
        return fn_004bf748(lexer, token);
    case 0x74:
        return fn_004bf774(lexer, token);
    case 0x75:
        return fn_004bf7a0(lexer, token);
    case 0x77:
        return fn_004bf7c4(lexer, token);
    case 0x78:
        return fn_004bf7f0(lexer, token);
    case 0x7a:
        return fn_004bf814(lexer, token);
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
        return fn_004bfc88(lexer, token);
    default:
        return fn_004bfcbc(lexer, token);
    }
}
