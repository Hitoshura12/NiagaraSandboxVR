// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenXRExpansionFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenXRHandPoseComponent;
enum class EBPOpenXRControllerDeviceType : uint8;
enum class EBPXRResultSwitch : uint8;
struct FBPOpenXRActionSkeletalData;
struct FXRMotionControllerData;
#ifdef OPENXREXPANSIONPLUGIN_OpenXRExpansionFunctionLibrary_generated_h
#error "OpenXRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in OpenXRExpansionFunctionLibrary.h"
#endif
#define OPENXREXPANSIONPLUGIN_OpenXRExpansionFunctionLibrary_generated_h

#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_SPARSE_DATA
#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetXRMotionControllerType); \
	DECLARE_FUNCTION(execGetMockUpControllerData); \
	DECLARE_FUNCTION(execGetOpenXRHandPose);


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetXRMotionControllerType); \
	DECLARE_FUNCTION(execGetMockUpControllerData); \
	DECLARE_FUNCTION(execGetOpenXRHandPose);


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_ACCESSORS
#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenXRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenXRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRExpansionFunctionLibrary)


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUOpenXRExpansionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOpenXRExpansionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenXRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenXRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenXRExpansionFunctionLibrary)


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenXRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRExpansionFunctionLibrary(UOpenXRExpansionFunctionLibrary&&); \
	NO_API UOpenXRExpansionFunctionLibrary(const UOpenXRExpansionFunctionLibrary&); \
public:


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenXRExpansionFunctionLibrary(UOpenXRExpansionFunctionLibrary&&); \
	NO_API UOpenXRExpansionFunctionLibrary(const UOpenXRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenXRExpansionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenXRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenXRExpansionFunctionLibrary)


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_46_PROLOG
#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_SPARSE_DATA \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_RPC_WRAPPERS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_ACCESSORS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_INCLASS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_SPARSE_DATA \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_ACCESSORS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_INCLASS_NO_PURE_DECLS \
	FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENXREXPANSIONPLUGIN_API UClass* StaticClass<class UOpenXRExpansionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VRExpPluginExp_Plugins_VRExpansionPlugin_OpenXRExpansionPlugin_Source_OpenXRExpansionPlugin_Public_OpenXRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EBPOPENXRCONTROLLERDEVICETYPE(op) \
	op(EBPOpenXRControllerDeviceType::DT_SimpleController) \
	op(EBPOpenXRControllerDeviceType::DT_ValveIndexController) \
	op(EBPOpenXRControllerDeviceType::DT_ViveController) \
	op(EBPOpenXRControllerDeviceType::DT_ViveProController) \
	op(EBPOpenXRControllerDeviceType::DT_DaydreamController) \
	op(EBPOpenXRControllerDeviceType::DT_OculusTouchController) \
	op(EBPOpenXRControllerDeviceType::DT_OculusGoController) \
	op(EBPOpenXRControllerDeviceType::DT_MicrosoftMotionController) \
	op(EBPOpenXRControllerDeviceType::DT_MicrosoftXboxController) \
	op(EBPOpenXRControllerDeviceType::DT_PicoNeo3Controller) \
	op(EBPOpenXRControllerDeviceType::DT_UnknownController) 

enum class EBPOpenXRControllerDeviceType : uint8;
template<> struct TIsUEnumClass<EBPOpenXRControllerDeviceType> { enum { Value = true }; };
template<> OPENXREXPANSIONPLUGIN_API UEnum* StaticEnum<EBPOpenXRControllerDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
