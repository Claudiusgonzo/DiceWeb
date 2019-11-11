#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// COLOR                    0   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float   xy  
// TEXCOORD                 1   xyz         3     NONE   float   xyz 
// TEXCOORD                 2   xyz         4     NONE   float       
// TEXCOORD                 3   xyz         5     NONE   float       
// TEXCOORD                 4   xyzw        6     NONE   float       
// TEXCOORD                 5   xyz         7     NONE   float       
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[191]
// Embedded Data:
//  0x000000bf - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x000000ba - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[5], immediateIndexed
dcl_constantbuffer CB1[21], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xyzw
dcl_input_ps linear v2.xy
dcl_input_ps linear v3.xyz
dcl_output o0.xyzw
dcl_temps 3
dp3 r0.x, v3.xyzx, v3.xyzx
rsq r0.x, r0.x
mul r0.xyz, r0.xxxx, v3.xyzx
dp3_sat r0.w, cb1[9].xyzx, r0.xyzx
mul r1.xyz, r0.wwww, cb1[1].xyzx
mul r1.xyz, r1.xyzx, v1.xyzx
mad r1.xyz, cb0[0].xyzx, cb1[0].xyzx, r1.xyzx
dp3_sat r0.w, cb1[10].xyzx, r0.xyzx
mul r2.xyz, r0.wwww, cb1[2].xyzx
mad r1.xyz, r2.xyzx, v1.xyzx, r1.xyzx
dp3_sat r0.w, cb1[11].xyzx, r0.xyzx
dp3_sat r0.x, cb1[12].xyzx, r0.xyzx
mul r0.xyz, r0.xxxx, cb1[4].xyzx
mul r2.xyz, r0.wwww, cb1[3].xyzx
mad r1.xyz, r2.xyzx, v1.xyzx, r1.xyzx
mad_sat r0.xyz, r0.xyzx, v1.xyzx, r1.xyzx
sample_indexable(texture2d)(float,float,float,float) r1.xyzw, v2.xyxx, t0.xyzw, s0
mul o0.xyz, r0.xyzx, r1.xyzx
mul o0.w, r1.w, v1.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[191], bundle is:[224] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : C:\Repos\Xbox-ATG-Samples\Kits\DirectXTK\src\Shaders\Compiled\XboxOneDGSLLambert_mainTx.pdb
// Shader Semantic Hash      : 0xd0a029b46b1c694c
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 1, channelMask 15, param0, paramSlot1, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 2, channelMask  3, param1, paramSlot2, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 3, channelMask  7, param2, paramSlot3, DefaultVal={0,0,0,0}

codeLenInByte        = 428 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 4;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_SAMPLER 0, offset 0x8:11 dwords
;  extUserElements 1[2] = IMM_CONST_BUFFER 0, offset 0xc:15 dwords
;  extUserElements 1[3] = IMM_CONST_BUFFER 1, offset 0x10:19 dwords
NumVgprs             = 20;
NumSgprs             = 44;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000001
; constBufUsage           = 0x00000003

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000003
SPIC:NUM_INTERP             = 3
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

; export table for mrt0 [patch@(bytes=0x198, dwords=0x66)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, off, off, off done vm         // 000000000008: F8001801 00000001
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v2, off, off done vm          // 000000000008: F8001803 00000201
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v0, off, off done vm          // 000000000008: F8001803 00000001
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v1, v1, v2                       // 000000000000: 5E020501
  v_cvt_pkrtz_f16_f32  v0, v3, v0                       // 000000000004: 5E000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v1, v1, v2                      // 000000000000: 5C020501
  v_cvt_pknorm_u16_f32  v0, v3, v0                      // 000000000004: 5C000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v1, v1, v2                      // 000000000000: 5A020501
  v_cvt_pknorm_i16_f32  v0, v3, v0                      // 000000000004: 5A000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v1, v1, v2                          // 000000000000: 60020501
  v_cvt_pk_u16_u32  v0, v3, v0                          // 000000000004: 60000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v1, v1, v2                          // 000000000000: 62020501
  v_cvt_pk_i16_i32  v0, v3, v0                          // 000000000004: 62000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 000000000008: F8001C0F 00000001
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v1, v2, v3, v0 done vm            // 000000000008: F800180F 00030201
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[40:41], exec                          // 000000000000: BEA8047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_load_dwordx8  s[4:11], s[0:1], 0x00                 // 000000000008: C0C20100
  s_load_dwordx4  s[12:15], s[0:1], 0x08                // 00000000000C: C0860108
  s_mov_b32     m0, s2                                  // 000000000010: BEFC0302
  v_interp_p1_f32  v2, v0, attr1.x                      // 000000000014: C8080400
  v_interp_p1_f32  v3, v0, attr1.y                      // 000000000018: C80C0500
  v_interp_p2_f32  v2, v1, attr1.x                      // 00000000001C: C8090401
  v_interp_p2_f32  v3, v1, attr1.y                      // 000000000020: C80D0501
  s_waitcnt     lgkmcnt(0)                              // 000000000024: BF8C007F
  image_sample  v[2:5], v[2:3], s[4:11], s[12:15] dmask:0xf // 000000000028: F0800F00 00610202
  s_load_dwordx8  s[0:7], s[0:1], 0x0c                  // 000000000030: C0C0010C
  v_interp_p1_f32  v6, v0, attr2.z                      // 000000000034: C8180A00
  v_interp_p1_f32  v7, v0, attr2.y                      // 000000000038: C81C0900
  v_interp_p2_f32  v6, v1, attr2.z                      // 00000000003C: C8190A01
  s_waitcnt     lgkmcnt(0)                              // 000000000040: BF8C007F
  s_buffer_load_dwordx4  s[8:11], s[4:7], 0x24          // 000000000044: C2840524
  v_interp_p1_f32  v8, v0, attr2.x                      // 000000000048: C8200800
  v_interp_p2_f32  v7, v1, attr2.y                      // 00000000004C: C81D0901
  v_mul_legacy_f32  v9, v6, v6                          // 000000000050: 0E120D06
  v_interp_p2_f32  v8, v1, attr2.x                      // 000000000054: C8210801
  v_mac_f32     v9, v7, v7                              // 000000000058: 3E120F07
  s_buffer_load_dwordx4  s[12:15], s[4:7], 0x28         // 00000000005C: C2860528
  v_mac_f32     v9, v8, v8                              // 000000000060: 3E121108
  s_buffer_load_dwordx4  s[16:19], s[4:7], 0x04         // 000000000064: C2880504
  s_buffer_load_dwordx4  s[20:23], s[4:7], 0x2c         // 000000000068: C28A052C
  v_rsq_f32     v9, v9                                  // 00000000006C: 7E125D09
  s_buffer_load_dwordx4  s[24:27], s[4:7], 0x00         // 000000000070: C28C0500
  s_buffer_load_dwordx4  s[28:31], s[4:7], 0x30         // 000000000074: C28E0530
  v_mul_legacy_f32  v6, v6, v9                          // 000000000078: 0E0C1306
  s_buffer_load_dwordx4  s[0:3], s[0:3], 0x00           // 00000000007C: C2800100
  s_buffer_load_dwordx4  s[32:35], s[4:7], 0x08         // 000000000080: C2900508
  v_mul_legacy_f32  v7, v7, v9                          // 000000000084: 0E0E1307
  s_waitcnt     lgkmcnt(0)                              // 000000000088: BF8C007F
  v_mul_legacy_f32  v10, s10, v6                        // 00000000008C: 0E140C0A
  s_buffer_load_dwordx4  s[36:39], s[4:7], 0x0c         // 000000000090: C292050C
  v_mul_legacy_f32  v8, v8, v9                          // 000000000094: 0E101308
  v_mac_f32     v10, s9, v7                             // 000000000098: 3E140E09
  s_buffer_load_dwordx4  s[4:7], s[4:7], 0x10           // 00000000009C: C2820510
  v_mad_legacy_f32  v10, s8, v8, v10 clamp              // 0000000000A0: D280080A 042A1008
  v_interp_p1_f32  v9, v0, attr0.x                      // 0000000000A8: C8240000
  v_interp_p1_f32  v11, v0, attr0.y                     // 0000000000AC: C82C0100
  v_interp_p1_f32  v12, v0, attr0.z                     // 0000000000B0: C8300200
  v_mul_legacy_f32  v13, s14, v6                        // 0000000000B4: 0E1A0C0E
  v_mul_legacy_f32  v14, s16, v10                       // 0000000000B8: 0E1C1410
  v_mul_legacy_f32  v15, s17, v10                       // 0000000000BC: 0E1E1411
  v_mul_legacy_f32  v10, s18, v10                       // 0000000000C0: 0E141412
  v_interp_p2_f32  v9, v1, attr0.x                      // 0000000000C4: C8250001
  v_interp_p2_f32  v11, v1, attr0.y                     // 0000000000C8: C82D0101
  v_interp_p2_f32  v12, v1, attr0.z                     // 0000000000CC: C8310201
  v_mac_f32     v13, s13, v7                            // 0000000000D0: 3E1A0E0D
  v_mul_legacy_f32  v16, s22, v6                        // 0000000000D4: 0E200C16
  v_mul_legacy_f32  v14, v14, v9                        // 0000000000D8: 0E1C130E
  v_mul_legacy_f32  v15, v15, v11                       // 0000000000DC: 0E1E170F
  v_mul_legacy_f32  v10, v10, v12                       // 0000000000E0: 0E14190A
  v_mov_b32     v17, s24                                // 0000000000E4: 7E220218
  v_mov_b32     v18, s25                                // 0000000000E8: 7E240219
  v_mov_b32     v19, s26                                // 0000000000EC: 7E26021A
  v_mad_legacy_f32  v13, s12, v8, v13 clamp             // 0000000000F0: D280080D 0436100C
  v_mac_f32     v16, s21, v7                            // 0000000000F8: 3E200E15
  v_mul_legacy_f32  v6, s30, v6                         // 0000000000FC: 0E0C0C1E
  v_mac_f32     v14, s0, v17                            // 000000000100: 3E1C2200
  v_mac_f32     v15, s1, v18                            // 000000000104: 3E1E2401
  v_mac_f32     v10, s2, v19                            // 000000000108: 3E142602
  v_mul_legacy_f32  v17, s32, v13                       // 00000000010C: 0E221A20
  v_mul_legacy_f32  v18, s33, v13                       // 000000000110: 0E241A21
  v_mul_legacy_f32  v13, s34, v13                       // 000000000114: 0E1A1A22
  v_mad_legacy_f32  v16, s20, v8, v16 clamp             // 000000000118: D2800810 04421014
  v_mac_f32     v6, s29, v7                             // 000000000120: 3E0C0E1D
  v_mac_f32     v14, v17, v9                            // 000000000124: 3E1C1311
  v_mac_f32     v15, v18, v11                           // 000000000128: 3E1E1712
  v_mac_f32     v10, v13, v12                           // 00000000012C: 3E14190D
  v_mad_legacy_f32  v6, s28, v8, v6 clamp               // 000000000130: D2800806 041A101C
  s_waitcnt     lgkmcnt(0)                              // 000000000138: BF8C007F
  v_mul_legacy_f32  v7, s36, v16                        // 00000000013C: 0E0E2024
  v_mul_legacy_f32  v8, s37, v16                        // 000000000140: 0E102025
  v_mul_legacy_f32  v13, s38, v16                       // 000000000144: 0E1A2026
  v_mul_legacy_f32  v16, s4, v6                         // 000000000148: 0E200C04
  v_mul_legacy_f32  v17, s5, v6                         // 00000000014C: 0E220C05
  v_mul_legacy_f32  v6, s6, v6                          // 000000000150: 0E0C0C06
  v_mac_f32     v14, v7, v9                             // 000000000154: 3E1C1307
  v_mac_f32     v15, v8, v11                            // 000000000158: 3E1E1708
  v_mac_f32     v10, v13, v12                           // 00000000015C: 3E14190D
  v_interp_p1_f32  v0, v0, attr0.w                      // 000000000160: C8000300
  v_mad_legacy_f32  v14, v16, v9, v14 clamp             // 000000000164: D280080E 043A1310
  v_mad_legacy_f32  v15, v17, v11, v15 clamp            // 00000000016C: D280080F 043E1711
  v_mad_legacy_f32  v10, v6, v12, v10 clamp             // 000000000174: D280080A 042A1906
  v_interp_p2_f32  v0, v1, attr0.w                      // 00000000017C: C8010301
  s_waitcnt     vmcnt(0)                                // 000000000180: BF8C0F70
  v_mul_legacy_f32  v1, v14, v2                         // 000000000184: 0E02050E
  v_mul_legacy_f32  v2, v15, v3                         // 000000000188: 0E04070F
  v_mul_legacy_f32  v3, v10, v4                         // 00000000018C: 0E06090A
  v_mul_legacy_f32  v0, v5, v0                          // 000000000190: 0E000105
  s_mov_b64     exec, s[40:41]                          // 000000000194: BEFE0428
  v_cvt_pkrtz_f16_f32  v1, v1, v2                       // 000000000198: 5E020501
  v_cvt_pkrtz_f16_f32  v0, v3, v0                       // 00000000019C: 5E000103
  exp           mrt0, v1, v1, v0, v0 done compr vm      // 0000000001A0: F8001C0F 00000001
  s_endpgm                                              // 0000000001A8: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   20
//  NumSRegs:                   44
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   84
//  CycleSimNWaves:             84
//  Code Size:                  428
//Assembler Counts:
//  num_32bit_ops                     : 89
//  num_64bit_ops                     : 9
//  num_alu                           : 73
//  num_fc                            : 23
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 1
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 6
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 4
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 4
//  num_inst_vop2                     : 44
//  num_inst_vop3                     : 9
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 18
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 20
// m_uNumSRegs                       : 44
// m_uSCCodeSize                     : 428
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 84
// m_uCycleSimNWaves                 : 84

// Assembler Counts:
// num_32bit_ops                     : 89
// num_64bit_ops                     : 9
// num_alu                           : 73
// num_fc                            : 23
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 1
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 6
// num_inst_sopc                     : 0
// num_inst_sop1                     : 4
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 4
// num_inst_vop2                     : 44
// num_inst_vop3                     : 9
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 18
// num_inst_smem                     : 13
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE DGSLLambert_mainTx[] =
{
     68,  88,  66,  67, 243,   8, 
    252, 148,  86, 227, 243,  69, 
    189,  13,  13,  91, 196, 193, 
    132, 217,   1,   0,   0,   0, 
     83,   8,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
     32,   1,   0,   0,  84,   1, 
      0,   0, 224,   7,   0,   0, 
    240,   7,   0,   0,  73,  83, 
     71,  78, 228,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0, 200,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0, 212,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0, 218,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0, 218,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   7,   7, 
      0,   0, 218,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      4,   0,   0,   0,   7,   0, 
      0,   0, 218,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      5,   0,   0,   0,   7,   0, 
      0,   0, 218,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      6,   0,   0,   0,  15,   0, 
      0,   0, 218,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      7,   0,   0,   0,   7,   0, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 132,   6,   0,   0, 
     80,   0,   0,   0, 161,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 191,   0, 
      0,   0,  80,   0,   0,   0, 
    186,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   1,   0,   0,   0, 
     21,   0,   0,   0,  90,   0, 
      0,   3,   0,  96,  16,   0, 
      0,   0,   0,   0,  88,  24, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
    242,  16,  16,   0,   1,   0, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   2,   0, 
      0,   0,  98,  16,   0,   3, 
    114,  16,  16,   0,   3,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      3,   0,   0,   0,  16,   0, 
      0,   7,  18,   0,  16,   0, 
      0,   0,   0,   0,  70,  18, 
     16,   0,   3,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  68,   0,   0,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   7, 114,   0,  16,   0, 
      0,   0,   0,   0,   6,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  16,  32,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      1,   0,   0,   0,   9,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      1,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  11, 114,   0,  16,   0, 
      1,   0,   0,   0,  70, 130, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     16,  32,   0,   8, 130,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,  10,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   2,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
      2,   0,   0,   0,  50,   0, 
      0,   9, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   2,   0,   0,   0, 
     70,  18,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  16,  32, 
      0,   8, 130,   0,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
     11,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     16,  32,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,  12,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   8, 
    114,   0,  16,   0,   0,   0, 
      0,   0,   6,   0,  16,   0, 
      0,   0,   0,   0,  70, 130, 
     32,   0,   1,   0,   0,   0, 
      4,   0,   0,   0,  56,   0, 
      0,   8, 114,   0,  16,   0, 
      2,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70, 130,  32,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
     50,   0,   0,   9, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     50,  32,   0,   9, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     69,   0,   0, 139, 194,   0, 
      0, 128,  67,  85,  21,   0, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    114,  32,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     56,   0,   0,   7, 130,  32, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  58,  16,  16,   0, 
      1,   0,   0,   0,  62,   0, 
      0,   1,  53,  16,   0,   0, 
    226,   0,   0,   0,  23,   0, 
      1,   0,  41,  12,  17,   0, 
    120,   1, 237,  88, 207, 107, 
     19,  65,  20, 126, 179, 217, 
     77,  55, 113, 243, 118, 147, 
    172, 182,   9,  49, 164,  49, 
    214,  42, 173, 212, 139,   7, 
     15, 139, 214, 130, 136,  21, 
    197, 246,  80, 101, 253, 145, 
    216,  20, 131, 214, 134, 166, 
      7,  79, 177, 138, 136,  72, 
     17,  17,  20, 127,  92,  60, 
    120, 240, 224, 209, 115,  27, 
    246,  52,  71, 241, 175, 240, 
    232, 209, 131, 168, 239, 109, 
    103,  53,  86, 189,   5,  20, 
    204,   7, 223, 123, 243, 205, 
    188, 125, 243, 102,  38, 135, 
    153,  88, 105,   8, 241, 248, 
    228, 174, 207, 236, 223, 125, 
    157, 122, 241,  65,   3,  48, 
    168,  45, 136, 236,  25,  79, 
     83, 108,   1,  94, 219, 108, 
      1,  70, 217, 112,   0, 197, 
    186, 228, 198, 136, 111,  72, 
     31,  38, 207,  99,  17,  23, 
     22, 158,  76,  62, 127, 246, 
    124, 146, 154,  97,  12, 199, 
    206,  42, 158,  37,  38, 136, 
    199, 137, 131,  68,  78, 199, 
    136,  60,  35, 206, 134, 160, 
    179, 233,   2, 107, 206, 199, 
    223,  51,  50,  68,  85,  34, 
    151, 244,  83,  14, 168, 179, 
    249,  61, 106,  68, 174, 233, 
     79, 224, 218, 162,  92, 236, 
    185,  78,   6, 207, 253, 183, 
    177,  89, 215,  15,  27,  35, 
     70, 231, 196, 224, 243, 232, 
      6,  18, 163, 174,  41, 117, 
    142, 209, 190, 206,  41, 205, 
    123, 193, 107, 235,  16, 255, 
    132, 175, 132, 173, 123,  22, 
    105, 174,  33,  46,  40, 153, 
     73,  94, 203,   2,  56, 228, 
     99, 123,   0, 134, 104, 224, 
     63,  65, 180, 167, 188,  23, 
    252,  91, 164,  45,   0, 181, 
    189,  33, 162, 241,   5,  54, 
    176, 186, 193, 124,  56,   4, 
    159,  88,  69,  90, 144, 222, 
     60, 171,  77,  29,  99, 205, 
    201, 186,  53,  41,  97, 104, 
     23,  98,   2,  46, 216, 133, 
    239, 218,  39, 237, 119, 233, 
    115, 164, 207, 117, 233,  75, 
    164,  47, 117, 233,  26, 233, 
     90, 164, 163, 252, 118,  56, 
     95,  44,  60, 107, 234, 108, 
    255, 203, 236, 215, 216,  27, 
    246, 107, 236,  13, 251,  53, 
    246, 134, 253,  26, 123, 195, 
    126, 141, 189,  97, 191, 198, 
    222, 176,  95,  99, 207,   8, 
    109, 253, 245, 122,  59, 249, 
    101,  29,  68, 208,  49, 197, 
    221, 142,  22, 251, 188,  14, 
    186,  41, 193, 176, 164, 208, 
     19,  82,  24,  41, 121,  19, 
    214,  54, 192,  94, 253, 168, 
    105,  85, 176,  68, 167,   3, 
    201,  33,   9, 137, 130,  20, 
    201,  92,  56,  86,  49, 238, 
      4,  96, 150, 164,  72, 236, 
    148, 241,  84,   6, 133,  57, 
     44,   7, 236, 140,  55, 106, 
    220,  13, 204, 116, 198, 211, 
    141, 123, 193, 152, 113,  63, 
     72, 156, 207, 180, 193,  88, 
     11,  38, 140,   7,  65,  60, 
    107,  33, 136, 213, 192,  52, 
     30,   6,   3,  89,  68, 206, 
    147, 180,  92, 180, 140,  71, 
    129, 153, 117,  48, 129, 174, 
    231,  24, 183, 131, 164, 185, 
    250, 222, 116, 246, 209, 149, 
    183,  34,  65, 140,  73, 208, 
     38,  36,  90, 121, 116, 220, 
      2, 166, 221,  34, 102,  92, 
     23,   5, 236, 150,  66, 140, 
     75, 161,  29, 144,  41, 204, 
    123,  59, 172,  18,  98, 182, 
    128, 246,  96,  17, 147,  57, 
     23, 135, 180, 114,  59, 167, 
     85, 218, 121, 109, 164, 157, 
    162, 124, 150, 115,  80, 223, 
    142,  37, 175, 104,  81,  13, 
    229, 130,  39,  42,  69,  79, 
     27, 113, 189,  82, 190, 140, 
    195, 249,  10, 150, 243, 148, 
    159, 226,  92, 103,  82, 223, 
    137, 150, 151, 206,  22, 188, 
    204,  96, 209,  75, 229,  92, 
     47,  78, 253,   5,  39, 175, 
    135, 235, 166, 105, 118, 151, 
     28,  28,  41, 229,  81, 167, 
     57,  13, 171, 140, 113, 202, 
     57,  64, 241, 166, 138, 167, 
     75, 188,  68, 250, 198, 201, 
     30, 210, 109, 242, 233,  65, 
     79, 231,  53, 197, 115, 251, 
    116,  17,  19, 178, 105, 175, 
    109, 160, 161, 161,  61, 160, 
     99,  50,  17,  71,  67,   0, 
    142, 234,  95, 214, 233,  94, 
    253, 211, 189,  28, 224, 214, 
     70, 142,  27, 225,  29, 126, 
     11, 204, 205, 136,   8, 161, 
    210,   5,  63, 161, 190,  35, 
    252, 140, 250,  44, 246,  10, 
     26,   7,  82,  31, 191,  47, 
     34, 124,  84,  15, 141, 142, 
    242,  19,  68, 126,  35,  11, 
     90,   8, 135, 111,  87, 109, 
      6, 191, 237, 117, 245, 194, 
    158, 110,  20, 174, 190, 221, 
    251, 242,  29, 183,  25, 163, 
     42, 169, 169, 124, 137, 216, 
     61,  55, 192,  43,  54, 191, 
    224, 180, 138,  63, 172,  60, 
     59, 126, 239,  96, 244,  79, 
      2,  63,  66,   9,  77,  53, 
    126,  69, 121,  94, 235,  54, 
    226, 214,  58, 238, 169, 113, 
    159, 200, 149,  30,  61, 228, 
    159, 169,  55, 151,  90, 254, 
     92, 109, 233, 198, 248, 145, 
    217,  99, 227,  51, 213, 197, 
    230, 181, 122, 203,  63, 209, 
     88, 105, 249,  83, 141, 229, 
    250, 229, 149, 185, 217,  19, 
    126, 107, 249, 178,  63, 115, 
    165,  58,  95,  95, 110, 249, 
     71, 151,  22, 155, 141, 107, 
    245, 249, 240, 163,  83, 215, 
    235,  83, 199, 102, 166, 167, 
    171, 139, 181, 250, 242, 202, 
    197, 197, 106, 227, 250, 236, 
    141, 253, 205, 249,  26, 124, 
      3, 219, 238,  29, 171,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0,  76, 105,  28, 107, 
    180,  41, 160, 208,  88,  80, 
     68,  80,  91,   0,   0,   0, 
     67,  58,  92,  82, 101, 112, 
    111, 115,  92,  88,  98, 111, 
    120,  45,  65,  84,  71,  45, 
     83,  97, 109, 112, 108, 101, 
    115,  92,  75, 105, 116, 115, 
     92,  68, 105, 114, 101,  99, 
    116,  88,  84,  75,  92, 115, 
    114,  99,  92,  83, 104,  97, 
    100, 101, 114, 115,  92,  67, 
    111, 109, 112, 105, 108, 101, 
    100,  92,  88,  98, 111, 120, 
     79, 110, 101,  68,  71,  83, 
     76,  76,  97, 109,  98, 101, 
    114, 116,  95, 109,  97, 105, 
    110,  84, 120,  46, 112, 100, 
     98
};