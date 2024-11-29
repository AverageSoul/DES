#include <stdint.h>

static const uint32_t SPtrans[8][64] = {
    {
        0x01008800,        0x01000000,        0x01008400,        0x00000400,        0x00000800,        0x01008c00,        0x00008c00,        0x00008000,
        0x00000c00,        0x00008800,        0x01000800,        0x01008000,        0x01000400,        0x00008400,        0x00000000,        0x01000c00,
        0x00000000,        0x01008c00,        0x01000c00,        0x01000000,        0x01008800,        0x00000800,        0x01008400,        0x00000400,
        0x00008800,        0x01000800,        0x01008000,        0x00008c00,        0x00008400,        0x01000400,        0x00000c00,        0x00008000,
        0x01000000,        0x00000400,        0x01008800,        0x00008000,        0x01008400,        0x01000800,        0x00000800,        0x00008c00,
        0x01008c00,        0x01008000,        0x00008400,        0x01000c00,        0x00000c00,        0x00008800,        0x01000400,        0x00000000,
        0x01008c00,        0x01008000,        0x00008000,        0x00000800,        0x01000000,        0x00008400,        0x00000400,        0x01000c00,
        0x01000400,        0x00008c00,        0x00000c00,        0x01008800,        0x00008800,        0x00000000,        0x01000800,        0x01008400
    },
    {
        0x0008400c,        0x00004000,        0x00000004,        0x0008000c,        0x00080008,        0x0000400c,        0x00004008,        0x00080000,
        0x00004004,        0x00084008,        0x00000008,        0x00084004,        0x00080004,        0x00000000,        0x00084000,        0x0000000c,
        0x00004008,        0x00084004,        0x00080000,        0x00084008,        0x0008400c,        0x00000008,        0x00000004,        0x0008000c,
        0x00080004,        0x00000000,        0x00004000,        0x0000000c,        0x00080008,        0x00004004,        0x0000400c,        0x00084000,
        0x00000000,        0x0008000c,        0x00084008,        0x0000400c,        0x0000000c,        0x00080000,        0x00084004,        0x00004000,
        0x00084000,        0x00000004,        0x00080004,        0x00080008,        0x00004004,        0x00004008,        0x00000008,        0x0008400c,
        0x00084004,        0x00000004,        0x0000000c,        0x00004000,        0x00004008,        0x0008400c,        0x00080000,        0x00000008,
        0x0000400c,        0x00080008,        0x00084008,        0x00080004,        0x00000000,        0x00084000,        0x0008000c,        0x00004004
    },
    {
        0x40000100,        0x00000000,        0x40000020,        0x40010100,        0x00010100,        0x00000120,        0x40010120,        0x00010020,
        0x00000020,        0x40010020,        0x40010000,        0x00010120,        0x40000120,        0x00010000,        0x00000100,        0x40000000,
        0x40010020,        0x00010120,        0x00000000,        0x40000020,        0x00000120,        0x00010000,        0x00010100,        0x40000100,
        0x00000100,        0x40000000,        0x00010020,        0x40010100,        0x40010000,        0x40000120,        0x40010120,        0x00000020,
        0x40010020,        0x00010100,        0x00010000,        0x40000020,        0x40000000,        0x40010120,        0x00000120,        0x00000000,
        0x40000120,        0x00000020,        0x00000100,        0x40010000,        0x00010020,        0x40000100,        0x40010100,        0x00010120,
        0x00000020,        0x40000100,        0x40010020,        0x00000000,        0x00010100,        0x40000020,        0x40000000,        0x00010120,
        0x00010000,        0x40010120,        0x40010100,        0x00000120,        0x40000120,        0x00010020,        0x00000100,        0x40010000
    },
    {
        0x00202001,        0x04202000,        0x04002001,        0x00200001,        0x00000000,        0x00002001,        0x04200000,        0x04000001,
        0x00200000,        0x00000001,        0x04000000,        0x00202000,        0x04200001,        0x04002000,        0x00002000,        0x04202001,
        0x04202000,        0x04000000,        0x04200001,        0x00202000,        0x00002001,        0x04202001,        0x00000000,        0x00200001,
        0x00002000,        0x00202001,        0x00000001,        0x04002000,        0x00200000,        0x04000001,        0x04002001,        0x04200000,
        0x04000001,        0x00002001,        0x04200000,        0x00000000,        0x04002000,        0x04200001,        0x00202001,        0x04202000,
        0x04202001,        0x00200000,        0x00200001,        0x04002001,        0x00202000,        0x00000001,        0x04000000,        0x00002000,
        0x00200001,        0x04202001,        0x00000000,        0x00002001,        0x04000001,        0x00200000,        0x04202000,        0x04000000,
        0x04200000,        0x00002000,        0x00202000,        0x04200001,        0x04002000,        0x00202001,        0x00000001,        0x04002001
    },
    {
        0x00000080,        0x20800000,        0x00800000,        0x00020000,        0x00820080,        0x20000080,        0x20020080,        0x00800080,
        0x20000000,        0x00820000,        0x00020080,        0x20820080,        0x20820000,        0x00000000,        0x20800080,        0x20020000,
        0x20800080,        0x20020080,        0x00000080,        0x20800000,        0x00800000,        0x00820080,        0x20820000,        0x00020000,
        0x00820000,        0x00000000,        0x20820080,        0x20000080,        0x00020080,        0x20020000,        0x20000000,        0x00800080,
        0x00800000,        0x00000080,        0x00020000,        0x20020080,        0x20000080,        0x20820000,        0x00820080,        0x20000000,
        0x20820080,        0x20020000,        0x20800000,        0x00820000,        0x00800080,        0x00020080,        0x00000000,        0x20800080,
        0x20020080,        0x20000000,        0x20800000,        0x00820080,        0x00020000,        0x20800080,        0x00000080,        0x20820000,
        0x00800080,        0x20820080,        0x00000000,        0x20020000,        0x20000080,        0x00800000,        0x00820000,        0x00020080
    },
    {
        0xffffffff80000010,        0x00400000,        0xffffffff90000000,        0xffffffff90400010,        0xffffffff80400000,        0x10000000,        0x10000010,        0xffffffff80000000,
        0x00000000,        0xffffffff80400010,        0x10400000,        0x00000010,        0xffffffff90000010,        0x10400010,        0x00400010,        0xffffffff90400000,
        0xffffffff90000000,        0xffffffff90400010,        0x00000010,        0x10000000,        0x10400010,        0xffffffff80000010,        0xffffffff80400000,        0x00400010,
        0x10000010,        0x00400000,        0xffffffff80400010,        0xffffffff90000010,        0x00000000,        0xffffffff90400000,        0x10400000,        0xffffffff80000000,
        0xffffffff80400000,        0xffffffff90000010,        0xffffffff90400010,        0x00400010,        0x10000000,        0xffffffff80000000,        0xffffffff80000010,        0x10400000,
        0x10400010,        0x00000000,        0x00000010,        0xffffffff90000000,        0x00400000,        0xffffffff80400010,        0xffffffff90400000,        0x10000010,
        0x00000010,        0x10400000,        0x10000000,        0xffffffff80000010,        0xffffffff80400000,        0x00400010,        0xffffffff90400010,        0xffffffff90000000,
        0xffffffff90400000,        0xffffffff90000010,        0x00400000,        0x10400010,        0x10000010,        0x00000000,        0xffffffff80000000,        0xffffffff80400010
    },
    {
        0x00040000,        0x02001002,        0x00000002,        0x00041002,        0x02041002,        0x00000000,        0x00001000,        0x02041000,
        0x02000002,        0x00041000,        0x02001000,        0x02040002,        0x02040000,        0x00001002,        0x00040002,        0x02000000,
        0x02041000,        0x00000000,        0x02001002,        0x02040002,        0x00040000,        0x02001000,        0x02000000,        0x00001002,
        0x00041002,        0x02000002,        0x02040000,        0x00041000,        0x00000002,        0x02041002,        0x00001000,        0x00040002,
        0x02000000,        0x00040000,        0x02001002,        0x02041000,        0x00041000,        0x02000002,        0x02040002,        0x00041002,
        0x00001002,        0x02041002,        0x00040002,        0x00001000,        0x00000000,        0x02040000,        0x02001000,        0x00000002,
        0x00040002,        0x02001002,        0x02041000,        0x00001000,        0x02000000,        0x00040000,        0x00001002,        0x02040002,
        0x02001000,        0x02040000,        0x00000000,        0x02041002,        0x00041002,        0x00000002,        0x02000002,        0x00041000
    },
    {
        0x00100240,        0x08000000,        0x00000200,        0x00100000,        0x08100000,        0x08100240,        0x08000240,        0x00000040,
        0x08000200,        0x00000240,        0x08000040,        0x08100200,        0x00100040,        0x00000000,        0x00100200,        0x08100040,
        0x00000040,        0x08100240,        0x00100240,        0x00000200,        0x08000200,        0x08000040,        0x08100040,        0x00100000,
        0x00100200,        0x00100040,        0x08100000,        0x08000240,        0x00000000,        0x08100200,        0x00000240,        0x08000000,
        0x08100040,        0x08000240,        0x00100000,        0x00000040,        0x00000240,        0x00100200,        0x08100200,        0x08000000,
        0x00000000,        0x08100000,        0x08000200,        0x00100240,        0x08100240,        0x08000040,        0x00100040,        0x00000200,
        0x08000000,        0x00000040,        0x08100200,        0x08100040,        0x00100000,        0x08000200,        0x00000200,        0x00100240,
        0x08100240,        0x00100200,        0x00000240,        0x00000000,        0x08000040,        0x00100040,        0x08100000,        0x08000240
    }
};
