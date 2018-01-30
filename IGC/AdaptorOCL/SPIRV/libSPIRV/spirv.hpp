/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/
// Copyright (c) 2014-2015 The Khronos Group Inc.
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and/or associated documentation files (the "Materials"),
// to deal in the Materials without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Materials, and to permit persons to whom the
// Materials are furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Materials.
// 
// MODIFICATIONS TO THIS FILE MAY MEAN IT NO LONGER ACCURATELY REFLECTS KHRONOS
// STANDARDS. THE UNMODIFIED, NORMATIVE VERSIONS OF KHRONOS SPECIFICATIONS AND
// HEADER INFORMATION ARE LOCATED AT https://www.khronos.org/registry/ 
// 
// THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM,OUT OF OR IN CONNECTION WITH THE MATERIALS OR THE USE OR OTHER DEALINGS
// IN THE MATERIALS.

// This header is automatically generated by the same tool that creates
// the Binary Section of the SPIR-V specification.

// Enumeration tokens for SPIR-V, in various styles:
//   C, C++, C++11, JSON, Lua, Python
// 
// - C will have tokens with a "Spv" prefix, e.g.: SpvSourceLanguageGLSL
// - C++ will have tokens in the "spv" name space, e.g.: spv::SourceLanguageGLSL
// - C++11 will use enum classes in the spv namespace, e.g.: spv::SourceLanguage::GLSL
// - Lua will use tables, e.g.: spv.SourceLanguage.GLSL
// - Python will use dictionaries, e.g.: spv['SourceLanguage']['GLSL']
// 
// Some tokens act like mask values, which can be OR'd together,
// while others are mutually exclusive.  The mask-like ones have
// "Mask" in their name, and a parallel enum that has the shift
// amount (1 << x) for each corresponding enumerant.

#ifndef spirv_H
#define spirv_H

namespace spv {

typedef unsigned int Id;

#define SPV_VERSION_1_0 100
#define SPV_VERSION_1_1 101
#define SPV_REVISION 1

static const unsigned int MagicNumber = 0x07230203;
static const unsigned int Version     = 0x00010100;
static const unsigned int Revision    = 1;
static const unsigned int OpCodeMask  = 0xffff;

static const unsigned int WordCountShift = 16;

enum SpvSourceLanguage {
    SpvSourceLanguageUnknown = 0,
    SpvSourceLanguageESSL = 1,
    SpvSourceLanguageGLSL = 2,
    SpvSourceLanguageOpenCL_C = 3,
    SpvSourceLanguageOpenCL_CPP = 4,
};

enum ExecutionModel {
    ExecutionModelVertex = 0,
    ExecutionModelTessellationControl = 1,
    ExecutionModelTessellationEvaluation = 2,
    ExecutionModelGeometry = 3,
    ExecutionModelFragment = 4,
    ExecutionModelGLCompute = 5,
    ExecutionModelKernel = 6,
    ExecutionModelCount, /* internal use only */
};

enum AddressingModel {
    AddressingModelLogical = 0,
    AddressingModelPhysical32 = 1,
    AddressingModelPhysical64 = 2,
    AddressingModelCount /* internal use only */
};

enum MemoryModel {
    MemoryModelSimple = 0,
    MemoryModelGLSL450 = 1,
    MemoryModelOpenCL = 2,
    MemoryModelCount /* internal use only */
};

enum ExecutionMode {
    ExecutionModeInvocations = 0,
    ExecutionModeSpacingEqual = 1,
    ExecutionModeSpacingFractionalEven = 2,
    ExecutionModeSpacingFractionalOdd = 3,
    ExecutionModeVertexOrderCw = 4,
    ExecutionModeVertexOrderCcw = 5,
    ExecutionModePixelCenterInteger = 6,
    ExecutionModeOriginUpperLeft = 7,
    ExecutionModeOriginLowerLeft = 8,
    ExecutionModeEarlyFragmentTests = 9,
    ExecutionModePointMode = 10,
    ExecutionModeXfb = 11,
    ExecutionModeDepthReplacing = 12,
    /* No Enum for 13 */
    ExecutionModeDepthGreater = 14,
    ExecutionModeDepthLess = 15,
    ExecutionModeDepthUnchanged = 16,
    ExecutionModeLocalSize = 17,
    ExecutionModeLocalSizeHint = 18,
    ExecutionModeInputPoints = 19,
    ExecutionModeInputLines = 20,
    ExecutionModeInputLinesAdjacency = 21,
    ExecutionModeInputTriangles = 22,
    ExecutionModeInputTrianglesAdjacency = 23,
    ExecutionModeInputQuads = 24,
    ExecutionModeInputIsolines = 25,
    ExecutionModeOutputVertices = 26,
    ExecutionModeOutputPoints = 27,
    ExecutionModeOutputLineStrip = 28,
    ExecutionModeOutputTriangleStrip = 29,
    ExecutionModeVecTypeHint = 30,
    ExecutionModeContractionOff = 31,
    /* No Enum for 32 */
    ExecutionModeInitializer = 33,
    ExecutionModeFinalizer = 34,
    ExecutionModeSubgroupSize = 35,
    ExecutionModeSubgroupsPerWorkgroup = 36,
    ExecutionModeCount /* internal use only */
};

enum StorageClass {
    StorageClassUniformConstant = 0,
    StorageClassInput = 1,
    StorageClassUniform = 2,
    StorageClassOutput = 3,
    StorageClassWorkgroupLocal = 4,
    StorageClassWorkgroupGlobal = 5,
    StorageClassPrivateGlobal = 6,
    StorageClassFunction = 7,
    StorageClassGeneric = 8,
    StorageClassPushConstant = 9,
    StorageClassAtomicCounter = 10,
    StorageClassImage = 11,
    StorageClassCount /* internal use only */
};

enum Dim {
    Dim1D = 0,
    Dim2D = 1,
    Dim3D = 2,
    DimCube = 3,
    DimRect = 4,
    DimBuffer = 5,
    DimInputTarget = 6,
    DimCount /* internal use only */
};

enum SamplerAddressingMode {
    SamplerAddressingModeNone = 0,
    SamplerAddressingModeClampToEdge = 1,
    SamplerAddressingModeClamp = 2,
    SamplerAddressingModeRepeat = 3,
    SamplerAddressingModeRepeatMirrored = 4,
};

enum SamplerFilterMode {
    SamplerFilterModeNearest = 0,
    SamplerFilterModeLinear = 1,
};

enum ImageFormat {
    ImageFormatUnknown = 0,
    ImageFormatRgba32f = 1,
    ImageFormatRgba16f = 2,
    ImageFormatR32f = 3,
    ImageFormatRgba8 = 4,
    ImageFormatRgba8Snorm = 5,
    ImageFormatRg32f = 6,
    ImageFormatRg16f = 7,
    ImageFormatR11fG11fB10f = 8,
    ImageFormatR16f = 9,
    ImageFormatRgba16 = 10,
    ImageFormatRgb10A2 = 11,
    ImageFormatRg16 = 12,
    ImageFormatRg8 = 13,
    ImageFormatR16 = 14,
    ImageFormatR8 = 15,
    ImageFormatRgba16Snorm = 16,
    ImageFormatRg16Snorm = 17,
    ImageFormatRg8Snorm = 18,
    ImageFormatR16Snorm = 19,
    ImageFormatR8Snorm = 20,
    ImageFormatRgba32i = 21,
    ImageFormatRgba16i = 22,
    ImageFormatRgba8i = 23,
    ImageFormatR32i = 24,
    ImageFormatRg32i = 25,
    ImageFormatRg16i = 26,
    ImageFormatRg8i = 27,
    ImageFormatR16i = 28,
    ImageFormatR8i = 29,
    ImageFormatRgba32ui = 30,
    ImageFormatRgba16ui = 31,
    ImageFormatRgba8ui = 32,
    ImageFormatR32ui = 33,
    ImageFormatRgb10a2ui = 34,
    ImageFormatRg32ui = 35,
    ImageFormatRg16ui = 36,
    ImageFormatRg8ui = 37,
    ImageFormatR16ui = 38,
    ImageFormatR8ui = 39,
};

enum ImageChannelOrder {
    ImageChannelOrderR = 0,
    ImageChannelOrderA = 1,
    ImageChannelOrderRG = 2,
    ImageChannelOrderRA = 3,
    ImageChannelOrderRGB = 4,
    ImageChannelOrderRGBA = 5,
    ImageChannelOrderBGRA = 6,
    ImageChannelOrderARGB = 7,
    ImageChannelOrderIntensity = 8,
    ImageChannelOrderLuminance = 9,
    ImageChannelOrderRx = 10,
    ImageChannelOrderRGx = 11,
    ImageChannelOrderRGBx = 12,
    ImageChannelOrderDepth = 13,
    ImageChannelOrderDepthStencil = 14,
    ImageChannelOrdersRGB = 15,
    ImageChannelOrdersRGBx = 16,
    ImageChannelOrdersRGBA = 17,
    ImageChannelOrdersBGRA = 18,
};

enum ImageChannelDataType {
    ImageChannelDataTypeSnormInt8 = 0,
    ImageChannelDataTypeSnormInt16 = 1,
    ImageChannelDataTypeUnormInt8 = 2,
    ImageChannelDataTypeUnormInt16 = 3,
    ImageChannelDataTypeUnormShort565 = 4,
    ImageChannelDataTypeUnormShort555 = 5,
    ImageChannelDataTypeUnormInt101010 = 6,
    ImageChannelDataTypeSignedInt8 = 7,
    ImageChannelDataTypeSignedInt16 = 8,
    ImageChannelDataTypeSignedInt32 = 9,
    ImageChannelDataTypeUnsignedInt8 = 10,
    ImageChannelDataTypeUnsignedInt16 = 11,
    ImageChannelDataTypeUnsignedInt32 = 12,
    ImageChannelDataTypeHalfFloat = 13,
    ImageChannelDataTypeFloat = 14,
    ImageChannelDataTypeUnormInt24 = 15,
    ImageChannelDataTypeUnormInt101010_2 = 16,
};

enum ImageOperandsShift {
    ImageOperandsBiasShift = 0,
    ImageOperandsLodShift = 1,
    ImageOperandsGradShift = 2,
    ImageOperandsConstOffsetShift = 3,
    ImageOperandsOffsetShift = 4,
    ImageOperandsConstOffsetsShift = 5,
    ImageOperandsSampleShift = 6,
    ImageOperandsMinLodShift = 7,
};

enum ImageOperandsMask {
    ImageOperandsMaskNone = 0,
    ImageOperandsBiasMask = 0x00000001,
    ImageOperandsLodMask = 0x00000002,
    ImageOperandsGradMask = 0x00000004,
    ImageOperandsConstOffsetMask = 0x00000008,
    ImageOperandsOffsetMask = 0x00000010,
    ImageOperandsConstOffsetsMask = 0x00000020,
    ImageOperandsSampleMask = 0x00000040,
    ImageOperandsMinLodMask = 0x00000080,
};

enum FPFastMathModeShift {
    FPFastMathModeNotNaNShift = 0,
    FPFastMathModeNotInfShift = 1,
    FPFastMathModeNSZShift = 2,
    FPFastMathModeAllowRecipShift = 3,
    FPFastMathModeFastShift = 4,
};

enum FPFastMathModeMask {
    FPFastMathModeMaskNone = 0,
    FPFastMathModeNotNaNMask = 0x00000001,
    FPFastMathModeNotInfMask = 0x00000002,
    FPFastMathModeNSZMask = 0x00000004,
    FPFastMathModeAllowRecipMask = 0x00000008,
    FPFastMathModeFastMask = 0x00000010,
};

enum FPRoundingMode {
    FPRoundingModeRTE = 0,
    FPRoundingModeRTZ = 1,
    FPRoundingModeRTP = 2,
    FPRoundingModeRTN = 3,
    FPRoundingModeCount /* internal use only */
};

enum LinkageType {
    LinkageTypeExport = 0,
    LinkageTypeImport = 1,
    LinkageTypeInternal, /* internal use only */
    LinkageTypeCount /* internal use only */
};

enum AccessQualifier {
    AccessQualifierReadOnly = 0,
    AccessQualifierWriteOnly = 1,
    AccessQualifierReadWrite = 2,
};

enum FunctionParameterAttribute {
    FunctionParameterAttributeZext = 0,
    FunctionParameterAttributeSext = 1,
    FunctionParameterAttributeByVal = 2,
    FunctionParameterAttributeSret = 3,
    FunctionParameterAttributeNoAlias = 4,
    FunctionParameterAttributeNoCapture = 5,
    FunctionParameterAttributeNoWrite = 6,
    FunctionParameterAttributeNoReadWrite = 7,
    FunctionParameterAttributeCount /* internal use only */
};

enum Decoration {
    DecorationRelaxedPrecision = 0,
    DecorationSpecId = 1,
    DecorationBlock = 2,
    DecorationBufferBlock = 3,
    DecorationRowMajor = 4,
    DecorationColMajor = 5,
    DecorationArrayStride = 6,
    DecorationMatrixStride = 7,
    DecorationGLSLShared = 8,
    DecorationGLSLPacked = 9,
    DecorationCPacked = 10,
    DecorationBuiltIn = 11,
    DecorationSmooth = 12,
    DecorationNoPerspective = 13,
    DecorationFlat = 14,
    DecorationPatch = 15,
    DecorationCentroid = 16,
    DecorationSample = 17,
    DecorationInvariant = 18,
    DecorationRestrict = 19,
    DecorationAliased = 20,
    DecorationVolatile = 21,
    DecorationConstant = 22,
    DecorationCoherent = 23,
    DecorationNonWritable = 24,
    DecorationNonReadable = 25,
    DecorationUniform = 26,
    DecorationSaturatedConversion = 28,
    DecorationStream = 29,
    DecorationLocation = 30,
    DecorationComponent = 31,
    DecorationIndex = 32,
    DecorationBinding = 33,
    DecorationDescriptorSet = 34,
    DecorationOffset = 35,
    DecorationXfbBuffer = 36,
    DecorationXfbStride = 37,
    DecorationFuncParamAttr = 38,
    DecorationFPRoundingMode = 39,
    DecorationFPFastMathMode = 40,
    DecorationLinkageAttributes = 41,
    DecorationNoContraction = 42,
    DecorationInputTargetIndex = 43,
    DecorationAlignment = 44,
    DecorationMaxByteOffset = 45,
};

enum BuiltIn {
#define _SPIRV_OP(x, num) x = num,
#include "SPIRVBuiltinEnum.h"
#undef _SPIRV_OP
    BuiltInCount /* internal use only */
};

enum SelectionControlShift {
    SelectionControlFlattenShift = 0,
    SelectionControlDontFlattenShift = 1,
};

enum SelectionControlMask {
    SelectionControlMaskNone = 0,
    SelectionControlFlattenMask = 0x00000001,
    SelectionControlDontFlattenMask = 0x00000002,
};

enum LoopControlShift {
    LoopControlUnrollShift = 0,
    LoopControlDontUnrollShift = 1,
};

enum LoopControlMask {
    LoopControlMaskNone = 0,
    LoopControlUnrollMask = 0x00000001,
    LoopControlDontUnrollMask = 0x00000002,
};

enum FunctionControlShift {
    FunctionControlInlineShift = 0,
    FunctionControlDontInlineShift = 1,
    FunctionControlPureShift = 2,
    FunctionControlConstShift = 3,
};

enum FunctionControlMask {
    FunctionControlMaskNone = 0,
    FunctionControlInlineMask = 0x00000001,
    FunctionControlDontInlineMask = 0x00000002,
    FunctionControlPureMask = 0x00000004,
    FunctionControlConstMask = 0x00000008,
    FunctionControlMaskMax = 0xF /* internal use only */
};

enum MemorySemanticsShift {
    MemorySemanticsAcquireShift = 1,
    MemorySemanticsReleaseShift = 2,
    MemorySemanticsAcquireReleaseShift = 3,
    MemorySemanticsSequentiallyConsistentShift = 4,
    MemorySemanticsUniformMemoryShift = 6,
    MemorySemanticsSubgroupMemoryShift = 7,
    MemorySemanticsWorkgroupLocalMemoryShift = 8,
    MemorySemanticsWorkgroupGlobalMemoryShift = 9,
    MemorySemanticsAtomicCounterMemoryShift = 10,
    MemorySemanticsImageMemoryShift = 11,
};

enum MemorySemanticsMask {
    MemorySemanticsMaskNone = 0,
    MemorySemanticsAcquireMask = 0x00000002,
    MemorySemanticsReleaseMask = 0x00000004,
    MemorySemanticsAcquireReleaseMask = 0x00000008,
    MemorySemanticsSequentiallyConsistentMask = 0x00000010,
    MemorySemanticsUniformMemoryMask = 0x00000040,
    MemorySemanticsSubgroupMemoryMask = 0x00000080,
    MemorySemanticsWorkgroupLocalMemoryMask = 0x00000100,
    MemorySemanticsWorkgroupGlobalMemoryMask = 0x00000200,
    MemorySemanticsAtomicCounterMemoryMask = 0x00000400,
    MemorySemanticsImageMemoryMask = 0x00000800,
};

enum MemoryAccessShift {
    MemoryAccessVolatileShift = 0,
    MemoryAccessAlignedShift = 1,
    MemoryAccessNontemporalShift = 2,
};

enum MemoryAccessMask {
    MemoryAccessMaskNone = 0,
    MemoryAccessVolatileMask = 0x00000001,
    MemoryAccessAlignedMask = 0x00000002,
    MemoryAccessNontemporalMask = 0x00000004,
};

enum Scope {
    ScopeCrossDevice = 0,
    ScopeDevice = 1,
    ScopeWorkgroup = 2,
    ScopeSubgroup = 3,
    ScopeInvocation = 4,
};

enum GroupOperation {
    GroupOperationReduce = 0,
    GroupOperationInclusiveScan = 1,
    GroupOperationExclusiveScan = 2,
    GroupOperationCount /* internal use only */
};

enum KernelEnqueueFlags {
    KernelEnqueueFlagsNoWait = 0,
    KernelEnqueueFlagsWaitKernel = 1,
    KernelEnqueueFlagsWaitWorkGroup = 2,
};

enum KernelProfilingInfoShift {
    KernelProfilingInfoCmdExecTimeShift = 0,
};

enum KernelProfilingInfoMask {
    KernelProfilingInfoMaskNone = 0,
    KernelProfilingInfoCmdExecTimeMask = 0x00000001,
};

enum Capability {
    CapabilityMatrix = 0,
    CapabilityShader = 1,
    CapabilityGeometry = 2,
    CapabilityTessellation = 3,
    CapabilityAddresses = 4,
    CapabilityLinkage = 5,
    CapabilityKernel = 6,
    CapabilityVector16 = 7,
    CapabilityFloat16Buffer = 8,
    CapabilityFloat16 = 9,
    CapabilityFloat64 = 10,
    CapabilityInt64 = 11,
    CapabilityInt64Atomics = 12,
    CapabilityImageBasic = 13,
    CapabilityImageReadWrite = 14,
    CapabilityImageMipmap = 15,
    CapabilityImageSRGBWrite = 16,
    CapabilityPipes = 17,
    CapabilityGroups = 18,
    CapabilityDeviceEnqueue = 19,
    CapabilityLiteralSampler = 20,
    CapabilityAtomicStorage = 21,
    CapabilityInt16 = 22,
    CapabilityTessellationPointSize = 23,
    CapabilityGeometryPointSize = 24,
    CapabilityImageGatherExtended = 25,
    CapabilityStorageImageExtendedFormats = 26,
    CapabilityStorageImageMultisample = 27,
    CapabilityUniformBufferArrayDynamicIndexing = 28,
    CapabilitySampledImageArrayDynamicIndexing = 29,
    CapabilityStorageBufferArrayDynamicIndexing = 30,
    CapabilityStorageImageArrayDynamicIndexing = 31,
    CapabilityClipDistance = 32,
    CapabilityCullDistance = 33,
    CapabilityImageCubeArray = 34,
    CapabilitySampleRateShading = 35,
    CapabilityImageRect = 36,
    CapabilitySampledRect = 37,
    CapabilityGenericPointer = 38,
    CapabilityInt8 = 39,
    CapabilityInputTarget = 40,
    CapabilitySparseResidency = 41,
    CapabilityMinLod = 42,
    CapabilitySampled1D = 43,
    CapabilityImage1D = 44,
    CapabilitySampledCubeArray = 45,
    CapabilitySampledBuffer = 46,
    CapabilityImageBuffer = 47,
    CapabilityImageMSArray = 48,
    CapabilityAdvancedFormats = 49,
    CapabilityImageQuery = 50,
    CapabilityDerivativeControl = 51,
    CapabilityInterpolationFunction = 52,
    CapabilityTransformFeedback = 53,
    CapabilitySubgroupDispatch = 58,
    CapabilityPipeStorage = 60,
    CapabilityNamedBarrier = 54,
    CapabilityNone = 1024, /* internal use only */
    CapabilitySubgroupBallotKHR = 4423,
};

enum Op {
#define _SPIRV_OP(x, num) Op##x = num,
#include "SPIRVOpCodeEnum.h"
#undef _SPIRV_OP
};

// Overload operator| for mask bit combining

inline ImageOperandsMask operator|(ImageOperandsMask a, ImageOperandsMask b) { return ImageOperandsMask(unsigned(a) | unsigned(b)); }
inline FPFastMathModeMask operator|(FPFastMathModeMask a, FPFastMathModeMask b) { return FPFastMathModeMask(unsigned(a) | unsigned(b)); }
inline SelectionControlMask operator|(SelectionControlMask a, SelectionControlMask b) { return SelectionControlMask(unsigned(a) | unsigned(b)); }
inline LoopControlMask operator|(LoopControlMask a, LoopControlMask b) { return LoopControlMask(unsigned(a) | unsigned(b)); }
inline FunctionControlMask operator|(FunctionControlMask a, FunctionControlMask b) { return FunctionControlMask(unsigned(a) | unsigned(b)); }
inline MemorySemanticsMask operator|(MemorySemanticsMask a, MemorySemanticsMask b) { return MemorySemanticsMask(unsigned(a) | unsigned(b)); }
inline MemoryAccessMask operator|(MemoryAccessMask a, MemoryAccessMask b) { return MemoryAccessMask(unsigned(a) | unsigned(b)); }
inline KernelProfilingInfoMask operator|(KernelProfilingInfoMask a, KernelProfilingInfoMask b) { return KernelProfilingInfoMask(unsigned(a) | unsigned(b)); }

}  // end namespace spv

#endif  // #ifndef spirv_H
